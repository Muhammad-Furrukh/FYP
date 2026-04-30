`include "include_pkg.sv"

module tb_rename;
    logic               clk, rst;
    logic               ROB_busy, dispatch_busy, flush, chkpt_busy;
    tag_t               IN_specTag      [32];
    logic               IN_free         [2**REG_ADDR_WIDTH];
    commit_packet_t     commit_packet   [COMMIT_WIDTH];
    decode_instr_t      IN_instr        [DECODE_WIDTH];
    tag_t               CDB_tag         [NUM_CDB_LINES];
    logic               CDB_valid       [NUM_CDB_LINES];
    tag_t               read_tag        [ISSUE_WIDTH][2];
    rename_instr_t      OUT_instr       [DECODE_WIDTH];
    logic               reg_ready       [ISSUE_WIDTH][2];
    logic               chkpt           [DECODE_WIDTH];
    sqN_t               chkpt_sqN       [DECODE_WIDTH];
    tag_t               chkpt_specTag   [DECODE_WIDTH][32];
    logic               chkpt_free      [DECODE_WIDTH][2**REG_ADDR_WIDTH];
    logic               OUT_busy;
    logic [4:0]         OUT_rd          [DECODE_WIDTH];

    rename dut (.*);

    always #5 clk = ~clk;

    int tests_run = 0, tests_fail = 0;

    // ── Global timeout ────────────────────────────────
    initial begin
        #500000;
        $display("TIMEOUT: Global watchdog fired");
        $finish;
    end

    // ── Helper: set all inputs to idle ────────────────
    task automatic set_idle();
        ROB_busy      = 0;
        dispatch_busy = 0;
        flush         = 0;
        chkpt_busy    = 0;
        for (int i = 0; i < DECODE_WIDTH; i++) IN_instr[i] = '0;
        for (int i = 0; i < COMMIT_WIDTH;  i++) commit_packet[i] = '0;
        for (int i = 0; i < NUM_CDB_LINES; i++) begin
            CDB_valid[i] = 0;
            CDB_tag[i]   = '0;
        end
        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            read_tag[i][0] = '0;
            read_tag[i][1] = '0;
        end
        IN_specTag = '{default: '0};
        IN_free    = '{default: '0};
    endtask

    // ── Helper: create a simple ALU instruction ───────
    function automatic decode_instr_t make_alu_instr(
        input logic [4:0] rs1, rs2, rd,
        input sqN_t sqN
    );
        make_alu_instr.valid    = 1;
        make_alu_instr.sqN      = sqN;
        make_alu_instr.pc       = '0;
        make_alu_instr.f_unit   = ALU;
        make_alu_instr.oper.alu_oper = ADD;
        make_alu_instr.rs1      = rs1;
        make_alu_instr.rs2      = rs2;
        make_alu_instr.rd       = rd;
        make_alu_instr.imm      = '0;
        make_alu_instr.is_imm   = 0;
        make_alu_instr.jump_type= NOT_JUMP;
        make_alu_instr.br_type  = NOT_BRANCH;
        make_alu_instr.u_type   = NOT_U;
    endfunction

    // ── Helper: create a branch instruction ───────────
    function automatic decode_instr_t make_branch(
        input logic [4:0] rs1, rs2,
        input sqN_t sqN
    );
        make_branch.valid      = 1;
        make_branch.sqN        = sqN;
        make_branch.pc         = '0;
        make_branch.f_unit     = ALU;
        make_branch.oper.alu_oper = ADD;
        make_branch.rs1        = rs1;
        make_branch.rs2        = rs2;
        make_branch.rd         = 5'd0;
        make_branch.imm        = '0;
        make_branch.is_imm     = 0;
        make_branch.jump_type  = NOT_JUMP;
        make_branch.br_type    = BEQ;
        make_branch.u_type     = NOT_U;
    endfunction

    // ── Helper: tick one cycle ────────────────────────
    task automatic tick();
        @(posedge clk);
        #1; // small delay for combinational settling
    endtask

    // ── Helper: do N cycles ───────────────────────────
    task automatic tick_n(int n);
        repeat(n) tick();
    endtask

    // ── Main test sequence ────────────────────────────
    initial begin
    	$dumpfile("tb_rename.fst");
    	$dumpvars(0, tb_rename);
    
        clk = 0; rst = 1;
        set_idle();
        tick_n(5);
        rst = 0;
        tick();
        set_idle();
        tick();

        // ════════════════════════════════════════════
        // TEST 1: Reset state check
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
        // TEST 2: Single instruction rename
        // ════════════════════════════════════════════
        begin
            IN_instr[0] = make_alu_instr(5'd0, 5'd0, 5'd1, '0);
            tick();
            tick(); // output registered

            tests_run++;
            if (OUT_instr[0].valid &&
                OUT_instr[0].rs1_tag == 6'd0 &&   // x0 maps to tag 0
                OUT_instr[0].rs2_tag == 6'd0 &&
                OUT_instr[0].rd_tag  != 6'd0 &&   // allocated a tag
                OUT_instr[0].rd_tag  != 6'd1) begin // not identity tag 1
                $display("PASS: Single rename — x1 got tag %0d", OUT_instr[0].rd_tag);
            end else begin
                tests_fail++;
                $display("FAIL: Single rename — valid=%b rs1=%0d rs2=%0d rd=%0d",
                         OUT_instr[0].valid, OUT_instr[0].rs1_tag,
                         OUT_instr[0].rs2_tag, OUT_instr[0].rd_tag);
            end
        end

        // ════════════════════════════════════════════
        // TEST 3: RAW forwarding (same group)
        // ════════════════════════════════════════════
        begin
            // instr0: x1 = x0 + x0   (writes x1)
            // instr1: x2 = x1 + x0   (reads x1 from instr0)
            IN_instr[0] = make_alu_instr(5'd0, 5'd0, 5'd1, 1);
            IN_instr[1] = make_alu_instr(5'd1, 5'd0, 5'd2, 2);
            tick();
            tick();

            tests_run++;
            if (OUT_instr[0].valid && OUT_instr[1].valid &&
                OUT_instr[1].rs1_tag == OUT_instr[0].rd_tag) begin
                $display("PASS: RAW forwarding — x2.rs1=%0d == x1.rd=%0d",
                         OUT_instr[1].rs1_tag, OUT_instr[0].rd_tag);
            end else begin
                tests_fail++;
                $display("FAIL: RAW forwarding — v0=%b v1=%b rs1=%0d rd0=%0d",
                         OUT_instr[0].valid, OUT_instr[1].valid,
                         OUT_instr[1].rs1_tag, OUT_instr[0].rd_tag);
            end
        end

        // ════════════════════════════════════════════
        // TEST 4: x0 always returns tag 0
        // ════════════════════════════════════════════
        begin
            IN_instr[0] = make_alu_instr(5'd0, 5'd0, 5'd3, 3);
            tick();
            tick();

            tests_run++;
            if (OUT_instr[0].rs1_tag == 6'd0 &&
                OUT_instr[0].rs2_tag == 6'd0) begin
                $display("PASS: x0 maps to tag 0");
            end else begin
                tests_fail++;
                $display("FAIL: x0 maps to tag 0 — rs1=%0d rs2=%0d",
                         OUT_instr[0].rs1_tag, OUT_instr[0].rs2_tag);
            end
        end

        // ════════════════════════════════════════════
        // TEST 5: Two unique tags allocated
        // ════════════════════════════════════════════
        begin
            IN_instr[0] = make_alu_instr(5'd0, 5'd0, 5'd4, 4);
            IN_instr[1] = make_alu_instr(5'd0, 5'd0, 5'd5, 5);
            tick();
            tick();

            tests_run++;
            if (OUT_instr[0].valid && OUT_instr[1].valid &&
                OUT_instr[0].rd_tag != OUT_instr[1].rd_tag &&
                OUT_instr[0].rd_tag != 6'd0 &&
                OUT_instr[1].rd_tag != 6'd0) begin
                $display("PASS: Unique tags — tag0=%0d tag1=%0d",
                         OUT_instr[0].rd_tag, OUT_instr[1].rd_tag);
            end else begin
                tests_fail++;
                $display("FAIL: Unique tags");
            end
        end

        // ════════════════════════════════════════════
        // TEST 6: Stall when ROB busy
        // ════════════════════════════════════════════
        begin
            ROB_busy = 1;
            IN_instr[0] = make_alu_instr(5'd0, 5'd0, 5'd6, 6);
            tick();

            tests_run++;
            if (OUT_busy) begin
                $display("PASS: Stall on ROB_busy");
            end else begin
                tests_fail++;
                $display("FAIL: Stall on ROB_busy");
            end
            ROB_busy = 0;
        end

        // ════════════════════════════════════════════
        // TEST 7: Stall when dispatch busy
        // ════════════════════════════════════════════
        begin
            dispatch_busy = 1;
            tick();

            tests_run++;
            if (OUT_busy) begin
                $display("PASS: Stall on dispatch_busy");
            end else begin
                tests_fail++;
                $display("FAIL: Stall on dispatch_busy");
            end
            dispatch_busy = 0;
        end

        // ════════════════════════════════════════════
        // TEST 8: Branch creates checkpoint
        // ════════════════════════════════════════════
        begin
            IN_instr[0] = make_branch(5'd1, 5'd2, 10);
            IN_instr[1] = '0;
            tick();
            tick();

            tests_run++;
            if (chkpt[0] && !chkpt[1]) begin
                $display("PASS: Branch creates checkpoint");
            end else begin
                tests_fail++;
                $display("FAIL: Branch creates checkpoint — chkpt0=%b chkpt1=%b",
                         chkpt[0], chkpt[1]);
            end
        end

        // ════════════════════════════════════════════
        // TEST 9: CDB marks register ready
        // ════════════════════════════════════════════
            begin
                tag_t t7;
                // First rename x7 to get a tag
                IN_instr[0] = make_alu_instr(5'd0, 5'd0, 5'd7, 11);
                IN_instr[1] = '0;
                tick(); tick();

                t7 = OUT_instr[0].rd_tag;
                read_tag[0][0] = t7;

                // Before CDB, reg_ready should be 0
                tick();
                tests_run++;
                if (!reg_ready[0][0]) begin
                    $display("PASS: reg_ready=0 before CDB for tag %0d", t7);
                end else begin
                    tests_fail++;
                    $display("FAIL: reg_ready=0 before CDB for tag %0d", t7);
                end

                // Fire CDB for this tag
                CDB_valid[0] = 1;
                CDB_tag[0]   = t7;
                tick();
                CDB_valid[0] = 0;

                tests_run++;
                if (reg_ready[0][0]) begin
                    $display("PASS: reg_ready=1 after CDB for tag %0d", t7);
                end else begin
                    tests_fail++;
                    $display("FAIL: reg_ready=1 after CDB for tag %0d", t7);
                end
            end

        // ════════════════════════════════════════════
        // TEST 10: Flush clears outputs
        // ════════════════════════════════════════════
        begin
            IN_instr[0] = make_alu_instr(5'd0, 5'd0, 5'd8, 12);
            tick(); tick();

            // Should have valid output before flush
            tests_run++;
            if (OUT_instr[0].valid) begin
                $display("PASS: Output valid before flush");
            end else begin
                tests_fail++;
                $display("FAIL: Output valid before flush");
            end

            flush = 1;
            tick();
            flush = 0;

            tests_run++;
            if (!OUT_instr[0].valid) begin
                $display("PASS: Output cleared after flush");
            end else begin
                tests_fail++;
                $display("FAIL: Output cleared after flush");
            end
        end
        
        // ════════════════════════════════════════════
        // TEST 11: Commit frees tag
        // ════════════════════════════════════════════
	    begin
		tag_t t9;
		// Allocate a tag for x9
		IN_instr[0] = make_alu_instr(5'd0, 5'd0, 5'd9, 13);
		tick(); tick();
		t9 = OUT_instr[0].rd_tag;

		// Commit x9 — tag should become free again
		commit_packet[0].valid   = 1;
		commit_packet[0].sqN     = 13;
		commit_packet[0].archTag = 5'd9;
		commit_packet[0].comTag  = t9;
		tick();
		commit_packet[0].valid = 0;

		// Now allocate again — should get the same tag back
		IN_instr[0] = make_alu_instr(5'd0, 5'd0, 5'd10, 14);
		tick();

		tests_run++;
		if (OUT_instr[0].rd_tag == t9) begin
		    $display("PASS: Commit frees tag %0d, reused", t9);
		end else begin
		    $display("FAIL: Commit frees tag — expected %0d, got %0d",
		             t9, OUT_instr[0].rd_tag);
		end
	    end

        
        // ════════════════════════════════════════════
        // TEST 12: Chkpt captures free bitmap
        // ════════════════════════════════════════════
        begin
            // Branch instruction creates checkpoint
            IN_instr[0] = make_branch(5'd1, 5'd2, 15);
            tick(); tick();

            tests_run++;
            if (chkpt[0]) begin
                // Check that some free bits were captured
                int free_count = 0;
                for (int b = 1; b < 64; b++)
                    if (chkpt_free[0][b]) free_count++;
                if (free_count > 0)
                    $display("PASS: Chkpt captures free bitmap (%0d free)", free_count);
                else begin
                    tests_fail++;
                    $display("FAIL: Chkpt free bitmap empty");
                end
            end else begin
                tests_fail++;
                $display("FAIL: Chkpt not generated for branch");
            end
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
