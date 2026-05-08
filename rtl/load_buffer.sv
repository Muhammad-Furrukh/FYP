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
    input  logic	     mem_stall  [2],	
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
	    // ── ld_busy ──────────────────────────────────
	    ld_busy = (count == $clog2(LOADB_SIZE)'(LOADB_SIZE));

	    // ── alloc_idx: first invalid entry ───────────
	    alloc_idx = '0;
	    for (int i = LOADB_SIZE-1; i >= 0; i--)
		if (!entries[i].valid) alloc_idx = $clog2(LOADB_SIZE)'(i);

	    // ── ta_wb_idx: match on sqN ───────────────────
	    ta_wb_idx = '0;
	    for (int i = 0; i < LOADB_SIZE; i++)
		if (entries[i].valid && entries[i].sqN == addr_wb.sqN)
		    ta_wb_idx = $clog2(LOADB_SIZE)'(i);

	    // ── stall: only block if an OLDER store has not
	    //    yet resolved its address (addr_data_valid=0)
	    //    OR if it has resolved but address overlaps
	    //    AND data is not yet valid (can't forward yet).
	    //    If addr_data_valid=1 and address matches →
	    //    forwarding hit, handled in sequential block.
	    // ─────────────────────────────────────────────
	    stall = '0;
	    for (int i = 0; i < LOADB_SIZE; i++) begin
		if (entries[i].valid && entries[i].addr_valid) begin
		    for (int j = 0; j < STOREB_SIZE; j++) begin
		        if (stb_fwd[j].valid) begin
		            // Is this store older than the load?
		            // older = (load.sqN - store.sqN) < ROB_SIZE
		            logic store_is_older;
		            store_is_older = ((entries[i].sqN - stb_fwd[j].sqN)
		                              & SQN_MASK) < sqN_t'(ROB_SIZE);

		            if (store_is_older) begin
		                if (!stb_fwd[j].addr_data_valid) begin
		                    // Address unknown — conservative stall
		                    stall[i] = 1'b1;
		                end else begin
		                    // Address known — check overlap
		                    logic overlaps;
		                    overlaps = (stb_fwd[j].addr[XLEN-1:2]
		                                == entries[i].addr[XLEN-1:2]);
		                    // Overlap + data not ready = stall
		                    // Overlap + data ready    = forwarding hit (no stall)
		                    if (overlaps && !stb_fwd[j].addr_data_valid)
		                        stall[i] = 1'b1;
		                    // No overlap → safe, no stall
		                end
		            end
		        end
		    end
		end else if (entries[i].valid && !entries[i].addr_valid) begin
		    // Our own address isn't known yet — can't check,
		    // don't issue to memory
		    stall[i] = 1'b1;
		end
	    end

	    // ── req_idx: two lowest-index issuable entries ─
	    // Use a found flag to avoid the index-0-as-sentinel bug
	    begin
		logic found0, found1;
		found0 = 1'b0; found1 = 1'b0;
		req_idx[0] = '0; req_idx[1] = '0;
		for (int i = 0; i < LOADB_SIZE; i++) begin
		    if (entries[i].valid && !stall[i]
		        && entries[i].addr_valid && !entries[i].addr_valid) begin
		        if (!found0) begin
		            req_idx[0] = $clog2(LOADB_SIZE)'(i);
		            found0 = 1'b1;
		        end else if (!found1) begin
		            req_idx[1] = $clog2(LOADB_SIZE)'(i);
		            found1 = 1'b1;
		        end
		    end
		end

		// Drive mem_req
		for (int i = 0; i < 2; i++) begin
		    mem_req[i] = '{default: '0};
		end
		if (found0 && !mem_stall[0]) begin
		    mem_req[0].valid       = 1'b1;
		    mem_req[0].sqN         = entries[req_idx[0]].sqN;
		    mem_req[0].r_addr      = entries[req_idx[0]].addr;
		    mem_req[0].data_size   = entries[req_idx[0]].data_size;
		    mem_req[0].is_unsigned = entries[req_idx[0]].is_unsigned;
		end
		if (found1 && !mem_stall[1]) begin
		    mem_req[1].valid       = 1'b1;
		    mem_req[1].sqN         = entries[req_idx[1]].sqN;
		    mem_req[1].r_addr      = entries[req_idx[1]].addr;
		    mem_req[1].data_size   = entries[req_idx[1]].data_size;
		    mem_req[1].is_unsigned = entries[req_idx[1]].is_unsigned;
		end
	    end

	    // ── broadcast_idx: oldest entry with data_valid ─
	    broadcast_idx = '0;
	    cdb_out = '{default: '0};
	    for (int i = LOADB_SIZE-1; i >= 0; i--) begin  
		if (entries[i].valid && entries[i].data_valid)
		    broadcast_idx = $clog2(LOADB_SIZE)'(i);
	    end
	    if (entries[broadcast_idx].valid && entries[broadcast_idx].data_valid) begin
			cdb_out.valid  = 1'b1;
			cdb_out.sqN    = entries[broadcast_idx].sqN;
			cdb_out.tag    = entries[broadcast_idx].rd_tag;
			cdb_out.result = entries[broadcast_idx].data;
	    end
	end

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (int i = 0; i < LOADB_SIZE; i++) begin
                entries[i] <= '0;
            end
            count <= '0;
        end

        else if (flush) begin
            automatic int num_flush = 0;
            for (int i = 0; i < LOADB_SIZE; i++) begin
                if (entries[i].valid &&
                    ((flush_sqN - entries[i].sqN) & SQN_MASK) > ROB_SIZE) begin
                    entries[i].valid <= 1'b0;
                    num_flush++;
                end
            end
            count <= count - num_flush;
        end

        else begin
            // Handle new allocation
            if (alloc.valid) begin
                entries[alloc_idx].valid  <= 1'b1;
                entries[alloc_idx].sqN    <= alloc.sqN;
                entries[alloc_idx].rd_tag <= alloc.rd_tag;
                entries[alloc_idx].data_valid <= 1'b0;   
                entries[alloc_idx].addr_valid <= 1'b0;
                count <= count + 1;
            end

            // Handle AGU target address write-back
            if (addr_wb.valid) begin
                entries[ta_wb_idx].addr        <= addr_wb.addr;
                entries[ta_wb_idx].addr_valid  <= addr_wb.valid;
                entries[ta_wb_idx].data_size   <= addr_wb.data_size;
                entries[ta_wb_idx].is_unsigned <= addr_wb.is_unsigned;
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
