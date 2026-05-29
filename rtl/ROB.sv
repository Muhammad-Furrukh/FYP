import include_pkg::*;
module ROB
(
input  logic           clk,
input  logic           rst,
input  rename_rob_t    rename_rob [RENAME_WIDTH],
input  logic           flush,
input  sqN_t           flush_sqN,
input  logic           CDB_valid  [NUM_CDB_LINES],
input  sqN_t           CDB_sqN    [NUM_CDB_LINES],
output logic           OUT_busy,
output commit_packet_t OUT_commit [COMMIT_WIDTH]
);

rob_entry rob [(ROB_SIZE-1):0];
logic [($clog2(ROB_SIZE)):0]   count;
logic [($clog2(ROB_SIZE)-1):0] head, tail;
logic write_en [RENAME_WIDTH];
logic commit   [COMMIT_WIDTH];
logic full;
logic empty;
logic [RENAME_WIDTH-1:0] num_write;
logic [COMMIT_WIDTH-1:0] num_commit;
logic [$clog2(RENAME_WIDTH)-1:0] alloc_offset [RENAME_WIDTH];

// Number of valid entries strictly after flush_sqN, computed by scanning
// ROB slots between head and tail. This avoids doing sqN-to-index arithmetic
// which breaks when sqN and ROB index have drifted out of sync.
logic [($clog2(ROB_SIZE)):0]   squash_count;
logic [($clog2(ROB_SIZE)-1):0] new_tail;

// ---------------- COMBINATIONAL ----------------
always_comb begin
    for (int i = 0; i < RENAME_WIDTH; i++)
        write_en[i] = rename_rob[i].valid && (count < (ROB_SIZE - i));

    commit[0] = (count > 0) && rob[head].ready;
    for (int j = 1; j < COMMIT_WIDTH; j++)
        commit[j] = (count > j) && rob[head+j].ready && commit[j-1];

    alloc_offset[0] = '0;
    for (int i = 0; i < RENAME_WIDTH-1; i++)
        alloc_offset[i+1] = alloc_offset[i] + write_en[i];

    num_write = 0;
    for (int i = 0; i < RENAME_WIDTH; i++)
        num_write += write_en[i];

    num_commit = 0;
    for (int i = 0; i < COMMIT_WIDTH; i++)
        num_commit += commit[i];

    // Walk the ROB from head to tail counting entries
    // whose sqN is strictly after flush_sqN. A slot scan avoids the
    // assumption that sqN distance == ROB index distance, which fails
    // whenever the sqN counter and ROB index have drifted (e.g. after
    // earlier flushes, non-power-of-2 ROB sizes, or sqN wrap-around).
    squash_count = '0;
    new_tail     = tail;
    if (!empty) begin
        for (int i = 0; i < ROB_SIZE; i++) begin
            if (i < int'(count)) begin
                // (sqN - (flush_sqN+1)) < ROB_SIZE means sqN is in the
                // window [flush_sqN+1 .. flush_sqN+ROB_SIZE], i.e. future.
                if ((rob[head + ($clog2(ROB_SIZE))'(i)].sqN - (flush_sqN + sqN_t'(1))) < sqN_t'(ROB_SIZE))
                    squash_count = squash_count + 1'b1;
            end
        end
        // Wind tail back by exactly the number of squashed slots.
        // This is safe because tail is a modular ROB index.
        new_tail = tail - squash_count[$clog2(ROB_SIZE)-1:0];
    end
end

// ---------------- SEQUENTIAL ----------------
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        count <= 0;
        head  <= 0;
        tail  <= 0;
        for (int k = 0; k < COMMIT_WIDTH; k++)
            OUT_commit[k] <= '0;
        for (int l = 0; l < ROB_SIZE; l++)
            rob[l] <= '0;
    end
    else begin

        // CDB writeback runs unconditionally on every
        // non-reset cycle — including flush cycles. Without this,
        // any instruction that completes on the same cycle as a flush
        // silently loses its ready bit and stalls all subsequent commits.
        for (int j = 0; j < ROB_SIZE; j++) begin
            for (int k = 0; k < NUM_CDB_LINES; k++) begin
                if (CDB_valid[k] && (rob[j].sqN == CDB_sqN[k]))
                    rob[j].ready <= 1;
            end
        end

        if (flush && !empty) begin
            // Invalidate all commit outputs
            for (int a = 0; a < COMMIT_WIDTH; a++)
                OUT_commit[a].valid <= 0;

            tail  <= new_tail;
            count <= count - squash_count;

            for (int a = 0; a < ROB_SIZE; a++) begin
                if ((rob[a].sqN - (flush_sqN + sqN_t'(1))) < sqN_t'(ROB_SIZE))
                    rob[a].ready <= 0;
            end
        end
        else begin
            // -------- COMMIT --------
            for (int i = 0; i < COMMIT_WIDTH; i++) begin
                if (commit[i]) begin
                    OUT_commit[i].sqN     <= rob[head + i].sqN;
                    OUT_commit[i].comTag  <= rob[head + i].tag;
                    OUT_commit[i].archTag <= rob[head + i].rd;
                    OUT_commit[i].valid   <= 1;
                end else begin
                    OUT_commit[i].valid   <= 0;
                end
            end

            // -------- ALLOCATE --------
            for (int i = 0; i < RENAME_WIDTH; i++) begin
                if (write_en[i]) begin
                    rob[tail + alloc_offset[i]].sqN   <= rename_rob[i].sqN;
                    rob[tail + alloc_offset[i]].tag   <= rename_rob[i].rd_tag;
                    rob[tail + alloc_offset[i]].rd    <= rename_rob[i].archTag;
                    rob[tail + alloc_offset[i]].ready <= rename_rob[i].is_store ? 1 : 0;
                end
            end

            // -------- POINTER + COUNT UPDATE --------
            count <= count + num_write - num_commit;
            tail  <= tail  + num_write;
            head  <= head  + num_commit;
        end
    end
end

assign full     = (count == ROB_SIZE);
assign empty    = (count == 0);
assign OUT_busy = (count > ROB_SIZE - RENAME_WIDTH);

endmodule
