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

logic is_new_alloc [ROB_SIZE];
logic [$clog2(RENAME_WIDTH)-1:0] alloc_offset [RENAME_WIDTH];

// ---------------- COMBINATIONAL ----------------
always_comb begin

    for (int i = 0; i < RENAME_WIDTH; i++)
        write_en[i] = rename_rob[i].valid && (count < (ROB_SIZE - i));

    commit[0] = (count > 0) && rob[head].ready;
	for (int j = 1; j < COMMIT_WIDTH; j++)
		commit[j] = (count > j) && rob[head+j].ready && commit[j-1];
	
	alloc_offset[0] = '0;
    for (int i = 0; i < RENAME_WIDTH-1; i++) begin
        alloc_offset[i+1] = alloc_offset[i] + write_en[i];
    end

    num_write = 0;
    for (int i = 0; i < RENAME_WIDTH; i++)
        num_write += write_en[i];

    num_commit = 0;
    for (int i = 0; i < COMMIT_WIDTH; i++)
        num_commit += commit[i];
end

// ---------------- SEQUENTIAL ----------------
always_ff @(posedge clk or posedge rst) begin

    if (rst) begin
        count <= 0;
        head  <= 0;
        tail  <= 0;
        for (int k = 0; k < COMMIT_WIDTH; k++)
            OUT_commit[k].valid <= 0;
        for (int l = 0; l < ROB_SIZE; l++)
            rob[l] <= '0;
    end

    else if (flush && !empty) begin
        for (int a = 0; a < COMMIT_WIDTH; a++)
            OUT_commit[a].valid <= 0;

        if (rob[tail-1].sqN < flush_sqN) begin
            tail  <= tail  - (rob[tail-1].sqN - flush_sqN + (2*ROB_SIZE));
            count <= count - (rob[tail-1].sqN - flush_sqN + (2*ROB_SIZE));
        end else begin
            tail  <= tail  - (rob[tail-1].sqN - flush_sqN);
            count <= count - (rob[tail-1].sqN - flush_sqN);
        end
        
        // Clear ready bits of squashed entries using same circular sqN logic
		for (int a = 0; a < ROB_SIZE; a++) begin
		    if (((rob[a].sqN - flush_sqN) & SQN_MASK) < sqN_t'(ROB_SIZE))
		        rob[a].ready <= 0;
		end
    end

    else begin

        // -------- CDB sqN Matching --------
		for (int j = 0; j < ROB_SIZE; j++) begin
			for (int k = 0; k < NUM_CDB_LINES; k++) begin
				if (CDB_valid[k] && (rob[j].sqN == CDB_sqN[k]))
				    rob[j].ready <= 1;
			end
		end

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

assign full     = (count == ROB_SIZE);
assign empty    = (count == 0);
assign OUT_busy = (count > ROB_SIZE - RENAME_WIDTH);

endmodule
