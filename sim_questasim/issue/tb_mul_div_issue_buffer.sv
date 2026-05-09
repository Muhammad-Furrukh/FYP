// ============================================================
//  Testbench: mul_div_issue_buffer_tb.sv
//
//  Scenarios :
//   S1.  Reset check
//   S2.  Basic dispatch + issue (both operands ready)
//   S3.  CDB wakeup rs1
//   S4.  CDB wakeup rs2
//   S5.  CDB bypass same cycle as dispatch
//   S6.  Multi-entry: ready entry issues first (priority)
//   S7.  Queue full / OUT_busy
//   S8.  Flush - keep older sqN, squash newer
//   S9.  Flush on empty queue
//   S10. Back-to-back throughput
//   S11. IN_busy stalls issue
//   S12. Dispatch dropped when OUT_busy
//   S13. Multi-port CDB wakeup (rs1+rs2 same cycle)
//   S14. Flush then dispatch fresh instruction
//   S15. IN_busy then de-assert — issues next cycle
//   S16. Wakeup while IN_busy held
//   S17. Flush during IN_busy
//   S18. Re-dispatch after flush clears queue
//   S19. CDB wakeup on tag_t'(0) — no false match
//   S20. Drain full queue one-by-one via CDB
// ============================================================

import include_pkg::*;

