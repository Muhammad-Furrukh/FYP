 
import include_pkg::*;

module tb_flush_controller;

    // ---- parameters ------------------------------------------------
    localparam int  NUM_PORTS  = 2;
    localparam int  CLK_PERIOD = 10;        // ns
    localparam int  SQN_BITS   = $bits(sqN_t);  // must be 7

    // ---- DUT ports -------------------------------------------------
    logic         clk;
    logic         rst;
    logic         br_taken  [NUM_PORTS];
    sqN_t         sqN       [NUM_PORTS];
    jump_type_t   jump_type [NUM_PORTS];

    logic         flush;
    sqN_t         flush_sqN;

    // ---- DUT instantiation -----------------------------------------
    flush_controller #(.NUM_PORTS(NUM_PORTS)) dut (
        .clk       (clk),
        .rst       (rst),
        .br_taken  (br_taken),
        .sqN       (sqN),
        .jump_type (jump_type),
        .flush     (flush),
        .flush_sqN (flush_sqN)
    );
 
    initial clk = 0;
    always #(CLK_PERIOD/2) clk = ~clk;
 
    int pass_cnt = 0;
    int fail_cnt = 0;
 
    task apply_inputs(
        input logic       bt0, bt1,
        input sqN_t       s0,  s1,
        input jump_type_t jt0, jt1
    );
        br_taken[0]  = bt0;  br_taken[1]  = bt1;
        sqN[0]       = s0;   sqN[1]       = s1;
        jump_type[0] = jt0;
        jump_type[1] = jt1;
    endtask
 
    task check(
        input string  label,
        input logic   exp_flush,
        input sqN_t   exp_sqN
    );
        @(posedge clk); #1;
        if (flush === exp_flush && flush_sqN === exp_sqN) begin
            $display("[PASS] %s | flush=%0b flush_sqN=%0d", label, flush, flush_sqN);
            pass_cnt++;
        end else begin
            $display("[FAIL] %s | got flush=%0b flush_sqN=%0d | exp flush=%0b flush_sqN=%0d",
                     label, flush, flush_sqN, exp_flush, exp_sqN);
            fail_cnt++;
        end
    endtask

    // ================================================================
    //  Main test sequence
    // ================================================================
    initial begin
        $display("=== flush_controller testbench start (sqN_t=%0d-bit) ===", SQN_BITS);

        // ---- default inputs ----------------------------------------
        rst          = 1;
        br_taken[0]  = 0; br_taken[1]  = 0;
        sqN[0]       = 0; sqN[1]       = 0;
        jump_type[0] = NOT_JUMP; jump_type[1] = NOT_JUMP;

        // ============================================================
        //  S1: RESET CHECK
        // ============================================================
        repeat(2) @(posedge clk);
        rst = 0;
        @(posedge clk); #1;
        if (flush === 1'b0 && flush_sqN === '0) begin
            $display("[PASS] S1-Reset | flush=0 flush_sqN=0");
            pass_cnt++;
        end else begin
            $display("[FAIL] S1-Reset | flush=%0b flush_sqN=%0d", flush, flush_sqN);
            fail_cnt++;
        end

        // ============================================================
        //  S2: NO VALID PORT
        //  br_taken=0, jump_type != 2'b10 => flush stays 0
        // ============================================================
        apply_inputs(0, 0, 7'd5, 7'd10, NOT_JUMP, JAL);
        check("S2-NoValidPort", 1'b0, '0);

        // ============================================================
        //  S3: SINGLE PORT VALID — via br_taken
        // ============================================================
        // Only port 0
        apply_inputs(1, 0, 7'd7, 7'd99, NOT_JUMP, NOT_JUMP);
        check("S3-Port0BrTaken", 1'b1, 7'd7);

        // Only port 1
        apply_inputs(0, 1, 7'd50, 7'd3, NOT_JUMP, NOT_JUMP);
        check("S3-Port1BrTaken", 1'b1, 7'd3);

        // ============================================================
        //  S4: BOTH PORTS VALID  
        //
        //  Case 1: sqN[0]=12, sqN[1]=5
        //    best = 12 (port0 seed)
        //    diff = 5 - 12 = -7 mod128 = 121 = 7'b111_1001  MSB=1 => 5 is older
        //    Expected: flush_sqN = 5
        //
        //  Case 2: sqN[0]=3, sqN[1]=100  (circular: 100 is far behind 3)
        //    best = 3 (port0 seed)
        //    diff = 100 - 3 = 97 = 7'b110_0001  MSB=1 => 100 is older
        //    Expected: flush_sqN = 100
        //
        //  Case 3: sqN[0]=sqN[1]=8 (equal) => flush_sqN = 8
        // ============================================================
        apply_inputs(1, 1, 7'd12, 7'd5, NOT_JUMP, NOT_JUMP);
        check("S4-BothValid-p1wins(5<12)", 1'b1, 7'd5);

        // circular: 100 is older than 3 in a 128-entry ring
        apply_inputs(1, 1, 7'd3, 7'd100, NOT_JUMP, NOT_JUMP);
        check("S4-BothValid-circular-p1older(100)", 1'b1, 7'd100);

        // equal sqN
        apply_inputs(1, 1, 7'd8, 7'd8, NOT_JUMP, NOT_JUMP);
        @(posedge clk); #1;
        if (flush === 1'b1 && flush_sqN === 7'd8) begin
            $display("[PASS] S4-EqualSqN | flush=1 flush_sqN=8"); pass_cnt++;
        end else begin
            $display("[FAIL] S4-EqualSqN | flush=%0b flush_sqN=%0d", flush, flush_sqN); fail_cnt++;
        end

        // ============================================================
        //  S5: sqN WRAPAROUND — 7-bit, half-range = 64
        //
        //  Case A: sqN[0]=120, sqN[1]=5
        //    (5 just wrapped past 127; 120 is still older)
        //    best = 120 (port0 seed)
        //    diff = 5 - 120 = -115 mod128 = 13 = 7'b000_1101  MSB=0
        //    => sqN[1]=5 is NOT older => keep 120
        //    Expected: flush_sqN = 120
        //
        //  Case B: sqN[0]=5, sqN[1]=120
        //    (120 is about to wrap; it is the older instruction)
        //    best = 5 (port0 seed)
        //    diff = 120 - 5 = 115 = 7'b111_0011  MSB=1
        //    => sqN[1]=120 is older => replace
        //    Expected: flush_sqN = 120
        //
        //  Case C: half-range boundary — gap exactly 64
        //    sqN[0]=8, sqN[1]=72: diff = 64 = 7'b100_0000  MSB=1 => pick 72
        //    Expected: flush_sqN = 72
        //
        //  Case D: gap = 63 (just inside "newer" half)
        //    sqN[0]=8, sqN[1]=71: diff = 63 = 7'b011_1111  MSB=0 => keep 8
        //    Expected: flush_sqN = 8
        // ============================================================
        apply_inputs(1, 1, 7'd120, 7'd5,  NOT_JUMP, NOT_JUMP);
        check("S5-Wrap-CaseA-p0=120,p1=5-keep120",  1'b1, 7'd120);

        apply_inputs(1, 1, 7'd5,   7'd120, NOT_JUMP, NOT_JUMP);
        check("S5-Wrap-CaseB-p0=5,p1=120-take120",  1'b1, 7'd120);

        apply_inputs(1, 1, 7'd8,   7'd72,  NOT_JUMP, NOT_JUMP);
        check("S5-Wrap-CaseC-HalfRange64-pick72",   1'b1, 7'd72);

        apply_inputs(1, 1, 7'd8,   7'd71,  NOT_JUMP, NOT_JUMP);
        check("S5-Wrap-CaseD-Gap63-keep8",          1'b1, 7'd8);

        // ============================================================
        //  S6: FLUSH VIA jump_type
        //  Only JALR (==2'b10) triggers flush — JAL does NOT
        // ============================================================
        // JAL should NOT flush — flush must stay 0
        apply_inputs(0, 0, 7'd9,  7'd14, JAL,      NOT_JUMP);
        check("S6-JAL-NoFlush",         1'b0, '0);

        // Only port 0 via JALR
        apply_inputs(0, 0, 7'd9,  7'd14, JALR,     NOT_JUMP);
        check("S6-JALR-port0",          1'b1, 7'd9);

        // Only port 1 via JALR
        apply_inputs(0, 0, 7'd9,  7'd4,  NOT_JUMP, JALR);
        check("S6-JALR-port1",          1'b1, 7'd4);

        // Both via JALR — oldest wins
        //   sqN[0]=6, sqN[1]=11: diff=11-6=5=7'b000_0101 MSB=0 => keep 6
        apply_inputs(0, 0, 7'd6,  7'd11, JALR,     JALR);
        check("S6-JALR-both-keep6",     1'b1, 7'd6);

        // Mix: port0 br_taken, port1 JALR
        //   sqN[0]=13, sqN[1]=2: diff=2-13=-11 mod128=117=7'b111_0101 MSB=1 => 2 is older
        apply_inputs(1, 0, 7'd13, 7'd2,  NOT_JUMP, JALR);
        check("S6-Mix-bt0-JALR1-take2", 1'b1, 7'd2);

        // Mix: port0 JAL (no flush), port1 br_taken — only port1 valid
        apply_inputs(0, 1, 7'd5,  7'd20, JAL,      NOT_JUMP);
        check("S6-Mix-JAL0-bt1",        1'b1, 7'd20);

        // ============================================================
        //  S7: BACK-TO-BACK FLUSH CYCLES
        // ============================================================
        // Cycle A: port0 valid only
        apply_inputs(1, 0, 7'd4, 7'd0, NOT_JUMP, NOT_JUMP);
        check("S7-Cycle-A",         1'b1, 7'd4);

        // Cycle B: no valid — flush must de-assert
        apply_inputs(0, 0, 7'd4, 7'd0, NOT_JUMP, NOT_JUMP);
        check("S7-Cycle-B-NoFlush", 1'b0, '0);

        // Cycle C: port1 valid only
        apply_inputs(0, 1, 7'd0, 7'd17, NOT_JUMP, NOT_JUMP);
        check("S7-Cycle-C",         1'b1, 7'd17);

        // Cycle D: both valid
        //   sqN[0]=2, sqN[1]=25: diff=25-2=23=7'b000_1011 MSB=0 => keep 2
        apply_inputs(1, 1, 7'd2, 7'd25, NOT_JUMP, NOT_JUMP);
        check("S7-Cycle-D-BothValid-keep2", 1'b1, 7'd2);

        // Cycle E: both valid, wraparound stress
        //   sqN[0]=126, sqN[1]=2: diff=2-126=-124 mod128=4=7'b000_0100 MSB=0 => keep 126
        apply_inputs(1, 1, 7'd126, 7'd2, NOT_JUMP, NOT_JUMP);
        check("S7-Cycle-E-Wrap-keep126", 1'b1, 7'd126);

        // ============================================================
        //  SUMMARY
        // ============================================================
        $display("=========================================");
        $display("  Total PASS : %0d", pass_cnt);
        $display("  Total FAIL : %0d", fail_cnt);
        $display("=========================================");
        if (fail_cnt == 0)
            $display("  ALL TESTS PASSED");
        else
            $display("  SOME TESTS FAILED — check above");
        $display("=========================================");

        $finish;
    end

    // ---- timeout watchdog ------------------------------------------
    initial begin
        #(CLK_PERIOD * 200);
        $display("[ERROR] Simulation timeout!");
        $finish;
    end

    // ---- waveform dump ---------------------------------------------
    initial begin
        $dumpfile("flush_controller.vcd");
        $dumpvars(0, tb_flush_controller);
    end

endmodule