`include "include_pkg.sv"

module tb_branch_checkpoint;
    logic       clk, rst, flush;
    sqN_t       flush_sqN;
    sqN_t       commit_sqN  [COMMIT_WIDTH];
    sqN_t       instr_sqN   [DECODE_WIDTH];
    logic       chk_valid   [DECODE_WIDTH];
    tag_t       IN_specTag  [DECODE_WIDTH][32];
    logic       IN_free     [DECODE_WIDTH][2**REG_ADDR_WIDTH];
    logic       check_busy;
    tag_t       OUT_specTag [32];
    logic       OUT_free    [2**REG_ADDR_WIDTH];

    branch_checkpoint dut (.*);

    localparam int NUM_REG   = 2**REG_ADDR_WIDTH;
    localparam int NUM_CHKPT = ROB_SIZE/4;

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
        flush_sqN = '0;
        for (int i = 0; i < COMMIT_WIDTH; i++) commit_sqN[i] = '0;
        for (int i = 0; i < DECODE_WIDTH; i++) begin
            instr_sqN[i] = '0;
            chk_valid[i]  = 0;
            for (int r = 0; r < 32; r++)  IN_specTag[i][r] = '0;
            for (int b = 0; b < NUM_REG; b++) IN_free[i][b] = 0;
        end
    endtask

    task automatic set_specTag(
        input int slot,
        input tag_t tags [32]
    );
        for (int r = 0; r < 32; r++)
            IN_specTag[slot][r] = tags[r];
    endtask

    task automatic set_free(
        input int slot,
        input logic free_bits [NUM_REG]
    );
        for (int b = 0; b < NUM_REG; b++)
            IN_free[slot][b] = free_bits[b];
    endtask

    // ── Main ───────────────────────────────────────────
    initial begin
    	$dumpfile("tb_branch_checkpoint.fst");
    	$dumpvars(0, tb_branch_checkpoint);
        
        clk = 0; rst = 1;
        set_idle();
        tick_n(5);
        rst = 0;
        tick();
        set_idle();
        tick();

        // ════════════════════════════════════════════
        // TEST 1: Reset — not busy
        // ════════════════════════════════════════════
        begin
            tests_run++;
            if (!check_busy) begin
                $display("PASS: Reset — not busy");
            end else begin
                tests_fail++;
                $display("FAIL: Reset — busy after reset");
            end
        end

        // ════════════════════════════════════════════
        // TEST 2: Allocate one checkpoint
        // ════════════════════════════════════════════
        begin
            tag_t tags [32];
            logic free_bits [NUM_REG];

            for (int r = 0; r < 32; r++) tags[r] = tag_t'(r);
            for (int b = 0; b < NUM_REG; b++) free_bits[b] = (b > 32) ? 1'b1 : 1'b0;

            instr_sqN[0] = 4;  // checkpoint slot 4
            chk_valid[0] = 1;
            set_specTag(0, tags);
            set_free(0, free_bits);
            tick();

            tests_run++;
            if (!check_busy) begin
                $display("PASS: Allocate checkpoint — not busy after one");
            end else begin
                tests_fail++;
                $display("FAIL: Allocate checkpoint — busy after one");
            end
        end

        // ════════════════════════════════════════════
        // TEST 3: Allocate same slot -> stall
        // ════════════════════════════════════════════
        begin
            instr_sqN[0] = 4;  // same slot as before
            chk_valid[0] = 1;
            tick();

            tests_run++;
            if (check_busy) begin
                $display("PASS: Same slot -> stall");
            end else begin
                tests_fail++;
                $display("FAIL: Same slot -> not stalling");
            end

            chk_valid[0] = 0;
            tick();
        end

        // ════════════════════════════════════════════
        // TEST 4: Commit frees the slot
        // ════════════════════════════════════════════
        begin
            commit_sqN[0] = 4;  // commit slot 4
            tick();
            commit_sqN[0] = '0;

            // Now should be able to allocate slot 4 again
            instr_sqN[0] = 4;
            chk_valid[0] = 1;
            tick();

            tests_run++;
            if (!check_busy) begin
                $display("PASS: Commit frees slot, re-allocate ok");
            end else begin
                tests_fail++;
                $display("FAIL: Commit frees slot — still busy");
            end

            chk_valid[0] = 0;
            tick();
        end

        // ════════════════════════════════════════════
        // TEST 5: Allocate multiple different slots
        // ════════════════════════════════════════════
        begin
            instr_sqN[0] = 0;
            instr_sqN[1] = 8;
            chk_valid[0] = 1;
            chk_valid[1] = 1;
            tick();

            tests_run++;
            if (!check_busy) begin
                $display("PASS: Two different slots — OK");
            end else begin
                tests_fail++;
                $display("FAIL: Two different slots — busy");
            end

            chk_valid[0] = 0;
            chk_valid[1] = 0;
            tick();
        end

        // ════════════════════════════════════════════
        // TEST 6: Flush — restore specTag and free
        // ════════════════════════════════════════════
        begin
            tag_t tags [32];
            logic free_bits [NUM_REG];

            for (int r = 0; r < 32; r++) tags[r] = tag_t'(r + 10);
            for (int b = 0; b < NUM_REG; b++) free_bits[b] = (b == 5 || b == 10) ? 1'b1 : 1'b0;

            instr_sqN[0] = 2;
            chk_valid[0] = 1;
            set_specTag(0, tags);
            set_free(0, free_bits);
            tick();
            chk_valid[0] = 0;

            // Now flush to sqN=2
            flush     = 1;
            flush_sqN = 2;
            tick();

            tests_run++;
            if (OUT_specTag[0] == tag_t'(10) &&
                OUT_specTag[31] == tag_t'(41) &&
                OUT_free[5] && OUT_free[10]) begin
                $display("PASS: Flush restores specTag and free bitmap");
            end else begin
                tests_fail++;
                $display("FAIL: Flush restore");
            end

            flush = 0;
            tick();
        end

        // ════════════════════════════════════════════
        // TEST 7: Flush invalidates newer checkpoints
        // ════════════════════════════════════════════
        begin
            // Allocate slot 1 and slot 3
            instr_sqN[0] = 1;
            chk_valid[0] = 1;
            tick();

            instr_sqN[0] = 3;
            tick();

            chk_valid[0] = 0;
            tick();

            // Flush to sqN=1 — should invalidate slot 3
            flush     = 1;
            flush_sqN = 1;
            tick();
            flush     = 0;

            // Try to allocate slot 3 — should succeed (was invalidated)
            instr_sqN[0] = 3;
            chk_valid[0] = 1;
            tick();

            tests_run++;
            if (!check_busy) begin
                $display("PASS: Flush invalidates newer checkpoints");
            end else begin
                tests_fail++;
                $display("FAIL: Flush invalidates newer checkpoints — slot 3 still occupied");
            end

            chk_valid[0] = 0;
            tick();
        end

        // ════════════════════════════════════════════
        // TEST 8: Full -> busy
        // ════════════════════════════════════════════
        begin
            // Fill all checkpoints
            for (int i = 0; i < NUM_CHKPT; i++) begin
                instr_sqN[0] = sqN_t'(i);
                chk_valid[0] = 1;
                tick();
            end
            chk_valid[0] = 0;
            tick();

            tests_run++;
            if (check_busy) begin
                $display("PASS: All slots full -> check_busy");
            end else begin
                tests_fail++;
                $display("FAIL: All slots full -> not busy");
            end
        end

        // ════════════════════════════════════════════
        // TEST 9: No flush -> output = last decode input
        // ════════════════════════════════════════════
        begin
            tag_t tags [32];
            // Commit some to free a slot
            commit_sqN[0] = 0;
            tick();
            commit_sqN[0] = '0;
            
            for (int r = 0; r < 32; r++) tags[r] = tag_t'(r + 100);

            instr_sqN[0] = 0;
            chk_valid[0] = 0;  // not a checkpoint
            set_specTag(0, tags);
            tick();

            tests_run++;
            if (OUT_specTag[0] == tag_t'(100)) begin
                $display("PASS: No flush -> passthrough from last decode slot");
            end else begin
                tests_fail++;
                $display("FAIL: No flush -> passthrough");
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
