`include "include_pkg.sv"

module tb_dispatch_unit;
    logic                       clk, rst, flush;
    rename_instr_t              IN_instr            [RENAME_WIDTH];
    logic                       ALU_buffer_busy     [NUM_ALU_FU];
    logic                       MUL_DIV_buffer_busy [NUM_MUL_DIV_FU];
    logic                       LSU_buffer_busy     [NUM_AGU_FU];
    logic                       LSU_busy;
    logic                       OUT_busy;
    alu_dispatch_instr_t        OUT_alu_instr       [NUM_ALU_FU];
    mul_div_dispatch_instr_t    OUT_mul_div_instr   [NUM_MUL_DIV_FU];
    lsu_dispatch_instr_t        OUT_lsu_instr       [NUM_AGU_FU];

    dispatch_unit dut (.*);

    always #5 clk = ~clk;

    int tests_run = 0, tests_fail = 0;

    // ── Global timeout ────────────────────────────────
    initial begin
        #500000;
        $display("TIMEOUT: Global watchdog fired");
        $finish;
    end

    // ── Helpers ────────────────────────────────────────
    task automatic tick();
        @(posedge clk);
        #1;
    endtask

    task automatic tick_n(int n);
        repeat(n) tick();
    endtask

    task automatic set_idle();
        flush = 0;
        LSU_busy = 0;
        for (int i = 0; i < RENAME_WIDTH; i++) IN_instr[i] = '0;
        for (int i = 0; i < NUM_ALU_FU; i++) ALU_buffer_busy[i] = 0;
        for (int i = 0; i < NUM_MUL_DIV_FU; i++) MUL_DIV_buffer_busy[i] = 0;
        for (int i = 0; i < NUM_AGU_FU; i++) LSU_buffer_busy[i] = 0;
    endtask

    function automatic rename_instr_t make_alu(
        input logic [4:0] rd, input sqN_t sqN
    );
        make_alu.valid    = 1;
        make_alu.sqN      = sqN;
        make_alu.pc       = '0;
        make_alu.f_unit   = ALU;
        make_alu.oper.alu_oper = ADD;
        make_alu.rs1_tag  = '0;
        make_alu.rs2_tag  = '0;
        make_alu.rd_tag   = rd;
        make_alu.imm      = '0;
        make_alu.is_imm   = 0;
        make_alu.jump_type= NOT_JUMP;
        make_alu.br_type  = NOT_BRANCH;
        make_alu.u_type   = NOT_U;
    endfunction

    function automatic rename_instr_t make_mul(
        input logic [4:0] rd, input sqN_t sqN
    );
        make_mul.valid    = 1;
        make_mul.sqN      = sqN;
        make_mul.pc       = '0;
        make_mul.f_unit   = MUL_DIV;
        make_mul.oper.mul_div_oper = MUL;
        make_mul.rs1_tag  = '0;
        make_mul.rs2_tag  = '0;
        make_mul.rd_tag   = rd;
        make_mul.imm      = '0;
        make_mul.is_imm   = 0;
        make_mul.jump_type= NOT_JUMP;
        make_mul.br_type  = NOT_BRANCH;
        make_mul.u_type   = NOT_U;
    endfunction

    function automatic rename_instr_t make_lsu(
        input logic [4:0] rd, input sqN_t sqN
    );
        make_lsu.valid    = 1;
        make_lsu.sqN      = sqN;
        make_lsu.pc       = '0;
        make_lsu.f_unit   = LSU;
        make_lsu.oper.lsu_oper = LSU_LW;
        make_lsu.rs1_tag  = '0;
        make_lsu.rs2_tag  = '0;
        make_lsu.rd_tag   = rd;
        make_lsu.imm      = '0;
        make_lsu.is_imm   = 0;
        make_lsu.jump_type= NOT_JUMP;
        make_lsu.br_type  = NOT_BRANCH;
        make_lsu.u_type   = NOT_U;
    endfunction

    task automatic check_alu_out(
        input int port, input logic [4:0] rd, input sqN_t sqN,
        input string desc
    );
        tests_run++;
        if (OUT_alu_instr[port].valid &&
            OUT_alu_instr[port].rd_tag == rd &&
            OUT_alu_instr[port].sqN == sqN) begin
            $display("PASS: %s", desc);
        end else begin
            tests_fail++;
            $display("FAIL: %s — valid=%b rd_tag=%0d sqN=%0d",
                     desc, OUT_alu_instr[port].valid,
                     OUT_alu_instr[port].rd_tag, OUT_alu_instr[port].sqN);
        end
    endtask

    task automatic check_mul_out(
        input int port, input logic [4:0] rd, input sqN_t sqN,
        input string desc
    );
        tests_run++;
        if (OUT_mul_div_instr[port].valid &&
            OUT_mul_div_instr[port].rd_tag == rd &&
            OUT_mul_div_instr[port].sqN == sqN) begin
            $display("PASS: %s", desc);
        end else begin
            tests_fail++;
            $display("FAIL: %s", desc);
        end
    endtask

    task automatic check_lsu_out(
        input int port, input logic [4:0] rd, input sqN_t sqN,
        input string desc
    );
        tests_run++;
        if (OUT_lsu_instr[port].valid &&
            OUT_lsu_instr[port].rd_tag == rd &&
            OUT_lsu_instr[port].sqN == sqN) begin
            $display("PASS: %s", desc);
        end else begin
            tests_fail++;
            $display("FAIL: %s", desc);
        end
    endtask

    task automatic check_no_outputs(string desc);
        tests_run++;
        if (!OUT_alu_instr[0].valid && !OUT_alu_instr[1].valid &&
            !OUT_mul_div_instr[0].valid && !OUT_lsu_instr[0].valid) begin
            $display("PASS: %s", desc);
        end else begin
            tests_fail++;
            $display("FAIL: %s", desc);
        end
    endtask

    // ── Main ───────────────────────────────────────────
    initial begin
    	$dumpfile("tb_dispatch_unit.fst");
    	$dumpvars(0, tb_dispatch_unit);
    
        clk = 0; rst = 1;
        set_idle();
        tick_n(5);
        rst = 0;
        tick();
        set_idle();
        tick();

        // ════════════════════════════════════════════
        // TEST 1: Reset — not busy, no outputs
        // ════════════════════════════════════════════
        begin
            tests_run++;
            if (!OUT_busy) begin
                $display("PASS: Reset — not busy");
            end else begin
                tests_fail++;
                $display("FAIL: Reset — busy after reset");
            end
        end

        // ════════════════════════════════════════════
        // TEST 2: Single ALU instruction routes to ALU port 0
        // ════════════════════════════════════════════
        begin
            IN_instr[0] = make_alu(5'd1, 0);
            IN_instr[1] = '0;
            tick(); // latch packet
            tick(); // drive output

            check_alu_out(0, 5'd1, 0, "Single ALU -> port 0");
        end

        // ════════════════════════════════════════════
        // TEST 3: Single MUL routes to MUL port
        // ════════════════════════════════════════════
        begin
            tick(); tick(); // let previous drain
            IN_instr[0] = make_mul(5'd2, 1);
            IN_instr[1] = '0;
            tick(); tick();
            check_mul_out(0, 5'd2, 1, "Single MUL -> MUL port 0");
        end

        // ════════════════════════════════════════════
        // TEST 4: Single LSU routes to LSU port
        // ════════════════════════════════════════════
        begin
            tick(); tick();
            IN_instr[0] = make_lsu(5'd3, 2);
            IN_instr[1] = '0;
            tick(); tick();
            check_lsu_out(0, 5'd3, 2, "Single LSU -> LSU port 0");
        end

        // ════════════════════════════════════════════
        // TEST 5: Two ALU -> both ports
        // ════════════════════════════════════════════
        begin
            tick(); tick();
            IN_instr[0] = make_alu(5'd4, 3);
            IN_instr[1] = make_alu(5'd5, 4);
            tick(); tick();
            check_alu_out(0, 5'd4, 3, "Two ALU — port 0 gets slot 0");
            check_alu_out(1, 5'd5, 4, "Two ALU — port 1 gets slot 1");
        end

        // ════════════════════════════════════════════
        // TEST 6: ALU + MUL mixed
        // ════════════════════════════════════════════
        begin
            tick(); tick();
            IN_instr[0] = make_alu(5'd6, 5);
            IN_instr[1] = make_mul(5'd7, 6);
            tick(); tick();
            check_alu_out(0, 5'd6, 5, "Mixed — ALU -> port 0");
            check_mul_out(0, 5'd7, 6, "Mixed — MUL -> MUL port 0");
        end

        // ════════════════════════════════════════════
        // TEST 7: Backpressure — ALU buffer busy
        // ════════════════════════════════════════════
        begin
            tick(); tick();
            ALU_buffer_busy[0] = 1;  // port 0 busy
            IN_instr[0] = make_alu(5'd8, 7);
            IN_instr[1] = '0;
            tick(); tick();

            // Should route to port 1 (only free ALU port)
            check_alu_out(1, 5'd8, 7, "Backpressure — routes to port 1");
            ALU_buffer_busy[0] = 0;
        end

        // ════════════════════════════════════════════
        // TEST 8: Both ALU ports busy -> stall
        // ════════════════════════════════════════════
        begin
            tick(); tick();
            ALU_buffer_busy[0] = 1;
            ALU_buffer_busy[1] = 1;
            IN_instr[0] = make_alu(5'd9, 8);
            IN_instr[1] = '0;
            tick(); tick();

            check_no_outputs("Both ALU ports busy -> no dispatch");
            ALU_buffer_busy[0] = 0;
            ALU_buffer_busy[1] = 0;
        end

        // ════════════════════════════════════════════
        // TEST 9: LSU_busy blocks LSU dispatch
        // ════════════════════════════════════════════
        begin
            tick(); tick();
            LSU_busy = 1;
            IN_instr[0] = make_lsu(5'd10, 9);
            IN_instr[1] = '0;
            tick(); tick();

            check_no_outputs("LSU_busy blocks dispatch");
            LSU_busy = 0;
        end

        // ════════════════════════════════════════════
        // TEST 10: Flush clears outputs
        // ════════════════════════════════════════════
        begin
            tick(); tick();
            IN_instr[0] = make_alu(5'd11, 10);
            IN_instr[1] = '0;
            tick(); // latch
            flush = 1;
            tick();
            flush = 0;

            check_no_outputs("Flush clears outputs");
        end

        // ════════════════════════════════════════════
        // TEST 11: OUT_busy when packets pending
        // ════════════════════════════════════════════
        begin
            tick(); tick();
            ALU_buffer_busy[0] = 1;
            ALU_buffer_busy[1] = 1;
            MUL_DIV_buffer_busy[0] = 1;
            LSU_buffer_busy[0] = 1;
            LSU_busy = 1;

            IN_instr[0] = make_alu(5'd12, 11);
            IN_instr[1] = make_mul(5'd13, 12);
            tick();
            // Packets latched but can't dispatch
            tick();

            tests_run++;
            if (OUT_busy) begin
                $display("PASS: OUT_busy when all ports blocked");
            end else begin
                tests_fail++;
                $display("FAIL: OUT_busy when all ports blocked");
            end

            // Clear all busy
            ALU_buffer_busy[0] = 0; ALU_buffer_busy[1] = 0;
            MUL_DIV_buffer_busy[0] = 0;
            LSU_buffer_busy[0] = 0;
            LSU_busy = 0;
        end

        // ════════════════════════════════════════════
        // RESULT
        // ════════════════════════════════════════════
        if (tests_fail == 0)
            $display("\n=== ALL %0d TESTS PASSED ===", tests_run);
        else
            $display("\n=== %0d/%0d TESTS FAILED ===", tests_fail, tests_run);
        $finish;
    end
endmodule
