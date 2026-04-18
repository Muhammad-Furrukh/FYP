import include_pkg::*;

module lsu (
    input  logic             clk,
    input  logic             rst,
    input  lsu_issue_instr_t dispatch_instr,
    input  agu_out_t         agu_out,
    input  sqN_t             commit_sqN [COMMIT_WIDTH],
    input  logic             flush,
    input  sqN_t             flush_sqN,
    output logic             OUT_busy,
    output CDB_line_t        OUT_cdb
);

    // --------------------------------------------------------
    // Decode: determine if store or load, extract data_size / is_unsigned
    // --------------------------------------------------------
    logic       is_store, is_load;
    logic [1:0] data_size;
    logic       is_unsigned;

    always_comb begin
        is_store    = 1'b0;
        is_load     = 1'b0;
        data_size   = 2'b10;
        is_unsigned = 1'b0;

        if (dispatch_instr.valid) begin
            case (dispatch_instr.oper)
                LSU_LB:  begin is_load   = 1'b1;  data_size   = 2'b00; end
                LSU_LH:  begin is_load   = 1'b1;  data_size   = 2'b01; end
                LSU_LW:  begin is_load   = 1'b1;  data_size   = 2'b10; end
                LSU_LBU: begin is_load   = 1'b1;  data_size   = 2'b00; is_unsigned = 1'b1; end
                LSU_LHU: begin is_load   = 1'b1;  data_size   = 2'b01; is_unsigned = 1'b1; end
                LSU_SB:  begin is_store  = 1'b1;  data_size   = 2'b00; end
                LSU_SH:  begin is_store  = 1'b1;  data_size   = 2'b01; end
                LSU_SW:  begin is_store  = 1'b1;  data_size   = 2'b10; end
                default: begin is_store  = 1'b0;  is_load     = 1'b0; 
                               data_size = 2'b10; is_unsigned = 1'b0; end
            endcase
        end
    end

    // --------------------------------------------------------
    // Switch + Decode → Store Buffer
    // sqN + data_size + valid  (allocation)
    // target_addr + data + valid  (AGU write-back, routed by Switch)
    // --------------------------------------------------------
    stb_alloc_t stb_alloc;
    assign stb_alloc.valid     = dispatch_instr.valid & is_store;
    assign stb_alloc.sqN       = dispatch_instr.sqN;
    assign stb_alloc.data_size = data_size;

    stb_wb_t stb_wb;
    assign stb_wb.valid = agu_out.valid & is_store;
    assign stb_wb.addr  = agu_out.target_addr;
    assign stb_wb.data  = agu_out.store_data;

    // --------------------------------------------------------
    // Switch + Decode → Load Buffer
    // sqN + rd_tag + data_size + is_unsigned + valid  (allocation)
    // target_addr + valid  (AGU write-back, routed by Switch)
    // --------------------------------------------------------
    ldb_alloc_t ldb_alloc;
    assign ldb_alloc.valid       = dispatch_instr.valid & is_load;
    assign ldb_alloc.sqN         = dispatch_instr.sqN;
    assign ldb_alloc.rd_tag      = dispatch_instr.rd_tag;
    assign ldb_alloc.data_size   = data_size;
    assign ldb_alloc.is_unsigned = is_unsigned;

    ldb_addr_t ldb_addr_wb;
    assign ldb_addr_wb.valid = agu_out.valid & is_load;
    assign ldb_addr_wb.addr  = agu_out.target_addr;

    // --------------------------------------------------------
    // Store Buffer ↔ Data Memory wiring
    // --------------------------------------------------------
    stb_mem_req_t   stb_mem_req [2];
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
        .clk     (clk),
        .rst     (rst),
        .wr_req  (stb_mem_req),
        .rd_req  (ldb_mem_req),
        .rd_resp (ldb_mem_resp)
    );

    // --------------------------------------------------------
    // Outputs
    // busy = str_busy | ld_busy  (OR gate from diagram)
    // --------------------------------------------------------
    assign OUT_busy = str_busy | ld_busy;

endmodule
