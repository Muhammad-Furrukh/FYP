// ============================================================
//  Testbench: tb_lsu_issue_buffer.sv
//
//  Scenarios:
//   S1.  Reset check
//   S2.  Load dispatch + issue (is_imm=1, rs1 ready)
//   S3.  Store dispatch + issue (is_imm=1, rs1+rs2 ready)
//   S4.  is_imm=0 → operand2 must be zero
//   S5.  CDB wakeup rs1
//   S6.  CDB wakeup rs2 (store data)
//   S7.  CDB bypass same cycle as dispatch
//   S8.  Priority — ready entry issues first
//   S9.  Flush: keep older sqN, squash newer
//   S10. Flush on empty queue
//   S11. Queue full / OUT_busy
//   S12. Multi-port CDB wakeup (rs1+rs2 same cycle)
//   S13. Flush then dispatch fresh instruction
// ============================================================

import include_pkg::*;

module tb_lsu_issue_buffer;

    localparam int DEPTH    = ISSUEB_SIZE;
    localparam int IW       = ISSUE_WIDTH;
    localparam int CLK_HALF = 5;

    // ---- DUT ports ----
    logic                   clk, rst;
    lsu_dispatch_instr_t    IN_instr;
    logic                   flush;
    sqN_t                   flush_sqN;
    logic                   tag_ready [2];
    logic [31:0]            RF_data   [2];
    tag_t                   CDB_tag   [IW];
    logic                   CDB_valid [IW];
    lsu_issue_instr_t       OUT_instr;
    tag_t                   check_ready [2];
    tag_t                   read_tag    [2];
    logic                   OUT_busy;

    // ---- DUT ----
    lsu_issue_buffer #(.DEPTH(DEPTH)) dut (.*);

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
        $display("  OUT_instr.data     = %0h", OUT_instr.data);
        $display("  OUT_instr.oper     = %0d", OUT_instr.oper);
        $display("  OUT_instr.rd_tag   = %0d", OUT_instr.rd_tag);
        $display("  OUT_busy           = %0b", OUT_busy);
        $display("  issue_found        = %0b", dut.issue_found);
        $display("  ready_mask         = %0b", dut.ready_mask);
        $display("  issue_idx          = %0d", dut.issue_idx);
    endtask

    // Dispatch one entry and clear inputs on next cycle
    task automatic dispatch(
        input sqN_t  sqN,
        input oper_t op,
        input tag_t  rs1t, rs2t, rdt,
        input imm_t  imm_val,
        input logic  is_imm,
        input logic  r1, r2
    );
        IN_instr.valid   = 1;
        IN_instr.sqN     = sqN;
        IN_instr.oper    = op;
        IN_instr.rs1_tag = rs1t;
        IN_instr.rs2_tag = rs2t;
        IN_instr.rd_tag  = rdt;
        IN_instr.imm     = imm_val;
        IN_instr.is_imm  = is_imm;
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
        chk("S1: OUT_instr.valid=0", OUT_instr.valid == 0);
        chk("S1: OUT_busy=0",        OUT_busy        == 0);
    endtask

    // ===========================================================
    //  S2: Load — is_imm=1, rs1=base addr, operand2=imm offset
    // ===========================================================
    task automatic s2_load();
        $display("\n--- S2: Load (is_imm=1, rs1 ready) ---");
        do_reset();
        RF_data[0] = 32'hA000_0010;   // base address
        RF_data[1] = 32'hFFFF_FFFF;   // rs2 don't-care for load

        dispatch(10, oper_t'(LOAD),
                 tag_t'(1), tag_t'(2), tag_t'(3),
                 32'h0000_0040, 1,    // imm = offset
                 1, 1);               // rs1 ready, rs2 ready (unused)

        wait_cyc(1);
        print_state("S2 after load dispatch");
        chk("S2: valid=1",        OUT_instr.valid    == 1);
        chk("S2: sqN=10",         OUT_instr.sqN      == 10);
        chk("S2: operand1=base",  OUT_instr.operand1 == 32'hA000_0010);
        chk("S2: operand2=imm",   OUT_instr.operand2 == 32'h0000_0040);
        chk("S2: rd_tag=3",       OUT_instr.rd_tag   == 3);
    endtask

    // ===========================================================
    //  S3: Store — is_imm=1, rs1=base addr, rs2=store data
    //  operand1=rs1, operand2=imm, data=rs2
    // ===========================================================
    task automatic s3_store();
        $display("\n--- S3: Store (is_imm=1, rs1+rs2 ready) ---");
        do_reset();
        RF_data[0] = 32'hAD00_1234;   // base address
        RF_data[1] = 32'hDA7A_5678;   // store data

        dispatch(20, oper_t'(STORE),
                 tag_t'(4), tag_t'(5), tag_t'(6),
                 32'h0000_0008, 1,
                 1, 1);

        wait_cyc(1);
        print_state("S3 after store dispatch");
        chk("S3: valid=1",       OUT_instr.valid    == 1);
        chk("S3: sqN=20",        OUT_instr.sqN      == 20);
        chk("S3: operand1=base", OUT_instr.operand1 == 32'hAD00_1234);
        chk("S3: operand2=imm",  OUT_instr.operand2 == 32'h0000_0008);
        chk("S3: data=rs2",      OUT_instr.data     == 32'hDA7A_5678);
    endtask

    // ===========================================================
    //  S4: is_imm=0 → operand2 must be zero
    // ===========================================================
    task automatic s4_not_imm();
        $display("\n--- S4: is_imm=0 -> operand2=0 ---");
        do_reset();
        RF_data[0] = 32'h1111_1111;
        RF_data[1] = 32'h2222_2222;

        dispatch(30, oper_t'(LOAD),
                 tag_t'(7), tag_t'(8), tag_t'(9),
                 32'hDEAD_BEEF, 0,   // is_imm=0, imm ignored
                 1, 1);

        wait_cyc(1);
        chk("S4: valid=1",      OUT_instr.valid    == 1);
        chk("S4: operand2=0",   OUT_instr.operand2 == '0);
        chk("S4: operand1=rs1", OUT_instr.operand1 == 32'h1111_1111);
        chk("S4: data=rs2",     OUT_instr.data     == 32'h2222_2222);
    endtask

    // ===========================================================
    //  S5: CDB Wakeup rs1
    // ===========================================================
    task automatic s5_cdb_wakeup_rs1();
        $display("\n--- S5: CDB wakeup rs1 ---");
        do_reset();
        RF_data[0] = 32'hCCCC_0000;
        RF_data[1] = 32'hDDDD_1111;

        // rs1 not ready — stalls
        dispatch(40, oper_t'(LOAD),
                 tag_t'(10), tag_t'(11), tag_t'(12),
                 32'h0000_0010, 1,
                 0, 1);

        wait_cyc(1);
        chk("S5: stalled before wakeup", OUT_instr.valid == 0);

        CDB_valid[0] = 1;
        CDB_tag[0]   = tag_t'(10);
        RF_data[0]   = 32'hFEED_FACE;
        wait_cyc(1);
        CDB_valid[0] = 0;
        CDB_tag[0]   = '0;
        print_state("S5 after CDB wakeup");
        chk("S5: issued after rs1 wakeup", OUT_instr.valid    == 1);
        chk("S5: sqN=40",                  OUT_instr.sqN      == 40);
        chk("S5: operand1 from RF",        OUT_instr.operand1 == 32'hFEED_FACE);
    endtask

    // ===========================================================
    //  S6: CDB Wakeup rs2 (store data not ready)
    // ===========================================================
    task automatic s6_cdb_wakeup_rs2();
        $display("\n--- S6: CDB wakeup rs2 (store data) ---");
        do_reset();
        RF_data[0] = 32'hAAAA_BBBB;
        RF_data[1] = 32'h0000_0000;

        // rs2 (store data) not ready
        dispatch(50, oper_t'(STORE),
                 tag_t'(20), tag_t'(21), tag_t'(22),
                 32'h0000_0004, 1,
                 1, 0);

        wait_cyc(2);
        chk("S6: stalled before wakeup", OUT_instr.valid == 0);

        CDB_valid[0] = 1;
        CDB_tag[0]   = tag_t'(21);
        RF_data[1]   = 32'hCAFE_F00D;
        wait_cyc(1);
        CDB_valid[0] = 0;
        CDB_tag[0]   = '0;
        print_state("S6 after CDB wakeup");
        chk("S6: issued after rs2 wakeup", OUT_instr.valid == 1);
        chk("S6: sqN=50",                  OUT_instr.sqN   == 50);
        chk("S6: data=rs2 from RF",        OUT_instr.data  == 32'hCAFE_F00D);
    endtask

    // ===========================================================
    //  S7: CDB Bypass Same Cycle as Dispatch
    // ===========================================================
    task automatic s7_cdb_same_cycle();
        $display("\n--- S7: CDB bypass same cycle as dispatch ---");
        do_reset();
        RF_data[0] = 32'hF00D_F00D;
        RF_data[1] = 32'hBEEF_BEEF;

        // rs1 not ready, CDB fires same cycle
        IN_instr.valid   = 1;
        IN_instr.sqN     = 60;
        IN_instr.oper    = oper_t'(LOAD);
        IN_instr.rs1_tag = tag_t'(30);
        IN_instr.rs2_tag = tag_t'(31);
        IN_instr.rd_tag  = tag_t'(32);
        IN_instr.imm     = 32'h0000_0020;
        IN_instr.is_imm  = 1;
        tag_ready[0]     = 0;
        tag_ready[1]     = 1;
        CDB_valid[0]     = 1;
        CDB_tag[0]       = tag_t'(30);   // rs1 match on dispatch cycle

        wait_cyc(1);   // entry stored with ready_1=1, ready_2=1
        IN_instr     = '0;
        CDB_valid[0] = 0;
        CDB_tag[0]   = '0;

        wait_cyc(1);
        print_state("S7 after issue");
        chk("S7: issued with CDB bypass", OUT_instr.valid    == 1);
        chk("S7: sqN=60",                 OUT_instr.sqN      == 60);
        chk("S7: operand1 from RF",       OUT_instr.operand1 == 32'hF00D_F00D);
        chk("S7: operand2=imm",           OUT_instr.operand2 == 32'h0000_0020);
    endtask

    // ===========================================================
    //  S8: Priority — ready entry issues first
    // ===========================================================
    task automatic s8_priority();
        $display("\n--- S8: Priority (ready issues first) ---");
        do_reset();
        RF_data[0] = 32'h0001_0001;
        RF_data[1] = 32'h0002_0002;

        // Entry A: stalled on rs2 (store data not ready)
        dispatch(70, oper_t'(STORE),
                 tag_t'(40), tag_t'(41), tag_t'(42),
                 32'h4, 1, 1, 0);

        // Entry B: both ready — should issue first
        dispatch(71, oper_t'(LOAD),
                 tag_t'(43), tag_t'(44), tag_t'(45),
                 32'h8, 1, 1, 1);

        wait_cyc(1);
        chk("S8: entry B (sqN=71) issues first",
            OUT_instr.valid == 1 && OUT_instr.sqN == sqN_t'(71));

        // Wake up A
        CDB_valid[0] = 1;
        CDB_tag[0]   = tag_t'(41);
        RF_data[1]   = 32'hDEAD_DA7A;
        wait_cyc(1);
        CDB_valid[0] = 0;
        CDB_tag[0]   = '0;
        chk("S8: entry A (sqN=70) issues after wakeup",
            OUT_instr.valid == 1 && OUT_instr.sqN == sqN_t'(70));
        chk("S8: data = woken rs2",
            OUT_instr.data == 32'hDEAD_DA7A);
    endtask

    // ===========================================================
    //  S9: Flush — keep older sqN, squash newer
    // ===========================================================
    task automatic s9_flush();
        $display("\n--- S9: Flush squash ---");
        do_reset();
        RF_data[0] = 32'hAABB_CCDD;
        RF_data[1] = 32'h1122_3344;

        dispatch(10, oper_t'(LOAD),
                 tag_t'(50), tag_t'(51), tag_t'(52),
                 32'h10, 1, 1, 1);

        dispatch(11, oper_t'(STORE),
                 tag_t'(53), tag_t'(54), tag_t'(55),
                 32'h14, 1, 1, 1);

        // flush_sqN=10: keep sqN<=10, squash sqN>10
        flush     = 1;
        flush_sqN = sqN_t'(10);
        wait_cyc(1);
        flush = 0;
        print_state("S9 after flush");
        chk("S9: sqN=10 kept and issued",
            OUT_instr.valid == 1 && OUT_instr.sqN == sqN_t'(10));

        wait_cyc(1);
        chk("S9: sqN=11 squashed", OUT_instr.valid == 0);
    endtask

    // ===========================================================
    //  S10: Flush on Empty Queue
    // ===========================================================
    task automatic s10_flush_empty();
        $display("\n--- S10: Flush on empty queue ---");
        do_reset();
        flush     = 1;
        flush_sqN = sqN_t'(0);
        wait_cyc(1);
        flush = 0;
        wait_cyc(2);
        chk("S10: valid=0 after flush on empty", OUT_instr.valid == 0);
        chk("S10: busy=0",                       OUT_busy        == 0);
    endtask

    // ===========================================================
    //  S11: Queue Full / OUT_busy )
    // ===========================================================
    task automatic s11_queue_full();
        $display("\n--- S11: Queue full / OUT_busy ---");
        do_reset();

        // Fill — all stalled on rs2
        for (int i = 0; i < DEPTH; i++) begin
            IN_instr.valid   = 1;
            IN_instr.sqN     = sqN_t'(20 + i);
            IN_instr.oper    = oper_t'(STORE);
            IN_instr.rs1_tag = tag_t'(i + 1);
            IN_instr.rs2_tag = tag_t'(i + 20);
            IN_instr.rd_tag  = tag_t'(i + 40);
            IN_instr.imm     = 32'h4;
            IN_instr.is_imm  = 1;
            tag_ready[0]     = 1;
            tag_ready[1]     = 0;
            @(posedge clk);
            if (i == DEPTH-2) #1;
        end 
        #1;
        IN_instr     = '0;
        tag_ready[0] = 0;
        chk("S11: OUT_busy=1 when full", OUT_busy == 1);

        // Drain via CDB — only DEPTH-1 entries actually queued
        for (int i = 0; i < DEPTH-1; i++) begin
            CDB_valid[0] = 1;
            CDB_tag[0]   = tag_t'(i + 20);
            wait_cyc(1);
            CDB_valid[0] = 0;
            CDB_tag[0]   = '0;
        end

        wait_cyc(DEPTH + 2);
        chk("S11: OUT_busy=0 after drain", OUT_busy == 0);
    endtask

    // ===========================================================
    //  S12: Multi-port CDB Wakeup (rs1 + rs2 same cycle)
    // ===========================================================
    task automatic s12_multi_cdb();
        $display("\n--- S12: Multi-port CDB (rs1+rs2 same cycle) ---");
        do_reset();
        RF_data[0] = 32'h0000_0000;
        RF_data[1] = 32'h0000_0000;

        // Both operands not ready
        dispatch(10, oper_t'(STORE),
                 tag_t'(60), tag_t'(61), tag_t'(62),
                 32'h0000_0010, 1,
                 0, 0);

        wait_cyc(1);
        chk("S12: stalled with both not ready", OUT_instr.valid == 0);

        // Both CDB ports fire same cycle
        CDB_valid[0] = 1; CDB_tag[0] = tag_t'(60);
        CDB_valid[1] = 1; CDB_tag[1] = tag_t'(61);
        RF_data[0]   = 32'hB00B_CAFE;   // base address value
        RF_data[1]   = 32'h5A5A_F0F0;   // store data value
        wait_cyc(1);
        CDB_valid[0] = 0; CDB_valid[1] = 0;
        CDB_tag[0]   = '0; CDB_tag[1]  = '0;
        print_state("S12 after dual CDB wakeup");
        chk("S12: issued after dual CDB",   OUT_instr.valid    == 1);
        chk("S12: sqN=10",                  OUT_instr.sqN      == 10);
        chk("S12: operand1=base from RF",   OUT_instr.operand1 == 32'hB00B_CAFE);
        chk("S12: data=store from RF",      OUT_instr.data     == 32'h5A5A_F0F0);
        chk("S12: operand2=imm",            OUT_instr.operand2 == 32'h0000_0010);
    endtask

    // ===========================================================
    //  S13: Flush Then Dispatch Fresh Instruction
    // ===========================================================
    task automatic s13_flush_then_dispatch();
        $display("\n--- S13: Flush then dispatch fresh ---");
        do_reset();
        RF_data[0] = 32'hF0F0_F0F0;
        RF_data[1] = 32'h0F0F_0F0F;

        dispatch(15, oper_t'(LOAD),
                 tag_t'(70), tag_t'(71), tag_t'(72),
                 32'h20, 1, 1, 1);

        // flush_sqN=14: sqN=15 is newer — squashed
        flush     = 1;
        flush_sqN = sqN_t'(14);
        wait_cyc(1);
        flush = 0;
        chk("S13: sqN=15 squashed by flush", OUT_instr.valid == 0);

        // Fresh dispatch after flush
        dispatch(20, oper_t'(STORE),
                 tag_t'(73), tag_t'(74), tag_t'(75),
                 32'h0000_0008, 1, 1, 1);

        wait_cyc(1);
        chk("S13: fresh sqN=20 issued after flush",
            OUT_instr.valid == 1 && OUT_instr.sqN == sqN_t'(20));
    endtask

    // ===========================================================
    //  Main
    // ===========================================================
    initial begin
        $display("=========================================");
        $display("  LSU Issue Buffer Testbench");
        $display("  DEPTH=%0d  ISSUE_WIDTH=%0d  XLEN=%0d",
                  DEPTH, IW, XLEN);
        $display("=========================================");

        s1_reset();
        s2_load();
        s3_store();
        s4_not_imm();
        s5_cdb_wakeup_rs1();
        s6_cdb_wakeup_rs2();
        s7_cdb_same_cycle();
        s8_priority();
        s9_flush();
        s10_flush_empty();
        s11_queue_full();
        s12_multi_cdb();
        s13_flush_then_dispatch();

        $display("\n=========================================");
        $display("  PASSED: %0d  |  FAILED: %0d", pass_cnt, fail_cnt);
        $display("=========================================");
        if (fail_cnt == 0)
            $display("  *** ALL TESTS PASSED ***");
        else
            $display("  *** SOME TESTS FAILED ***");

        $finish;
    end

    initial begin
        #200_000;
        $display("[TIMEOUT] Limit reached!");
        $finish;
    end

endmodule