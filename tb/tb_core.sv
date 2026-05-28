import include_pkg::*;

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
        
        $dumpfile("./sim_verilator/tb_core.fst");
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
		join_none
	
		// Should not reach here under normal conditions
		#1000;
		tests_fail++;
		$display("FAIL: Timed out waiting for result");
		
		$finish;
		end
    
endmodule
