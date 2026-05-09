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
    fork
		begin
		    // Load instruction memory from hex file
		    if ($value$plusargs("PROG=%s", prog_file)) begin
		        $display("Loading program: %s", prog_file);
		        $readmemh(prog_file, dut.prefetch.IMEM.mem);
		    end else begin
		        $error("Couldn't load program, exiting...");
		    end
		    
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
		end
		begin
			int cycle = 0;
			forever begin
				@(posedge clk); #1;
				cycle++;
				for (int i = 0; i < NUM_CDB_LINES; i++) begin
					if (dut.CDB[i].valid)
						$display("[%0d] CDB[%0d] tag=%0d result=0x%08h sqN=%0d",
		      				cycle, i, dut.CDB[i].tag, dut.CDB[i].result, dut.CDB[i].sqN);
				end
				// Also watch commits
				for (int i = 0; i < COMMIT_WIDTH; i++) begin
				    if (dut.commit_packet[i].valid)
				        $display("[%0d] COMMIT[%0d] archTag=%0d sqN=%0d",
				                 cycle, i,
				                 dut.commit_packet[i].archTag,
				                 dut.commit_packet[i].sqN);
				end
				// Watch flushes
				if (dut.flush)
				    $display("[%0d] *** FLUSH sqN=%0d ***", cycle, dut.flush_sqN);
				if (cycle > 2000) begin
				    $display("Monitor giving up at cycle %0d", cycle);
				    $finish;
				end
				
			end
		end
	join_none
	    
    // Should not reach here under normal conditions
    #1000;
    tests_fail++;
    $display("FAIL: Timed out waiting for result");
    
    $readmemh(prog_file, dut.prefetch.IMEM.mem);
	for (int i = 0; i < 25; i++)
		$display("IMEM[%02d] = %08h", i, dut.prefetch.IMEM.mem[i]);
    
    $finish;
    end
endmodule
