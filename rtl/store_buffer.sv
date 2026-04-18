import include_pkg::*;

module store_buffer (
    input  logic             clk,
    input  logic             rst,

    // From LSU dispatch (Switch + Decode)
    input  stb_alloc_t       alloc,

    // From AGU (Switch write-back)
    input  stb_wb_t          wb,

    // Commit ports
    input  sqN_t             commit_sqN [COMMIT_WIDTH],

    // Flush
    input  logic             flush,
    input  sqN_t             flush_sqN,

    // To Data Memory (2 write ports)
    output stb_mem_req_t     mem_req [2],

    // Forwarding entries broadcast to Load Buffer
    output stb_fwd_entry_t   fwd [STOREB_SIZE],

    // Busy (full) signal
    output logic             str_busy
);

    // --------------------------------------------------------
    // Entry definition
    // --------------------------------------------------------
    typedef struct packed {
        logic            valid;
        logic            addr_data_valid;  // AGU has written back addr+data
        logic            committed;        // Retired from ROB
        sqN_t            sqN;
        logic [XLEN-1:0] addr;
        logic [XLEN-1:0] data;
        logic [1:0]      data_size;
    } stb_entry_t;

    stb_entry_t entries [STOREB_SIZE];

    // --------------------------------------------------------
    // Tail pointer (next free slot), drain pointer (next to write to mem)
    // --------------------------------------------------------
    logic [$clog2(STOREB_SIZE)-1:0] tail_ptr;
    logic [$clog2(STOREB_SIZE)-1:0] drain_ptr;
    logic [$clog2(STOREB_SIZE):0]   count;

    assign str_busy = (count == STOREB_SIZE);

    // --------------------------------------------------------
    // Forwarding broadcast: expose all valid entries to Load Buffer
    // --------------------------------------------------------
    always_comb begin
        for (int i = 0; i < STOREB_SIZE; i++) begin
            fwd[i].valid = entries[i].valid & entries[i].addr_data_valid;
            fwd[i].sqN   = entries[i].sqN;
            fwd[i].addr  = entries[i].addr;
            fwd[i].data  = entries[i].data;
        end
    end

    // --------------------------------------------------------
    // Drain logic: find up to 2 committed, ready entries starting
    // from drain_ptr (in-order drain to maintain memory ordering)
    // --------------------------------------------------------
    always_comb begin
        mem_req[0] = '0;
        mem_req[1] = '0;
        int found = 0;
        for (int i = 0; i < STOREB_SIZE && found < 2; i++) begin
            automatic int idx = (drain_ptr + i) % STOREB_SIZE;
            if (entries[idx].valid &&
                entries[idx].committed &&
                entries[idx].addr_data_valid) begin
                mem_req[found].valid     = 1'b1;
                mem_req[found].wr_addr   = entries[idx].addr;
                mem_req[found].data      = entries[idx].data;
                mem_req[found].data_size = entries[idx].data_size;
                found++;
            end
        end
    end

    // --------------------------------------------------------
    // Sequential logic
    // --------------------------------------------------------
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            tail_ptr  <= '0;
            drain_ptr <= '0;
            count     <= '0;
            for (int i = 0; i < STOREB_SIZE; i++)
                entries[i] <= '0;

        end else begin

            // -- Flush: invalidate all entries newer than flush_sqN --
            if (flush) begin
                for (int i = 0; i < STOREB_SIZE; i++) begin
                    if (entries[i].valid &&
                        $signed({1'b0, entries[i].sqN} - {1'b0, flush_sqN}) > 0) begin
                        entries[i].valid <= 1'b0;
                        count <= count - 1;
                    end
                end
                // Rewind tail to flush boundary
                tail_ptr <= drain_ptr; // recalculated below if needed
            end

            // -- Allocate: new store dispatched --
            if (alloc.valid && !str_busy && !flush) begin
                entries[tail_ptr].valid          <= 1'b1;
                entries[tail_ptr].addr_data_valid <= 1'b0;
                entries[tail_ptr].committed      <= 1'b0;
                entries[tail_ptr].sqN            <= alloc.sqN;
                entries[tail_ptr].data_size      <= alloc.data_size;
                entries[tail_ptr].addr           <= '0;
                entries[tail_ptr].data           <= '0;
                tail_ptr <= tail_ptr + 1;
                count    <= count + 1;
            end

            // -- AGU write-back: fill in addr + data for matching sqN --
            if (wb.valid) begin
                for (int i = 0; i < STOREB_SIZE; i++) begin
                    if (entries[i].valid && entries[i].sqN == wb.sqN) begin
                        entries[i].addr           <= wb.addr;
                        entries[i].data           <= wb.data;
                        entries[i].addr_data_valid <= 1'b1;
                    end
                end
            end

            // -- Commit: mark entries whose sqN is being retired --
            for (int c = 0; c < COMMIT_WIDTH; c++) begin
                for (int i = 0; i < STOREB_SIZE; i++) begin
                    if (entries[i].valid && !entries[i].committed &&
                        entries[i].sqN == commit_sqN[c])
                        entries[i].committed <= 1'b1;
                end
            end

            // -- Drain: free entries issued to memory this cycle --
            // mem_req[0] always corresponds to drain_ptr (oldest),
            // mem_req[1] to drain_ptr+1, so we can free them in order.
            if (mem_req[0].valid) begin
                entries[drain_ptr].valid <= 1'b0;
                drain_ptr <= drain_ptr + 1;
                count     <= count - 1;

                if (mem_req[1].valid) begin
                    entries[(drain_ptr + 1) % STOREB_SIZE].valid <= 1'b0;
                    drain_ptr <= drain_ptr + 2;
                    count     <= count - 2;
                end
            end

        end
    end

endmodule