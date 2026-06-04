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
        $display("  [slot]  sqN   tag   rd    ready  LIVE");
        $display("────────────────────────────────────────────────────────");

        for (int i = 0; i < ROB_SIZE; i++) begin
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
                         (j == 0) ? "  <- next to commit" : "");
            end
        end

        begin
            automatic int n_ready = 0, n_stalled = 0;
            for (int j = 0; j < count_i && j < ROB_SIZE; j++) begin
                automatic int slot;
                slot = (head_i + j) % ROB_SIZE;
                if (dut.ROB.rob[slot].ready) n_ready++;
                else                          n_stalled++;
            end
            $display("────────────────────────────────────────────────────────");
            $display("  Live entries: %0d ready, %0d NOT ready (stalled)",
                     n_ready, n_stalled);
            if (!dut.ROB.rob[head_i].ready && count_i > 0)
                $display("  *** HEAD entry sqN=%02h is NOT ready — commit stalled here ***",
                         dut.ROB.rob[head_i].sqN);
        end

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

    // ════════════════════════════════════════════════════════
    // ARCHITECTURAL REGISTER FILE SNAPSHOT ON COMMIT
    // Reads physical registers via committed tags from rename.
    // ════════════════════════════════════════════════════════

    // RISC-V ABI names for display
    function automatic string reg_name(int i);
        case (i)
            0:  return "zero";
            1:  return "ra";
            2:  return "sp";
            3:  return "gp";
            4:  return "tp";
            5:  return "t0";
            6:  return "t1";
            7:  return "t2";
            8:  return "s0";
            9:  return "s1";
            10: return "a0";
            11: return "a1";
            12: return "a2";
            13: return "a3";
            14: return "a4";
            15: return "a5";
            16: return "a6";
            17: return "a7";
            18: return "s2";
            19: return "s3";
            20: return "s4";
            21: return "s5";
            22: return "s6";
            23: return "s7";
            24: return "s8";
            25: return "s9";
            26: return "s10";
            27: return "s11";
            28: return "t3";
            29: return "t4";
            30: return "t5";
            31: return "t6";
            default: return "??";
        endcase
    endfunction

    task automatic dump_arch_rf();
        $display("  ── Architectural RF snapshot ──────────────────");
        $display("  %-6s  %-4s  %-10s", "arch", "ptag", "value");
        for (int r = 0; r < 32; r++) begin
            automatic tag_t  ptag;
            automatic logic [XLEN-1:0] val;
            // committed tag for arch reg r lives in rename's
            // committed map — adjust hierarchy to match your rename module
            ptag = dut.rename.rename_table[r].commTag;
            val  = dut.register_file.registers[ptag];
            $display("  x%-2d(%-4s) p%-2d  0x%08h",
                    r, reg_name(r), ptag, val);
        end
        $display("  ───────────────────────────────────────────────");
    endtask

    always @(posedge clk) begin
        if (!rst && !dut.flush) begin
            automatic logic any_commit = 0;
            for (int i = 0; i < COMMIT_WIDTH; i++)
                if (dut.ROB.OUT_commit[i].valid) any_commit = 1;

            if (any_commit) begin
                $display("[%0t] ARCH_RF_SNAPSHOT", $time);
                // Print which arch regs were updated this cycle
                for (int i = 0; i < COMMIT_WIDTH; i++) begin
                    if (dut.ROB.OUT_commit[i].valid &&
                        dut.ROB.OUT_commit[i].archTag != 0) begin
                        automatic tag_t  ptag;
                        automatic logic [XLEN-1:0] val;
                        ptag = dut.ROB.OUT_commit[i].comTag;
                        val  = dut.register_file.registers[ptag];
                        $display("  COMMIT x%-2d(%-4s) <- p%-2d = 0x%08h  (sqN=%02h)",
                                dut.ROB.OUT_commit[i].archTag,
                                reg_name(int'(dut.ROB.OUT_commit[i].archTag)),
                                ptag, val,
                                dut.ROB.OUT_commit[i].sqN);
                    end
                end
                // Full RF dump — comment out if too verbose
                dump_arch_rf();
            end
        end
    end

    // ── Flush monitor ─────────────────────────────
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
    always @(posedge clk) begin
        if (!rst) begin
            for (int i = 0; i < COMMIT_WIDTH; i++) begin
                if (dut.ROB.OUT_commit[i].valid)
                    $display("[%0t] COMMIT[%0d]  sqN=%02h  comTag=%02h  archTag=%02h",
                             $time, i,
                             dut.ROB.OUT_commit[i].sqN,
                             dut.ROB.OUT_commit[i].comTag,
                             dut.ROB.OUT_commit[i].archTag);
            end
        end
    end

    // ── Stall watchdog ────────────────────────────
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
                    $display("[%0t] WATCHDOG: no commit for %0d cycles", $time, STALL_THRESH);
                    dump_rob();
                end
            end else begin
                stall_cycles <= 0;
            end
        end
    end

    // ════════════════════════════════════════════════════════
    // OoO ISSUE MONITOR
    // ════════════════════════════════════════════════════════
    always @(posedge clk) begin
        if (!rst && !dut.flush) begin

            // ── ALU buffer ──
            for (int fu = 0; fu < NUM_ALU_FU; fu++) begin
                if (dut.issue.OUT_instr[fu].valid) begin
                    automatic sqN_t issued_sqN = dut.issue.OUT_instr[fu].sqN;
                    for (int i = 0; i < ISSUEB_SIZE; i++) begin
                        automatic sqN_t diff =
                            issued_sqN - dut.issue.gen_alu_buffer[0].alu_issue_buffer_i.queue[i].sqN;
                        if (dut.issue.gen_alu_buffer[0].alu_issue_buffer_i.queue[i].valid &&
                            diff > 0 && diff < sqN_t'(ROB_SIZE))
                            $display("[%0t] OoO_ISSUE_DETECTED [ALU]: issued sqN=%02h, older sqN=%02h still waiting",
                                $time, issued_sqN,
                                dut.issue.gen_alu_buffer[0].alu_issue_buffer_i.queue[i].sqN);
                    end
                end
            end

            // ── MUL/DIV buffer ──
            for (int fu = 0; fu < NUM_MUL_DIV_FU; fu++) begin
                if (dut.issue.OUT_instr[NUM_ALU_FU + fu].valid) begin
                    automatic sqN_t issued_sqN = dut.issue.OUT_instr[NUM_ALU_FU + fu].sqN;
                    for (int i = 0; i < ISSUEB_SIZE; i++) begin
                        automatic sqN_t diff =
                            issued_sqN - dut.issue.gen_mul_div_buffer[0].mul_div_issue_buffer_i.queue[i].sqN;
                        if (dut.issue.gen_mul_div_buffer[0].mul_div_issue_buffer_i.queue[i].valid &&
                            diff > 0 && diff < sqN_t'(ROB_SIZE))
                            $display("[%0t] OoO_ISSUE_DETECTED [MULDIV]: issued sqN=%02h, older sqN=%02h still waiting",
                                $time, issued_sqN,
                                dut.issue.gen_mul_div_buffer[0].mul_div_issue_buffer_i.queue[i].sqN);
                    end
                end
            end

            // ── LSU buffer ──
            for (int fu = 0; fu < NUM_AGU_FU; fu++) begin
                if (dut.issue.OUT_lsu_instr[fu].valid) begin
                    automatic sqN_t issued_sqN = dut.issue.OUT_lsu_instr[fu].sqN;
                    for (int i = 0; i < ISSUEB_SIZE; i++) begin
                        automatic sqN_t diff =
                            issued_sqN - dut.issue.gen_agu_buffer[0].lsu_issue_buffer_i.queue[i].sqN;
                        if (dut.issue.gen_agu_buffer[0].lsu_issue_buffer_i.queue[i].valid &&
                            diff > 0 && diff < sqN_t'(ROB_SIZE))
                            $display("[%0t] OoO_ISSUE_DETECTED [LSU]: issued sqN=%02h, older sqN=%02h still waiting",
                                $time, issued_sqN,
                                dut.issue.gen_agu_buffer[0].lsu_issue_buffer_i.queue[i].sqN);
                    end
                end
            end

        end
    end

    // ════════════════════════════════════════════════════════
    // IN-ORDER COMMIT CHECKER  
    // ════════════════════════════════════════════════════════
    sqN_t        last_committed_sqN;
    logic        first_commit_done;
    sqN_t        running_sqN; 
    sqN_t        diff;

    always @(posedge clk) begin
        if (rst) begin
            last_committed_sqN <= '0;
            first_commit_done  <= 1'b0;
        end
        else if (!dut.flush) begin
            running_sqN = last_committed_sqN;
            for (int i = 0; i < COMMIT_WIDTH; i++) begin
                if (dut.ROB.OUT_commit[i].valid) begin
                    diff = dut.ROB.OUT_commit[i].sqN - running_sqN;
                    if (first_commit_done && (diff > sqN_t'(ROB_SIZE)))
                        $display("[%0t] IN_ORDER_COMMIT_VIOLATION: sqN=%02h after sqN=%02h",
                            $time, dut.ROB.OUT_commit[i].sqN, running_sqN);
                    else
                        $display("[%0t] IN_ORDER_COMMIT_OK: sqN=%02h",
                            $time, dut.ROB.OUT_commit[i].sqN);
                    running_sqN = dut.ROB.OUT_commit[i].sqN;
                    first_commit_done <= 1'b1;
                end
            end
            last_committed_sqN <= running_sqN;
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
                    for(int i = 0; i < 2; i++) begin
                        if (dut.lsu.u_dmem.wr_req_held[i].valid &&
                            dut.lsu.u_dmem.wr_req_held[i].wr_addr == 32'h00001000) begin
                            $display("PASS: data=%h", dut.lsu.u_dmem.wr_req_held[i].data);
                            $finish;
                        end
                        if (dut.lsu.u_dmem.wr_req_held[i].valid &&
                            dut.lsu.u_dmem.wr_req_held[i].wr_addr == 32'h00002000) begin
                            dump_rob();
                            $error("FAIL: data=%h", dut.lsu.u_dmem.wr_req_held[i].data);
                            $finish;
                        end
                    end
                end
            end
        join_none

        #5000;
        dump_rob();
        $error("FAIL: Timed out waiting for result");
    end


endmodule

    