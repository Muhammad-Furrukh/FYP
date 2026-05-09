import include_pkg::*;

module store_buffer (
    input  logic            clk,
    input  logic            rst,
    input  stb_alloc_t      alloc,
    input  stb_wb_t         wb,
    input  sqN_t            commit_sqN  [COMMIT_WIDTH],
    input  logic            flush,
    input  sqN_t            flush_sqN,
    input  logic            mem_stall   [2],
    output stb_mem_req_t    mem_req     [2],
    output stb_fwd_entry_t  fwd         [STOREB_SIZE],
    output logic            str_busy
);

    // ════════════════════════════════════════════════════
    // 0. Entry type
    // ════════════════════════════════════════════════════

    typedef struct packed {
        logic            valid;
        logic            committed;       // safe to drain to memory
        logic            addr_data_valid; // addr + data both known
        sqN_t            sqN;
        logic [1:0]      data_size;
        logic [XLEN-1:0] addr;
        logic [XLEN-1:0] data;
    } stb_entry_t;

    localparam PTR_W = $clog2(STOREB_SIZE);

    stb_entry_t entries [STOREB_SIZE];

    // ════════════════════════════════════════════════════
    // 1. Expose forwarding view
    // ════════════════════════════════════════════════════

    always_comb
        for (int i = 0; i < STOREB_SIZE; i++) begin
            fwd[i].valid          = entries[i].valid;
            fwd[i].committed      = entries[i].committed;
            fwd[i].addr_data_valid= entries[i].addr_data_valid;
            fwd[i].sqN            = entries[i].sqN;
            fwd[i].data_size      = entries[i].data_size;
            fwd[i].addr           = entries[i].addr;
            fwd[i].data           = entries[i].data;
        end


    // ════════════════════════════════════════════════════
    // 2. Alloc index — first invalid slot
    // ════════════════════════════════════════════════════

    logic [PTR_W-1:0] alloc_idx;

    always_comb begin
        alloc_idx = '0;
        for (int i = STOREB_SIZE-1; i >= 0; i--)
            if (!entries[i].valid) alloc_idx = PTR_W'(i);
    end


    // ════════════════════════════════════════════════════
    // 3. WB index — match on sqN
    // ════════════════════════════════════════════════════

    logic [PTR_W-1:0] wb_idx;

    always_comb begin
        wb_idx = '0;
        for (int i = 0; i < STOREB_SIZE; i++)
            if (entries[i].valid && entries[i].sqN == wb.sqN)
                wb_idx = PTR_W'(i);
    end


    // ════════════════════════════════════════════════════
    // 4. Drain — find up to 2 committed entries
    //    Prefix-sum: port p gets the p-th committed entry
    // ════════════════════════════════════════════════════

    logic [PTR_W-1:0] drain_idx  [2];
    logic             drain_valid [2];

    always_comb begin
        logic [$clog2(STOREB_SIZE):0] prefix [STOREB_SIZE+1];
        prefix[0] = '0;
        for (int i = 0; i < STOREB_SIZE; i++)
            prefix[i+1] = prefix[i]
                        + ($clog2(STOREB_SIZE)+1)'(entries[i].valid
                                                 & entries[i].committed
                                                 & entries[i].addr_data_valid);

        drain_valid[0] = 1'b0; drain_idx[0] = '0;
        drain_valid[1] = 1'b0; drain_idx[1] = '0;

        for (int i = 0; i < STOREB_SIZE; i++) begin
            if (entries[i].valid && entries[i].committed
                && entries[i].addr_data_valid) begin
                if (prefix[i] == '0) begin
                    drain_valid[0] = 1'b1;
                    drain_idx[0]   = PTR_W'(i);
                end else if (prefix[i] == 1) begin
                    drain_valid[1] = 1'b1;
                    drain_idx[1]   = PTR_W'(i);
                end
            end
        end
    end


    // ════════════════════════════════════════════════════
    // 5. Memory requests
    // ════════════════════════════════════════════════════

    always_comb begin
        for (int p = 0; p < 2; p++) begin
            mem_req[p]       = '{default: '0};
            if (drain_valid[p] && !mem_stall[p]) begin
                mem_req[p].valid     = 1'b1;
                mem_req[p].wr_addr   = entries[drain_idx[p]].addr;
                mem_req[p].data      = entries[drain_idx[p]].data;
                mem_req[p].data_size = entries[drain_idx[p]].data_size;
            end
        end
    end


    // ════════════════════════════════════════════════════
    // 6. Busy — not enough free slots
    // ════════════════════════════════════════════════════

    logic [PTR_W:0] used_count;

    always_comb begin
        used_count = '0;
        for (int i = 0; i < STOREB_SIZE; i++)
            if (entries[i].valid) used_count++;
    end

    assign str_busy = (used_count >= PTR_W'(STOREB_SIZE - COMMIT_WIDTH));


    // ════════════════════════════════════════════════════
    // 7. Sequential
    //
    //    Priority (highest → lowest):
    //      rst    — full reset
    //      flush  — squash speculative entries
    //      normal — commit, wb, drain, alloc
    // ════════════════════════════════════════════════════

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (int i = 0; i < STOREB_SIZE; i++)
                entries[i] <= '{default: '0};

        end else if (flush) begin
            for (int i = 0; i < STOREB_SIZE; i++)
                if (entries[i].valid && !entries[i].committed
                    && ((entries[i].sqN - flush_sqN) & SQN_MASK) < sqN_t'(ROB_SIZE))
                    entries[i].valid <= 1'b0;

        end else begin
            // ── Commit: mark entries as safe to drain ────
            for (int i = 0; i < COMMIT_WIDTH; i++) begin
                for (int j = 0; j < STOREB_SIZE; j++) begin
                    if (entries[j].valid
                        && entries[j].sqN == commit_sqN[i])
                        entries[j].committed <= 1'b1;
                end
            end

            // ── WB: write addr + data ─────────────────────
            if (wb.valid) begin
                entries[wb_idx].addr           	<= wb.addr;
                entries[wb_idx].data           	<= wb.data;
                entries[wb_idx].data_size      	<= wb.data_size;
                entries[wb_idx].addr_data_valid	<= 1'b1;
            end

            // ── Drain: free entries sent to memory ────────
            for (int p = 0; p < 2; p++) begin
                if (drain_valid[p] && !mem_stall[p])
                    entries[drain_idx[p]].valid <= 1'b0;
            end

            // ── Alloc: claim a slot ───────────────────────
            if (alloc.valid) begin
                entries[alloc_idx].valid          	<= 1'b1;
                entries[alloc_idx].committed      	<= 1'b0;
                entries[alloc_idx].addr_data_valid	<= 1'b0;
                entries[alloc_idx].sqN            	<= alloc.sqN;
                entries[alloc_idx].data_size      	<= '0;
                entries[alloc_idx].addr           	<= '0;
                entries[alloc_idx].data           	<= '0;
            end
        end
    end

endmodule
