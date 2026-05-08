// ============================================================
//  Testbench: tb_ta_gen2.sv
//
//  Scenarios:
//   S1.  All invalid  → jump2=0, jta2=0
//   S2.  FU0 only: branch taken → jta2 = pc+imm
//   S3.  FU0 only: branch NOT taken → jump2=0
//   S4.  FU0 only: JALR (jump_type=2'b10) → jta2 = rs1+imm
//   S5.  FU0 older + branch taken, FU1 newer + branch taken → FU0 wins
//   S6.  FU0 newer, FU1 older branch taken → FU1 wins
//   S7.  FU0 JALR older, FU1 branch taken newer → FU0 wins
//   S8.  FU0 branch NOT taken, FU1 branch taken → FU1 issues
//   S9.  Both not-taken / no-jump → jump2=0
//   S10. FU0 invalid, FU1 branch taken → FU1 issues
// ============================================================

import include_pkg::*;

module tb_ta_gen2;

    localparam int N = NUM_ALU_FU;

    // ---- DUT ports ----
    logic            IN_valid      [N];
    logic            br_taken      [N];
    jump_type_t      jump_type     [N];
    sqN_t            instr_sqN     [N];
    pc_t             pc            [N];
    logic [XLEN-1:0] alu_rs1_result[N];
    imm_t            imm           [N];

    pc_t             jta2;
    logic            jump2;

    // ---- DUT ----
    ta_gen2 dut (.*);

    // ---- Scoreboard ----
    int pass_cnt = 0, fail_cnt = 0;

    task automatic chk(input string msg, input logic expr);
        if (expr) begin
            $display("  [PASS] %s", msg);
            pass_cnt++;
        end else begin
            $display("  [FAIL] %s  @ %0t ns", msg, $time);
            fail_cnt++;
        end
    endtask

    // Clear all inputs
    task automatic clear_inputs();
        for (int i = 0; i < N; i++) begin
            IN_valid[i]       = 0;
            br_taken[i]       = 0;
            jump_type[i]      = NOT_JUMP;
            instr_sqN[i]      = '0;
            pc[i]             = '0;
            alu_rs1_result[i] = '0;
            imm[i]            = '0;
        end
    endtask

    // Small settle delay after input change
    task automatic settle(); #1; endtask

    // ===========================================================
    //  S1: All Invalid
    // ===========================================================
    task automatic s1_all_invalid();
        $display("\n--- S1: All invalid ---");
        clear_inputs();
        settle();
        chk("S1: jump2=0", jump2 == 0);
        chk("S1: jta2=0",  jta2  == '0);
    endtask

    // ===========================================================
    //  S2: FU0 only — branch taken
    //  jta2 = pc[0] + imm[0]
    // ===========================================================
    task automatic s2_fu0_branch_taken();
        $display("\n--- S2: FU0 branch taken ---");
        clear_inputs();
        IN_valid[0]  = 1;
        br_taken[0]  = 1;
        jump_type[0] = NOT_JUMP;
        instr_sqN[0] = sqN_t'(5);
        pc[0]        = 32'h0000_1000;
        imm[0]       = 32'h0000_0020;
        settle();
        chk("S2: jump2=1",             jump2 == 1);
        chk("S2: jta2 = pc+imm",       jta2  == (32'h0000_1000 + 32'h0000_0020));
    endtask

    // ===========================================================
    //  S3: FU0 only — branch NOT taken
    // ===========================================================
    task automatic s3_fu0_branch_not_taken();
        $display("\n--- S3: FU0 branch NOT taken ---");
        clear_inputs();
        IN_valid[0]  = 1;
        br_taken[0]  = 0;
        jump_type[0] = NOT_JUMP;
        instr_sqN[0] = sqN_t'(6);
        pc[0]        = 32'h0000_2000;
        imm[0]       = 32'h0000_0040;
        settle();
        chk("S3: jump2=0", jump2 == 0);
        chk("S3: jta2=0",  jta2  == '0);
    endtask

    // ===========================================================
    //  S4: FU0 only — JALR (jump_type=2'b10)
    //  jta2 = rs1_result + imm
    // ===========================================================
    task automatic s4_fu0_jalr();
        $display("\n--- S4: FU0 JALR ---");
        clear_inputs();
        IN_valid[0]       = 1;
        br_taken[0]       = 0;
        jump_type[0]      = jump_type_t'(2'b10);   // JALR
        instr_sqN[0]      = sqN_t'(7);
        pc[0]             = 32'h0000_3000;
        alu_rs1_result[0] = 32'hABCD_0000;
        imm[0]            = 32'h0000_0010;
        settle();
        chk("S4: jump2=1",           jump2 == 1);
        chk("S4: jta2 = rs1+imm",    jta2  == (32'hABCD_0000 + 32'h0000_0010));
    endtask

    // ===========================================================
    //  S5: FU0 older (smaller sqN) + branch taken
    //      FU1 newer + branch taken  → FU0 must win
    // ===========================================================
    task automatic s5_fu0_older_wins();
        $display("\n--- S5: FU0 older branch taken wins over FU1 newer ---");
        clear_inputs();
        // FU0 — older
        IN_valid[0]  = 1;
        br_taken[0]  = 1;
        instr_sqN[0] = sqN_t'(3);
        pc[0]        = 32'h0000_4000;
        imm[0]       = 32'h0000_0008;
        // FU1 — newer
        IN_valid[1]  = 1;
        br_taken[1]  = 1;
        instr_sqN[1] = sqN_t'(10);
        pc[1]        = 32'h0000_5000;
        imm[1]       = 32'h0000_0100;
        settle();
        chk("S5: jump2=1",           jump2 == 1);
        chk("S5: FU0 target chosen", jta2  == (32'h0000_4000 + 32'h0000_0008));
    endtask

    // ===========================================================
    //  S6: FU0 newer, FU1 older branch taken → FU1 must win
    // ===========================================================
    task automatic s6_fu1_older_wins();
        $display("\n--- S6: FU1 older branch taken wins over FU0 newer ---");
        clear_inputs();
        // FU0 — newer
        IN_valid[0]  = 1;
        br_taken[0]  = 1;
        instr_sqN[0] = sqN_t'(15);
        pc[0]        = 32'h0000_6000;
        imm[0]       = 32'h0000_0200;
        // FU1 — older
        IN_valid[1]  = 1;
        br_taken[1]  = 1;
        instr_sqN[1] = sqN_t'(4);
        pc[1]        = 32'h0000_7000;
        imm[1]       = 32'h0000_0050;
        settle();
        chk("S6: jump2=1",           jump2 == 1);
        chk("S6: FU1 target chosen", jta2  == (32'h0000_7000 + 32'h0000_0050));
    endtask

    // ===========================================================
    //  S7: FU0 JALR older, FU1 branch taken newer → FU0 wins
    // ===========================================================
    task automatic s7_jalr_older_wins();
        $display("\n--- S7: FU0 JALR older wins over FU1 branch newer ---");
        clear_inputs();
        // FU0 — JALR, older
        IN_valid[0]       = 1;
        br_taken[0]       = 0;
        jump_type[0]      = jump_type_t'(2'b10);
        instr_sqN[0]      = sqN_t'(2);
        pc[0]             = 32'h0000_8000;
        alu_rs1_result[0] = 32'hDEAD_C0DE;
        imm[0]            = 32'h0000_0004;
        // FU1 — branch taken, newer
        IN_valid[1]       = 1;
        br_taken[1]       = 1;
        instr_sqN[1]      = sqN_t'(9);
        pc[1]             = 32'h0000_9000;
        imm[1]            = 32'h0000_0080;
        settle();
        chk("S7: jump2=1",                   jump2 == 1);
        chk("S7: FU0 JALR target chosen",    jta2  == (32'hDEAD_C0DE + 32'h0000_0004));
    endtask

    // ===========================================================
    //  S8: FU0 branch NOT taken, FU1 branch taken → FU1 issues
    // ===========================================================
    task automatic s8_not_taken_ignored();
        $display("\n--- S8: FU0 not taken ignored, FU1 taken issues ---");
        clear_inputs();
        // FU0 — not taken (smaller sqN but irrelevant)
        IN_valid[0]  = 1;
        br_taken[0]  = 0;
        jump_type[0] = NOT_JUMP;
        instr_sqN[0] = sqN_t'(1);
        pc[0]        = 32'h0000_A000;
        imm[0]       = 32'h0000_0010;
        // FU1 — taken
        IN_valid[1]  = 1;
        br_taken[1]  = 1;
        instr_sqN[1] = sqN_t'(8);
        pc[1]        = 32'h0000_B000;
        imm[1]       = 32'h0000_0040;
        settle();
        chk("S8: jump2=1",             jump2 == 1);
        chk("S8: FU1 target chosen",   jta2  == (32'h0000_B000 + 32'h0000_0040));
    endtask

    // ===========================================================
    //  S9: Both not-taken, no jump → jump2=0
    // ===========================================================
    task automatic s9_both_not_taken();
        $display("\n--- S9: Both not taken / no jump ---");
        clear_inputs();
        IN_valid[0]  = 1; br_taken[0] = 0; jump_type[0] = NOT_JUMP; instr_sqN[0] = sqN_t'(5);
        IN_valid[1]  = 1; br_taken[1] = 0; jump_type[1] = NOT_JUMP; instr_sqN[1] = sqN_t'(6);
        settle();
        chk("S9: jump2=0", jump2 == 0);
        chk("S9: jta2=0",  jta2  == '0);
    endtask

    // ===========================================================
    //  S10: FU0 invalid, FU1 branch taken → FU1 issues
    // ===========================================================
    task automatic s10_fu0_invalid();
        $display("\n--- S10: FU0 invalid, FU1 branch taken ---");
        clear_inputs();
        IN_valid[0]  = 0;   // invalid — must be ignored
        br_taken[0]  = 1;   // would qualify if valid
        instr_sqN[0] = sqN_t'(1);
        pc[0]        = 32'h0000_C000;
        imm[0]       = 32'h0000_FFFF;
        // FU1 — valid and taken
        IN_valid[1]  = 1;
        br_taken[1]  = 1;
        instr_sqN[1] = sqN_t'(12);
        pc[1]        = 32'h0000_D000;
        imm[1]       = 32'h0000_0060;
        settle();
        chk("S10: jump2=1",                      jump2 == 1);
        chk("S10: FU1 target (FU0 ignored)",     jta2  == (32'h0000_D000 + 32'h0000_0060));
    endtask

    // ===========================================================
    //  Main
    // ===========================================================
    initial begin
        $display("=========================================");
        $display("  ta_gen2 Testbench");
        $display("  NUM_ALU_FU=%0d  XLEN=%0d", N, XLEN);
        $display("=========================================");

        s1_all_invalid();
        s2_fu0_branch_taken();
        s3_fu0_branch_not_taken();
        s4_fu0_jalr();
        s5_fu0_older_wins();
        s6_fu1_older_wins();
        s7_jalr_older_wins();
        s8_not_taken_ignored();
        s9_both_not_taken();
        s10_fu0_invalid();

        $display("\n=========================================");
        $display("  PASSED: %0d  |  FAILED: %0d", pass_cnt, fail_cnt);
        $display("=========================================");
        if (fail_cnt == 0)
            $display("  *** ALL TESTS PASSED ***");
        else
            $display("  *** KUCH TESTS FAIL HUE - upar dekho ***");

        $finish;
    end

    initial begin
        #10_000;
        $display("[TIMEOUT]");
        $finish;
    end

endmodule