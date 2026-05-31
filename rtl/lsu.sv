import include_pkg::*;

module lsu (
    input  logic                clk, clk_m,
    input  logic                rst, rst_m,

    input  agu_out_t            agu_out         [NUM_AGU_FU], // Since NUM_AGU_FU = 1, we must add 1.
    input  sqN_t                commit_sqN      [COMMIT_WIDTH],
    input  logic                comm_valid      [COMMIT_WIDTH],
    input  lsu_dispatch_instr_t dispatch_instr  [NUM_AGU_FU],
    input  logic                flush,
    input  sqN_t                flush_sqN,

    output logic                OUT_busy,
    output CDB_line_t           OUT_cdb         [NUM_AGU_FU]
);

    // ════════════════════════════════════════════════════
    // 1. Decode dispatch and AGU outputs
    //    Find first valid store and first valid load
    //    from each array.
    // ════════════════════════════════════════════════════

    logic [$clog2(NUM_AGU_FU+1)-1:0] store_disp_idx, load_disp_idx;
    logic                          has_store_disp, has_load_disp;
    logic [$clog2(NUM_AGU_FU+1)-1:0] store_agu_idx,  load_agu_idx;
    logic                          has_store_agu,  has_load_agu;

    always_comb begin
        has_store_disp = 1'b0; store_disp_idx = '0;
        has_load_disp  = 1'b0; load_disp_idx  = '0;

        for (int i = 0; i < NUM_AGU_FU; i++) begin
            if (dispatch_instr[i].valid) begin
                if (dispatch_instr[i].oper inside {LSU_SB, LSU_SH, LSU_SW}) begin
                    if (!has_store_disp) begin
                        has_store_disp = 1'b1;
                        store_disp_idx = $clog2(NUM_AGU_FU+1)'(i);
                    end
                end else if (dispatch_instr[i].oper inside
                             {LSU_LB, LSU_LH, LSU_LW, LSU_LBU, LSU_LHU}) begin
                    if (!has_load_disp) begin
                        has_load_disp = 1'b1;
                        load_disp_idx = $clog2(NUM_AGU_FU+1)'(i);
                    end
                end
            end
        end

        has_store_agu = 1'b0; store_agu_idx = '0;
        has_load_agu  = 1'b0; load_agu_idx  = '0;

        for (int i = 0; i < NUM_AGU_FU; i++) begin
            if (agu_out[i].valid) begin
                if (agu_out[i].req_type == STORE) begin
                    if (!has_store_agu) begin
                        has_store_agu = 1'b1;
                        store_agu_idx = $clog2(NUM_AGU_FU+1)'(i);
                    end
                end else begin
                    if (!has_load_agu) begin
                        has_load_agu = 1'b1;
                        load_agu_idx = $clog2(NUM_AGU_FU+1)'(i);
                    end
                end
            end
        end
    end


    // ════════════════════════════════════════════════════
    // 2. Store buffer allocation and writeback
    // ════════════════════════════════════════════════════
    logic       str_busy;
    stb_alloc_t stb_alloc;

    assign stb_alloc.valid   = has_store_disp && !str_busy;
    assign stb_alloc.sqN     = dispatch_instr[store_disp_idx].sqN;

    stb_wb_t stb_wb;

    assign stb_wb.valid     = has_store_agu;
    assign stb_wb.sqN       = agu_out[store_agu_idx].sqN;
    assign stb_wb.addr      = agu_out[store_agu_idx].target_addr;
    assign stb_wb.data      = agu_out[store_agu_idx].store_data;
    assign stb_wb.data_size = agu_out[store_agu_idx].data_size;


    // ════════════════════════════════════════════════════
    // 3. Load buffer allocation and writeback
    // ════════════════════════════════════════════════════
    logic       ld_busy;
    ldb_alloc_t ldb_alloc;

    assign ldb_alloc.valid   = has_load_disp && !ld_busy;
    assign ldb_alloc.sqN     = dispatch_instr[load_disp_idx].sqN;
    assign ldb_alloc.rd_tag  = dispatch_instr[load_disp_idx].rd_tag;

    ldb_addr_t ldb_addr_wb;

    assign ldb_addr_wb.valid       = has_load_agu;
    assign ldb_addr_wb.sqN         = agu_out[load_agu_idx].sqN;
    assign ldb_addr_wb.addr        = agu_out[load_agu_idx].target_addr;
    assign ldb_addr_wb.data_size   = agu_out[load_agu_idx].data_size;
    assign ldb_addr_wb.is_unsigned = agu_out[load_agu_idx].is_unsigned;


    // ════════════════════════════════════════════════════
    // 4. Store buffer instance
    // ════════════════════════════════════════════════════

    stb_mem_req_t   stb_mem_req [2];
    logic           stb_stall   [2];
    stb_fwd_entry_t stb_fwd     [STOREB_SIZE];

    store_buffer u_stb (
        .clk        (clk),
        .rst        (rst),
        .alloc      (stb_alloc),
        .wb         (stb_wb),
        .commit_sqN (commit_sqN),
        .comm_valid (comm_valid),
        .flush      (flush),
        .flush_sqN  (flush_sqN),
        .mem_stall  (stb_stall),
        .mem_req    (stb_mem_req),
        .fwd        (stb_fwd),
        .str_busy   (str_busy)
    );


    // ════════════════════════════════════════════════════
    // 5. Load buffer instance
    //
    //    CDB output: load buffer produces one result per
    //    cycle. OUT_cdb[0] carries load results.
    //    OUT_cdb[1..] tied off — loads only have one port.
    // ════════════════════════════════════════════════════

    ldb_mem_req_t ldb_mem_req  [2];
    dmem_resp_t   ldb_mem_resp [2];
    logic         ldb_stall    [2];
    CDB_line_t    ldb_cdb_out;

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
        .mem_stall (ldb_stall),
        .cdb_out   (ldb_cdb_out),
        .ld_busy   (ld_busy)
    );

    // Route load CDB to port 0; tie off remaining ports
    always_comb begin
        OUT_cdb[0] = ldb_cdb_out;
        for (int i = 1; i < NUM_AGU_FU; i++)
            OUT_cdb[i] = '{default: '0};
    end


    // ════════════════════════════════════════════════════
    // 6. Data memory
    // ════════════════════════════════════════════════════

    data_memory u_dmem (
        .clk_cpu  (clk),
        .rst_cpu  (rst),
        .clk_mem  (clk_m),
        .rst_mem  (rst_m),
        .wr_req   (stb_mem_req),
        .wr_stall (stb_stall),
        .rd_req   (ldb_mem_req),
        .rd_resp  (ldb_mem_resp),
        .rd_stall (ldb_stall)
    );

    assign OUT_busy = str_busy | ld_busy;

endmodule
