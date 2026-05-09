// ============================================================
//  Testbench: alu_issue_buffer_tb.sv
 
//  Scenarios  :
//   S1.  Reset check
//   S2.  Basic dispatch + issue (both operands ready)
//   S3.  Immediate operand (is_imm=1)
//   S4.  CDB wakeup rs1
//   S5.  CDB wakeup rs2
//   S6.  CDB bypass (same cycle as dispatch)
//   S7.  Multi-entry: ready entry issues first
//   S8.  Queue full / OUT_busy
//   S9.  Flush - keep older, squash newer
//   S10. Flush on empty queue
//   S11. JAL  (op1=PC, op2=4)
//   S12. JALR (op1=PC, op2=4)
//   S13. AUIPC (op1=PC, op2=imm)
//   S14. LUI   (op2=imm)
//   S15. Branch BEQ taken
//   S16. Branch BNE not taken
//   S17. Back-to-back throughput
//   S18. Dispatch dropped when busy
//   S19. Multi-port CDB wakeup (2 ports same cycle)
//   S20. Flush then dispatch fresh instruction
// ============================================================
 
import include_pkg::*;

module tb_alu_issue_buffer;

    localparam int DEPTH    = ISSUEB_SIZE;
    localparam int IW       = ISSUE_WIDTH;
    localparam int CLK_HALF = 5;

    // ---- DUT ports ----
    logic                   clk, rst;

    alu_dispatch_instr_t    IN_instr;
    logic                   flush;
    sqN_t                   flush_sqN;
    logic                   tag_ready [2];
    logic [31:0]            RF_data   [2];
    tag_t                   CDB_tag   [IW];
    logic                   CDB_valid [IW];
    issue_instr_t           OUT_instr;
    logic                   OUT_br_taken;
    jump_type_t             OUT_jump_type;
    pc_t                    OUT_pc;
    logic [XLEN-1:0]        rs1_result;
    logic [XLEN-1:0]        imm;
    tag_t                   check_ready [2];
    tag_t                   read_tag    [2];
    logic                   OUT_busy;

    // ---- DUT ----
    alu_issue_buffer #(.DEPTH(DEPTH)) dut (.*);

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
        $display("  OUT_instr.oper     = %0d", OUT_instr.oper);
        $display("  OUT_instr.rd_tag   = %0d", OUT_instr.rd_tag);
        $display("  OUT_pc             = %0h", OUT_pc);
        $display("  OUT_jump_type      = %0d", OUT_jump_type);
        $display("  OUT_br_taken       = %0b", OUT_br_taken);
        $display("  rs1_result         = %0h", rs1_result);
        $display("  imm                = %0h", imm);
        $display("  OUT_busy           = %0b", OUT_busy);
        $display("  issue_found = %0b", dut.issue_found);
        $display("  flush       = %0b", flush);
        $display("  ready_mask  = %0b", dut.ready_mask);
        $display("  issue_idx   = %0d", dut.issue_idx);
    endtask

    task automatic dispatch(
        input sqN_t       sqN,
        input pc_t        pc,
        input oper_t      op,
        input tag_t       rs1t, rs2t, rdt,
        input imm_t       imm_val,
        input logic       is_imm,
        input jump_type_t jt,
        input br_type_t   bt,
        input u_type_t    ut,
        input logic       r1, r2
    );
        IN_instr.valid      = 1;
        IN_instr.sqN        = sqN;
        IN_instr.pc         = pc;
        IN_instr.oper       = op;
        IN_instr.rs1_tag    = rs1t;
        IN_instr.rs2_tag    = rs2t;
        IN_instr.rd_tag     = rdt;
        IN_instr.imm        = imm_val;
        IN_instr.is_imm     = is_imm;
        IN_instr.jump_type  = jt;
        IN_instr.br_type    = bt;
        IN_instr.u_type     = ut;
        tag_ready[0]        = r1;
        tag_ready[1]        = r2;
        wait_cyc(1);
        IN_instr     = '0;
        tag_ready[0] = 0;
        tag_ready[1] = 0;
    endtask
  
    task automatic cdb_bcast(input int port, input tag_t t, input logic [XLEN-1:0] val);
        CDB_valid[port] = 1;
        CDB_tag[port]   = t;
        wait_cyc(1);
        CDB_valid[port] = 0;
        CDB_tag[port]   = '0;
    endtask

    // ===========================================================
    //  S1: Reset Check
    // ===========================================================
    task automatic s1_reset();
        $display("\n--- S1: Reset check ---");
        do_reset();
        chk("S1: OUT_instr.valid=0", OUT_instr.valid == 0);
        chk("S1: OUT_busy=0",        OUT_busy        == 0);
        chk("S1: OUT_br_taken=0",    OUT_br_taken    == 0);
    endtask

    // ===========================================================
    //  S2: Basic Dispatch + Issue
    // ===========================================================
    task automatic s2_basic();
        $display("\n--- S2: Basic dispatch + issue ---");
        do_reset();
        RF_data[0] = 32'hAAAA_1111;
        RF_data[1] = 32'hBBBB_2222;

        dispatch(10, 32'h0000_0100, oper_t'(ADD),
                 tag_t'(1), tag_t'(2), tag_t'(3),
                 '0, 0, NOT_JUMP, NOT_BRANCH, NOT_U, 1, 1);

        wait_cyc(1);
        print_state("S2 after dispatch");
        chk("S2: valid=1",        OUT_instr.valid    == 1);
        chk("S2: sqN=10",         OUT_instr.sqN      == 10);
        chk("S2: op1=RF_data[0]", OUT_instr.operand1 == 32'hAAAA_1111);
        chk("S2: op2=RF_data[1]", OUT_instr.operand2 == 32'hBBBB_2222);
        chk("S2: rd_tag=3",       OUT_instr.rd_tag   == 3);
    endtask

    // ===========================================================
    //  S3: Immediate Operand
    // ===========================================================
    task automatic s3_immediate();
        $display("\n--- S3: Immediate operand ---");
        do_reset();
        RF_data[0] = 32'hDEAD_BEEF;
        RF_data[1] = 32'hBAD0_CAFE;

        dispatch(20, 32'h0000_0200, oper_t'(ADD),
                 tag_t'(4), tag_t'(5), tag_t'(6),
                 32'h0000_00FF, 1,
                 NOT_JUMP, NOT_BRANCH, NOT_U, 1, 0);

        wait_cyc(1);
        chk("S3: valid=1",        OUT_instr.valid    == 1);
        chk("S3: op1=RF_data[0]", OUT_instr.operand1 == 32'hDEAD_BEEF);
        chk("S3: op2=imm",        OUT_instr.operand2 == 32'h0000_00FF);
    endtask

    // ===========================================================
    //  S4: CDB Wakeup rs1
    // ===========================================================
    task automatic s4_cdb_wakeup_rs1();
        $display("\n--- S4: CDB wakeup rs1 ---");
        do_reset();
        RF_data[0] = 32'hCCCC_0000;
        RF_data[1] = 32'hDDDD_0001;

        // Dispatch with rs1 not ready — stalls in queue
        dispatch(30, 32'h0000_0300, oper_t'(SUB),
                 tag_t'(10), tag_t'(11), tag_t'(12),
                 '0, 0, NOT_JUMP, NOT_BRANCH, NOT_U, 0, 1);

        wait_cyc(1);
        print_state("S4 after dispatch+wait");
        chk("S4: stalled before wakeup", OUT_instr.valid == 0);

        // CDB broadcasts rs1 tag — RF updated same cycle to new value
        // wait_cyc(1) inside this block clocks the edge : ready_1=1 stored,
        // instruction issues in that same clock, output valid next #1
        CDB_valid[0] = 1;
        CDB_tag[0]   = tag_t'(10);
        RF_data[0]   = 32'hFEED_FACE;
        wait_cyc(1);
        CDB_valid[0] = 0;
        CDB_tag[0]   = '0;
        print_state("S4 after cdb_bcast — issue happened this cycle");
        chk("S4: issued after rs1 wakeup", OUT_instr.valid    == 1);
        chk("S4: sqN=30",                  OUT_instr.sqN      == 30);
        chk("S4: op1 from RF",             OUT_instr.operand1 == 32'hFEED_FACE);
    endtask

    // ===========================================================
    //  S5: CDB Wakeup rs2
    // ===========================================================
    task automatic s5_cdb_wakeup_rs2();
        $display("\n--- S5: CDB wakeup rs2 ---");
        do_reset();
        RF_data[0] = 32'h1111_1111;
        RF_data[1] = 32'h2222_2222;

        // Dispatch with rs2 not ready — stalls in queue
        dispatch(40, 32'h0000_0400, oper_t'(AND),
                 tag_t'(20), tag_t'(21), tag_t'(22),
                 '0, 0, NOT_JUMP, NOT_BRANCH, NOT_U, 1, 0);

        wait_cyc(4);
        print_state("S5 after dispatch+wait");
        chk("S5: stalled", OUT_instr.valid == 0);

        // CDB broadcasts rs2 tag — RF updated same cycle
        // Issue happens this same clock edge
        CDB_valid[0] = 1;
        CDB_tag[0]   = tag_t'(21);
        RF_data[1]   = 32'hCAFE_BABE;
        wait_cyc(1);
        CDB_valid[0] = 0;
        CDB_tag[0]   = '0;
        print_state("S5 after cdb_bcast — issue happened this cycle");
        chk("S5: issued",      OUT_instr.valid    == 1);
        chk("S5: op2 from RF", OUT_instr.operand2 == 32'hCAFE_BABE);
    endtask

    // ===========================================================
    //  S6: CDB bypass same cycle as dispatch
    // ===========================================================
    task automatic s6_cdb_same_cycle();
        $display("\n--- S6: CDB bypass same cycle ---");
        do_reset();
        RF_data[0] = 32'hAAAA_AAAA;
        RF_data[1] = 32'hBBBB_BBBB;

        // rs1 not ready, rs2 ready
        // CDB fires same cycle as dispatch : dispatch_cdb_match sets ready_1=1
        IN_instr.valid     = 1;
        IN_instr.sqN       = 50;
        IN_instr.pc        = 32'h0000_0500;
        IN_instr.oper      = oper_t'(OR);
        IN_instr.rs1_tag   = tag_t'(30);
        IN_instr.rs2_tag   = tag_t'(31);
        IN_instr.rd_tag    = tag_t'(32);
        IN_instr.is_imm    = 0;
        IN_instr.jump_type = NOT_JUMP;
        IN_instr.br_type   = NOT_BRANCH;
        IN_instr.u_type    = NOT_U;
        tag_ready[0]       = 0;
        tag_ready[1]       = 1;
        CDB_valid[0]       = 1;
        CDB_tag[0]         = tag_t'(30);

        // Cycle 1: dispatch + CDB snoop : entry stored with ready_1=1, ready_2=1
        wait_cyc(1);
        IN_instr     = '0;
        CDB_valid[0] = 0;
        CDB_tag[0]   = '0;
        // RF now holds the value that was on CDB
        RF_data[0]   = 32'hF00D_F00D;
        print_state("S6 after entering into queue");

        // Cycle 2: both operands ready : issues, RF_data[0] read as operand1
        wait_cyc(1);
        print_state("S6 after issue");
        chk("S6: issued with same-cycle CDB", OUT_instr.valid    == 1);
        chk("S6: op1 from RF",               OUT_instr.operand1 == 32'hF00D_F00D);
    endtask

    // ===========================================================
    //  S7: Priority - ready entry issues first
    // ===========================================================
    task automatic s7_priority();
        $display("\n--- S7: Priority (ready issues first) ---");
        do_reset();
        RF_data[0] = 32'h0001_0001;
        RF_data[1] = 32'h0002_0002;

        // Entry A: stalled on rs2
        dispatch(60, 32'h0000_0600, oper_t'(XOR),
                 tag_t'(40), tag_t'(41), tag_t'(42),
                 '0, 0, NOT_JUMP, NOT_BRANCH, NOT_U, 1, 0);

        // Entry B: both ready — should issue before A
        dispatch(61, 32'h0000_0604, oper_t'(ADD),
                 tag_t'(43), tag_t'(44), tag_t'(45),
                 '0, 0, NOT_JUMP, NOT_BRANCH, NOT_U, 1, 1);

        wait_cyc(1);
        chk("S7: ready entry B issues first", OUT_instr.valid == 1 && OUT_instr.sqN == 61);

        // Wake up A — CDB broadcasts rs2 tag, RF updated same cycle
        // Issue happens this same clock edge
        CDB_valid[0] = 1;
        CDB_tag[0]   = tag_t'(41);
        RF_data[1]   = 32'hDEAD_DEAD;
        wait_cyc(1);
        CDB_valid[0] = 0;
        CDB_tag[0]   = '0;
        chk("S7: entry A issues after wakeup", OUT_instr.valid == 1 && OUT_instr.sqN == 60);
    endtask

    // ===========================================================
    //  S8: Queue Full / OUT_busy
    // ===========================================================
    task automatic s8_queue_full();
        $display("\n--- S8: Queue full / OUT_busy ---");
        do_reset();

        // Fill queue — all stalled on rs2
        // OUT_busy is (tail == DEPTH-1), 
        for (int i = 0; i < DEPTH; i++) begin
            IN_instr.valid      = 1;
            IN_instr.sqN        = sqN_t'(70+i);
            IN_instr.pc         = pc_t'(32'h700 + i*4);
            IN_instr.oper       = oper_t'(ADD);
            IN_instr.rs1_tag    = tag_t'(50+i);
            IN_instr.rs2_tag    = tag_t'(60+i);
            IN_instr.rd_tag     = tag_t'(70+i);
            IN_instr.imm        = '0;
            IN_instr.is_imm     = 0;
            IN_instr.jump_type  = NOT_JUMP;
            IN_instr.br_type    = NOT_BRANCH;
            IN_instr.u_type     = NOT_U;
            tag_ready[0]        = 1;
            tag_ready[1]        = 0;
            @(posedge clk);
            // Check busy on last iteration before #1 settles tail
            if (i == DEPTH-2) begin
                #1;
                // tail is now DEPTH-2, one more dispatch will make it DEPTH-1
            end
        end
        #1;
        IN_instr     = '0;
        tag_ready[0] = 0;
        chk("S8: OUT_busy=1", OUT_busy == 1);

        // Wake up entries one by one via CDB
        for (int i = 0; i < DEPTH; i++) begin
            CDB_valid[0] = 1;
            CDB_tag[0]   = tag_t'(60+i);
            wait_cyc(1);
            CDB_valid[0] = 0;
            CDB_tag[0]   = '0;
        end

        wait_cyc(DEPTH + 2);
        chk("S8: OUT_busy=0 after drain", OUT_busy == 0);
    endtask

    // ===========================================================
    //  S9: Flush - keep older sqN, squash newer
    // ===========================================================
    task automatic s9_flush();
        $display("\n--- S9: Flush squash ---");
        do_reset();
        RF_data[0] = 32'hAABB_CCDD;
        RF_data[1] = 32'h1122_3344;

        dispatch(80, 32'h0000_0800, oper_t'(ADD),
                 tag_t'(80), tag_t'(81), tag_t'(82),
                 '0, 0, NOT_JUMP, NOT_BRANCH, NOT_U, 1, 1);

        dispatch(81, 32'h0000_0804, oper_t'(SUB),
                 tag_t'(83), tag_t'(84), tag_t'(85),
                 '0, 0, NOT_JUMP, NOT_BRANCH, NOT_U, 1, 1);

        // flush_sqN=80: keep sqN<=80, squash sqN>80
        flush     = 1;
        flush_sqN = sqN_t'(80);
        print_state("S9 before flush clock");
        wait_cyc(1);
        flush = 0;
        chk("S9: sqN=80 kept and issued", OUT_instr.valid == 1 && OUT_instr.sqN == 80);

        wait_cyc(1);
        print_state("S9 after wait");
        chk("S9: sqN=81 squashed", OUT_instr.valid == 0);
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
        chk("S10: valid=0 after flush", OUT_instr.valid == 0);
        chk("S10: busy=0",              OUT_busy        == 0);
    endtask

    // ===========================================================
    //  S11: JAL
    // ===========================================================
    task automatic s11_jal();
        $display("\n--- S11: JAL (op1=PC, op2=4) ---");
        do_reset();
        RF_data[0] = 32'hDEAD_DEAD;
        RF_data[1] = 32'hBEEF_BEEF;

        dispatch(90, 32'hABCD_1000, oper_t'(ADD),
                 tag_t'(0), tag_t'(0), tag_t'(1),
                 32'h0000_0010, 0,
                 JAL, NOT_BRANCH, NOT_U, 0, 0);

        wait_cyc(1);
        chk("S11: valid=1",       OUT_instr.valid    == 1);
        chk("S11: op1=PC",        OUT_instr.operand1 == 32'hABCD_1000);
        chk("S11: op2=4",         OUT_instr.operand2 == 32'd4);
        chk("S11: jump_type=JAL", OUT_jump_type      == JAL);
        chk("S11: OUT_pc=PC",     OUT_pc             == 32'hABCD_1000);
    endtask

    // ===========================================================
    //  S12: JALR
    // ===========================================================
    task automatic s12_jalr();
        $display("\n--- S12: JALR (op1=PC, op2=4) ---");
        do_reset();

        dispatch(100, 32'h5000_0000, oper_t'(ADD),
                 tag_t'(0), tag_t'(0), tag_t'(2),
                 32'h0000_0020, 0,
                 JALR, NOT_BRANCH, NOT_U, 0, 0);

        wait_cyc(1);
        chk("S12: valid=1",        OUT_instr.valid    == 1);
        chk("S12: op1=PC",         OUT_instr.operand1 == 32'h5000_0000);
        chk("S12: op2=4",          OUT_instr.operand2 == 32'd4);
        chk("S12: jump_type=JALR", OUT_jump_type      == JALR);
    endtask

    // ===========================================================
    //  S13: AUIPC
    // ===========================================================
    task automatic s13_auipc();
        $display("\n--- S13: AUIPC (op1=PC, op2=imm) ---");
        do_reset();
        RF_data[0] = 32'hDEAD_0000;

        dispatch(110, 32'h3000_0000, oper_t'(ADD),
                 tag_t'(5), tag_t'(6), tag_t'(7),
                 32'h0001_0000, 0,
                 NOT_JUMP, NOT_BRANCH, AUIPC, 1, 1);

        wait_cyc(1);
        chk("S13: valid=1", OUT_instr.valid    == 1);
        chk("S13: op1=PC",  OUT_instr.operand1 == 32'h3000_0000);
        chk("S13: op2=imm", OUT_instr.operand2 == 32'h0001_0000);
    endtask

    // ===========================================================
    //  S14: LUI
    // ===========================================================
    task automatic s14_lui();
        $display("\n--- S14: LUI (op2=imm) ---");
        do_reset();
        RF_data[0] = 32'h9999_8888;
        RF_data[1] = 32'h7777_6666;

        dispatch(120, 32'h4000_0000, oper_t'(COPY),
                 tag_t'(8), tag_t'(9), tag_t'(10),
                 32'hABCD_0000, 0,
                 NOT_JUMP, NOT_BRANCH, LUI, 1, 1);

        wait_cyc(1);
        chk("S14: valid=1", OUT_instr.valid    == 1);
        chk("S14: op2=imm", OUT_instr.operand2 == 32'hABCD_0000);
    endtask

    // ===========================================================
    //  S15: Branch BEQ taken
    // ===========================================================
    task automatic s15_beq_taken();
        $display("\n--- S15: BEQ taken ---");
        do_reset();
        RF_data[0] = 32'h1234_5678;
        RF_data[1] = 32'h1234_5678;

        dispatch(130, 32'h0000_0600, oper_t'(ADD),
                 tag_t'(11), tag_t'(12), tag_t'(13),
                 '0, 0, NOT_JUMP, BEQ, NOT_U, 1, 1);

        print_state("S15 after dispatch");
        wait_cyc(1);
        print_state("S15 after wait");
        chk("S15: BEQ taken=1", OUT_br_taken == 1);
    endtask

    // ===========================================================
    //  S16: Branch BNE not taken (rs1 == rs2)
    // ===========================================================
    task automatic s16_bne_not_taken();
        $display("\n--- S16: BNE not taken ---");
        do_reset();
        RF_data[0] = 32'hAAAA_AAAA;
        RF_data[1] = 32'hAAAA_AAAA;

        dispatch(140, 32'h0000_0700, oper_t'(ADD),
                 tag_t'(14), tag_t'(15), tag_t'(16),
                 '0, 0, NOT_JUMP, BNE, NOT_U, 1, 1);

        wait_cyc(1);
        chk("S16: BNE not taken=0", OUT_br_taken == 0);
    endtask

    // ===========================================================
    //  S17: Back-to-back throughput
    // ===========================================================
    task automatic s17_back_to_back();
        $display("\n--- S17: Back-to-back throughput ---");
        do_reset();
        RF_data[0] = 32'h1111_0000;
        RF_data[1] = 32'h2222_0000;

        for (int i = 0; i < 4; i++) begin
            dispatch(sqN_t'(50+i), pc_t'(32'h800 + i*4), oper_t'(ADD),
                     tag_t'(i), tag_t'(i+1), tag_t'(i+2),
                     '0, 0, NOT_JUMP, NOT_BRANCH, NOT_U, 1, 1);
            wait_cyc(1);
            chk($sformatf("S17: cycle %0d sqN=%0d issued", i, 50+i),
                OUT_instr.valid == 1 && OUT_instr.sqN == sqN_t'(50+i));
        end
    endtask

    // ===========================================================
    //  S18: Dispatch dropped when OUT_busy
    // ===========================================================
    task automatic s18_dispatch_stall();
        $display("\n--- S18: Dispatch dropped when busy ---");
        do_reset();

        // Fill queue — all stalled on rs2
        // Check OUT_busy immediately after last entry clocked in
        for (int i = 0; i < DEPTH; i++) begin
            IN_instr.valid      = 1;
            IN_instr.sqN        = sqN_t'(160+i);
            IN_instr.pc         = pc_t'(32'hA00 + i*4);
            IN_instr.oper       = oper_t'(ADD);
            IN_instr.rs1_tag    = tag_t'(i+10);
            IN_instr.rs2_tag    = tag_t'(i+20);
            IN_instr.rd_tag     = tag_t'(i+30);
            IN_instr.imm        = '0;
            IN_instr.is_imm     = 0;
            IN_instr.jump_type  = NOT_JUMP;
            IN_instr.br_type    = NOT_BRANCH;
            IN_instr.u_type     = NOT_U;
            tag_ready[0]        = 1;
            tag_ready[1]        = 0;
            @(posedge clk);
        end
        #1;
        IN_instr     = '0;
        tag_ready[0] = 0;
        chk("S18: OUT_busy=1", OUT_busy == 1);

        // Extra dispatch when full — silently dropped by DUT
        dispatch(sqN_t'(200), pc_t'(32'hFFF), oper_t'(ADD),
                 tag_t'(63), tag_t'(62), tag_t'(61),
                 '0, 0, NOT_JUMP, NOT_BRANCH, NOT_U, 1, 1);

        wait_cyc(1);
        chk("S18: dropped sqN=200 not issued",
            !(OUT_instr.valid == 1 && OUT_instr.sqN == sqN_t'(200)));
    endtask

    // ===========================================================
    //  S19: Multi-port CDB wakeup
    // ===========================================================
    task automatic s19_multi_cdb();
        $display("\n--- S19: Multi-port CDB (rs1+rs2 same cycle) ---");
        do_reset();
        RF_data[0] = 32'h0;
        RF_data[1] = 32'h0;

        // Dispatch with both operands not ready
        dispatch(10, 32'h0000_0B00, oper_t'(ADD),
                 tag_t'(40), tag_t'(41), tag_t'(42),
                 '0, 0, NOT_JUMP, NOT_BRANCH, NOT_U, 0, 0);

        wait_cyc(1);
        chk("S19: stalled", OUT_instr.valid == 0);

        // Both CDB ports fire same cycle — RF updated same cycle
        // Issue happens this same clock edge
        CDB_valid[0] = 1; CDB_tag[0] = tag_t'(40);
        CDB_valid[1] = 1; CDB_tag[1] = tag_t'(41);
        RF_data[0]   = 32'hAA00_BB11;
        RF_data[1]   = 32'hCC22_DD33;
        wait_cyc(1);
        CDB_valid[0] = 0; CDB_valid[1] = 0;
        CDB_tag[0]   = '0; CDB_tag[1]  = '0;
        print_state("S19 after issue — happened this cycle");
        chk("S19: issued after dual CDB", OUT_instr.valid == 1);
        chk("S19: sqN=10",               OUT_instr.sqN   == 10);
    endtask

    // ===========================================================
    //  S20: Flush then dispatch new
    // ===========================================================
    task automatic s20_flush_then_dispatch();
        $display("\n--- S20: Flush then dispatch fresh ---");
        do_reset();
        RF_data[0] = 32'hF0F0_F0F0;
        RF_data[1] = 32'h0F0F_0F0F;

        dispatch(18, 32'h0000_0C00, oper_t'(AND),
                 tag_t'(50), tag_t'(51), tag_t'(52),
                 '0, 0, NOT_JUMP, NOT_BRANCH, NOT_U, 1, 1);

        // flush_sqN=17: sqN=18 is newer : squashed
        flush     = 1;
        flush_sqN = sqN_t'(17);
        wait_cyc(1);
        flush = 0;
        chk("S20: flushed entry not issued", OUT_instr.valid == 0);

        // Fresh dispatch after flush — should issue normally
        dispatch(19, 32'h0000_0D00, oper_t'(OR),
                 tag_t'(53), tag_t'(54), tag_t'(55),
                 '0, 0, NOT_JUMP, NOT_BRANCH, NOT_U, 1, 1);

        wait_cyc(1);
        chk("S20: new entry issued", OUT_instr.valid == 1 && OUT_instr.sqN == 19);
    endtask

    // ===========================================================
    //  Main
    // ===========================================================
    initial begin
        $display("=========================================");
        $display("  ALU Issue Buffer — Full Testbench");
        $display("  DEPTH=%0d  ISSUE_WIDTH=%0d  XLEN=%0d",
                  DEPTH, IW, XLEN);
        $display("=========================================");

        s1_reset();
        s2_basic();
        s3_immediate();
        s4_cdb_wakeup_rs1();
        s5_cdb_wakeup_rs2();
        s6_cdb_same_cycle();
        s7_priority();
        s8_queue_full();
        s9_flush();
        s10_flush_empty();
        s11_jal();
        s12_jalr();
        s13_auipc();
        s14_lui();
        s15_beq_taken();
        s16_bne_not_taken();
        s17_back_to_back();
        s18_dispatch_stall();
        s19_multi_cdb();
        s20_flush_then_dispatch();

        $display("\n=========================================");
        $display("  PASSED: %0d  |  FAILED: %0d", pass_cnt, fail_cnt);
        $display("=========================================");
        if (fail_cnt == 0)
            $display("  *** ALL TESTS PASSED ***");
        else
            $display("  *** SOME TESTS FAILED <3> ***");

        $finish;
    end

    // Watchdog
    initial begin
        #500_000;
        $display("[TIMEOUT] Limit reached!");
        $finish;
    end

endmodule