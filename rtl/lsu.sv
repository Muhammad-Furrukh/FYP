import include_pkg::*;

module lsu (
    input  logic                clk, clk_m,
    input  logic                rst, rst_m,
    input  lsu_dispatch_instr_t dispatch_instr,
    input  agu_out_t            agu_out,
    input  sqN_t                commit_sqN [COMMIT_WIDTH],
    input  logic                flush,
    input  sqN_t                flush_sqN,
    output logic                OUT_busy,
    output CDB_line_t           OUT_cdb
);

    // --------------------------------------------------------
    // Decode dispatch_instr: determine if store or load
    // This must happen immediately for allocation
    // --------------------------------------------------------
    logic       is_store, is_load;

    always_comb begin
        is_store = 1'b0;
        is_load  = 1'b0;

        if (dispatch_instr.valid) begin
            case (dispatch_instr.oper)
                LSU_LB:  is_load  = 1'b1;
                LSU_LH:  is_load  = 1'b1;
                LSU_LW:  is_load  = 1'b1;
                LSU_LBU: is_load  = 1'b1;
                LSU_LHU: is_load  = 1'b1;
                LSU_SB:  is_store = 1'b1;
                LSU_SH:  is_store = 1'b1;
                LSU_SW:  is_store = 1'b1;
                default: begin is_store = 1'b0; is_load = 1'b0; end
            endcase
        end
    end

    // --------------------------------------------------------
    // Allocation → Store Buffer
    // --------------------------------------------------------
    stb_alloc_t stb_alloc;
    assign stb_alloc.valid = dispatch_instr.valid & is_store;
    assign stb_alloc.sqN   = dispatch_instr.sqN;

    // --------------------------------------------------------
    // Write-back → Store Buffer (use AGU decoded req_type)
    // --------------------------------------------------------
    stb_wb_t stb_wb;
    assign stb_wb.valid     = agu_out.valid & (agu_out.req_type == STORE);
    assign stb_wb.sqN       = agu_out.sqN;
    assign stb_wb.addr      = agu_out.target_addr;
    assign stb_wb.data      = agu_out.store_data;
    assign stb_wb.data_size = agu_out.data_size;

    // --------------------------------------------------------
    // Allocation → Load Buffer
    // --------------------------------------------------------
    ldb_alloc_t ldb_alloc;
    assign ldb_alloc.valid  = dispatch_instr.valid & is_load;
    assign ldb_alloc.sqN    = dispatch_instr.sqN;
    assign ldb_alloc.rd_tag = dispatch_instr.rd_tag;

    // --------------------------------------------------------
    // Write-back → Load Buffer (use AGU decoded req_type)
    // --------------------------------------------------------
    ldb_addr_t ldb_addr_wb;
    assign ldb_addr_wb.valid       = agu_out.valid & (agu_out.req_type == LOAD);
    assign ldb_addr_wb.sqN         = agu_out.sqN;
    assign ldb_addr_wb.addr        = agu_out.target_addr;
    assign ldb_addr_wb.data_size   = agu_out.data_size;
    assign ldb_addr_wb.is_unsigned = agu_out.is_unsigned;

    // --------------------------------------------------------
    // Store Buffer ↔ Data Memory wiring
    // --------------------------------------------------------
    stb_mem_req_t   stb_mem_req [2];
    logic	    mem_stall [2];
    stb_fwd_entry_t stb_fwd     [STOREB_SIZE];
    logic           str_busy;

    store_buffer u_stb (
        .clk        (clk),
        .rst        (rst),
        .alloc      (stb_alloc),
        .wb         (stb_wb),
        .commit_sqN (commit_sqN),
        .flush      (flush),
        .flush_sqN  (flush_sqN),
        .mem_stall  (mem_stall),
        .mem_req    (stb_mem_req),
        .fwd        (stb_fwd),
        .str_busy   (str_busy)
    );

    // --------------------------------------------------------
    // Load Buffer ↔ Data Memory wiring
    // --------------------------------------------------------
    ldb_mem_req_t ldb_mem_req  [2];
    dmem_resp_t   ldb_mem_resp [2];
    logic         ld_busy;

    load_buffer u_ldb (
        .clk       (clk),
        .rst       (rst),
        .alloc     (ldb_alloc),
        .addr_wb   (ldb_addr_wb),
        .stb_fwd   (stb_fwd),
        .flush     (flush),
        .flush_sqN (flush_sqN),
        .mem_req   (ldb_mem_req),
        .mem_resp  (ldb_mem_resp),
        .cdb_out   (OUT_cdb),
        .ld_busy   (ld_busy)
    );

    // --------------------------------------------------------
    // Data Memory
    // --------------------------------------------------------
    data_memory u_dmem (
        .clk_cpu     	(clk),
        .rst_cpu     	(rst),
        
        .clk_mem     	(clk_m),
        .rst_mem     	(rst_m),	
        
        .wr_req  	(stb_mem_req),
        .wr_stall	(mem_stall),
        
        .rd_req  	(ldb_mem_req),
        .rd_resp 	(ldb_mem_resp),
        .rd_stall	()
    );

    // --------------------------------------------------------
    // Outputs
    // busy = str_busy | ld_busy  (OR gate from diagram)
    // --------------------------------------------------------
    assign OUT_busy = str_busy | ld_busy;

endmodule
