`include "include_pkg.sv"

module tb_core;
    logic clk, clk_m, rst, rst_m;

    core dut (.*);

    // ── Clocks ────────────────────────────────────
    always #5  clk   = ~clk;     // 10ns period
    always #20 clk_m = ~clk_m;   // 40ns period

    int tests_run = 0, tests_fail = 0;

    // ── Global timeout ────────────────────────────
    initial begin
        #2000000;
        $display("TIMEOUT: Simulation did not complete");
        $finish;
    end

    // ── Helpers ────────────────────────────────────
    task automatic tick();
        @(posedge clk);
        #1;
    endtask

    task automatic tick_n(int n);
        repeat(n) tick();
    endtask

    // ── Main test sequence ─────────────────────────
    initial begin
    	$dumpfile("tb_core.fst");
    	$dumpvars(0, tb_core);
    
        clk = 0; clk_m = 0;
        rst = 1; rst_m = 1;
        tick_n(10);
        rst = 0; rst_m = 0;

        // Let the core fetch and execute from IMEM.
        // The IMEM is initialized in the RTL with the test program.
        // We just need to wait for the expected result to appear
        // on the CDB (Common Data Bus) or commit bus.

        $display("Core released from reset — watching commit bus...");

        // Wait for any commit with the expected result
        // ADDI x1, x0, 5 = 0x00500093 -> x1=5, tag=1
        fork
            begin
                int cycle = 0;
                while (cycle < 500) begin
                    tick();
                    cycle++;

                    // Check CDB lines for expected result
                    for (int i = 0; i < NUM_CDB_LINES; i++) begin
                        if (dut.CDB_valid[i] && dut.CDB_tag[i] == 6'd1) begin
                            tests_run++;
                            if (dut.CDB_result[i] == 32'd5) begin
                                $display("PASS: ADDI x1,x0,5 -> x1=5 at cycle %0d", cycle);
                            end else begin
                                tests_fail++;
                                $display("FAIL: ADDI x1,x0,5 -> got %0d expected 5",
                                         dut.CDB_result[i]);
                            end

                            // Quick test: check register_file via internal signals
                            // RF should have x1=5
                            tick();
                            tests_run++;
                            if (dut.register_file.registers[1] == 32'd5) begin
                                $display("PASS: RF[1] = 5 (via direct access)");
                            end else begin
                                tests_fail++;
                                $display("FAIL: RF[1] = %0d expected 5",
                                         dut.register_file.registers[1]);
                            end

                            $display("\n=== %0d/%0d TESTS FAILED ===", tests_fail, tests_run);
                            $finish;
                        end
                    end

                    // Also check commit packets
                    for (int i = 0; i < COMMIT_WIDTH; i++) begin
                        if (dut.commit_packet[i].valid &&
                            dut.commit_packet[i].archTag == 5'd1) begin
                            tests_run++;
                            $display("PASS: Commit saw x1 retire at cycle %0d", cycle);
                        end
                    end
                end
            end
        join

        // Should not reach here
        tests_fail++;
        $display("FAIL: Timed out waiting for result");
        $finish;
    end
endmodule
