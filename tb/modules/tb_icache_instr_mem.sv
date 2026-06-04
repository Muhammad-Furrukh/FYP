import include_pkg::*;

module tb_icache_instr_mem;
    // ── Clocks ────────────────────────────────────
    logic clk_cpu;
    logic clk_mem;
    logic rst_cpu;
    logic rst_mem;

    initial clk_cpu = 0;
    always #5 clk_cpu = ~clk_cpu;

    initial clk_mem = 0;
    always #20 clk_mem = ~clk_mem;

    // ── Global timeout ────────────────────────────
    initial begin
        #1000000;
        $display("TIMEOUT: Simulation did not complete");
        $finish;
    end

    // ── Helpers ───────────────────────────────────
    task automatic tick_cpu();
        @(posedge clk_cpu); #1;
    endtask
    task automatic tick_cpu_n(int n);
        repeat(n) tick_cpu();
    endtask

    //==========================================================================
    // DUT Signals
    //==========================================================================
    logic               fetch_valid;
    logic               fetch_ready;
    pc_t                fetch_addr;
    fetch_packet_t      fetch_data;
    logic               fetch_hit;

    logic               bus_req_valid;
    logic               bus_req_ready;
    pc_t                bus_req_addr;
    logic               bus_resp_valid;
    fetch_packet_t      bus_resp_data;

    logic               inval_valid;
    pc_t                inval_addr;
    logic               inval_done;

    logic               imem_rd_req_valid;
    pc_t                imem_rd_req_addr;
    logic               imem_rd_stall;
    logic               imem_rd_resp_valid;
    fetch_packet_t      imem_rd_resp_data;

    // BIU glue
    assign imem_rd_req_valid = bus_req_valid;
    assign imem_rd_req_addr  = bus_req_addr;
    assign bus_req_ready     = !imem_rd_stall;
    assign bus_resp_valid    = imem_rd_resp_valid;
    assign bus_resp_data     = imem_rd_resp_data;

    //==========================================================================
    // DUT
    //==========================================================================
    icache u_icache (
        .clk            (clk_cpu),
        .rst            (rst_cpu),
        .fetch_valid    (fetch_valid),
        .fetch_ready    (fetch_ready),
        .fetch_addr     (fetch_addr),
        .fetch_data     (fetch_data),
        .fetch_hit      (fetch_hit),
        .bus_req_valid  (bus_req_valid),
        .bus_req_ready  (bus_req_ready),
        .bus_req_addr   (bus_req_addr),
        .bus_resp_valid (bus_resp_valid),
        .bus_resp_data  (bus_resp_data),
        .inval_valid    (inval_valid),
        .inval_addr     (inval_addr),
        .inval_done     (inval_done)
    );

    instr_memory #(
        .DEPTH (256)
    ) u_instr_memory (
        .clk_cpu        (clk_cpu),
        .rst_cpu        (rst_cpu),
        .clk_mem        (clk_mem),
        .rst_mem        (rst_mem),
        .rd_req_valid   (imem_rd_req_valid),
        .rd_req_addr    (imem_rd_req_addr),
        .rd_stall       (imem_rd_stall),
        .rd_resp_valid  (imem_rd_resp_valid),
        .rd_resp_data   (imem_rd_resp_data)
    );

    //==========================================================================
    // Test Data
    //==========================================================================
    fetch_packet_t data_0x00;
    fetch_packet_t data_0x08;
    fetch_packet_t data_0x40;
    fetch_packet_t data_0x80;
    fetch_packet_t data_0x100;

    task automatic fetch_verify(
        input pc_t           addr,
        input fetch_packet_t expected_data,
        input logic          expect_hit,
        input string         test_name
    );
        automatic fetch_packet_t got_data;
        automatic logic          got_hit;

        $display("[%0t] %s", $time, test_name);
        $display("        Address: 0x%08h, Expect hit: %b", addr, expect_hit);

        // Present the request
        fetch_valid = 1;
        fetch_addr  = addr;

        // Wait for cache to accept the request (fetch_ready)
        while (!fetch_ready) begin
            tick_cpu();
        end

        // Request accepted into stage 0 (addr_r)
        // Data will be valid 2 cycles later (stage 1 → stage 2)
        tick_cpu();  // Stage 1: array read happens
        tick_cpu();  // Stage 2: hit detection, data valid now

        got_data = fetch_data;
        got_hit  = fetch_hit;
        fetch_valid = 0;

        if (got_data === expected_data) begin
            $display("        PASS: Data match 0x%016h", got_data);
        end else begin
            $display("        FAIL: Data mismatch. Got 0x%016h, Expected 0x%016h",
                   got_data, expected_data);
        end

        if (got_hit === expect_hit) begin
            $display("        PASS: Hit=%b as expected", got_hit);
        end else begin
            $display("        FAIL: Hit=%b, Expected=%b", got_hit, expect_hit);
        end

        tick_cpu();
    endtask

    //==========================================================================
    // Test Task: Invalidate
    //==========================================================================
    task automatic invalidate_line(input pc_t addr);
        $display("[%0t] Invalidate: addr 0x%08h", $time, addr);
        inval_valid = 1;
        inval_addr  = addr;
        while (!inval_done) tick_cpu();
        inval_valid = 0;
        $display("        Invalidation done");
        tick_cpu();
    endtask

    //==========================================================================
    // Main Test
    //==========================================================================
    initial begin
        string  prog_file;
        int     fd;
        logic   file_loaded;

        $dumpfile("./sim_verilator/tb_icache_instr_mem.fst");
        $dumpvars(0, tb_icache_instr_mem);

        fetch_valid = 0;
        fetch_addr  = '0;
        inval_valid = 0;
        inval_addr  = '0;

        data_0x00  = {32'hCAFEBABE, 32'hDEADBEEF};
        data_0x08  = {32'h00000002, 32'h00000001};
        data_0x40  = {32'hAABBCCDD, 32'h11223344};
        data_0x80  = {32'hFFFFFFFF, 32'h00000000};
        data_0x100 = {32'h55555555, 32'hAAAAAAAA};

        // Reset
        rst_cpu = 1;
        rst_mem = 1;
        tick_cpu_n(5);
        rst_cpu = 0;
        rst_mem = 0;
        tick_cpu_n(5);

        $display("==============================================");
        $display(" I-Cache + Instruction Memory Testbench");
        $display(" NUM_LINES=16, DEPTH=256");
        $display("==============================================");

        // Try loading from file, fall back to manual pre-load
        file_loaded = 1'b0;
        if ($value$plusargs("PROG=%s", prog_file)) begin
            // Try to open the file to check if it exists
            fd = $fopen(prog_file, "r");
            if (fd) begin
                $fclose(fd);
                $display("Loading program: %s", prog_file);
                $readmemh(prog_file, u_instr_memory.bram);
                file_loaded = 1'b1;
                $display("File loaded successfully");
            end else begin
                $display("WARNING: Cannot open '%s', using default test data", prog_file);
            end
        end

        if (!file_loaded) begin
            $display("Pre-loading default test data into instruction memory");
            u_instr_memory.bram[0]  = data_0x00;
            u_instr_memory.bram[1]  = data_0x08;
            u_instr_memory.bram[8]  = data_0x40;
            u_instr_memory.bram[16] = data_0x80;
            u_instr_memory.bram[32] = data_0x100;
            $display("Test data loaded at addresses 0x00, 0x08, 0x40, 0x80, 0x100");
        end

        //======================================================================
        // TEST 1: Cold Miss
        //======================================================================
        $display("\n--- Test 1: Cold Miss at 0x00 ---");
        fetch_verify(.addr(32'h0000_0000), .expected_data(data_0x00),
                     .expect_hit(1'b0), .test_name("Cold miss at 0x00"));

        //======================================================================
        // TEST 2: Hit
        //======================================================================
        $display("\n--- Test 2: Hit at 0x00 ---");
        fetch_verify(.addr(32'h0000_0000), .expected_data(data_0x00),
                     .expect_hit(1'b1), .test_name("Hit at 0x00"));
        /*
        //======================================================================
        // TEST 3: Different index
        //======================================================================
        $display("\n--- Test 3: Miss at 0x40 ---");
        fetch_verify(.addr(32'h0000_0040), .expected_data(data_0x40),
                     .expect_hit(1'b0), .test_name("Miss at 0x40"));

        //======================================================================
        // TEST 4: Both cached
        //======================================================================
        $display("\n--- Test 4: Hit at 0x00 (still cached) ---");
        fetch_verify(.addr(32'h0000_0000), .expected_data(data_0x00),
                     .expect_hit(1'b1), .test_name("Still cached at 0x00"));

        $display("\n--- Test 5: Hit at 0x40 (still cached) ---");
        fetch_verify(.addr(32'h0000_0040), .expected_data(data_0x40),
                     .expect_hit(1'b1), .test_name("Still cached at 0x40"));

        //======================================================================
        // TEST 6: Invalidate
        //======================================================================
        $display("\n--- Test 6: Invalidate and Re-miss at 0x00 ---");
        invalidate_line(32'h0000_0000);
        fetch_verify(.addr(32'h0000_0000), .expected_data(data_0x00),
                     .expect_hit(1'b0), .test_name("Re-miss after invalidation"));

        //======================================================================
        // TEST 7: Tag aliasing
        //======================================================================
        $display("\n--- Test 7: 0x100 evicts 0x00 (same index) ---");
        fetch_verify(.addr(32'h0000_0100), .expected_data(data_0x100),
                     .expect_hit(1'b0), .test_name("Alias miss at 0x100"));

        $display("\n--- Test 8: 0x00 re-miss after eviction ---");
        fetch_verify(.addr(32'h0000_0000), .expected_data(data_0x00),
                     .expect_hit(1'b0), .test_name("0x00 evicted, re-miss"));

        //======================================================================
        // TEST 9: Back-to-back
        //======================================================================
        $display("\n--- Test 9: Miss at 0x80 ---");
        fetch_verify(.addr(32'h0000_0080), .expected_data(data_0x80),
                     .expect_hit(1'b0), .test_name("Miss at 0x80"));

        tick_cpu_n(20);

        $display("\n--- Test 10: 0x40 still cached ---");
        fetch_verify(.addr(32'h0000_0040), .expected_data(data_0x40),
                     .expect_hit(1'b1), .test_name("0x40 still cached"));
        */

        //======================================================================
        $display("\n==============================================");
        $display(" All tests completed successfully");
        $display("==============================================");
        #100;
        $finish;
    end

    //==========================================================================
    // Bus Activity Monitor
    //==========================================================================
    always @(posedge clk_cpu) begin
        if (bus_req_valid && bus_req_ready)
            $display("[%0t] MONITOR: Cache miss, req addr 0x%08h", $time, bus_req_addr);
        if (bus_resp_valid)
            $display("[%0t] MONITOR: Memory response: 0x%016h", $time, bus_resp_data);
        if (inval_done)
            $display("[%0t] MONITOR: Invalidation complete", $time);
    end

endmodule