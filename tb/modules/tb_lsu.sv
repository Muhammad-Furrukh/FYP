`include "include_pkg.sv"

module tb_lsu;
    logic clk, clk_m, rst, rst_m;

    // Inputs
    lsu_dispatch_instr_t dispatch_instr;
    agu_out_t            agu_out;
    sqN_t                commit_sqN [COMMIT_WIDTH];
    logic                flush;
    sqN_t                flush_sqN;

    // Outputs - use the actual port names from lsu module
    logic                OUT_busy;
    CDB_line_t           OUT_cdb;

    lsu dut (.*);

    // Clocks
    always #5  clk   = ~clk;
    always #20 clk_m = ~clk_m;

    int tests_run = 0, tests_fail = 0;

    task tick();
        @(posedge clk); #1;
    endtask

    task tick_n(int n);
        repeat(n) tick();
    endtask

    task reset();
        clk = 0; clk_m = 0;
        rst = 1; rst_m = 1;
        tick_n(5);
        rst = 0; rst_m = 0;
        tick_n(2);
    endtask
    
initial begin
    $dumpfile("tb_lsu.fst");
    $dumpvars(0, tb_lsu);
    reset();

    $display("=== LSU Debug Trace ===");
    
    $display("\n[Test 1] Store Word to address 0x100");
    
    // Initialize commit inputs
    commit_sqN[0] = '0;
    commit_sqN[1] = '0;
    flush = 0;
    flush_sqN = '0;
    
    // Dispatch store
    dispatch_instr.valid  = 1;
    dispatch_instr.sqN    = sqN_t'(1);
    dispatch_instr.oper   = LSU_SW;
    dispatch_instr.rs1_tag = 1;
    dispatch_instr.rs2_tag = 2;
    dispatch_instr.rd_tag  = 0;
    dispatch_instr.imm    = 0;
    dispatch_instr.is_imm = 1;
    tick();

    $display("After dispatch: is_store=%b, stb_alloc.valid=%b", 
             dut.is_store, dut.stb_alloc.valid);

    // AGU provides address and data
    agu_out.valid       = 1;
    agu_out.sqN         = sqN_t'(1);
    agu_out.target_addr = 32'h100;
    agu_out.store_data  = 32'hDEADBEEF;
    agu_out.req_type    = STORE;
    agu_out.data_size   = WORD;
    agu_out.is_unsigned = 0;
    tick();

    $display("After AGU: stb_wb.valid=%b, stb_wb.addr=%h, stb_wb.data=%h",
             dut.stb_wb.valid, dut.stb_wb.addr, dut.stb_wb.data);

    dispatch_instr.valid = 0;
    agu_out.valid = 0;
    tick();

    // COMMIT the store - this is what triggers memory write
    commit_sqN[0] = sqN_t'(1);
    $display("Committing sqN=1...");
    tick();
    commit_sqN[0] = '0;
    
    $display("Store buffer: stb_mem_req[0].valid=%b", dut.u_dmem.wr_req[0].valid);
    
    // Wait for CDC
    tick_n(15);
    
    $display("DMEM: wr_req_held[0].valid=%b, .wr_addr=%h, .data=%h",
             dut.u_dmem.wr_req_held[0].valid, 
             dut.u_dmem.wr_req_held[0].wr_addr,
             dut.u_dmem.wr_req_held[0].data);

    if (dut.u_dmem.wr_req_held[0].valid && 
        dut.u_dmem.wr_req_held[0].wr_addr == 32'h100) begin
        tests_run++;
        if (dut.u_dmem.wr_req_held[0].data == 32'hDEADBEEF) begin
            $display("  PASS: Store data = %h", dut.u_dmem.wr_req_held[0].data);
        end else begin
            tests_fail++;
            $display("  FAIL: Store data = %h, expected DEADBEEF", 
                     dut.u_dmem.wr_req_held[0].data);
        end
    end else begin
        tests_fail++;
        $display("  FAIL: Store not seen in data memory");
    end
    
    // ── Test 2: Load word ─────────────────────────
    $display("\n[Test 2] Load Word from address 0x100");
    reset();
    commit_sqN[0] = '0;
    commit_sqN[1] = '0;
    flush = 0;
    flush_sqN = '0;
    
    // Need to set rd_tag to a valid register tag
    dispatch_instr.rd_tag  = 3;  // Must be non-zero
    tick_n(2);

    // First store a value
    $display("--- Doing store ---");
    dispatch_instr.valid  = 1;
    dispatch_instr.sqN    = sqN_t'(1);
    dispatch_instr.oper   = LSU_SW;
    dispatch_instr.rs1_tag = 1;
    dispatch_instr.rs2_tag = 2;
    dispatch_instr.rd_tag  = 0;   // stores don't have rd
    dispatch_instr.imm    = 0;
    dispatch_instr.is_imm = 1;
    tick();

    agu_out.valid       = 1;
    agu_out.sqN         = sqN_t'(1);
    agu_out.target_addr = 32'h200;
    agu_out.store_data  = 32'hCAFEBABE;
    agu_out.req_type    = STORE;
    agu_out.data_size   = WORD;
    tick();

    dispatch_instr.valid = 0;
    agu_out.valid = 0;
    
    // Commit the store
    commit_sqN[0] = sqN_t'(1);
    tick();
    commit_sqN[0] = '0;
    tick_n(10);

    // Now load
    $display("--- Doing load, ldb_alloc.rd_tag should be set ---");
    dispatch_instr.valid  = 1;
    dispatch_instr.sqN    = sqN_t'(2);
    dispatch_instr.oper   = LSU_LW;
    dispatch_instr.rs1_tag = 3;
    dispatch_instr.rs2_tag = 0;
    dispatch_instr.rd_tag  = 5;   // destination register tag
    dispatch_instr.imm    = 32'h200;
    dispatch_instr.is_imm = 1;
    tick();
    
    $display("ldb_alloc: valid=%b, sqN=%0d, rd_tag=%0d",
             dut.ldb_alloc.valid, dut.ldb_alloc.sqN, dut.ldb_alloc.rd_tag);
    $display("is_load=%b", dut.is_load);

    // After setting agu_out for load, wait longer before checking
    agu_out.valid       = 1;
    agu_out.sqN         = sqN_t'(2);
    agu_out.target_addr = 32'h200;
    agu_out.store_data  = '0;
    agu_out.req_type    = LOAD;
    agu_out.data_size   = WORD;
    agu_out.is_unsigned = 0;
        
    $display("ldb_addr_wb: valid=%b, sqN=%0d, addr=%h",
             dut.ldb_addr_wb.valid, dut.ldb_addr_wb.sqN, dut.ldb_addr_wb.addr);
    
    tick();

    dispatch_instr.valid = 0;
    agu_out.valid = 0;
    
    tick();  // <-- ADD THIS: wait for addr_valid to be set in FF
    
    $display("After addr_wb+tick: ldb_mem_req[0]=valid:%b addr:%h stall:%0d", 
             dut.u_ldb.mem_req[0].valid, 
             dut.u_ldb.mem_req[0].r_addr,
             dut.u_ldb.stall[0]);

    tick_n(15);

    dispatch_instr.valid = 0;
    agu_out.valid = 0;

    // Check load buffer state
    $display("ldb_mem_req[0]: valid=%b, addr=%h", 
             dut.u_ldb.mem_req[0].valid, dut.u_ldb.mem_req[0].r_addr);

    tick_n(5);
    
    $display("ldb_mem_resp[0]: valid=%b", dut.u_dmem.rd_resp[0].valid);
    $display("rd_ack_sync[0]=%b", dut.u_dmem.rd_ack_sync[0]);

    tick_n(10);

    $display("OUT_cdb: valid=%b, tag=%0d, result=%h", 
             OUT_cdb.valid, OUT_cdb.tag, OUT_cdb.result);

    if (OUT_cdb.valid && OUT_cdb.tag == 5) begin
        tests_run++;
        if (OUT_cdb.result == 32'hCAFEBABE) begin
            $display("  PASS: Load data = %h", OUT_cdb.result);
        end else begin
            tests_fail++;
            $display("  FAIL: Load data = %h, expected CAFEBABE", OUT_cdb.result);
        end
    end else begin
        tests_fail++;
        $display("  FAIL: Load not completed");
    end
    
    $display("\n=== %0d/%0d TESTS FAILED ===", tests_fail, tests_run);
    $finish;
end

    initial begin
        #1000000;
        $display("TIMEOUT");
        $finish;
    end

endmodule
