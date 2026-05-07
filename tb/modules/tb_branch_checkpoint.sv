`timescale 1ns/1ps
import include_pkg::*;

module tb_branch_checkpoint;

    logic       clk, rst, flush;
    sqN_t       flush_sqN;
    logic 	comm_valid [COMMIT_WIDTH];
    sqN_t       commit_sqN [COMMIT_WIDTH];
    sqN_t       instr_sqN  [DECODE_WIDTH];
    logic       chk_valid  [DECODE_WIDTH];
    tag_t       IN_specTag [DECODE_WIDTH][32];
    logic       IN_free    [DECODE_WIDTH][2**REG_ADDR_WIDTH];
    logic       check_busy;
    tag_t       OUT_specTag[32];
    logic       OUT_free   [2**REG_ADDR_WIDTH];

    branch_checkpoint DUT (.*);

    initial clk = 0;
    always #5 clk = ~clk;

    int pass_count = 0, fail_count = 0;

    localparam int NUM_CHKPT  = ROB_SIZE / 4;
    localparam int CHKPT_BITS = $clog2(NUM_CHKPT);

    // ── Helpers ──────────────────────────────────────
    task automatic clr_inputs();
        flush     = 0; flush_sqN = '0;
        for (int i = 0; i < COMMIT_WIDTH; i++) begin
		comm_valid[i]    = 0;	
		commit_sqN[i] 	 = '0;
	end
	
        for (int i = 0; i < DECODE_WIDTH; i++) begin
            instr_sqN[i] = '0; chk_valid[i] = 0;
            for (int r = 0; r < 32; r++) IN_specTag[i][r] = tag_t'(r);
            for (int b = 0; b < 2**REG_ADDR_WIDTH; b++) IN_free[i][b] = 1;
        end
    endtask

    task automatic do_reset();
        clr_inputs(); rst = 1;
        @(posedge clk); #1;
        @(posedge clk); #1;
        rst = 0;
        @(posedge clk); #1;
    endtask

    task automatic wait_cycles(int n);
        repeat (n) @(posedge clk); #1;
    endtask

    task automatic set_spectag(int slot, tag_t base);
        for (int r = 0; r < 32; r++)
            IN_specTag[slot][r] = tag_t'(base + r);
    endtask

    // Allocate one checkpoint and wait for it to register
    task automatic alloc(int slot, sqN_t sqn, tag_t base);
        set_spectag(slot, base);
        instr_sqN[slot] = sqn;
        chk_valid[slot] = 1;
        @(posedge clk); #1;  // FF writes on this edge
        chk_valid[slot] = 0;
        instr_sqN[slot] = '0;
        @(posedge clk); #1;  // one idle cycle — valid is now set
    endtask

    task automatic chk(string name, logic got, logic exp);
        if (got === exp) begin $display("  PASS  %s", name); pass_count++; end
        else begin $display("  FAIL  %s  got=%0b exp=%0b", name, got, exp); fail_count++; end
    endtask

    task automatic chk_tag(string name, tag_t got, tag_t exp);
        if (got === exp) begin $display("  PASS  %s (=%0d)", name, got); pass_count++; end
        else begin $display("  FAIL  %s  got=%0d exp=%0d", name, got, exp); fail_count++; end
    endtask

    // ════════════════════════════════════════════════
    // T1: Single alloc — not busy
    // ════════════════════════════════════════════════
    initial begin : T1
        @(posedge clk); // let other initials start
    end

    task automatic test_alloc_single();
        $display("\n[T1] Alloc single checkpoint");
        do_reset();
        alloc(0, 7'h04, 10);
        chk("check_busy=0 after 1 alloc", check_busy, 0);
    endtask

    // ════════════════════════════════════════════════
    // T2: Flush restores specTag
    //     Key fix: wait 2 cycles after alloc before flush
    //     so valid bit is guaranteed set in the FF.
    // ════════════════════════════════════════════════
    task automatic test_flush_restore();
        $display("\n[T2] Flush restores specTag");
        do_reset();

        alloc(0, 7'h04, 20);   // alloc already waits for valid to land

        // Now flush — valid[4] is set, OUT_specTag should be restored
        flush = 1; flush_sqN = 7'h04;
        #1; // combinational output settles
        chk_tag("OUT_specTag[1] after flush", OUT_specTag[1], tag_t'(21));
        chk_tag("OUT_specTag[5] after flush", OUT_specTag[5], tag_t'(25));
        @(posedge clk); #1;
        flush = 0;
    endtask

    // ════════════════════════════════════════════════
    // T3: Fill all slots → check_busy=1, commit → drops
    // ════════════════════════════════════════════════
    task automatic test_commit_frees();
        $display("\n[T3] Commit frees entry");
        do_reset();

        // Fill all NUM_CHKPT slots
        for (int s = 0; s < NUM_CHKPT; s++) begin
            instr_sqN[0] = sqN_t'(s);
            chk_valid[0] = 1;
            @(posedge clk); #1;
            chk_valid[0] = 0;
            @(posedge clk); #1;
        end

        chk("check_busy=1 when full", check_busy, 1);

        commit_sqN[0] = 7'h00;
        comm_valid[0] = 1;
        @(posedge clk); #1;
        comm_valid[0] = 0;
        @(posedge clk); #1;

        chk("check_busy=0 after commit", check_busy, 0);
    endtask

    // ════════════════════════════════════════════════
    // T4: Flush invalidates at and after flush_sqN
    // ════════════════════════════════════════════════
    task automatic test_flush_invalidates();
        $display("\n[T4] Flush invalidates at and after flush_sqN");
        do_reset();

        alloc(0, 7'h02, 0);
        alloc(0, 7'h04, 0);
        alloc(0, 7'h06, 0);

        // Flush at sqN=4 — kills 4 and 6, keeps 2
        flush = 1; flush_sqN = 7'h04;
        @(posedge clk); #1;
        flush = 0;
        @(posedge clk); #1;

        // Only sqN=2 remains; commit it → should go idle
        commit_sqN[0] = 7'h02;
        comm_valid[0] = 1;
        @(posedge clk); #1;
        comm_valid[0] = 0;
        @(posedge clk); #1;

        chk("check_busy=0 after flush+commit", check_busy, 0);
    endtask

    // ════════════════════════════════════════════════
    // T5: Slot collision → check_busy
    // ════════════════════════════════════════════════
    task automatic test_stall_on_collision();
        $display("\n[T5] check_busy on slot collision");
        do_reset();

        alloc(0, 7'h03, 0);   // sqN=3 now occupied

        // Try to allocate same slot again — combinational stall
        instr_sqN[0] = 7'h03;
        chk_valid[0] = 1;
        #1; // combinational settle
        chk("check_busy=1 on collision", check_busy, 1);
        chk_valid[0] = 0;
        @(posedge clk); #1;
    endtask

    // ════════════════════════════════════════════════
    // T6: Dual simultaneous alloc, flush to first slot
    // ════════════════════════════════════════════════
    task automatic test_dual_alloc();
        $display("\n[T6] Dual simultaneous alloc");
        do_reset();

        // Alloc slot 0 → sqN=1 (base=30) and slot 1 → sqN=2 (base=60)
        set_spectag(0, 30); set_spectag(1, 60);
        instr_sqN[0] = 7'h01; instr_sqN[1] = 7'h02;
        chk_valid[0] = 1;    chk_valid[1] = 1;
        @(posedge clk); #1;
        chk_valid[0] = 0;    chk_valid[1] = 0;
        @(posedge clk); #1;

        // Flush to sqN=1 → should restore base=30
        flush = 1; flush_sqN = 7'h01;
        #1;
        chk_tag("OUT_specTag[0] after flush to sqN=1",
                OUT_specTag[0], tag_t'(30));
        @(posedge clk); #1;
        flush = 0;
    endtask

    // ── Run all ──────────────────────────────────────
    initial begin
        $dumpfile("tb_branch_checkpoint.vcd");
        $dumpvars(0, tb_branch_checkpoint);

        do_reset();
        test_alloc_single();
        test_flush_restore();
        test_commit_frees();
        test_flush_invalidates();
        test_stall_on_collision();
        test_dual_alloc();

        $display("\n════════════════════════════════");
        $display("  %0d PASS  %0d FAIL", pass_count, fail_count);
        $display("════════════════════════════════\n");
        $finish;
    end

endmodule

