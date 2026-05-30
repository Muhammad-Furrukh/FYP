`include "include_pkg.sv"

module tb_lsu;

    // ════════════════════════════════════════════════════
    // 0. DUT ports
    // ════════════════════════════════════════════════════
    logic                clk, clk_m, rst, rst_m;
    lsu_dispatch_instr_t dispatch_instr [NUM_AGU_FU];
    agu_out_t            agu_out        [NUM_AGU_FU];
    sqN_t                commit_sqN     [COMMIT_WIDTH];
    logic                comm_valid     [COMMIT_WIDTH];
    logic                flush;
    sqN_t                flush_sqN;
    logic                OUT_busy;
    CDB_line_t           OUT_cdb        [NUM_AGU_FU];

    lsu dut (.*);

    // ════════════════════════════════════════════════════
    // 1. Clocks
    // ════════════════════════════════════════════════════
    initial clk = 0;   always #5  clk   = ~clk;
    initial clk_m = 0; always #20 clk_m = ~clk_m;

    int pass_count = 0, fail_count = 0;

    // ════════════════════════════════════════════════════
    // 2. Helpers
    // ════════════════════════════════════════════════════
    task tick();        @(posedge clk); #1; endtask
    task tick_n(int n); repeat(n) tick(); endtask

    task clear_inputs();
        for (int i = 0; i < NUM_AGU_FU; i++) begin
            dispatch_instr[i] = '{default: '0};
            agu_out[i].valid  = 0;
        end
        for (int i = 0; i < COMMIT_WIDTH; i++) begin
            commit_sqN[i] = '0;
            comm_valid[i] = 0;
        end
        flush     = 0;
        flush_sqN = '0;
    endtask

    task do_reset();
        clk = 0; clk_m = 0;
        rst = 1; rst_m = 1;
        clear_inputs();
        tick_n(5);
        rst = 0; rst_m = 0;
        tick_n(2);
    endtask

    task dispatch_store(sqN_t sqn, tag_t rs1_tag, imm_t imm);
        dispatch_instr[0].valid   = 1;
        dispatch_instr[0].sqN     = sqn;
        dispatch_instr[0].oper    = lsu_oper_t'(LSU_SW);
        dispatch_instr[0].rs1_tag = rs1_tag;
        dispatch_instr[0].rs2_tag = '0;
        dispatch_instr[0].rd_tag  = '0;
        dispatch_instr[0].imm     = imm;
        dispatch_instr[0].is_imm  = 1;
        tick();
        dispatch_instr[0].valid = 0;
    endtask

    task dispatch_store_slot(int slot, sqN_t sqn, tag_t rs1_tag, imm_t imm);
        dispatch_instr[slot].valid   = 1;
        dispatch_instr[slot].sqN     = sqn;
        dispatch_instr[slot].oper    = lsu_oper_t'(LSU_SW);
        dispatch_instr[slot].rs1_tag = rs1_tag;
        dispatch_instr[slot].rs2_tag = '0;
        dispatch_instr[slot].rd_tag  = '0;
        dispatch_instr[slot].imm     = imm;
        dispatch_instr[slot].is_imm  = 1;
        tick();
        dispatch_instr[slot].valid = 0;
    endtask

    task dispatch_load(sqN_t sqn, tag_t rs1_tag, tag_t rd_tag, imm_t imm);
        dispatch_instr[0].valid   = 1;
        dispatch_instr[0].sqN     = sqn;
        dispatch_instr[0].oper    = lsu_oper_t'(LSU_LW);
        dispatch_instr[0].rs1_tag = rs1_tag;
        dispatch_instr[0].rs2_tag = '0;
        dispatch_instr[0].rd_tag  = rd_tag;
        dispatch_instr[0].imm     = imm;
        dispatch_instr[0].is_imm  = 1;
        tick();
        dispatch_instr[0].valid = 0;
    endtask

    task agu_store_wb(sqN_t sqn, logic [31:0] addr, logic [31:0] data);
        agu_out[0].valid       = 1;
        agu_out[0].sqN         = sqn;
        agu_out[0].target_addr = addr;
        agu_out[0].store_data  = data;
        agu_out[0].req_type    = STORE;
        agu_out[0].data_size   = WORD;
        agu_out[0].is_unsigned = 0;
        tick();
        agu_out[0].valid = 0;
    endtask

    task agu_store_wb_slot(int slot, sqN_t sqn, logic [31:0] addr, logic [31:0] data);
        agu_out[slot].valid       = 1;
        agu_out[slot].sqN         = sqn;
        agu_out[slot].target_addr = addr;
        agu_out[slot].store_data  = data;
        agu_out[slot].req_type    = STORE;
        agu_out[slot].data_size   = WORD;
        agu_out[slot].is_unsigned = 0;
        tick();
        agu_out[slot].valid = 0;
    endtask

    task agu_load_wb(sqN_t sqn, logic [31:0] addr);
        agu_out[0].valid       = 1;
        agu_out[0].sqN         = sqn;
        agu_out[0].target_addr = addr;
        agu_out[0].store_data  = '0;
        agu_out[0].req_type    = LOAD;
        agu_out[0].data_size   = WORD;
        agu_out[0].is_unsigned = 0;
        tick();
        agu_out[0].valid = 0;
    endtask

    task commit(sqN_t sqn);
        commit_sqN[0] = sqn;
        comm_valid[0] = 1;
        tick();
        commit_sqN[0] = '0;
        comm_valid[0] = 0;
    endtask

    task commit2(sqN_t sqn0, sqN_t sqn1);
        commit_sqN[0] = sqn0;
        commit_sqN[1] = sqn1;
        comm_valid[0] = 1;
        comm_valid[1] = 1;
        tick();
        commit_sqN[0] = '0;
        commit_sqN[1] = '0;
        comm_valid[0] = 0;
        comm_valid[1] = 0;
    endtask

    task chk(string name, logic got, logic exp);
        if (got === exp) begin
            $display("  PASS  %s", name);
            pass_count++;
        end else begin
            $display("  FAIL  %s  got=%0b exp=%0b", name, got, exp);
            fail_count++;
        end
    endtask

    task chk_data(string name, logic [31:0] got, logic [31:0] exp);
        if (got === exp) begin
            $display("  PASS  %s  (=0x%08h)", name, got);
            pass_count++;
        end else begin
            $display("  FAIL  %s  got=0x%08h exp=0x%08h", name, got, exp);
            fail_count++;
        end
    endtask

    task automatic wait_cdb(int port, tag_t exp_tag, logic [31:0] exp_data,
                            int timeout, string name);
        logic found;
        found = 0;
        for (int c = 0; c < timeout; c++) begin
            tick();
            if (OUT_cdb[port].valid && OUT_cdb[port].tag == exp_tag) begin
                chk_data(name, OUT_cdb[port].result, exp_data);
                found = 1;
                break;
            end
        end
        if (!found) begin
            $display("  FAIL  %s — CDB tag=%0d never appeared within %0d cycles",
                     name, exp_tag, timeout);
            fail_count++;
        end
    endtask

    // Wait until STB is fully drained (all entries invalid)
    task wait_stb_drain(int timeout);
        for (int c = 0; c < timeout; c++) begin
            tick();
            begin
                logic any;
                any = 0;
                for (int i = 0; i < STOREB_SIZE; i++)
                    if (dut.u_stb.entries[i].valid) any = 1;
                if (!any) break;
            end
        end
    endtask


    // ════════════════════════════════════════════════════
    // Original Tests (T1-T8)
    // ════════════════════════════════════════════════════

    task test_store_basic();
        $display("\n[T1] Basic store word to 0x100");
        do_reset();
        dispatch_store(.sqn(7'd1), .rs1_tag(6'd1), .imm(32'h100));
        agu_store_wb  (.sqn(7'd1), .addr(32'h100), .data(32'hDEADBEEF));
        tick();
        commit(7'd1);
        tick_n(15);
        chk("wr_req_held valid",
            dut.u_dmem.wr_req_held[0].valid, 1'b1);
        chk_data("store data in DMEM",
            dut.u_dmem.wr_req_held[0].data, 32'hDEADBEEF);
    endtask

    task test_load_from_memory();
        $display("\n[T2] Basic load from memory (no STB alias)");
        do_reset();
        fork
            begin
                dispatch_store(.sqn(7'd1), .rs1_tag(6'd1), .imm(32'h300));
                agu_store_wb  (.sqn(7'd1), .addr(32'h300), .data(32'hBEEFCAFE));
                commit(7'd1);
                tick_n(25);
                dispatch_load(.sqn(7'd2), .rs1_tag(6'd2),
                              .rd_tag(6'd7), .imm(32'h300));
                agu_load_wb  (.sqn(7'd2), .addr(32'h300));
                tick();
            end
            wait_cdb(.port(0), .exp_tag(6'd7), .exp_data(32'hBEEFCAFE),
                     .timeout(50), .name("load result from memory"));
        join
    endtask

    task test_stb_forward();
        $display("\n[T3] STB forwarding: store and load resolve to same address");
        do_reset();
        fork
            begin
                dispatch_store(.sqn(7'd1), .rs1_tag(6'd5), .imm(32'h400));
                agu_store_wb  (.sqn(7'd1), .addr(32'h400), .data(32'hCAFEBABE));
                tick();
                dispatch_load(.sqn(7'd2), .rs1_tag(6'd5),
                              .rd_tag(6'd9), .imm(32'h400));
                agu_load_wb  (.sqn(7'd2), .addr(32'h400));
                tick();
            end
            wait_cdb(.port(0), .exp_tag(6'd9), .exp_data(32'hCAFEBABE),
                     .timeout(20), .name("STB forward result"));
        join
        chk("no memory read issued for forwarded load",
            dut.u_ldb.mem_req[0].valid, 1'b0);
    endtask

    task test_stall_then_forward();
        $display("\n[T4] Stall then forward: load AGU wb before store AGU wb");
        do_reset();
        dispatch_store(.sqn(7'd1), .rs1_tag(6'd3), .imm(32'h500));
        tick();
        dispatch_load(.sqn(7'd2), .rs1_tag(6'd3),
                      .rd_tag(6'd11), .imm(32'h500));
        agu_load_wb  (.sqn(7'd2), .addr(32'h500));
        chk("load stalled: older store addr_data_valid=0",
            dut.u_ldb.stall[0], 1'b1);
        chk("no mem_req while stalled",
            dut.u_ldb.mem_req[0].valid, 1'b0);
        fork
            agu_store_wb(.sqn(7'd1), .addr(32'h500), .data(32'h12345678));
            wait_cdb(.port(0), .exp_tag(6'd11), .exp_data(32'h12345678),
                     .timeout(20), .name("forwarded after stall resolved"));
        join
    endtask

    task test_no_alias_diff_addr();
        $display("\n[T5] No alias: store addr 0x100 != load addr 0x200");
        do_reset();
        dispatch_store(.sqn(7'd1), .rs1_tag(6'd1), .imm(32'h100));
        agu_store_wb  (.sqn(7'd1), .addr(32'h100), .data(32'hAAAAAAAA));
        tick();
        dispatch_load(.sqn(7'd2), .rs1_tag(6'd2),
                      .rd_tag(6'd13), .imm(32'h200));
        agu_load_wb  (.sqn(7'd2), .addr(32'h200));
        chk("no stall on different address",
            dut.u_ldb.stall[0], 1'b0);
        chk("mem_req issued for non-aliased load",
            dut.u_ldb.mem_req[0].valid, 1'b1);
        tick();
    endtask

    task test_flush();
        $display("\n[T6] Flush squashes speculative entries");
        do_reset();
        dispatch_store(.sqn(7'd5), .rs1_tag(6'd1), .imm(32'h600));
        dispatch_load (.sqn(7'd6), .rs1_tag(6'd1),
                       .rd_tag(6'd15), .imm(32'h600));
        tick_n(2);
        flush     = 1;
        flush_sqN = 7'd4;
        tick();
        flush = 0;
        tick_n(2);
        begin
            logic any_valid;
            any_valid = 0;
            for (int i = 0; i < STOREB_SIZE; i++)
                if (dut.u_stb.entries[i].valid) any_valid = 1;
            chk("STB empty after flush", any_valid, 1'b0);
        end
        begin
            logic any_valid;
            any_valid = 0;
            for (int i = 0; i < LOADB_SIZE; i++)
                if (dut.u_ldb.entries[i].valid) any_valid = 1;
            chk("LDB empty after flush", any_valid, 1'b0);
        end
    endtask

    task test_forward_from_committed();
        $display("\n[T7] Forward from committed (not yet drained) STB entry");
        do_reset();
        fork
            begin
                dispatch_store(.sqn(7'd1), .rs1_tag(6'd4), .imm(32'h700));
                agu_store_wb  (.sqn(7'd1), .addr(32'h700), .data(32'hFEEDF00D));
                tick();
                commit(7'd1);
                tick_n(2);
                dispatch_load(.sqn(7'd2), .rs1_tag(6'd4),
                              .rd_tag(6'd17), .imm(32'h700));
                agu_load_wb  (.sqn(7'd2), .addr(32'h700));
                tick();
            end
            wait_cdb(.port(0), .exp_tag(6'd17), .exp_data(32'hFEEDF00D),
                     .timeout(10), .name("forward from committed STB entry"));
        join
    endtask

    task test_partial_overlap_no_forward();
        $display("\n[T8] Partial overlap: byte store does not cover word load");
        do_reset();
        dispatch_instr[0].valid      = 1;
        dispatch_instr[0].sqN        = 7'd1;
        dispatch_instr[0].oper       = lsu_oper_t'(LSU_SB);
        dispatch_instr[0].rs1_tag    = 6'd1;
        dispatch_instr[0].rs2_tag    = '0;
        dispatch_instr[0].rd_tag     = '0;
        dispatch_instr[0].imm        = 32'h800;
        dispatch_instr[0].is_imm     = 1;
        tick();
        dispatch_instr[0].valid = 0;
        agu_out[0].valid       = 1;
        agu_out[0].sqN         = 7'd1;
        agu_out[0].target_addr = 32'h800;
        agu_out[0].store_data  = 32'h000000AB;
        agu_out[0].req_type    = STORE;
        agu_out[0].data_size   = BYTE;
        agu_out[0].is_unsigned = 0;
        tick();
        agu_out[0].valid = 0;
        tick();
        dispatch_load(.sqn(7'd2), .rs1_tag(6'd1),
                      .rd_tag(6'd19), .imm(32'h800));
        agu_load_wb  (.sqn(7'd2), .addr(32'h800));
        chk("no stall on partial-overlap store",
            dut.u_ldb.stall[0], 1'b0);
        chk("mem_req issued (partial coverage, no forward)",
            dut.u_ldb.mem_req[0].valid, 1'b1);
        tick();
    endtask


    // ════════════════════════════════════════════════════
    // T9: Two consecutive stores to the same address
    //
    //     Store A drains via CDC, store B is queued behind
    //     it. The CDC handshake for A must complete before
    //     B is presented, and B must use B's data not A's.
    //     Final memory read must return B's value.
    // ════════════════════════════════════════════════════
    task test_consecutive_stores_same_addr();
        $display("\n[T9] Two consecutive stores to same address — CDC ordering");
        do_reset();

        // Store A: sqN=1, data=0x11111111 to 0xA00
        dispatch_store(.sqn(7'd1), .rs1_tag(6'd1), .imm(32'hA00));
        agu_store_wb  (.sqn(7'd1), .addr(32'hA00), .data(32'h11111111));
        commit(7'd1);

        // Store B: sqN=2, data=0x22222222 to 0xA00 — back to back
        dispatch_store(.sqn(7'd2), .rs1_tag(6'd1), .imm(32'hA00));
        agu_store_wb  (.sqn(7'd2), .addr(32'hA00), .data(32'h22222222));
        commit(7'd2);

        // Wait for both CDC handshakes to complete
        tick_n(30);

        // Load from 0xA00 — STB is drained, must read from memory
        fork
            begin
                dispatch_load(.sqn(7'd3), .rs1_tag(6'd1),
                              .rd_tag(6'd20), .imm(32'hA00));
                agu_load_wb  (.sqn(7'd3), .addr(32'hA00));
                tick();
            end
            wait_cdb(.port(0), .exp_tag(6'd20), .exp_data(32'h22222222),
                     .timeout(50), .name("consecutive stores: final value is B's"));
        join
    endtask


    // ════════════════════════════════════════════════════
    // T10: Two simultaneous stores to different addresses
    //
    //     Both drain ports fire at once. Both CDC handshakes
    //     must complete independently without corrupting
    //     each other. Verify both values in memory.
    // ════════════════════════════════════════════════════
    task test_simultaneous_stores_diff_addr();
        $display("\n[T10] Simultaneous stores to different addresses — both ports");
        do_reset();

        // Dispatch both stores on the same cycle if NUM_AGU_FU >= 2,
        // otherwise dispatch sequentially
        dispatch_instr[0].valid   = 1; dispatch_instr[0].sqN = 7'd1;
        dispatch_instr[0].oper    = lsu_oper_t'(LSU_SW);
        dispatch_instr[0].rs1_tag = 6'd1; dispatch_instr[0].imm = 32'hB00;
        dispatch_instr[0].is_imm  = 1;
        if (NUM_AGU_FU > 1) begin
            dispatch_instr[1].valid   = 1; dispatch_instr[1].sqN = 7'd2;
            dispatch_instr[1].oper    = lsu_oper_t'(LSU_SW);
            dispatch_instr[1].rs1_tag = 6'd2; dispatch_instr[1].imm = 32'hC00;
            dispatch_instr[1].is_imm  = 1;
        end
        tick();
        for (int i = 0; i < NUM_AGU_FU; i++) dispatch_instr[i].valid = 0;

        if (NUM_AGU_FU == 1) begin
            dispatch_store(.sqn(7'd2), .rs1_tag(6'd2), .imm(32'hC00));
        end

        // AGU writebacks
        agu_store_wb(.sqn(7'd1), .addr(32'hB00), .data(32'hAAAA0001));
        agu_store_wb(.sqn(7'd2), .addr(32'hC00), .data(32'hBBBB0002));

        // Commit both
        commit2(7'd1, 7'd2);

        // Wait for both CDC handshakes
        tick_n(40);

        // Load from both addresses
        fork
            begin
                dispatch_load(.sqn(7'd3), .rs1_tag(6'd1),
                              .rd_tag(6'd21), .imm(32'hB00));
                agu_load_wb(.sqn(7'd3), .addr(32'hB00));
                tick();
            end
            wait_cdb(.port(0), .exp_tag(6'd21), .exp_data(32'hAAAA0001),
                     .timeout(50), .name("simultaneous store A value correct"));
        join

        tick_n(5);

        fork
            begin
                dispatch_load(.sqn(7'd4), .rs1_tag(6'd2),
                              .rd_tag(6'd22), .imm(32'hC00));
                agu_load_wb(.sqn(7'd4), .addr(32'hC00));
                tick();
            end
            wait_cdb(.port(0), .exp_tag(6'd22), .exp_data(32'hBBBB0002),
                     .timeout(50), .name("simultaneous store B value correct"));
        join
    endtask


    // ════════════════════════════════════════════════════
    // T11: Load during active CDC write handshake
    //
    //     Store A commits and starts draining (CDC in flight).
    //     Before the handshake completes, a load to the same
    //     address arrives. The STB entry is still valid during
    //     the handshake so the load must forward from STB,
    //     not go to memory (which hasn't been written yet).
    // ════════════════════════════════════════════════════
    task test_load_during_cdc_handshake();
        $display("\n[T11] Load arrives while store CDC handshake is in flight");
        do_reset();

        dispatch_store(.sqn(7'd1), .rs1_tag(6'd1), .imm(32'hD00));
        agu_store_wb  (.sqn(7'd1), .addr(32'hD00), .data(32'hC0FFEE00));
        commit(7'd1);

        // Only wait 1 cycle — CDC handshake is in progress, STB entry still live
        tick_n(1);

        fork
            begin
                dispatch_load(.sqn(7'd2), .rs1_tag(6'd1),
                              .rd_tag(6'd23), .imm(32'hD00));
                agu_load_wb  (.sqn(7'd2), .addr(32'hD00));
                tick();
            end
            // Must forward from STB — memory not written yet
            wait_cdb(.port(0), .exp_tag(6'd23), .exp_data(32'hC0FFEE00),
                     .timeout(20), .name("forward from STB during CDC handshake"));
        join
    endtask


    // ════════════════════════════════════════════════════
    // T12: Consecutive loads to same address
    //
    //     Two loads to 0xE00, no aliased store.
    //     Both must go to memory independently and return
    //     the correct value. Tests the read CDC path for
    //     the same back-to-back race as T9 tests writes.
    // ════════════════════════════════════════════════════
    task test_consecutive_loads_same_addr();
        $display("\n[T12] Consecutive loads to same address — read CDC ordering");
        do_reset();

        // Seed memory with a known value via a committed store
        dispatch_store(.sqn(7'd1), .rs1_tag(6'd1), .imm(32'hE00));
        agu_store_wb  (.sqn(7'd1), .addr(32'hE00), .data(32'hFACEB00C));
        commit(7'd1);
        wait_stb_drain(40);  // ensure store reaches memory before loads

        // Load 1
        fork
            begin
                dispatch_load(.sqn(7'd2), .rs1_tag(6'd1),
                              .rd_tag(6'd24), .imm(32'hE00));
                agu_load_wb  (.sqn(7'd2), .addr(32'hE00));
                tick();
            end
            wait_cdb(.port(0), .exp_tag(6'd24), .exp_data(32'hFACEB00C),
                     .timeout(50), .name("consecutive load 1 correct"));
        join

        // Load 2 — immediately after load 1, CDC may still be clearing
        fork
            begin
                dispatch_load(.sqn(7'd3), .rs1_tag(6'd1),
                              .rd_tag(6'd25), .imm(32'hE00));
                agu_load_wb  (.sqn(7'd3), .addr(32'hE00));
                tick();
            end
            wait_cdb(.port(0), .exp_tag(6'd25), .exp_data(32'hFACEB00C),
                     .timeout(50), .name("consecutive load 2 correct"));
        join
    endtask


    // ════════════════════════════════════════════════════
    // T13: Flush during active CDC handshake
    //
    //     Store commits (so it must reach memory regardless
    //     of flush) and starts draining. A flush arrives
    //     mid-handshake targeting a later sqN.
    //     The committed store must still appear in memory
    //     after the flush completes.
    // ════════════════════════════════════════════════════
    task test_flush_during_cdc();
        $display("\n[T13] Flush during CDC handshake — committed store must persist");
        do_reset();

        // Committed store sqN=1 starts draining
        dispatch_store(.sqn(7'd1), .rs1_tag(6'd1), .imm(32'hF00));
        agu_store_wb  (.sqn(7'd1), .addr(32'hF00), .data(32'hDEADC0DE));
        commit(7'd1);
        tick_n(1);  // CDC handshake starts, wr_pending rises

        // Speculative store sqN=3 also in STB
        dispatch_store(.sqn(7'd3), .rs1_tag(6'd1), .imm(32'hF04));
        agu_store_wb  (.sqn(7'd3), .addr(32'hF04), .data(32'hBADBADBA));

        // Flush at sqN=2 — squashes sqN=3, but sqN=1 is committed
        flush     = 1;
        flush_sqN = 7'd2;
        tick();
        flush = 0;

        // Wait for CDC to complete for sqN=1
        tick_n(30);

        // Verify sqN=3 was squashed
        begin
            logic found;
            found = 0;
            for (int i = 0; i < STOREB_SIZE; i++)
                if (dut.u_stb.entries[i].valid &&
                    dut.u_stb.entries[i].sqN == 7'd3)
                    found = 1;
            chk("speculative store sqN=3 squashed by flush", found, 1'b0);
        end

        // Verify committed store reached memory
        fork
            begin
                dispatch_load(.sqn(7'd4), .rs1_tag(6'd1),
                              .rd_tag(6'd26), .imm(32'hF00));
                agu_load_wb  (.sqn(7'd4), .addr(32'hF00));
                tick();
            end
            wait_cdb(.port(0), .exp_tag(6'd26), .exp_data(32'hDEADC0DE),
                     .timeout(50), .name("committed store persists after flush"));
        join
    endtask


    // ════════════════════════════════════════════════════
    // T14: sqN wraparound — flush comparison correctness
    //
    //     sqN wraps from 0x7F to 0x00. A committed store
    //     at sqN=0x7E and speculative stores at sqN=0x7F
    //     and sqN=0x00 (post-wrap). Flush at sqN=0x7E
    //     must squash 0x7F and 0x00 but keep 0x7E.
    // ════════════════════════════════════════════════════
    task test_sqn_wraparound_flush();
        $display("\n[T14] sqN wraparound: flush comparison across rollover");
        do_reset();

        // Committed store at sqN=0x7E
        dispatch_store(.sqn(7'h7D), .rs1_tag(6'd1), .imm(32'h1000));
        agu_store_wb  (.sqn(7'h7D), .addr(32'h1000), .data(32'hAAAAAAAA));
        
        // Speculative store at sqN=0x7F
        dispatch_store(.sqn(7'h7F), .rs1_tag(6'd2), .imm(32'h1004));
        agu_store_wb  (.sqn(7'h7F), .addr(32'h1004), .data(32'hBBBBBBBB));

        // Speculative store at sqN=0x00 (wrapped)
        dispatch_store(.sqn(7'h00), .rs1_tag(6'd3), .imm(32'h1008));
        agu_store_wb  (.sqn(7'h00), .addr(32'h1008), .data(32'hCCCCCCCC));

        tick_n(2);

        // Flush at sqN=0x7E — squashes 0x7F and 0x00
        flush     = 1;
        flush_sqN = 7'h7E;
        tick();
        flush = 0;
        tick_n(2);

        begin
            logic found_7f, found_00, found_7d;
            found_7f = 0; found_00 = 0; found_7d = 0;
            for (int i = 0; i < STOREB_SIZE; i++) begin
                if (dut.u_stb.entries[i].valid) begin
                    if (dut.u_stb.entries[i].sqN == 7'h7F) found_7f = 1;
                    if (dut.u_stb.entries[i].sqN == 7'h00) found_00 = 1;
                    if (dut.u_stb.entries[i].sqN == 7'h7D) found_7d = 1;
                end

            end
                
            chk("sqN=0x7F squashed after wraparound flush", found_7f, 1'b0);
            chk("sqN=0x00 squashed after wraparound flush", found_00, 1'b0);
            chk("sqN=0x7D (committed) survives flush",      found_7d, 1'b1);

            commit(7'h7D);
        end
    endtask


    // ════════════════════════════════════════════════════
    // T15: Multiple stores drain in order, not skipping
    //
    //     Three stores to different addresses committed in
    //     order. All three must reach memory in sqN order
    //     with correct data. Tests that the drain prefix-sum
    //     logic picks entries correctly across multiple cycles.
    // ════════════════════════════════════════════════════
    task test_multi_store_drain_order();
        $display("\n[T15] Three stores drain in order with correct data");
        do_reset();

        dispatch_store(.sqn(7'd1), .rs1_tag(6'd1), .imm(32'h1100));
        agu_store_wb  (.sqn(7'd1), .addr(32'h1100), .data(32'h11110000));
        commit(7'd1);

        dispatch_store(.sqn(7'd2), .rs1_tag(6'd1), .imm(32'h1104));
        agu_store_wb  (.sqn(7'd2), .addr(32'h1104), .data(32'h22220000));
        commit(7'd2);

        dispatch_store(.sqn(7'd3), .rs1_tag(6'd1), .imm(32'h1108));
        agu_store_wb  (.sqn(7'd3), .addr(32'h1108), .data(32'h33330000));
        commit(7'd3);

        // Wait for all three to drain
        tick_n(60);

        // Read all three back from memory
        fork
            begin
                dispatch_load(.sqn(7'd4), .rs1_tag(6'd1),
                              .rd_tag(6'd27), .imm(32'h1100));
                agu_load_wb(.sqn(7'd4), .addr(32'h1100));
                tick();
            end
            wait_cdb(.port(0), .exp_tag(6'd27), .exp_data(32'h11110000),
                     .timeout(50), .name("drain order: store 1 correct"));
        join

        tick_n(5);
        fork
            begin
                dispatch_load(.sqn(7'd5), .rs1_tag(6'd1),
                              .rd_tag(6'd28), .imm(32'h1104));
                agu_load_wb(.sqn(7'd5), .addr(32'h1104));
                tick();
            end
            wait_cdb(.port(0), .exp_tag(6'd28), .exp_data(32'h22220000),
                     .timeout(50), .name("drain order: store 2 correct"));
        join

        tick_n(5);
        fork
            begin
                dispatch_load(.sqn(7'd6), .rs1_tag(6'd1),
                              .rd_tag(6'd29), .imm(32'h1108));
                agu_load_wb(.sqn(7'd6), .addr(32'h1108));
                tick();
            end
            wait_cdb(.port(0), .exp_tag(6'd29), .exp_data(32'h33330000),
                     .timeout(50), .name("drain order: store 3 correct"));
        join
    endtask


    // ════════════════════════════════════════════════════
    // T16: STB full — busy asserts, store is held off
    //
    //     Fill the STB to capacity without committing.
    //     str_busy must assert. After a flush clears the
    //     speculative entries, str_busy must deassert.
    // ════════════════════════════════════════════════════
    task test_stb_full_busy();
        $display("\n[T16] STB full: busy asserts then clears after flush");
        do_reset();

        // Fill STB with speculative stores (no commit)
        for (int i = 0; i < STOREB_SIZE; i++) begin
            dispatch_store(.sqn(sqN_t'(i+1)), .rs1_tag(6'd1),
                           .imm(32'h2000 + i*4));
        end
        tick_n(2);
        chk("STB reports busy when full", dut.OUT_busy, 1'b1);

        // Flush all speculative entries
        flush     = 1;
        flush_sqN = 7'd0;  // keep nothing — sqN=0 is before all entries
        tick();
        flush = 0;
        tick_n(2);
        chk("STB not busy after flush clears it", dut.OUT_busy, 1'b0);
    endtask

	task test_program_sequence();
		$display("\n[T17] Program sequence: realistic mixed store/load/flush stream");
		do_reset();

		// Emulate:
		//   sw  x1, 0(x2)     # sqN=1, addr=0x100, data=0xAABBCCDD
		//   sw  x3, 4(x2)     # sqN=2, addr=0x104, data=0x11223344
		//   lw  x4, 0(x2)     # sqN=3, addr=0x100 — forward from sqN=1
		//   lw  x5, 4(x2)     # sqN=4, addr=0x104 — forward from sqN=2
		//   bne x4, x5, ...   # sqN=5 — branch, flush at sqN=5 (taken)
		//   sw  x6, 8(x2)     # sqN=6 — speculative, must be squashed
		//   -- post-flush fetch --
		//   sw  x7, 0(x2)     # sqN=6 re-issue, addr=0x100, data=0xDEADBEEF
		//   lw  x8, 0(x2)     # sqN=7, addr=0x100 — forward from re-issued store
		//   sw  x8, 8(x2)     # sqN=8, addr=0x108 — dependent on load result
		//   lw  x9, 8(x2)     # sqN=9, addr=0x108 — forward from sqN=8

		fork
		    begin
		        // sqN=1: sw 0x100 = 0xAABBCCDD
		        dispatch_store(.sqn(7'd1), .rs1_tag(6'd1), .imm(32'h100));
		        agu_store_wb  (.sqn(7'd1), .addr(32'h100), .data(32'hAABBCCDD));

		        // sqN=2: sw 0x104 = 0x11223344
		        dispatch_store(.sqn(7'd2), .rs1_tag(6'd1), .imm(32'h104));
		        agu_store_wb  (.sqn(7'd2), .addr(32'h104), .data(32'h11223344));

		        // sqN=3: lw 0x100 — should forward from sqN=1
		        dispatch_load(.sqn(7'd3), .rs1_tag(6'd1),
		                      .rd_tag(6'd1), .imm(32'h100));
		        agu_load_wb  (.sqn(7'd3), .addr(32'h100));

		        // sqN=4: lw 0x104 — should forward from sqN=2
		        dispatch_load(.sqn(7'd4), .rs1_tag(6'd1),
		                      .rd_tag(6'd2), .imm(32'h104));
		        agu_load_wb  (.sqn(7'd4), .addr(32'h104));

		        // Commit sqN=1..4 (branch not taken yet)
                commit(7'd1); commit(7'd2);

                commit2(7'd3, 7'd4);

		        // sqN=5: speculative store that will be squashed
		        dispatch_store(.sqn(7'd6), .rs1_tag(6'd1), .imm(32'h10C));
		        agu_store_wb  (.sqn(7'd6), .addr(32'h10C), .data(32'hBADBADBA));

		        // Branch flushes at sqN=5
		        flush = 1; flush_sqN = 7'd5; tick(); flush = 0;

		        // sqN=6 re-issue: sw 0x100 = 0xDEADBEEF
		        dispatch_store(.sqn(7'd6), .rs1_tag(6'd1), .imm(32'h100));
		        agu_store_wb  (.sqn(7'd6), .addr(32'h100), .data(32'hDEADBEEF));

		        // sqN=7: lw 0x100 — forward from sqN=6
		        dispatch_load(.sqn(7'd7), .rs1_tag(6'd1),
		                      .rd_tag(6'd3), .imm(32'h100));
		        agu_load_wb  (.sqn(7'd7), .addr(32'h100));

		        commit(7'd6);

		        // sqN=8: sw 0x108 — data depends on sqN=7 result (0xDEADBEEF)
		        dispatch_store(.sqn(7'd8), .rs1_tag(6'd1), .imm(32'h108));
		        agu_store_wb  (.sqn(7'd8), .addr(32'h108), .data(32'hDEADBEEF));

		        // sqN=9: lw 0x108 — forward from sqN=8
		        dispatch_load(.sqn(7'd9), .rs1_tag(6'd1),
		                      .rd_tag(6'd4), .imm(32'h108));
		        agu_load_wb  (.sqn(7'd9), .addr(32'h108));

		        commit(7'd7); commit(7'd8); commit(7'd9);
		        tick_n(5);
		    end
            begin
                fork
                    // sqN=3 forward from sqN=1
                    wait_cdb(.port(0), .exp_tag(6'd1), .exp_data(32'hAABBCCDD),
                            .timeout(30), .name("lw 0x100 forward from sqN=1"));

                    // sqN=4 forward from sqN=2
                    wait_cdb(.port(0), .exp_tag(6'd2), .exp_data(32'h11223344),
                            .timeout(30), .name("lw 0x104 forward from sqN=2"));

                    // sqN=7 forward from re-issued sqN=6
                    wait_cdb(.port(0), .exp_tag(6'd3), .exp_data(32'hDEADBEEF),
                            .timeout(30), .name("lw 0x100 forward from re-issued sqN=6"));

                    // sqN=9 forward from sqN=8
                    wait_cdb(.port(0), .exp_tag(6'd4), .exp_data(32'hDEADBEEF),
                            .timeout(30), .name("lw 0x108 forward from sqN=8"));
                join
            end
		join

		// speculative store at 0x10C must be squashed
		tick_n(5);
		begin
		    logic found;
		    found = 0;
		    for (int i = 0; i < STOREB_SIZE; i++)
		        if (dut.u_stb.entries[i].valid &&
		            dut.u_stb.entries[i].sqN == 7'd6 &&
		            dut.u_stb.entries[i].addr == 32'h10C)
		            found = 1;
		    chk("speculative store 0x10C squashed", found, 1'b0);
		end

		// After drain — memory at 0x100 must hold 0xDEADBEEF (sqN=6 overwrote sqN=1)
		tick_n(40);
		fork
		    begin
		        dispatch_load(.sqn(7'd10), .rs1_tag(6'd1),
		                      .rd_tag(6'd5), .imm(32'h100));
		        agu_load_wb  (.sqn(7'd10), .addr(32'h100));
		        tick();
		    end
		    wait_cdb(.port(0), .exp_tag(6'd5), .exp_data(32'hDEADBEEF),
		             .timeout(50), .name("mem 0x100 final value after re-issue"));
		join

		// Memory at 0x104 must still hold 0x11223344
		tick_n(5);
		fork
		    begin
		        dispatch_load(.sqn(7'd11), .rs1_tag(6'd1),
		                      .rd_tag(6'd6), .imm(32'h104));
		        agu_load_wb  (.sqn(7'd11), .addr(32'h104));
		        tick();
		    end
		    wait_cdb(.port(0), .exp_tag(6'd6), .exp_data(32'h11223344),
		             .timeout(50), .name("mem 0x104 unchanged after flush"));
		join

		// Memory at 0x10C must be zero — squashed store never committed
		tick_n(5);
		fork
		    begin
		        dispatch_load(.sqn(7'd12), .rs1_tag(6'd1),
		                      .rd_tag(6'd7), .imm(32'h10C));
		        agu_load_wb  (.sqn(7'd12), .addr(32'h10C));
		        tick();
		    end
		    wait_cdb(.port(0), .exp_tag(6'd7), .exp_data(32'h00000000),
		             .timeout(50), .name("mem 0x10C zero: squashed store never wrote"));
		join
	endtask


    // ════════════════════════════════════════════════════
    // Run all tests
    // ════════════════════════════════════════════════════
    initial begin
        $dumpfile("./sim_verilator/tb_lsu.fst");
        $dumpvars(0, tb_lsu);

        // Original tests
        
        test_store_basic();
        test_load_from_memory();
        test_stb_forward();
        test_stall_then_forward();
        test_no_alias_diff_addr();
        test_flush();
        test_forward_from_committed();
        test_partial_overlap_no_forward();

        // New edge case tests
        test_consecutive_stores_same_addr();
        test_simultaneous_stores_diff_addr();
        test_load_during_cdc_handshake();
        test_consecutive_loads_same_addr();
        test_flush_during_cdc();
        test_sqn_wraparound_flush();
        test_multi_store_drain_order();
        test_stb_full_busy();
        
        //test_program_sequence();

        $display("\n════════════════════════════════");
        $display("  %0d PASS  %0d FAIL", pass_count, fail_count);
        $display("════════════════════════════════\n");
        $finish;
    end

    initial begin
        #5000000;
        $display("TIMEOUT");
        $finish;
    end

endmodule
