module store_buffer 
    import include_pkg::*;
(
    input  logic             clk,
    input  logic             rst,

    // From LSU dispatch
    input  stb_alloc_t       alloc,

    // From AGU 
    input  stb_wb_t          wb,

    // Commit ports
    input  sqN_t             commit_sqN [COMMIT_WIDTH],

    // Flush
    input  logic             flush,
    input  sqN_t             flush_sqN,

    // To Data Memory
    output stb_mem_req_t     mem_req [2],
    input  logic             mem_stall [2], 

    // Forwarding entries broadcast
    output stb_fwd_entry_t   fwd [STOREB_SIZE],

    // Busy signal
    output logic             str_busy
);
    localparam PTR_W = $clog2(STOREB_SIZE);
    localparam [PTR_W - 1:0] PTR_MASK = (1 << PTR_W) - 1;

    typedef struct packed {
        logic            valid;
        logic            addr_data_valid;
        logic            committed;
        sqN_t            sqN;
        logic [XLEN-1:0] addr;
        logic [XLEN-1:0] data;
        logic [1:0]      data_size;
    } stb_entry_t;

    stb_entry_t entries [STOREB_SIZE];

    logic [PTR_W-1:0] tail_ptr;
    logic [PTR_W-1:0] drain_ptr;
    logic [PTR_W:0]   count;

    assign str_busy = (count >= $bits(count)'(STOREB_SIZE - 1));

    // --- Forwarding broadcast ---
    always_comb begin
        for (int i = 0; i < STOREB_SIZE; i++) begin
            fwd[i].valid           = entries[i].valid;
            fwd[i].sqN             = entries[i].sqN;
            fwd[i].addr            = entries[i].addr;
            fwd[i].addr_data_valid = entries[i].addr_data_valid;
            fwd[i].data_size       = entries[i].data_size;
        end
    end

    // --- Drain logic (Combinational) ---
    always_comb begin
        mem_req[0] = '0;
        mem_req[1] = '0;
        for (int i = 0; i < 2; i++) begin
            int idx;
            idx = (drain_ptr + i) & PTR_MASK;
            if (entries[idx].valid && entries[idx].committed &&
                entries[idx].addr_data_valid && !mem_stall[i]) begin
                mem_req[i].valid     = 1'b1;
                mem_req[i].wr_addr   = entries[idx].addr;
                mem_req[i].data      = entries[idx].data;
                mem_req[i].data_size = entries[idx].data_size;
            end
        end
    end

    // --- Flush Logic (Combinational - Latch Free) ---
    logic [PTR_W-1:0]        new_tail;
    logic [STOREB_SIZE-1:0]  on_flush_valid;

    always_comb begin
        new_tail       = tail_ptr;
        on_flush_valid = '0;
        
        if (flush) begin
            new_tail = drain_ptr; 
            for (int i = 0; i < STOREB_SIZE; i++) begin
                int idx;
                idx = (drain_ptr + i) & PTR_MASK;
                
                // Only process entries between drain and tail
                if (entries[idx].valid) begin
                    automatic sqN_t diff = flush_sqN - entries[idx].sqN;
                    if (diff < sqN_t'(ROB_SIZE)) begin
                        on_flush_valid[idx] = 1'b1;
                        new_tail = (idx + 1) & PTR_MASK;
                    end
                end
            end
        end else begin
            for (int i = 0; i < STOREB_SIZE; i++) begin
                on_flush_valid[i] = entries[i].valid;
            end
        end
    end

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            tail_ptr  <= '0;
            drain_ptr <= '0;
            count     <= '0;
            for (int i = 0; i < STOREB_SIZE; i++) entries[i] <= '0;
        end 
        else if (flush) begin
            tail_ptr <= new_tail;
            // Update valid bits based on flush logic
            for (int i = 0; i < STOREB_SIZE; i++) begin
                entries[i].valid <= on_flush_valid[i];
            end
            // Recalculate count on flush
            count <= (new_tail >= drain_ptr) ? (PTR_W+1)'(new_tail - drain_ptr) : 
                                               (PTR_W+1)'(STOREB_SIZE - (drain_ptr - new_tail));
        end 
        else begin
            logic allocate_en;
            logic [1:0] drain_inc;
            
            allocate_en = (alloc.valid && !str_busy);
            drain_inc   = mem_req[0].valid + mem_req[1].valid;

            // 1. ALLOCATE
            if (allocate_en) begin
                entries[tail_ptr].valid           <= 1'b1;
                entries[tail_ptr].addr_data_valid <= 1'b0;
                entries[tail_ptr].committed       <= 1'b0;
                entries[tail_ptr].sqN             <= alloc.sqN;
                tail_ptr <= (tail_ptr + 1) & PTR_MASK;
            end

            // 2. AGU WRITEBACK
            if (wb.valid) begin
                for (int i = 0; i < STOREB_SIZE; i++) begin
                    if (entries[i].valid && (entries[i].sqN == wb.sqN)) begin
                        entries[i].addr            <= wb.addr;
                        entries[i].data            <= wb.data;
                        entries[i].data_size       <= wb.data_size;
                        entries[i].addr_data_valid <= 1'b1;
                    end
                end
            end

            // 3. COMMIT
            for (int c = 0; c < COMMIT_WIDTH; c++) begin
                for (int i = 0; i < STOREB_SIZE; i++) begin
                    if (entries[i].valid && (entries[i].sqN == commit_sqN[c])) begin
                        entries[i].committed <= 1'b1;
                    end
                end
            end

            // 4. DRAIN
            if (drain_inc != 0) begin
                drain_ptr <= (drain_ptr + drain_inc) & PTR_MASK;
                for (int i = 0; i < 2; i++) begin
                    if (mem_req[i].valid) begin
                        int idx;
                        idx = (drain_ptr + i) & PTR_MASK;
                        entries[idx].valid <= 1'b0;
                    end
                end
            end

            // 5. Update Count
            count <= count + (PTR_W+1)'(allocate_en) - (PTR_W+1)'(drain_inc);
        end
    end

endmodule
