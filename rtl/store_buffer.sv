import include_pkg::*;

module store_buffer (
    input  logic            clk,
    input  logic            rst,
    input  stb_alloc_t      alloc,
    input  stb_wb_t         wb,
    input  sqN_t            commit_sqN [COMMIT_WIDTH],
    input  logic            comm_valid [COMMIT_WIDTH],
    input  logic            flush,
    input  sqN_t            flush_sqN,
    input  logic            mem_stall  [2],
    output stb_mem_req_t    mem_req    [2],
    output stb_fwd_entry_t  fwd        [STOREB_SIZE],
    output logic            str_busy
);

    typedef struct packed {
        logic            valid;
        logic            committed;
        logic            addr_data_valid;
        sqN_t            sqN;
        logic [1:0]      data_size;
        logic [XLEN-1:0] addr;
        logic [XLEN-1:0] data;
    } stb_entry_t;

    localparam PTR_W = $clog2(STOREB_SIZE);

    stb_entry_t                  entries  [STOREB_SIZE];
    logic [PTR_W-1:0]            head, tail;
    logic [PTR_W:0]              count;

    // ── Forwarding view ──────────────────────────────
    always_comb
        for (int i = 0; i < STOREB_SIZE; i++) begin
            fwd[i].valid           = entries[i].valid;
            fwd[i].committed       = entries[i].committed;
            fwd[i].addr_data_valid = entries[i].addr_data_valid;
            fwd[i].sqN             = entries[i].sqN;
            fwd[i].data_size       = entries[i].data_size;
            fwd[i].addr            = entries[i].addr;
            fwd[i].data            = entries[i].data;
        end

    // ── WB index — match on sqN ──────────────────────
    logic [PTR_W-1:0] wb_idx;
    always_comb begin
        wb_idx = '0;
        for (int i = 0; i < STOREB_SIZE; i++)
            if (entries[i].valid && entries[i].sqN == wb.sqN)
                wb_idx = PTR_W'(i);
    end

    // ── Drain ports — head and head+1 ────────────────
    // Port 0: entries[head]   if valid+committed+addr_data_valid
    // Port 1: entries[head+1] if port 0 drains AND head+1 also ready
    // A port only drains if the corresponding mem_stall is low.
    logic             drain_valid [2];
    logic [PTR_W-1:0] drain_idx   [2];

    always_comb begin
        drain_valid[0] = (count > 0)
                       && entries[head].valid
                       && entries[head].committed
                       && entries[head].addr_data_valid
                       && !mem_stall[0];

        drain_valid[1] = drain_valid[0]
                       && (count > 1)
                       && entries[head + PTR_W'(1)].valid
                       && entries[head + PTR_W'(1)].committed
                       && entries[head + PTR_W'(1)].addr_data_valid
                       && !mem_stall[1];

        drain_idx[0] = head;
        drain_idx[1] = head + PTR_W'(1);
    end

    // ── Busy ─────────────────────────────────────────
    assign str_busy = (count >= PTR_W'(STOREB_SIZE - COMMIT_WIDTH));

    // ── Flush: count entries strictly after flush_sqN ─
    logic [PTR_W:0]   squash_count;
    logic [PTR_W-1:0] new_tail;

    always_comb begin
        squash_count = '0;
        if (count > 0) begin
            for (int i = 0; i < STOREB_SIZE; i++) begin
                if (i < int'(count)) begin
                    if (((entries[head + PTR_W'(i)].sqN - flush_sqN) & SQN_MASK) < sqN_t'(STOREB_SIZE))
                        squash_count = squash_count + 1'b1;
                end
            end
        end
        new_tail = tail - squash_count[PTR_W-1:0];
    end

    // ── Sequential ───────────────────────────────────
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (int i = 0; i < STOREB_SIZE; i++)
                entries[i] <= '{default: '0};
            for (int p = 0; p < 2; p++)
                mem_req[p] <= '{default: '0};
            head  <= '0;
            tail  <= '0;
            count <= '0;
        end

        else if (flush) begin
            // Squash uncommitted entries after flush_sqN
            for (int i = 0; i < STOREB_SIZE; i++)
                if (entries[i].valid && !entries[i].committed
                    && ((entries[i].sqN - flush_sqN) & SQN_MASK) < sqN_t'(STOREB_SIZE))
                    entries[i].valid <= 1'b0;
            tail  <= new_tail;
            count <= count - squash_count;
            // Suppress drain outputs during flush
            for (int p = 0; p < 2; p++)
                mem_req[p] <= '{default: '0};
        end

        else begin
            // ── Commit ───────────────────────────────
            for (int i = 0; i < COMMIT_WIDTH; i++)
                for (int j = 0; j < STOREB_SIZE; j++)
                    if (entries[j].valid && comm_valid[i]
                        && entries[j].sqN == commit_sqN[i])
                        entries[j].committed <= 1'b1;

            // ── WB ───────────────────────────────────
            if (wb.valid) begin
                entries[wb_idx].addr            <= wb.addr;
                entries[wb_idx].data            <= wb.data;
                entries[wb_idx].data_size       <= wb.data_size;
                entries[wb_idx].addr_data_valid <= 1'b1;
            end

            // ── Drain ────────────────────────────────
            // Port 0 always drains from head.
            // Port 1 drains head+1 only if port 0 also drained.
            // mem_stall holds mem_req stable when CDC is busy.
            for (int p = 0; p < 2; p++) begin
                if (mem_stall[p]) begin
                    mem_req[p] <= mem_req[p]; // hold stable
                end else if (drain_valid[p]) begin
                    mem_req[p].valid     <= 1'b1;
                    mem_req[p].wr_addr   <= entries[drain_idx[p]].addr;
                    mem_req[p].data      <= entries[drain_idx[p]].data;
                    mem_req[p].data_size <= entries[drain_idx[p]].data_size;
                    entries[drain_idx[p]].valid <= 1'b0;
                end else begin
                    mem_req[p] <= '{default: '0};
                end
            end

            // ── Head/count advance ───────────────────
            // Advance head by the number of ports that drained.
            // drain_valid[1] implies drain_valid[0] by construction.
            begin
                logic [PTR_W:0] drained;
                drained = {PTR_W'(0), drain_valid[0]}
                        + {PTR_W'(0), drain_valid[1]};
                head  <= head  + drained[PTR_W-1:0];
                count <= count - drained;
            end

            // ── Alloc ────────────────────────────────
            if (alloc.valid) begin
                entries[tail].valid          <= 1'b1;
                entries[tail].committed      <= 1'b0;
                entries[tail].addr_data_valid <= 1'b0;
                entries[tail].sqN            <= alloc.sqN;
                entries[tail].data_size      <= '0;
                entries[tail].addr           <= '0;
                entries[tail].data           <= '0;
                tail  <= tail  + 1'b1;
                count <= count + 1'b1;
            end
        end
    end

endmodule