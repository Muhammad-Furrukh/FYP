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
        string prog_file;
        
        $dumpfile("tb_core.fst");
        $dumpvars(0, tb_core);
    
	// Initialize clocks and reset
        clk = 0; clk_m = 0;
        rst = 1; rst_m = 1;
        
        tick_n(10);
        rst = 0; rst_m = 0;

        $display("Core released from reset...");
    
        // Load instruction memory from hex file
        if ($value$plusargs("PROG=%s", prog_file)) begin
            $display("Loading program: %s", prog_file);
            $readmemh(prog_file, dut.prefetch.IMEM.mem);
        end else begin
            $display("Using default program (ADDI x1,x0,5)");
            // Default: ADDI x1, x0, 5
            dut.prefetch.IMEM.mem[0] = 32'h00500093;
            // Add NOP or infinite loop after
            dut.prefetch.IMEM.mem[1] = 32'h00000013; // NOP
            dut.prefetch.IMEM.mem[2] = 32'h0000006f; // JAL x0, 2 (infinite loop)
        end
        
        // Enable pass/fail detection in parallel
	fork
	    begin
		// Monitor memory-mapped test result addresses
		@(posedge clk);
		forever begin
		    @(posedge clk);
		    // Check both write ports for PASS/FAIL
		    if (dut.lsu.u_dmem.wr_req_held[0].valid && 
		       dut.lsu.u_dmem.wr_req_held[0].wr_addr == 32'h00001000) begin
		       $display("PASS: data=%h", dut.lsu.u_dmem.wr_req_held[0].data);
		       $finish;
		    end

		    if (dut.lsu.u_dmem.wr_req_held[0].valid && 
		       dut.lsu.u_dmem.wr_req_held[0].wr_addr == 32'h00002000) begin
		       $display("FAIL: data=%h", dut.lsu.u_dmem.wr_req_held[0].data);
		       $finish;
		    end
		end
	    end
	join_none
	
	/*
        // Main monitoring loop
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

                        // Check register_file via internal signals
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
	    
	    
            // If we get here, the default program test timed out
            $display("No specific test result detected - this is normal for custom programs");
            $display("Waiting for pass/fail signal or timeout...");
        end
        */
        
        // Should not reach here under normal conditions
        #1000;
        tests_fail++;
        $display("FAIL: Timed out waiting for result");
        $finish;
    end
endmodule
