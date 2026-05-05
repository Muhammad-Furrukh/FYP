`timescale 1ns / 1ps

import include_pkg::*;

module prefetch_tb;

    // Signals
    logic                             clk;
    logic                             rst;
    logic                             IN_busy;
    pc_t                              jta1;
    pc_t                              jta2;
    logic                             jump1;
    logic                             jump2;

    // Outputs
    prefetch_instr_t OUT_instr [FETCH_WIDTH];
    pc_t             OUT_pc    [FETCH_WIDTH];
    logic            OUT_valid [FETCH_WIDTH];

    // Instantiate the Unit Under Test (UUT)
    prefetch uut (
        .clk(clk),
        .rst(rst),
        .IN_busy(IN_busy),
        .jta1(jta1),
        .jta2(jta2),
        .jump1(jump1),
        .jump2(jump2),
        .OUT_instr(OUT_instr),
        .OUT_pc(OUT_pc),
        .OUT_valid(OUT_valid)
    );

    // Clock generation (10ns period / 100 MHz)
    initial begin
        clk = 1'b1;
        forever #5 clk = ~clk; // Toggle clock every 5ns
    end

    initial begin
        // Initialize Inputs
        rst      = 1'b1;
        IN_busy  = 1'b0;
        jta1     = '0;
        jta2     = '0;
        jump1    = 1'b0;
        jump2    = 1'b0;

        // Apply reset for 2 clock cycles
        repeat(2) @(posedge clk);
        rst = 1'b0;

        // -----------------------------------------------------
        // Test Case 1: Sequential execution
        // -----------------------------------------------------
        @(posedge clk);

        // -----------------------------------------------------
        // Test Case 2: IN_busy asserted (PC should be held / not update)
        // -----------------------------------------------------
        @(posedge clk);
        IN_busy  = 1'b1;

        // -----------------------------------------------------
        // Test Case 3: Deassert IN_busy, trigger jump1 (jta1)
        // -----------------------------------------------------
        @(posedge clk);
        IN_busy  = 1'b0;
        jump1    = 1'b1;
        jump2    = 1'b0;
        jta1     = 32'h0000_0004; // Example target address

        // -----------------------------------------------------
        // Test Case 4: Trigger jump2 (jta2)
        // -----------------------------------------------------
        @(posedge clk);
        jump1 = 1'b0;
        jump2 = 1'b1;
        jta2  = 32'h0000_0014; // Example target address

        // -----------------------------------------------------
        // Test Case 5: Return to normal operation
        // -----------------------------------------------------
        @(posedge clk);
        jump1 = 1'b0;
        jump2 = 1'b0;

        // Wait for a few cycles to observe the output
        repeat(4) @(posedge clk);

        // Terminate Simulation
        $display("[TB] Testbench completed successfully.");
        $finish;
    end

    // Monitor for observing signals in the simulation console
    initial begin
        $monitor("Time: %0t | rst: %b | IN_busy: %b | jump1: %b | jump2: %b | out_pc[0]: %h",
                 $time, rst, IN_busy, jump1, jump2, OUT_pc[0]);
    end

endmodule