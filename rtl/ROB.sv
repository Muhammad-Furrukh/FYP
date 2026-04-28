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

logic [($clog2(ROB_SIZE)):0] count;
logic [($clog2(ROB_SIZE)-1):0] head, tail;

logic write_en [RENAME_WIDTH];
logic commit [COMMIT_WIDTH];
logic dataout_valid [COMMIT_WIDTH];

logic full;
logic empty;

logic is_new_alloc;
logic [RENAME_WIDTH-1:0] num_write;
logic [COMMIT_WIDTH-1:0] num_commit;

logic [COMMIT_WIDTH-1:0] c_ptr;
logic [RENAME_WIDTH-1:0] w_ptr;

logic stop_commit;
logic actual_commit;

// ---------------- COMBINATIONAL ----------------
always_comb begin
    
    OUT_busy = (count > ROB_SIZE - RENAME_WIDTH);
    
    for (int i=0; i<RENAME_WIDTH; i++) begin
        write_en[i] = (rename_rob[i].valid && (count < (ROB_SIZE-i)));
    end

    for (int j=0; j<COMMIT_WIDTH; j++) begin
        commit[j] = rob[head+j].ready && (!empty);
    
        if (rst) begin
            dataout_valid[j] = 0; 
        end
        else begin
            dataout_valid[j] = OUT_commit[j].valid; 
        end
    end
    
    num_write  = 0;
    num_commit = 0;

    for (int i = 0; i < RENAME_WIDTH; i++) begin
        num_write += (write_en[i] && !full);
    end
    for (int i = 0; i < COMMIT_WIDTH; i++) begin
        num_commit += (commit[i] && !empty && actual_commit);
    end    
    
end

// ---------------- SEQUENTIAL ----------------
always_ff @(posedge clk or posedge rst) begin

    if (rst) begin
        count <= 0;
        head  <= 0;
        tail  <= 0;
        actual_commit = 0;
        c_ptr = 0;
        w_ptr = 0;
        stop_commit = 0;
        is_new_alloc = 0;
        for (int k=0; k<COMMIT_WIDTH; k++) begin
            OUT_commit[k].valid <= 0;
        end
        
        for (int l = 0; l < ROB_SIZE; l++) begin
            rob[l] <= '0;
        end
    end

    else if  (flush && !empty) begin
        for (int a = 0; a < COMMIT_WIDTH; a++) begin
            OUT_commit[a].valid <= 0;
        end

        if (rob[tail-1].SqN < flush_sqN) begin                   
            tail <= tail - (rob[tail-1].SqN-flush_sqN+(2*ROB_SIZE));
            count <= count - (rob[tail-1].SqN-flush_sqN+(2*ROB_SIZE));
        end
        else begin
            tail <= tail-(rob[tail-1].SqN-flush_sqN);
            count <= count - (rob[tail-1].SqN-flush_sqN);     
        end
    end
    
    else
        // ----------------CDB sqN Matching---------------------------
        for (int j = 0; j < ROB_SIZE; j++) begin
            is_new_alloc = 0;
            for (int i = 0; i < RENAME_WIDTH; i++) begin
                is_new_alloc |= (j == (tail+i)) && write_en[i];
            end

            if (is_new_alloc) begin
                rob[j].ready <= 0;
            end
            else begin
                for (int k = 0; k < NUM_CDB_LINES; k++) begin
                    if ((rob[j].SqN == CDB_sqN[k]) && CDB_valid[k]) begin
                        rob[j].ready <= 1;
                    end
                end
            end

        // ----------------ALLOCATE, COMMIT, POINTER UPDATE-------------

            w_ptr = 0;
            c_ptr = 0;
            stop_commit = 0;
            // ------------------READ----------COMMIT-----------
            for (int i = 0; i < COMMIT_WIDTH; i++) begin
                if (!stop_commit && (commit[i] && rob[head+c_ptr].ready)) begin
                    // commit allowed
                    OUT_commit[c_ptr].sqN     <= rob[head + c_ptr].SqN;
                    OUT_commit[c_ptr].comTag  <= rob[head + c_ptr].tag;
                    OUT_commit[c_ptr].archTag <= rob[head + c_ptr].rd;
                    OUT_commit[c_ptr].valid   <= rob[head + c_ptr].ready;
                    actual_commit = 1;
                    c_ptr++;
                end
                
                else begin
                    // break condition → inorder enforcement
                    for (int ab = 0; ab < COMMIT_WIDTH; ab++) begin
                    OUT_commit[ab].valid   <= 0;
                    end
                    stop_commit = 1;
                    actual_commit = 0;
                end
            end
            //--------------WRITE-----------ALLOCATE-----------
            for (int i = 0; i < RENAME_WIDTH; i++) begin
                if (write_en[i]) begin
                    rob[tail + w_ptr].SqN <= rename_rob[i].sqN;
                    rob[tail + w_ptr].tag <= rename_rob[i].rd_tag;
                    rob[tail + w_ptr].rd  <= rename_rob[i].archTag;
                    w_ptr++;
                end
            end
        
            count <= count + num_write - num_commit;
            tail  <= tail + num_write;
            head  <= head + num_commit;
    end
end

assign full  = (count == ROB_SIZE);
assign empty = (count == 0);

endmodule