module tb_mul_div_issue_buffer;

    localparam int DEPTH    = ISSUEB_SIZE;
    localparam int IW       = ISSUE_WIDTH;
    localparam int CLK_HALF = 5;

    // ---- DUT ports ----
    logic                        clk, rst;
    mul_div_dispatch_instr_t     IN_instr;
    logic                        flush;
    sqN_t                        flush_sqN;
    logic                        tag_ready [2];
    logic [31:0]                 RF_data   [2];
    logic                        IN_busy;
    tag_t                        CDB_tag   [IW];
    logic                        CDB_valid [IW];
    issue_instr_t                OUT_instr;
    tag_t                        check_ready [2];
    tag_t                        read_tag    [2];
    logic                        OUT_busy;

    // ---- DUT ----
    mul_div_issue_buffer #(.DEPTH(DEPTH)) dut (.*);

    // ---- Clock ----
    initial clk = 0;
    always #CLK_HALF clk = ~clk;

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

    // ---- Helpers ----
    task automatic clear_inputs();
        IN_instr     = '0;
        flush        = 0;
        flush_sqN    = '0;
        tag_ready[0] = 0;
        tag_ready[1] = 0;
        RF_data[0]   = '0;
        RF_data[1]   = '0;
        IN_busy      = 0;
        foreach (CDB_valid[i]) CDB_valid[i] = 0;
        foreach (CDB_tag[i])   CDB_tag[i]   = '0;
    endtask

    task automatic do_reset();
        clear_inputs();
        rst = 1;
        @(posedge clk); #1;
        rst = 0;
        @(posedge clk); #1;
    endtask

    task automatic wait_cyc(int n);
        repeat(n) @(posedge clk); #1;
    endtask

    task automatic print_state(input string label);
        $display("\n[%s] @ %0t ns", label, $time);
        $display("  OUT_instr.valid    = %0b", OUT_instr.valid);
        $display("  OUT_instr.sqN      = %0d", OUT_instr.sqN);
        $display("  OUT_instr.operand1 = %0h", OUT_instr.operand1);
        $display("  OUT_instr.operand2 = %0h", OUT_instr.operand2);
        $display("  OUT_instr.oper     = %0d", OUT_instr.oper);
        $display("  OUT_instr.rd_tag   = %0d", OUT_instr.rd_tag);
        $display("  OUT_busy           = %0b", OUT_busy);
        $display("  IN_busy            = %0b", IN_busy);
        $display("  issue_found        = %0b", dut.issue_found);
        $display("  ready_mask         = %0b", dut.ready_mask);
        $display("  issue_idx          = %0d", dut.issue_idx);
    endtask

    // Dispatch one instruction and deassert next cycle
    task automatic dispatch(
        input sqN_t  sqN,
        input oper_t op,
        input tag_t  rs1t, rs2t, rdt,
        input logic  r1,   r2
    );
        IN_instr.valid   = 1;
        IN_instr.sqN     = sqN;
        IN_instr.oper    = op;
        IN_instr.rs1_tag = rs1t;
        IN_instr.rs2_tag = rs2t;
        IN_instr.rd_tag  = rdt;
        tag_ready[0]     = r1;
        tag_ready[1]     = r2;
        wait_cyc(1);
        IN_instr     = '0;
        tag_ready[0] = 0;
        tag_ready[1] = 0;
    endtask

    // ===========================================================
    //  S1: Reset Check
    // ===========================================================
    task automatic s1_reset();
        $display("\n--- S1: Reset check ---");
        do_reset();
        chk("S1: OUT_instr.valid=0 after reset", OUT_instr.valid == 0);
        chk("S1: OUT_busy=0 after reset",        OUT_busy        == 0);
    endtask

    // ===========================================================
    //  S2: Basic Dispatch + Issue
    // ===========================================================
    task automatic s2_basic();
        $display("\n--- S2: Basic dispatch + issue ---");
        do_reset();
        RF_data[0] = 32'hAAAA_1111;
        RF_data[1] = 32'hBBBB_2222;

        dispatch(10, oper_t'(MUL),
                 tag_t'(1), tag_t'(2), tag_t'(3),
                 1, 1);

        wait_cyc(1);
        print_state("S2 after dispatch");
        chk("S2: valid=1",        OUT_instr.valid    == 1);
        chk("S2: sqN=10",         OUT_instr.sqN      == 10);
        chk("S2: op1=RF_data[0]", OUT_instr.operand1 == 32'hAAAA_1111);
        chk("S2: op2=RF_data[1]", OUT_instr.operand2 == 32'hBBBB_2222);
        chk("S2: rd_tag=3",       OUT_instr.rd_tag   == 3);
    endtask

    // ===========================================================
    //  S3: CDB Wakeup rs1
    // ===========================================================
    task automatic s3_cdb_wakeup_rs1();
        $display("\n--- S3: CDB wakeup rs1 ---");
        do_reset();
        RF_data[0] = 32'hCCCC_0000;
        RF_data[1] = 32'hDDDD_0001;

        // rs1 not ready — stalls
        dispatch(20, oper_t'(MUL),
                 tag_t'(10), tag_t'(11), tag_t'(12),
                 0, 1);

        wait_cyc(1);
        chk("S3: stalled before wakeup", OUT_instr.valid == 0);

        // CDB broadcasts rs1 tag; RF updated same cycle
        CDB_valid[0] = 1;
        CDB_tag[0]   = tag_t'(10);
        RF_data[0]   = 32'hFEED_FACE;
        wait_cyc(1);
        CDB_valid[0] = 0;
        CDB_tag[0]   = '0;
        print_state("S3 after CDB wakeup");
        chk("S3: issued after rs1 wakeup", OUT_instr.valid    == 1);
        chk("S3: sqN=20",                  OUT_instr.sqN      == 20);
        chk("S3: op1 from RF",             OUT_instr.operand1 == 32'hFEED_FACE);
    endtask

    // ===========================================================
    //  S4: CDB Wakeup rs2
    // ===========================================================
    task automatic s4_cdb_wakeup_rs2();
        $display("\n--- S4: CDB wakeup rs2 ---");
        do_reset();
        RF_data[0] = 32'h1111_1111;
        RF_data[1] = 32'h2222_2222;

        // rs2 not ready — stalls
        dispatch(30, oper_t'(DIV),
                 tag_t'(20), tag_t'(21), tag_t'(22),
                 1, 0);

        wait_cyc(2);
        chk("S4: stalled before wakeup", OUT_instr.valid == 0);

        // CDB broadcasts rs2 tag; RF updated same cycle
        CDB_valid[0] = 1;
        CDB_tag[0]   = tag_t'(21);
        RF_data[1]   = 32'hCAFE_BABE;
        wait_cyc(1);
        CDB_valid[0] = 0;
        CDB_tag[0]   = '0;
        print_state("S4 after CDB wakeup");
        chk("S4: issued after rs2 wakeup", OUT_instr.valid    == 1);
        chk("S4: sqN=30",                  OUT_instr.sqN      == 30);
        chk("S4: op2 from RF",             OUT_instr.operand2 == 32'hCAFE_BABE);
    endtask

    // ===========================================================
    //  S5: CDB Bypass Same Cycle as Dispatch
    // ===========================================================
    task automatic s5_cdb_same_cycle();
        $display("\n--- S5: CDB bypass same cycle as dispatch ---");
        do_reset();
        RF_data[0] = 32'hF00D_F00D;
        RF_data[1] = 32'hBEEF_BEEF;

        // rs1 not ready, but CDB fires same cycle as dispatch
        IN_instr.valid   = 1;
        IN_instr.sqN     = 40;
        IN_instr.oper    = oper_t'(MUL);
        IN_instr.rs1_tag = tag_t'(30);
        IN_instr.rs2_tag = tag_t'(31);
        IN_instr.rd_tag  = tag_t'(32);
        tag_ready[0]     = 0;
        tag_ready[1]     = 1;
        CDB_valid[0]     = 1;
        CDB_tag[0]       = tag_t'(30);  // rs1 match on dispatch

        wait_cyc(1);  // entry stored with ready_1=1, ready_2=1
        IN_instr     = '0;
        CDB_valid[0] = 0;
        CDB_tag[0]   = '0;

        wait_cyc(1);  // now issues
        print_state("S5 after issue");
        chk("S5: issued with same-cycle CDB bypass", OUT_instr.valid    == 1);
        chk("S5: sqN=40",                            OUT_instr.sqN      == 40);
        chk("S5: op1 from RF",                       OUT_instr.operand1 == 32'hF00D_F00D);
    endtask

    // ===========================================================
    //  S6: Priority — ready entry issues first
    // ===========================================================
    task automatic s6_priority();
        $display("\n--- S6: Priority (ready entry issues first) ---");
        do_reset();
        RF_data[0] = 32'h0001_0001;
        RF_data[1] = 32'h0002_0002;

        // Entry A: stalled on rs2
        dispatch(50, oper_t'(MUL),
                 tag_t'(40), tag_t'(41), tag_t'(42),
                 1, 0);

        // Entry B: both ready — should issue before A
        dispatch(51, oper_t'(DIV),
                 tag_t'(43), tag_t'(44), tag_t'(45),
                 1, 1);

        wait_cyc(1);
        chk("S6: entry B (sqN=51) issues first",
            OUT_instr.valid == 1 && OUT_instr.sqN == 51);

        // Wake up A
        CDB_valid[0] = 1;
        CDB_tag[0]   = tag_t'(41);
        RF_data[1]   = 32'hDEAD_DEAD;
        wait_cyc(1);
        CDB_valid[0] = 0;
        CDB_tag[0]   = '0;
        chk("S6: entry A (sqN=50) issues after wakeup",
            OUT_instr.valid == 1 && OUT_instr.sqN == 50);
    endtask

    // ===========================================================
    //  S7: Queue Full / OUT_busy
    // ===========================================================
    task automatic s7_queue_full();
        $display("\n--- S7: Queue full / OUT_busy ---");
        do_reset();

        // Fill queue — all stalled on rs2
        for (int i = 0; i < DEPTH; i++) begin
            IN_instr.valid   = 1;
            IN_instr.sqN     = sqN_t'(70 + i);
            IN_instr.oper    = oper_t'(MUL);
            IN_instr.rs1_tag = tag_t'(50 + i);
            IN_instr.rs2_tag = tag_t'(60 + i);
            IN_instr.rd_tag  = tag_t'(70 + i);
            tag_ready[0]     = 1;
            tag_ready[1]     = 0;
            @(posedge clk);
            if (i == DEPTH-2) #1;
        end
        #1;
        IN_instr     = '0;
        tag_ready[0] = 0;
        chk("S7: OUT_busy=1 when queue full", OUT_busy == 1);

        // Drain via CDB
        for (int i = 0; i < DEPTH; i++) begin
            CDB_valid[0] = 1;
            CDB_tag[0]   = tag_t'(60 + i);
            wait_cyc(1);
            CDB_valid[0] = 0;
            CDB_tag[0]   = '0;
        end

        wait_cyc(DEPTH + 2);
        chk("S7: OUT_busy=0 after full drain", OUT_busy == 0);
    endtask

    // ===========================================================
    //  S8: Flush — keep older sqN, squash newer
    // ===========================================================
    task automatic s8_flush();
        $display("\n--- S8: Flush squash ---");
        do_reset();
        RF_data[0] = 32'hAABB_CCDD;
        RF_data[1] = 32'h1122_3344;

        dispatch(80, oper_t'(MUL),
                 tag_t'(80), tag_t'(81), tag_t'(82),
                 1, 1);

        dispatch(81, oper_t'(DIV),
                 tag_t'(83), tag_t'(84), tag_t'(85),
                 1, 1);

        // flush_sqN=80: keep sqN<=80, squash sqN>80
        flush     = 1;
        flush_sqN = sqN_t'(80);
        wait_cyc(1);
        flush = 0;
        print_state("S8 after flush");
        chk("S8: sqN=80 kept and issued",
            OUT_instr.valid == 1 && OUT_instr.sqN == 80);

        wait_cyc(1);
        chk("S8: sqN=81 squashed", OUT_instr.valid == 0);
    endtask

    // ===========================================================
    //  S9: Flush on Empty Queue
    // ===========================================================
    task automatic s9_flush_empty();
        $display("\n--- S9: Flush on empty queue ---");
        do_reset();
        flush     = 1;
        flush_sqN = sqN_t'(0);
        wait_cyc(1);
        flush = 0;
        wait_cyc(2);
        chk("S9: valid=0 after flush on empty", OUT_instr.valid == 0);
        chk("S9: busy=0 after flush on empty",  OUT_busy        == 0);
    endtask

    // ===========================================================
    //  S10: Back-to-back throughput
    // ===========================================================
    task automatic s10_back_to_back();
        $display("\n--- S10: Back-to-back throughput ---");
        do_reset();
        RF_data[0] = 32'h1111_0000;
        RF_data[1] = 32'h2222_0000;

        for (int i = 0; i < 4; i++) begin
            dispatch(sqN_t'(90 + i), oper_t'(MUL),
                     tag_t'(i), tag_t'(i+1), tag_t'(i+2),
                     1, 1);
            wait_cyc(1);
            chk($sformatf("S10: cycle %0d sqN=%0d issued", i, 90+i),
                OUT_instr.valid == 1 && OUT_instr.sqN == sqN_t'(90+i));
        end
    endtask

    // ===========================================================
    //  S11: IN_busy Stalls Issue
    // ===========================================================
    task automatic s11_in_busy_stall();
        $display("\n--- S11: IN_busy stalls issue ---");
        do_reset();
        RF_data[0] = 32'hDEAD_BEEF;
        RF_data[1] = 32'hCAFE_F00D;

        dispatch(100, oper_t'(MUL),
                 tag_t'(1), tag_t'(2), tag_t'(3),
                 1, 1);

        // Assert IN_busy — should suppress issue
        IN_busy = 1;
        wait_cyc(1);
        print_state("S11 with IN_busy=1");
        chk("S11: issue suppressed by IN_busy", OUT_instr.valid == 0);

        // De-assert IN_busy — should issue next cycle
        IN_busy = 0;
        wait_cyc(1);
        print_state("S11 after IN_busy de-assert");
        chk("S11: issued after IN_busy=0",   OUT_instr.valid    == 1);
        chk("S11: sqN=100",                  OUT_instr.sqN      == 100);
        chk("S11: op1 correct",              OUT_instr.operand1 == 32'hDEAD_BEEF);
        chk("S11: op2 correct",              OUT_instr.operand2 == 32'hCAFE_F00D);
    endtask

    // ===========================================================
    //  S12: Dispatch Dropped When OUT_busy
    // ===========================================================
    task automatic s12_dispatch_stall();
        $display("\n--- S12: Dispatch dropped when busy ---");
        do_reset();

        // Fill queue — all stalled on rs2
        for (int i = 0; i < DEPTH; i++) begin
            IN_instr.valid   = 1;
            IN_instr.sqN     = sqN_t'(110 + i);
            IN_instr.oper    = oper_t'(MUL);
            IN_instr.rs1_tag = tag_t'(i + 10);
            IN_instr.rs2_tag = tag_t'(i + 20);
            IN_instr.rd_tag  = tag_t'(i + 30);
            tag_ready[0]     = 1;
            tag_ready[1]     = 0;
            @(posedge clk);
        end
        #1;
        IN_instr     = '0;
        tag_ready[0] = 0;
        chk("S12: OUT_busy=1", OUT_busy == 1);

        // Attempt extra dispatch when full — must be silently dropped
        dispatch(sqN_t'(200), oper_t'(MUL),
                 tag_t'(63), tag_t'(62), tag_t'(61),
                 1, 1);

        wait_cyc(1);
        chk("S12: dropped sqN=200 not issued",
            !(OUT_instr.valid == 1 && OUT_instr.sqN == sqN_t'(200)));
    endtask

    // ===========================================================
    //  S13: Multi-port CDB Wakeup (rs1+rs2 same cycle)
    // ===========================================================
    task automatic s13_multi_cdb();
        $display("\n--- S13: Multi-port CDB (rs1+rs2 same cycle) ---");
        do_reset();
        RF_data[0] = 32'h0;
        RF_data[1] = 32'h0;

        // Both operands not ready
        dispatch(10, oper_t'(MUL),
                 tag_t'(40), tag_t'(41), tag_t'(42),
                 0, 0);

        wait_cyc(1);
        chk("S13: stalled with both not ready", OUT_instr.valid == 0);

        // Both CDB ports fire same cycle; RF updated same cycle
        CDB_valid[0] = 1; CDB_tag[0] = tag_t'(40);
        CDB_valid[1] = 1; CDB_tag[1] = tag_t'(41);
        RF_data[0]   = 32'hAA00_BB11;
        RF_data[1]   = 32'hCC22_DD33;
        wait_cyc(1);
        CDB_valid[0] = 0; CDB_valid[1] = 0;
        CDB_tag[0]   = '0; CDB_tag[1]  = '0;
        print_state("S13 after dual CDB wakeup");
        chk("S13: issued after dual CDB",  OUT_instr.valid    == 1);
        chk("S13: sqN=10",                 OUT_instr.sqN      == 10);
        chk("S13: op1 from RF port 0",     OUT_instr.operand1 == 32'hAA00_BB11);
        chk("S13: op2 from RF port 1",     OUT_instr.operand2 == 32'hCC22_DD33);
    endtask

    // ===========================================================
    //  S14: Flush Then Dispatch Fresh Instruction
    // ===========================================================
    task automatic s14_flush_then_dispatch();
        $display("\n--- S14: Flush then dispatch fresh ---");
        do_reset();
        RF_data[0] = 32'hF0F0_F0F0;
        RF_data[1] = 32'h0F0F_0F0F;

        dispatch(18, oper_t'(DIV),
                 tag_t'(50), tag_t'(51), tag_t'(52),
                 1, 1);

        // flush_sqN=17: sqN=18 is newer — squashed
        flush     = 1;
        flush_sqN = sqN_t'(17);
        wait_cyc(1);
        flush = 0;
        chk("S14: sqN=18 squashed by flush", OUT_instr.valid == 0);

        // Fresh dispatch after flush — should issue normally
        dispatch(19, oper_t'(MUL),
                 tag_t'(53), tag_t'(54), tag_t'(55),
                 1, 1);

        wait_cyc(1);
        chk("S14: new sqN=19 issued after flush",
            OUT_instr.valid == 1 && OUT_instr.sqN == 19);
    endtask

    // ===========================================================
    //  S15: IN_busy Held for Multiple Cycles
    // ===========================================================
    task automatic s15_in_busy_multi_cycle();
        $display("\n--- S15: IN_busy held multiple cycles ---");
        do_reset();
        RF_data[0] = 32'hABCD_1234;
        RF_data[1] = 32'h5678_DCBA;

        dispatch(120, oper_t'(MUL),
                 tag_t'(5), tag_t'(6), tag_t'(7),
                 1, 1);

        IN_busy = 1;
        repeat (3) begin
            wait_cyc(1);
            chk("S15: issue suppressed each busy cycle", OUT_instr.valid == 0);
        end

        IN_busy = 0;
        wait_cyc(1);
        chk("S15: finally issued after busy released",
            OUT_instr.valid == 1 && OUT_instr.sqN == 120);
    endtask

    // ===========================================================
    //  S16: Wakeup Arrives While IN_busy Held
    // ===========================================================
     task automatic s16_wakeup_while_busy();
        $display("\n--- S16: Wakeup while IN_busy held ---");
        do_reset();
        RF_data[0] = 32'h1234_ABCD;
        RF_data[1] = 32'hEEEE_FFFF;
 
        dispatch(30, oper_t'(DIV),
                tag_t'(60), tag_t'(61), tag_t'(62),
                0, 1);

        IN_busy      = 1;
        CDB_valid[0] = 1;
        CDB_tag[0]   = tag_t'(60);
        RF_data[0]   = 32'h9999_AAAA;
        wait_cyc(1);
        CDB_valid[0] = 0;
        CDB_tag[0]   = '0;

        chk("S16: not issued while IN_busy=1", OUT_instr.valid == 0);

        IN_busy = 0;
        wait_cyc(1);
        print_state("S16 after IN_busy release");
        chk("S16: issued after IN_busy release", OUT_instr.valid == 1);
        chk("S16: sqN=30",                       OUT_instr.sqN   == sqN_t'(30));
        chk("S16: op1 from RF",                  OUT_instr.operand1 == 32'h9999_AAAA);
    endtask

    // ===========================================================
    //  S17: Flush During IN_busy
    // ===========================================================
    task automatic s17_flush_during_busy();
        $display("\n--- S17: Flush during IN_busy ---");
        do_reset();

        dispatch(140, oper_t'(MUL),
                 tag_t'(70), tag_t'(71), tag_t'(72),
                 1, 1);
        dispatch(141, oper_t'(DIV),
                 tag_t'(73), tag_t'(74), tag_t'(75),
                 1, 1);

        IN_busy   = 1;
        flush     = 1;
        flush_sqN = sqN_t'(139);  // squash both
        wait_cyc(1);
        IN_busy = 0;
        flush   = 0;

        wait_cyc(1);
        chk("S17: queue empty after flush during busy",
            OUT_instr.valid == 0 && OUT_busy == 0);
    endtask

    // ===========================================================
    //  S18: Re-dispatch After Flush Clears Queue
    // ===========================================================
    task automatic s18_redispatch_after_flush();
        $display("\n--- S18: Re-dispatch after flush ---");
        do_reset();
        RF_data[0] = 32'hDEAD_C0DE;
        RF_data[1] = 32'hC0DE_DEAD;

        for (int i = 0; i < 3; i++) begin
            dispatch(sqN_t'(10 + i), oper_t'(MUL),
                    tag_t'(i+1), tag_t'(i+2), tag_t'(i+3),
                    1, 0);
        end

        flush     = 1;
        flush_sqN = sqN_t'(9);   // squash sqN 10,11,12
        wait_cyc(1);
        flush = 0;
        chk("S18: all entries squashed", OUT_busy == 0);

        // sqN=20 — well within sqN_t range
        dispatch(20, oper_t'(DIV),
                tag_t'(90), tag_t'(91), tag_t'(92),
                1, 1);
        wait_cyc(1);
        chk("S18: fresh sqN=20 issued",
            OUT_instr.valid == 1 && OUT_instr.sqN == sqN_t'(20));
    endtask

    // ===========================================================
    //  S19: CDB on Tag 0 — No False Match on Unused Entries
    // ===========================================================
    task automatic s19_tag0_no_false_match();
        $display("\n--- S19: CDB tag=0 no false match ---");
        do_reset();

        // Dispatch with rs1 stalled, rs2 stalled — neither tag is 0
        dispatch(160, oper_t'(MUL),
                 tag_t'(55), tag_t'(56), tag_t'(57),
                 0, 0);

        // Broadcast tag=0 — must NOT wake this entry
        CDB_valid[0] = 1;
        CDB_tag[0]   = tag_t'(0);
        wait_cyc(1);
        CDB_valid[0] = 0;
        CDB_tag[0]   = '0;

        chk("S19: tag=0 broadcast does not falsely wake entry",
            OUT_instr.valid == 0);
    endtask

    // ===========================================================
    //  S20: Drain Full Queue One-by-One via CDB
    // ===========================================================
    task automatic s20_drain_full_queue();
        $display("\n--- S20: Drain full queue one-by-one ---");
        do_reset();
        RF_data[0] = 32'h0001_0001;
        RF_data[1] = 32'h0002_0002;

        for (int i = 0; i < DEPTH; i++) begin
            IN_instr.valid   = 1;
            IN_instr.sqN     = sqN_t'(10 + i);   // small sqNs, no overflow
            IN_instr.oper    = oper_t'(MUL);
            IN_instr.rs1_tag = tag_t'(i + 1);
            IN_instr.rs2_tag = tag_t'(i + 20);
            IN_instr.rd_tag  = tag_t'(i + 40);
            tag_ready[0]     = 1;
            tag_ready[1]     = 0;
            @(posedge clk);
        end
        #1;
        IN_instr     = '0;
        tag_ready[0] = 0;
        chk("S20: queue full before drain", OUT_busy == 1);
 
        for (int i = 0; i < DEPTH-1; i++) begin
            CDB_valid[0] = 1;
            CDB_tag[0]   = tag_t'(i + 20);
            wait_cyc(1);
            CDB_valid[0] = 0;
            CDB_tag[0]   = '0;
            chk($sformatf("S20: entry %0d issued after CDB", i),
                OUT_instr.valid == 1);
        end

        wait_cyc(1);
        chk("S20: queue empty after full drain", OUT_busy == 0);
    endtask

    // ===========================================================
    //  Main
    // ===========================================================
    initial begin
        $display("=========================================");
        $display("  MUL/DIV Issue Buffer — Full Testbench");
        $display("  DEPTH=%0d  ISSUE_WIDTH=%0d  XLEN=%0d",
                  DEPTH, IW, XLEN);
        $display("=========================================");

        s1_reset();
        s2_basic();
        s3_cdb_wakeup_rs1();
        s4_cdb_wakeup_rs2();
        s5_cdb_same_cycle();
        s6_priority();
        s7_queue_full();
        s8_flush();
        s9_flush_empty();
        s10_back_to_back();
        s11_in_busy_stall();
        s12_dispatch_stall();
        s13_multi_cdb();
        s14_flush_then_dispatch();
        s15_in_busy_multi_cycle();
        s16_wakeup_while_busy();
        s17_flush_during_busy();
        s18_redispatch_after_flush();
        s19_tag0_no_false_match();
        s20_drain_full_queue();

        $display("\n=========================================");
        $display("  PASSED: %0d  |  FAILED: %0d", pass_cnt, fail_cnt);
        $display("=========================================");
        if (fail_cnt == 0)
            $display("  *** ALL TESTS PASSED ***");
        else
            $display("  *** SOME TESTS FAILED ***");

        $finish;
    end

    // Watchdog
    initial begin
        #500_000;
        $display("[TIMEOUT] Limit reached!");
        $finish;
    end

endmodule