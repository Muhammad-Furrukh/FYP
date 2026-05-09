`include "include_pkg.sv"

module tb_lsu;

    // ════════════════════════════════════════════════════
    // 0. DUT ports
    // ════════════════════════════════════════════════════
    logic                clk, clk_m, rst, rst_m;
    lsu_dispatch_instr_t dispatch_instr [NUM_AGU_FU];
    agu_out_t            agu_out        [NUM_AGU_FU];
    sqN_t                commit_sqN     [COMMIT_WIDTH];
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
        for (int i = 0; i < COMMIT_WIDTH; i++)
            commit_sqN[i] = '0;
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

    // Dispatch one store via slot 0
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

    // Dispatch one load via slot 0
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

    // AGU writeback for a store
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

    // AGU writeback for a load
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

    // Commit one sqN
    task commit(sqN_t sqn);
        commit_sqN[0] = sqn;
        tick();
        commit_sqN[0] = '0;
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

    // Wait up to N cycles for OUT_cdb[p].valid with matching tag.
    // CDB holds data for exactly 1 cycle, so we sample every cycle.
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


    // ════════════════════════════════════════════════════
    // T1: Basic store — data reaches data memory
    // ════════════════════════════════════════════════════
    task test_store_basic();
        $display("\n[T1] Basic store word to 0x100");
        do_reset();

        dispatch_store(.sqn(7'd1), .rs1_tag(6'd1), .imm(32'h100));
        agu_store_wb  (.sqn(7'd1), .addr(32'h100), .data(32'hDEADBEEF));
        tick();
        commit(7'd1);
        tick_n(15);   // wait for CDC handshake

        chk("wr_req_held valid",
            dut.u_dmem.wr_req_held[0].valid, 1'b1);
        chk_data("store data in DMEM",
            dut.u_dmem.wr_req_held[0].data, 32'hDEADBEEF);
    endtask


    // ════════════════════════════════════════════════════
    // T2: Basic load — data returns from memory on CDB
    //
    //     No older store in STB resolves to 0x300, so
    //     the load goes straight to memory.
    //     (Store is committed and drained from STB before
    //      the load's AGU writeback arrives.)
    // ════════════════════════════════════════════════════
    task test_load_from_memory();
        $display("\n[T2] Basic load from memory (no STB alias)");
        do_reset();

        // Store to 0x300, commit and wait for STB to drain fully
        // before dispatching the load so no older STB entry exists.
        fork 
		    begin
		    dispatch_store(.sqn(7'd1), .rs1_tag(6'd1), .imm(32'h300));
		    agu_store_wb  (.sqn(7'd1), .addr(32'h300), .data(32'hBEEFCAFE));
		    commit(7'd1);
		    tick_n(25);   // enough for CDC round-trip and STB drain

		    // Now dispatch the load — STB is empty, no stall, goes to memory.
		    dispatch_load(.sqn(7'd2), .rs1_tag(6'd2),
		                  .rd_tag(6'd7), .imm(32'h300));
		    agu_load_wb  (.sqn(7'd2), .addr(32'h300));
		    tick();
		    end

        		wait_cdb(.port(0), .exp_tag(6'd7), .exp_data(32'hBEEFCAFE),
                 .timeout(50), .name("load result from memory"));
    		join
    endtask


    // ════════════════════════════════════════════════════
    // T3: STB forwarding — store and load target same address
    //
    //     Store AGU resolves to 0x400.
    //     Load AGU also resolves to 0x400.
    //     Forwarding is triggered by address match, not by
    //     rs1_tag/imm.  Store is NOT committed so it is
    //     still present in the STB when the load checks.
    // ════════════════════════════════════════════════════
    task test_stb_forward();
        $display("\n[T3] STB forwarding: store and load resolve to same address");
        do_reset();
        fork
            begin
                // Store: AGU resolves to 0x400
                dispatch_store(.sqn(7'd1), .rs1_tag(6'd5), .imm(32'h400));
                agu_store_wb  (.sqn(7'd1), .addr(32'h400), .data(32'hCAFEBABE));
                tick();
                // Do NOT commit — store stays in STB for forwarding

                // Load: AGU also resolves to 0x400 → address match → forward
                dispatch_load(.sqn(7'd2), .rs1_tag(6'd5),
                              .rd_tag(6'd9), .imm(32'h400));
                agu_load_wb  (.sqn(7'd2), .addr(32'h400));
                tick();
            end

            // CDB must carry the forwarded value within a short window.
            // CDB holds for exactly 1 cycle so wait_cdb samples every cycle.
            wait_cdb(.port(0), .exp_tag(6'd9), .exp_data(32'hCAFEBABE),
                     .timeout(20), .name("STB forward result"));
        join

        // The load buffer must NOT have issued a memory read
        chk("no memory read issued for forwarded load",
            dut.u_ldb.mem_req[0].valid, 1'b0);
    endtask


    // ════════════════════════════════════════════════════
    // T4: Stall then forward
    //
    //     Load's AGU writeback arrives BEFORE the store's.
    //     Once the load has a valid address it sees an older
    //     STB entry whose addr_data_valid=0 → stall.
    //     When the store's AGU writeback arrives and the
    //     addresses match, the load forwards instead of
    //     going to memory.
    // ════════════════════════════════════════════════════
    task test_stall_then_forward();
        $display("\n[T4] Stall then forward: load AGU wb before store AGU wb");
        do_reset();

        // Dispatch store (no AGU wb yet — addr_data_valid stays 0)
        dispatch_store(.sqn(7'd1), .rs1_tag(6'd3), .imm(32'h500));
        tick();

        // Dispatch load and immediately write back its address.
        // The store is older and has addr_data_valid=0 → stall must assert.
        dispatch_load(.sqn(7'd2), .rs1_tag(6'd3),
                      .rd_tag(6'd11), .imm(32'h500));
        agu_load_wb  (.sqn(7'd2), .addr(32'h500));
        // Sample combinational stall one delta after the clock edge
        // (agu_load_wb calls tick() internally, so we are already #1
        //  past the edge at this point)
        chk("load stalled: older store addr_data_valid=0",
            dut.u_ldb.stall[0], 1'b1);
        chk("no mem_req while stalled",
            dut.u_ldb.mem_req[0].valid, 1'b0);

        // Store AGU writeback — addr_data_valid becomes 1, address=0x500
        fork
            agu_store_wb(.sqn(7'd1), .addr(32'h500), .data(32'h12345678));
            wait_cdb(.port(0), .exp_tag(6'd11), .exp_data(32'h12345678),
                     .timeout(20), .name("forwarded after stall resolved"));
        join
    endtask


    // ════════════════════════════════════════════════════
    // T5: No alias — store and load resolve to different addresses
    //
    //     Store → 0x100, Load → 0x200.
    //     After both AGU writebacks: store has addr_data_valid=1
    //     but its address (0x100) does not match the load (0x200).
    //     No stall, no forward — load goes straight to memory.
    // ════════════════════════════════════════════════════
    task test_no_alias_diff_addr();
        $display("\n[T5] No alias: store addr 0x100 != load addr 0x200");
        do_reset();

        // Store to 0x100, AGU wb resolves it fully
        dispatch_store(.sqn(7'd1), .rs1_tag(6'd1), .imm(32'h100));
        agu_store_wb  (.sqn(7'd1), .addr(32'h100), .data(32'hAAAAAAAA));
        tick();
        // Do NOT commit — store still in STB so the load sees it

        // Load to 0x200 — different address, no alias
        dispatch_load(.sqn(7'd2), .rs1_tag(6'd2),
                      .rd_tag(6'd13), .imm(32'h200));
        agu_load_wb  (.sqn(7'd2), .addr(32'h200));
        // #1 already elapsed inside agu_load_wb

        // Store is older and addr_data_valid=1 but addresses differ →
        // no stall, no forward, mem_req should fire
        chk("no stall on different address",
            dut.u_ldb.stall[0], 1'b0);
        chk("mem_req issued for non-aliased load",
            dut.u_ldb.mem_req[0].valid, 1'b1);

        tick();
    endtask


    // ════════════════════════════════════════════════════
    // T6: Flush squashes speculative store and load
    // ════════════════════════════════════════════════════
    task test_flush();
        $display("\n[T6] Flush squashes speculative entries");
        do_reset();

        dispatch_store(.sqn(7'd5), .rs1_tag(6'd1), .imm(32'h600));
        dispatch_load (.sqn(7'd6), .rs1_tag(6'd1),
                       .rd_tag(6'd15), .imm(32'h600));
        tick_n(2);

        // Flush at sqN=4 — both sqN=5 and sqN=6 are newer → squashed
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


    // ════════════════════════════════════════════════════
    // T7: Committed store still forwards to later load
    //     (committed=1, valid=1, still in STB before drain)
    // ════════════════════════════════════════════════════
    task test_forward_from_committed();
        $display("\n[T7] Forward from committed (not yet drained) STB entry");
        do_reset();
        fork
            begin
                dispatch_store(.sqn(7'd1), .rs1_tag(6'd4), .imm(32'h700));
                agu_store_wb  (.sqn(7'd1), .addr(32'h700), .data(32'hFEEDF00D));
                tick();
                commit(7'd1);   // committed but STB entry may still be present
                tick_n(2);      // do NOT wait full CDC — entry still in STB

                dispatch_load(.sqn(7'd2), .rs1_tag(6'd4),
                              .rd_tag(6'd17), .imm(32'h700));
                agu_load_wb  (.sqn(7'd2), .addr(32'h700));
                tick();
            end

            wait_cdb(.port(0), .exp_tag(6'd17), .exp_data(32'hFEEDF00D),
                     .timeout(10), .name("forward from committed STB entry"));
        join
    endtask


    // ════════════════════════════════════════════════════
    // T8: Partial-overlap — byte store does NOT cover word load
    //
    //     Store is a single byte at 0x800 (lane 0 only).
    //     Load is a full word at 0x800 (lanes 0-3).
    //     Store lane mask (0001) does not cover load lane
    //     mask (1111) → no forward, load goes to memory.
    //     (Store addr_data_valid=1 so no stall either.)
    // ════════════════════════════════════════════════════
    task test_partial_overlap_no_forward();
        $display("\n[T8] Partial overlap: byte store does not cover word load");
        do_reset();

        // Byte store to 0x800
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

        // AGU wb for byte store (data_size=BYTE)
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

        // Word load from 0x800
        dispatch_load(.sqn(7'd2), .rs1_tag(6'd1),
                      .rd_tag(6'd19), .imm(32'h800));
        agu_load_wb  (.sqn(7'd2), .addr(32'h800));
        // #1 past the edge

        // Byte store is older and addr_data_valid=1, addresses overlap,
        // but byte lanes (0001) do not fully cover word lanes (1111)
        // → no stall, no forward, mem_req must fire
        chk("no stall on partial-overlap store",
            dut.u_ldb.stall[0], 1'b0);
        chk("mem_req issued (partial coverage, no forward)",
            dut.u_ldb.mem_req[0].valid, 1'b1);

        tick();
    endtask


    // ════════════════════════════════════════════════════
    // Run all tests
    // ════════════════════════════════════════════════════
    initial begin
        $dumpfile("tb_lsu.fst");
        $dumpvars(0, tb_lsu);

        test_store_basic();
        test_load_from_memory();
        test_stb_forward();
        test_stall_then_forward();
        test_no_alias_diff_addr();
        test_flush();
        test_forward_from_committed();
        test_partial_overlap_no_forward();

        $display("\n════════════════════════════════");
        $display("  %0d PASS  %0d FAIL", pass_count, fail_count);
        $display("════════════════════════════════\n");
        $finish;
    end

    initial begin
        #2000000;
        $display("TIMEOUT");
        $finish;
    end

endmodule
