import include_pkg::*;

module load_buffer (
    input  logic             clk,
    input  logic             rst,
    input  ldb_alloc_t       alloc,
    input  ldb_addr_t        addr_wb,
    input  stb_fwd_entry_t   stb_fwd    [STOREB_SIZE],
    input  logic             flush,
    input  sqN_t             flush_sqN,
    input  dmem_resp_t       mem_resp   [2],
    output ldb_mem_req_t     mem_req    [2],
    output CDB_line_t        cdb_out,
    output logic             ld_busy
);

    typedef struct packed {
        logic            valid;
        sqN_t            sqN;
        tag_t            rd_tag;
        logic [1:0]      data_size;
        logic            is_unsigned;
        logic [XLEN-1:0] addr;
        logic            addr_valid;    // AGU has written back the target address
        logic [XLEN-1:0] data;
        logic            data_valid;    // Memory has returned the data  
    } ldb_entry_t;

    ldb_entry_t                          entries    [LOADB_SIZE];
    logic       [$clog2(LOADB_SIZE)-1:0] alloc_idx;
    logic       [$clog2(LOADB_SIZE)-1:0] ta_wb_idx;
    logic       [$clog2(LOADB_SIZE)-1:0] req_idx    [2];
    logic       [$clog2(LOADB_SIZE)-1:0] broadcast_idx;
    logic       [$clog2(LOADB_SIZE)-1:0] count;
    logic       [$clog2(LOADB_SIZE)-1:0] stall;

    always_comb begin
        if (count == LOADB_SIZE)
            ld_busy = 1'b1;
        else
            ld_busy = 1'b0;
        
        // Allocation logic: find the first invalid entry and allocate there
        for (int i = LOADB_SIZE - 1; i >= 0; i--) begin
            if (!entries[i].valid) begin
                alloc_idx = i;
            end
        end

        // Target address write-back: find the matching entry for the incoming AGU result
        for (int i = 0; i < LOADB_SIZE; i++) begin
            if (entries[i].valid && (entries[i].sqN == addr_wb.sqN)) begin
                ta_wb_idx = i;
            end
        end

        // Find entries that are to be stalled
        stall = '0;
        for (int i = 0; i < LOADB_SIZE; i++) begin
            if (entries[i].valid) begin
                for (int j = 0; j < STOREB_SIZE; j++) begin
                    // Found an older store instr
                    if (stb_fwd[j].valid
                        && (((entries[i].sqN - stb_fwd[j].sqN) & SQN_MASK) < ROB_SIZE)) begin

                        if (!stb_fwd[j].addr_data_valid)
                            stall[i] = 1'b1;
                        else if (!entries[i].addr_valid)
                            stall[i] = 1'b1;
                        else if ((stb_fwd[j].addr <= entries[i].addr) 
                          && (entries[i].addr <= (stb_fwd[j].addr + stb_fwd[j].data_size)))
                            stall[i] = 1'b1;
                        else if ((entries[i].addr <= stb_fwd[j].addr) &&
                            (stb_fwd[j].addr <= (entries[i].addr + entries[i].data_size)))
                            stall[i] = 1'b1;
                    end
                end
            end
        end

        // Find index of 2 valid entries with no store conflicts (i.e., not stalled)
        req_idx = '{default: '0};
        for (int i = LOADB_SIZE - 1; i >= 0; i--) begin
            if (!stall[i] && entries[i].valid && req_idx[0]) begin
                req_idx[1] = req_idx[0];
                req_idx[0] = i;
            end

            else if (!stall[i] && entries[i].valid && !req_idx[0]) begin
                req_idx[0] = i;
            end
        end

        // Send request to memory
        for (int i = 0; i < 2; i++) begin
            if (entries[req_idx[i]].valid) begin
                mem_req[i].valid       = 1'b1;
                mem_req[i].sqN         = entries[req_idx[i]].sqN;
                mem_req[i].r_addr      = entries[req_idx[i]].addr;
                mem_req[i].data_size   = entries[req_idx[i]].data_size;
                mem_req[i].is_unsigned = entries[req_idx[i]].is_unsigned;
            end
        end

        // Broadcast valid data entry on CDB
        for (int i = LOADB_SIZE; i >= 0; i--) begin
            if (entries[i].valid && entries[i].data_valid) begin
                broadcast_idx = i;
            end
        end

        if (entries[broadcast_idx].valid && entries[broadcast_idx].data_valid) begin
            cdb_out.valid       = 1'b1;
            cdb_out.sqN         = entries[broadcast_idx].sqN;
            cdb_out.tag         = entries[broadcast_idx].rd_tag;
            cdb_out.result      = entries[broadcast_idx].data;
        end

        else
            cdb_out.valid = 1'b0;
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            for (int i = 0; i < LOADB_SIZE; i++) begin
                entries[i] <= '0;
            end
            count <= '0;
        end

        else if (flush) begin
            automatic int num_flush = 0;
            for (int i = 0; i < LOADB_SIZE; i++) begin
                if (((flush_sqN - entries[i].sqN) & SQN_MASK) > ROB_SIZE)
                    entries[i].valid <= 1'b0;
                    num_flush++;
            end
            count <= count - num_flush;
        end

        else begin
            // Handle new allocation
            if (alloc.valid) begin
                entries[alloc_idx].valid       <= 1'b1;
                entries[alloc_idx].sqN         <= alloc.sqN;
                entries[alloc_idx].rd_tag      <= alloc.rd_tag;
                entries[alloc_idx].data_size   <= alloc.data_size;
                entries[alloc_idx].is_unsigned <= alloc.is_unsigned;
                count <= count + 1;
            end

            // Handle AGU target address write-back
            if (addr_wb.valid) begin
                entries[ta_wb_idx].addr       <= addr_wb.addr;
                entries[ta_wb_idx].addr_valid <= addr_wb.valid;
            end

            // Handle memory response: find the matching entry and write back the data
            for (int i = 0; i < LOADB_SIZE; i++) begin
                for (int j = 0; j < 2; j++) begin
                    if (entries[i].valid && mem_resp[j].valid 
                        && (entries[i].sqN == mem_resp[j].sqN)) begin
                        // This entry's request got a response from memory, write back the data
                        entries[i].data       <= mem_resp[j].data;
                        entries[i].data_valid <= 1'b1;
                    end
                end
            end

            // Handle entry broadcast
            if (cdb_out.valid) begin
                entries[broadcast_idx].valid <= 1'b0;   // Invalidate the entry after broadcasting
                count <= count - 1;
            end
        end
    end
endmodule
