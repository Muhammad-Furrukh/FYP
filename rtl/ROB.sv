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

    logic [COMMIT_WIDTH-1:0] commit;
    logic [COMMIT_WIDTH-1:0] dataout_valid;
    logic [RENAME_WIDTH-1:0] write_en;

    logic [$clog2(ROB_SIZE):0]   count, next_count;
    logic [$clog2(ROB_SIZE)-1:0] head, tail, next_head, next_tail;

    rob_entry rob [ROB_SIZE];

    logic [$clog2(ROB_SIZE)-1:0] alloc_index  [RENAME_WIDTH];
    logic [$clog2(ROB_SIZE)-1:0] commit_index [COMMIT_WIDTH];
    logic [$clog2(RENAME_WIDTH):0] num_wr;
    logic [$clog2(COMMIT_WIDTH):0] num_commit;

    logic full, empty;

    // ---------------- COMBINATIONAL ----------------
    always_comb begin
        OUT_busy = (count > ROB_SIZE - RENAME_WIDTH);

        full  = (count == 64);

        empty = (count == 0);

        for (int i = 0; i < RENAME_WIDTH; i++) begin
            alloc_index[i] = tail + i;
            write_en[i]    = rename_rob[i].valid && (!OUT_busy);
        end

        next_tail = tail;
        for (int i = 0; i < RENAME_WIDTH; i++) begin
            next_tail = next_tail + write_en[i];
        end

        for (int i = 0; i < COMMIT_WIDTH; i++) begin
            commit_index[i]  = head + i;
            commit[i]        = rob[commit_index[i]].ready && (!empty);
            dataout_valid[i] = OUT_commit[i].valid;
        end

        next_head = head;
        for (int i = 0; i < COMMIT_WIDTH; i++) begin
            next_head = next_head + commit[i];
        end

        next_count = count + (next_tail - tail) - (next_head - head);
        
    end

    // ---------------- SEQUENTIAL ----------------
    always_ff @(posedge clk or posedge rst) begin

        if (rst) begin
            count <= 0;
            head  <= 0;
            tail  <= 0;
            OUT_commit[0].valid <= 0;
            OUT_commit[1].valid <= 0;
            
            for (int i = 0; i < 64; i++) begin
                rob[i] <= '0;
            end
        end

        else if (flush && !empty) begin
                OUT_commit[0].valid <= 0;
                OUT_commit[1].valid <= 0;
                $display("inside flush big statement");
                if (rob[tail-1].sqN < flush_sqN) begin
                    $display("inside formula1");
                    tail <= tail - (rob[tail-1].sqN-flush_sqN+128);
                    count <= count - (rob[tail-1].sqN-flush_sqN+128);
                end
                else begin
                    $display("inside formula2");
                    tail <= tail-(rob[tail-1].sqN-flush_sqN);
                    count <= count - (rob[tail-1].sqN-flush_sqN);
                end
            end

        else begin
            count <= next_count;
            head  <= next_head;
            tail  <= next_tail;

            for (int i = 0; i < COMMIT_WIDTH; i++) begin
                if (commit[i]) begin
                    OUT_commit[i].sqN     <= rob[commit_index[i]].sqN;
                    OUT_commit[i].comTag  <= rob[commit_index[i]].tag;
                    OUT_commit[i].archTag <= rob[commit_index[i]].rd;
                    OUT_commit[i].valid   <= 1;
                end
                else begin
                    OUT_commit[i].valid <= 0;
                end
            end

            for (int i = 0; i < RENAME_WIDTH; i++) begin
                if (write_en[i]) begin
                    rob[alloc_index[i]].sqN   <= rename_rob[i].sqN;
                    rob[alloc_index[i]].tag   <= rename_rob[i].rd_tag;
                    rob[alloc_index[i]].rd    <= rename_rob[i].archTag;
                    rob[alloc_index[i]].ready <= 0;
                end
            end

            for (int i = 0; i < ROB_SIZE; i++) begin
                for (int j = 0; j < NUM_CDB_LINES; j++) begin
                    if ((rob[i].sqN == CDB_sqN[j]) && CDB_valid[j]) begin
                        rob[i].ready <= 1;
                    end
                end
            end
        end
    end
endmodule
