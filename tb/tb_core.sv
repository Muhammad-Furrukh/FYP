import include_pkg::*;
module tb_core;
    logic clk, clk_m, rst, rst_m;
    core dut (.*);

    // ── Clocks ────────────────────────────────────
    always #5  clk   = ~clk;
    always #20 clk_m = ~clk_m;

    // ── Global timeout ────────────────────────────
    initial begin
        #2000000;
        $display("TIMEOUT: Simulation did not complete");
        dump_rob();
        $finish;
    end

    // ── Helpers ───────────────────────────────────
    task automatic tick();
        @(posedge clk); #1;
    endtask
    task automatic tick_n(int n);
        repeat(n) tick();
    endtask

    // ── ROB dump ──────────────────────────────────
    // Prints every ROB slot, then highlights the live window [head, tail).
    task automatic dump_rob();
        automatic int head_i  = int'(dut.ROB.head);
        automatic int tail_i  = int'(dut.ROB.tail);
        automatic int count_i = int'(dut.ROB.count);

        $display("");
        $display("════════════════════════════════════════════════════════");
        $display("  ROB STATE DUMP  @ %0t", $time);
        $display("  head=0x%0h  tail=0x%0h  count=%0d  full=%b  empty=%b",
                 head_i, tail_i, count_i,
                 dut.ROB.full, dut.ROB.empty);
        $display("  OUT_busy=%b", dut.ROB.OUT_busy);
        $display("────────────────────────────────────────────────────────");
        $display("  [slot]  sqN   tag   rd    ready  LIVE  (head→tail window)");
        $display("────────────────────────────────────────────────────────");

        for (int i = 0; i < ROB_SIZE; i++) begin
            // Determine whether slot i falls inside [head, tail) live window.
            // Works for both the wrapped and non-wrapped cases.
            automatic logic in_window;
            automatic int   offset;
            offset    = (i - head_i + ROB_SIZE) % ROB_SIZE;
            in_window = (count_i > 0) && (offset < count_i);

            $display("  [%02h]%s  sqN=%02h  tag=%02h  rd=%02h  ready=%b  %s",
                     i,
                     (i == head_i) ? "(H)" : (i == ((tail_i-1+ROB_SIZE)%ROB_SIZE)) ? "(T)" : "   ",
                     dut.ROB.rob[i].sqN,
                     dut.ROB.rob[i].tag,
                     dut.ROB.rob[i].rd,
                     dut.ROB.rob[i].ready,
                     in_window ? "LIVE" : "    ");
        end

        $display("────────────────────────────────────────────────────────");

        // Print only the live window in order for convenience
        $display("  Live window in commit order:");
        if (count_i == 0) begin
            $display("    (ROB is empty)");
        end else begin
            for (int j = 0; j < count_i && j < ROB_SIZE; j++) begin
                automatic int slot;
                slot = (head_i + j) % ROB_SIZE;
                $display("    [%02h] sqN=%02h  tag=%02h  rd=%02h  ready=%b%s",
                         slot,
                         dut.ROB.rob[slot].sqN,
                         dut.ROB.rob[slot].tag,
                         dut.ROB.rob[slot].rd,
                         dut.ROB.rob[slot].ready,
                         (j == 0) ? "  ← next to commit" : "");
            end
        end

        // Stall diagnosis: count ready vs not-ready in live window
        begin
            automatic int n_ready = 0, n_stalled = 0;
            for (int j = 0; j < count_i && j < ROB_SIZE; j++) begin
                automatic int slot;
                slot = (head_i + j) % ROB_SIZE;
                if (dut.ROB.rob[slot].ready) n_ready++;
                else                              n_stalled++;
            end
            $display("────────────────────────────────────────────────────────");
            $display("  Live entries: %0d ready, %0d NOT ready (stalled)",
                     n_ready, n_stalled);
            if (!dut.ROB.rob[head_i].ready && count_i > 0)
                $display("  *** HEAD entry sqN=%02h is NOT ready — commit stalled here ***",
                         dut.ROB.rob[head_i].sqN);
        end

        // Dump commit outputs
        $display("────────────────────────────────────────────────────────");
        $display("  OUT_commit ports:");
        for (int i = 0; i < COMMIT_WIDTH; i++) begin
            $display("    [%0d] valid=%b  sqN=%02h  comTag=%02h  archTag=%02h",
                     i,
                     dut.ROB.OUT_commit[i].valid,
                     dut.ROB.OUT_commit[i].sqN,
                     dut.ROB.OUT_commit[i].comTag,
                     dut.ROB.OUT_commit[i].archTag);
        end

        // Dump CDB lines at the moment of the dump
        $display("────────────────────────────────────────────────────────");
        $display("  CDB lines (snapshot at dump time):");
        for (int i = 0; i < NUM_CDB_LINES; i++) begin
            $display("    [%0d] valid=%b  sqN=%02h",
                     i,
                     dut.ROB.CDB_valid[i],
                     dut.ROB.CDB_sqN[i]);
        end

        $display("════════════════════════════════════════════════════════");
        $display("");
    endtask

    // ── Flush monitor ─────────────────────────────
    // Prints a one-liner every time a flush fires so you can correlate
    // flush events with the ROB state leading up to the stall.
    always @(posedge clk) begin
        if (dut.ROB.flush && !rst) begin
            $display("[%0t] FLUSH  flush_sqN=%02h  rob.head=%02h  rob.tail=%02h  count=%0d",
                     $time,
                     dut.ROB.flush_sqN,
                     dut.ROB.head,
                     dut.ROB.tail,
                     dut.ROB.count);
        end
    end

    // ── Commit monitor ────────────────────────────
    // Prints every commit so you can see exactly where the stream stops.
    always @(posedge clk) begin
        if (!rst) begin
            for (int i = 0; i < COMMIT_WIDTH; i++) begin
                if (dut.ROB.OUT_commit[i].valid) begin
                    $display("[%0t] COMMIT[%0d]  sqN=%02h  comTag=%02h  archTag=%02h",
                             $time, i,
                             dut.ROB.OUT_commit[i].sqN,
                             dut.ROB.OUT_commit[i].comTag,
                             dut.ROB.OUT_commit[i].archTag);
                end
            end
        end
    end

    // ── Stall watchdog ────────────────────────────
    // If the ROB is non-empty and nothing commits for STALL_THRESH cycles,
    // dump the ROB so you catch a stall before the global timeout fires.
    localparam int STALL_THRESH = 200;
    int stall_cycles = 0;
    always @(posedge clk) begin
        if (rst) begin
            stall_cycles <= 0;
        end else begin
            automatic logic any_commit = 0;
            for (int i = 0; i < COMMIT_WIDTH; i++)
                if (dut.ROB.OUT_commit[i].valid) any_commit = 1;

            if (!any_commit && dut.ROB.count > 0) begin
                stall_cycles <= stall_cycles + 1;
                if (stall_cycles == STALL_THRESH) begin
                    $display("[%0t] WATCHDOG: no commit for %0d cycles",
                             $time, STALL_THRESH);
                    dump_rob();
                    // Keep running — don't finish here so the global timeout
                    // can still fire if the stall never resolves.
                end
            end else begin
                stall_cycles <= 0;
            end
        end
    end

    // ── Main test sequence ─────────────────────────
    initial begin
        string prog_file;

        $dumpfile("./sim_verilator/tb_core.fst");
        $dumpvars(0, tb_core);

        clk = 0; clk_m = 0;
        rst = 1; rst_m = 1;

        tick_n(10);
        rst = 0; rst_m = 0;
        $display("Core released from reset...");

        fork
            begin
                if ($value$plusargs("PROG=%s", prog_file)) begin
                    $display("Loading program: %s", prog_file);
                    $readmemh(prog_file, dut.prefetch.IMEM.mem);
                end else begin
                    $error("Couldn't load program, exiting...");
                end
            end

            begin
                @(posedge clk);
                forever begin
                    @(posedge clk);
                    if (dut.lsu.u_dmem.wr_req_held[0].valid &&
                        dut.lsu.u_dmem.wr_req_held[0].wr_addr == 32'h00001000) begin
                        $display("PASS: data=%h", dut.lsu.u_dmem.wr_req_held[0].data);
                        $finish;
                    end
                    if (dut.lsu.u_dmem.wr_req_held[0].valid &&
                        dut.lsu.u_dmem.wr_req_held[0].wr_addr == 32'h00002000) begin
                        dump_rob();
                        $error("FAIL: data=%h", dut.lsu.u_dmem.wr_req_held[0].data);
                        $finish;
                    end
                end
            end
        join_none

        #2000;
        dump_rob();
        $error("FAIL: Timed out waiting for result");
    end

endmodule
