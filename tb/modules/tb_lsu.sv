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
    task tick();     @(posedge clk); #1; endtask
    task tick_n(int n); repeat(n) tick(); endtask

    task clear_inputs();
        for (int i = 0; i < NUM_AGU_FU; i++) begin
            dispatch_instr[i] = '{default: '0};
            agu_out[i].valid        = 0;
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

    // Wait up to N cycles for OUT_cdb[p].valid with matching tag
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
    //     (no aliasing store — goes straight to memory)
    // ════════════════════════════════════════════════════
    task test_load_from_memory();
        $display("\n[T2] Basic load from memory (no STB alias)");
        do_reset();

        // Store first so memory has the value
        dispatch_store(.sqn(7'd1), .rs1_tag(6'd1), .imm(32'h300));
        agu_store_wb  (.sqn(7'd1), .addr(32'h300), .data(32'hBEEFCAFE));
        commit(7'd1);
        tick_n(15);

        // Load from a DIFFERENT address (rs1_tag=2 not 1 — no alias)
        dispatch_load(.sqn(7'd2), .rs1_tag(6'd2),
                      .rd_tag(6'd7), .imm(32'h300));
        agu_load_wb  (.sqn(7'd2), .addr(32'h300));
        tick();

        wait_cdb(.port(0), .exp_tag(6'd7), .exp_data(32'hBEEFCAFE),
                 .timeout(50), .name("load result from memory"));
    endtask


    // ════════════════════════════════════════════════════
    // T3: STB forwarding — store and load share rs1_tag+imm
    //     Load should receive data directly from STB,
    //     never going to memory.
    // ════════════════════════════════════════════════════
    task test_stb_forward();
        $display("\n[T3] STB forwarding: same rs1_tag + imm");
        do_reset();
        fork
            begin
                // Store: rs1_tag=5, imm=0x400
                dispatch_store(.sqn(7'd1), .rs1_tag(6'd5), .imm(32'h400));
                agu_store_wb  (.sqn(7'd1), .addr(32'h400), .data(32'hCAFEBABE));
                tick();
                // Do NOT commit yet — forwarding should work before commit

                // Load: same rs1_tag=5, same imm=0x400 → guaranteed alias
                dispatch_load(.sqn(7'd2), .rs1_tag(6'd5),
                            .rd_tag(6'd9), .imm(32'h400));
                agu_load_wb  (.sqn(7'd2), .addr(32'h400));
                tick();
            end

            // CDB should fire with forwarded data
            wait_cdb(.port(0), .exp_tag(6'd9), .exp_data(32'hCAFEBABE),
                    .timeout(20), .name("STB forward result"));
        join         

        // Verify memory was NOT accessed for the load
        chk("no memory read issued for forwarded load",
            dut.u_ldb.mem_req[0].valid, 1'b0);
    endtask


    // ════════════════════════════════════════════════════
    // T4: Stall then forward
    //     Load arrives before store AGU writeback.
    //     Load must stall until store resolves, then forward.
    // ════════════════════════════════════════════════════
    task test_stall_then_forward();
        $display("\n[T4] Stall then forward: load before store AGU wb");
        do_reset();
        fork
            begin
            // Dispatch store (no AGU wb yet)
            dispatch_store(.sqn(7'd1), .rs1_tag(6'd3), .imm(32'h500));
            tick();

            // Dispatch load with same rs1_tag+imm — should stall
            dispatch_load(.sqn(7'd2), .rs1_tag(6'd3),
                        .rd_tag(6'd11), .imm(32'h500));
            agu_load_wb  (.sqn(7'd2), .addr(32'h500));
            tick();

            // Verify load is stalled — no mem_req, no CDB yet
            chk("load stalled before store AGU wb",
                dut.u_ldb.stall[0], 1'b1);
            chk("no mem_req while stalled",
                dut.u_ldb.mem_req[0].valid, 1'b0);

            // Now store AGU writeback arrives
            agu_store_wb(.sqn(7'd1), .addr(32'h500), .data(32'h12345678));
            tick();
            end

            // Load should now forward
            wait_cdb(.port(0), .exp_tag(6'd11), .exp_data(32'h12345678),
                    .timeout(20), .name("forwarded after stall resolved"));
        join
    endtask


    // ════════════════════════════════════════════════════
    // T5: No alias — different rs1_tag, same imm
    //     Load must NOT stall or forward — goes to memory
    // ════════════════════════════════════════════════════
    task test_no_alias_diff_tag();
        $display("\n[T5] No alias: same imm but different rs1_tag");
        do_reset();

        // Store: rs1_tag=1, imm=0x100
        dispatch_store(.sqn(7'd1), .rs1_tag(6'd1), .imm(32'h100));
        agu_store_wb  (.sqn(7'd1), .addr(32'h100), .data(32'hAAAAAAAA));
        commit(7'd1);
        tick_n(15);

        // Load: rs1_tag=2 (different!), same imm=0x100
        // Different base → different effective address → no alias
        dispatch_load(.sqn(7'd2), .rs1_tag(6'd2),
                      .rd_tag(6'd13), .imm(32'h100));
        agu_load_wb  (.sqn(7'd2), .addr(32'h100)); #1;
        
        // Load should NOT be stalled — no matching STB entry
        chk("no stall on different rs1_tag", dut.u_ldb.stall[0], 1'b0);
        // mem_req should fire
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
        dispatch_load (.sqn(7'd6), .rs1_tag(6'd1), .rd_tag(6'd15), .imm(32'h600));
        tick_n(2);

        // Flush at sqN=4 — both sqN=5 and sqN=6 are newer → squashed
        flush     = 1;
        flush_sqN = 7'd4;
        tick();
        flush = 0;
        tick_n(2);

        // Neither buffer should have valid entries
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
    //     (committed=1, valid=1, still in STB)
    // ════════════════════════════════════════════════════
    task test_forward_from_committed();
        $display("\n[T7] Forward from committed (not yet drained) STB entry");
        do_reset();
        fork
            begin
            dispatch_store(.sqn(7'd1), .rs1_tag(6'd4), .imm(32'h700));
            agu_store_wb  (.sqn(7'd1), .addr(32'h700), .data(32'hFEEDF00D));
            tick();
            commit(7'd1);   // committed but may still be in STB before drain
            tick_n(2);      // don't wait full CDC — entry still present

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
    // Run all tests
    // ════════════════════════════════════════════════════
    initial begin
        $dumpfile("tb_lsu.fst");
        $dumpvars(0, tb_lsu);

        test_store_basic();
        test_load_from_memory();
        test_stb_forward();
        test_stall_then_forward();
        test_no_alias_diff_tag();
        test_flush();
        test_forward_from_committed();

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
