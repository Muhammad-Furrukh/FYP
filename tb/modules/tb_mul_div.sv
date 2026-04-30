`include "include_pkg.sv"

module tb_mul_div;
    logic           clk, rst, flush;
    sqN_t           flush_sqN;
    issue_instr_t   IN_instr;
    logic           OUT_busy;
    CDB_line_t      OUT_cdb;

    MUL_DIV dut (.*);

    always #5 clk = ~clk;

    int tests_run = 0, tests_fail = 0;

    // ── Global timeout watchdog ────────────────────────
    initial begin
        #1000000;  // 1 million time units = 100k cycles @ period 10
        $display("TIMEOUT: Simulation did not finish within limit");
        $finish;
    end
	
    // ── Task: standard operation ─────────────────────
    task automatic test_op(
        input mul_div_oper_t op,
        input logic [31:0] a, b,
        input logic [31:0] expected,
        input string       desc
    );
        @(posedge clk);
        while (OUT_busy) @(posedge clk);

        IN_instr.valid             = 1;
        IN_instr.operand1          = a;
        IN_instr.operand2          = b;
        IN_instr.oper.mul_div_oper = op;
        IN_instr.rd_tag            = '0;
        IN_instr.sqN               = '0;

        @(posedge clk);
        IN_instr.valid = 0;

        while (!OUT_cdb.valid) @(posedge clk);

        tests_run++;
        if (OUT_cdb.result !== expected) begin
            tests_fail++;
            $display("FAIL: %s  expected %0d (0x%h)  got %0d (0x%h)",
                     desc, expected, expected, OUT_cdb.result, OUT_cdb.result);
        end else begin
            $display("PASS: %s", desc);
        end
    endtask

    // ── Task: flush during operation ─────────────────
    task automatic test_flush_during_op(
        input mul_div_oper_t op,
        input logic [31:0] a, b,
        input int           delay_cycles,
        input string        desc
    );
        @(posedge clk);
        while (OUT_busy) @(posedge clk);

        IN_instr.valid             = 1;
        IN_instr.operand1          = a;
        IN_instr.operand2          = b;
        IN_instr.oper.mul_div_oper = op;
        IN_instr.rd_tag            = '0;
        IN_instr.sqN               = '0;

        @(posedge clk);
        IN_instr.valid = 0;

        repeat(delay_cycles) @(posedge clk);
        flush      = 1;
        flush_sqN  = 1;
        @(posedge clk);
        flush      = 0;

        repeat(10) @(posedge clk);

        tests_run++;
        if (OUT_cdb.valid) begin
            tests_fail++;
            $display("FAIL: %s  CDB still fired after flush", desc);
        end else begin
            $display("PASS: %s", desc);
        end
    endtask

     // ── Tests ────────────────────────────────────────
    initial begin
    	$dumpfile("tb_mul_div.fst");
    	$dumpvars(0, tb_mul_div);

        clk = 0; rst = 1; flush = 0;
        IN_instr = '0;
        repeat(5) @(posedge clk);
        rst = 0;
        @(posedge clk);

        // ── MUL ───────────────────────────────────
        test_op(MUL,      3,           2,           6,           "MUL 3*2=6");
        test_op(MUL,      3,           7,          21,           "MUL 3*7=21");
        test_op(MUL,      0,          42,           0,           "MUL 0*42=0");
        test_op(MUL,     -5,           7,         -35,           "MUL -5*7=-35");
        test_op(MUL,      32'h7FFFFFFF, 2,          32'hFFFFFFFE,"MUL max_pos*2 overflow");
        test_op(MUL,      32'h80000000, 2,           0,          "MUL min_neg*2 wraps to 0");
        test_op(MUL,      32'h80000000, 32'h80000000,0,          "MUL both min_neg");
        test_op(MUL,      32'hFFFFFFFF, 32'hFFFFFFFF,1,          "MUL -1*-1=1");

        // ── MULH ──────────────────────────────────
        test_op(MULH,     32'h10000000, 2,           0,          "MULH 0x10000000*2 upper=0");
        test_op(MULH,     32'h7FFFFFFF, 32'h7FFFFFFF,32'h3FFFFFFF,"MULH max_pos squared");
        test_op(MULH,    -1,          -1,            0,          "MULH -1*-1 upper=0");

        // ── MULHU ─────────────────────────────────
        test_op(MULHU,    32'h80000000, 2,           1,          "MULHU 0x80000000*2 upper=1");
        test_op(MULHU,    32'hFFFFFFFF, 32'hFFFFFFFF,32'hFFFFFFFE,"MULHU max*max upper");

        // ── MULHSU ────────────────────────────────
        test_op(MULHSU,  -1,           32'hFFFFFFFF,-2,          "MULHSU -1*max upper=-2");
        test_op(MULHSU,   5,           32'hFFFFFFFF, 4,          "MULHSU positive*max");
        test_op(MULHSU,   0,           32'h80000000, 0,          "MULHSU zero case");

        // ── DIV ───────────────────────────────────
        test_op(DIV,     20,           6,           3,           "DIV 20/6=3");
        test_op(DIV,    -20,           6,          -3,           "DIV -20/6=-3");
        test_op(DIV,     20,          -6,          -3,           "DIV 20/-6=-3");
        test_op(DIV,    -20,          -6,           3,           "DIV -20/-6=3");
        test_op(DIV,    100,          10,          10,           "DIV exact 100/10=10");
        test_op(DIV,      5,           0,          -1,           "DIV 5/0=-1");
        test_op(DIV,      0,           5,           0,           "DIV 0/5=0");
        test_op(DIV,      32'h80000000,-1,          32'h80000000,"DIV min/-1 overflow");
        test_op(DIV,      32'h7FFFFFFF, 1,          32'h7FFFFFFF,"DIV max/1");

        // ── DIVU ──────────────────────────────────
        test_op(DIVU,    32'hFFFFFFFF, 2,          32'h7FFFFFFF, "DIVU max/2");
        test_op(DIVU,    32'hFFFFFFFF, 1,          32'hFFFFFFFF, "DIVU max/1");
        test_op(DIVU,    32'hFFFFFFFF, 32'hFFFFFFFF,1,          "DIVU max/max=1");
        test_op(DIVU,    0,           32'h80000000,0,            "DIVU 0/big=0");
        test_op(DIVU,    32'hFFFFFFFF, 0,          -1,           "DIVU /0=-1");

        // ── REM ───────────────────────────────────
        test_op(REM,     20,           6,           2,           "REM 20%6=2");
        test_op(REM,    -20,           6,          -2,           "REM -20%6=-2");
        test_op(REM,     20,          -6,           2,           "REM 20%-6=2");
        test_op(REM,    -20,          -6,          -2,           "REM -20%-6=-2");
        test_op(REM,    100,          10,           0,           "REM exact 100%10=0");
        test_op(REM,      5,           0,           5,           "REM 5%0=5");

        // ── REMU ──────────────────────────────────
        test_op(REMU,    32'hFFFFFFFF, 2,           1,           "REMU max%2=1");
        test_op(REMU,    32'hFFFFFFFF, 0,          32'hFFFFFFFF,"REMU %0=dividend");
        test_op(REMU,   100,           7,           2,           "REMU 100%7=2");

        // ── FLUSH ─────────────────────────────────
        test_flush_during_op(MUL, 3, 7,  1,  "Flush during MUL pipe");
        test_flush_during_op(DIV, 20, 6, 3,  "Flush during DIV early");
        test_flush_during_op(DIV, 32'h7FFFFFFF, 1, 10, "Flush during DIV mid");

        // ── FLUSH WHILE IDLE ──────────────────────
        begin
            @(posedge clk);
            flush     = 1;
            flush_sqN = 0;
            @(posedge clk);
            flush     = 0;
            tests_run++;
            if (OUT_busy || OUT_cdb.valid) begin
                tests_fail++;
                $display("FAIL: Flush while idle caused activity");
            end else begin
                $display("PASS: Flush while idle");
            end
        end

        // ── MAX TAG/SQN ───────────────────────────
        begin
            @(posedge clk);
            while (OUT_busy) @(posedge clk);
            IN_instr.valid             = 1;
            IN_instr.operand1          = 42;
            IN_instr.operand2          = 1;
            IN_instr.oper.mul_div_oper = MUL;
            IN_instr.rd_tag            = 6'h3F;
            IN_instr.sqN               = 7'h7F;
            @(posedge clk);
            IN_instr.valid = 0;
            while (!OUT_cdb.valid) @(posedge clk);
            tests_run++;
            if (OUT_cdb.result == 42 && OUT_cdb.tag == 6'h3F && OUT_cdb.sqN == 7'h7F) begin
                $display("PASS: Max tag/sqN values");
            end else begin
                tests_fail++;
                $display("FAIL: Max tag/sqN values");
            end
        end

        // ── RESULT ────────────────────────────────
        if (tests_fail == 0)
            $display("\n=== ALL %0d TESTS PASSED ===", tests_run);
        else
            $display("\n=== %0d/%0d TESTS FAILED ===", tests_fail, tests_run);

        $finish;
    end
endmodule
