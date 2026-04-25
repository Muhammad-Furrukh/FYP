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
    localparam PTR_W = $clog2(STOREB_SIZE);
    localparam [PTR_W - 1:0] PTR_MASK = (1 << PTR_W) - 1;

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

    assign str_busy = (count == STOREB_SIZE - 1);

    // --------------------------------------------------------
    // Forwarding broadcast: expose all valid entries to Load Buffer
    // --------------------------------------------------------
    always_comb begin
        for (int i = 0; i < STOREB_SIZE; i++) begin
            fwd[i].valid = entries[i].valid;
            fwd[i].sqN   = entries[i].sqN;
            fwd[i].addr  = entries[i].addr;
            fwd[i].addr_data_valid = entries[i].addr_data_valid;
            fwd[i].data_size = entries[i].data_size;
        end
    end

    // --------------------------------------------------------
    // Drain logic: find up to 2 committed, ready entries starting
    // from drain_ptr (in-order drain to maintain memory ordering)
    // --------------------------------------------------------
    always_comb begin
        mem_req[0] = '0;
        mem_req[1] = '0;
        for (int i = 0; i < 2; i++) begin
            automatic int idx = (drain_ptr + i) & (STOREB_SIZE - 1);
            if (entries[idx].valid && entries[idx].committed &&
                entries[idx].addr_data_valid) begin
                mem_req[i].valid     = 1'b1;
                mem_req[i].wr_addr   = entries[idx].addr;
                mem_req[i].data      = entries[idx].data;
                mem_req[i].data_size = entries[idx].data_size;
            end
        end
    end

    logic [PTR_W-1:0]        new_tail;
    logic [STOREB_SIZE-1:0]  on_flush_valid;
    always_comb begin
        // -------------------------
        // Defaults (avoid latches)
        // -------------------------
        new_tail       = tail_ptr;
        on_flush_valid = '0;
        if (flush) begin
            logic [PTR_W-1:0] idx;

            // assume empty unless we find valid ones
            new_tail = drain_ptr;

            for (int i = 0; i < STOREB_SIZE; i++) begin
                idx = (drain_ptr + i) & PTR_MASK;
                
                if (idx == tail_ptr)
                    break;

                if (entries[idx].valid &&
                    ((flush_sqN - entries[idx].sqN) & SQN_MASK) < ROB_SIZE) begin
                    // keep this entry
                    on_flush_valid[idx] = 1'b1;
                    // move tail to NEXT slot
                    new_tail = (idx + 1) & PTR_MASK;
                end

                else begin
                    on_flush_valid[idx] = 1'b0;
                end
            end
        end
    end

    // --------------------------------------------------------
    // Sequential logic
    // --------------------------------------------------------
    always_ff @(posedge clk) begin
        if (rst) begin
            tail_ptr  <= '0;
            drain_ptr <= '0;

            for (int i = 0; i < STOREB_SIZE; i++)
                entries[i] <= '0;
        end 

        // =====================
        // FLUSH (exclusive)
        // =====================
        else if (flush) begin
            tail_ptr <= new_tail;
        end

        // =====================
        // NORMAL OPERATION
        // =====================
        else begin
            logic [PTR_W:0] drain_inc;

            // ---------------------
            // ALLOCATE
            // ---------------------
            if (alloc.valid && !str_busy) begin
                entries[tail_ptr] <= '{
                    addr_data_valid: 1'b0,
                    committed      : 1'b0,
                    sqN            : alloc.sqN,
                    data_size      : alloc.data_size,
                    addr           : '0,
                    data           : '0
                };

                tail_ptr <= (tail_ptr + 1) & PTR_MASK;
            end


            // ---------------------
            // AGU WRITEBACK
            // ---------------------
            if (wb.valid) begin
                for (int i = 0; i < STOREB_SIZE; i++) begin
                    if ((entries[i].valid) && 
                    (entries[i].sqN == wb.sqN)) begin
                        entries[i].addr            <= wb.addr;
                        entries[i].data            <= wb.data;
                        entries[i].addr_data_valid <= 1'b1;
                    end
                end
            end


            // ---------------------
            // COMMIT
            // ---------------------
            for (int c = 0; c < COMMIT_WIDTH; c++) begin
                for (int i = 0; i < STOREB_SIZE; i++) begin
                    if (entries[i].valid &&
                        entries[i].sqN == commit_sqN[c]) begin
                        entries[i].committed <= 1'b1;
                    end
                end
            end


            // ---------------------
            // DRAIN
            // ---------------------
            drain_inc = mem_req[0].valid + mem_req[1].valid;

            if (drain_inc != 0)
                drain_ptr <= (drain_ptr + drain_inc) & PTR_MASK;

        end
    end

endmodule