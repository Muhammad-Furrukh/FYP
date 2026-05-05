import include_pkg::*;

module fetch_buffer
(
    input  logic                   clk,
    input  logic                   rst,
    input  logic                   IN_busy,
    input  logic                   flush,
    input  prefetch_instr_t        IN_instr  [FETCH_WIDTH],
    input  logic                   IN_valid  [FETCH_WIDTH],
    input  pc_t                    IN_pc     [FETCH_WIDTH],
    input  logic                   jump1,
    input  pc_t                    jal_pc,
    output logic                   OUT_busy,
    output         fetch_instr_t   OUT_instr [FETCH_WIDTH]  
);

    localparam int PTR_W = $clog2(FETCHB_SIZE);

    // Buffer payload
    typedef struct packed {
        prefetch_instr_t instr;
        pc_t             pc;
    } fetch_payload_t;

    fetch_payload_t buffer [FETCHB_SIZE];

    logic [PTR_W -1:0] head;
    logic [PTR_W -1:0] tail;
    logic [PTR_W:0]    count;

    logic [PTR_W:0] instr_valid_count [FETCH_WIDTH+1];
    logic [$clog2(FETCHB_SIZE):0] out_count;

    logic can_write;
    logic can_read;

    // FIFO status
    assign can_write = (!flush) && 
                       (!jump1) &&
                       (count < (PTR_W+1)'(FETCHB_SIZE) - (PTR_W+1)'(FETCH_WIDTH));
    assign can_read  = (!flush) && (!jump1) && 
                       (!IN_busy) && (count > 0);
    assign OUT_busy  = !can_write;

    // Count incoming valid instructions
    always_comb begin
        instr_valid_count = '{default: '0};
        if (can_write) begin
            for (int i = 0; i < FETCH_WIDTH; i++)
                if (IN_valid[i])
                    instr_valid_count[i+1] = instr_valid_count[i] + 1;
        end
    end

    // Determine how many instructions will be read
    always_comb begin
        if (!can_read)
            out_count = 0;
        else if (count >= FETCH_WIDTH)
            out_count = FETCH_WIDTH;
        else
            out_count = count;
    end

    // Output logic
    always_comb begin
        if (flush) 
            OUT_instr = '{default: '0};
        else if (jump1)
            OUT_instr = '{default: '0};
        else begin
            for (int i = 0; i < FETCH_WIDTH; i++) begin
                if (i < out_count) begin
                    OUT_instr[i].instr = buffer[head + i].instr;
                    OUT_instr[i].pc    = buffer[head + i].pc;
                    OUT_instr[i].valid = 1'b1;
                end
                else begin
                    OUT_instr[i] = 1'b0;
                end
            end
        end
    end

    // Find jal instr idx
    logic [PTR_W-1:0] jal_idx;
    logic [PTR_W-1:0] non_jump_instrs;
    always_comb begin
        jal_idx = tail;

        for (int i = 0; i < FETCH_WIDTH; i++) begin
            if (buffer[tail - (PTR_W)'(i + 1)].pc == jal_pc)
                jal_idx = tail - (PTR_W)'(i + 1);
        end

        if (tail == jal_idx)
            non_jump_instrs = count;
        else 
            non_jump_instrs = tail - jal_idx - (PTR_W)'(1);
    end

    // Sequential updates
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            head  <= '0;
            tail  <= '0;
            count <= '0;
            buffer <= '{default: '0};
        end

        else if (flush) begin
            head  <= '0;
            tail  <= '0;
            count <= '0;
        end

        else if (jump1) begin
            head  <= head;
            tail  <= jal_idx + 1;
            count <= count - (PTR_W+1)'(non_jump_instrs);
        end

        else begin
            // WRITE
            if (can_write) begin
                for (int i = 0; i < FETCH_WIDTH; i++) begin
                    if (IN_valid[i]) begin
                        if (tail + i < FETCHB_SIZE) begin
                            buffer[tail + i].instr <= IN_instr[i];
                            buffer[tail + i].pc    <= IN_pc[i];
                        end

                        else begin
                            buffer[tail + i - FETCHB_SIZE].instr <= IN_instr[i];
                            buffer[tail + i - FETCHB_SIZE].pc    <= IN_pc[i];
                        end
                    end
                end

                tail <= (tail + instr_valid_count[FETCH_WIDTH] < FETCHB_SIZE) ?
                        tail + instr_valid_count[FETCH_WIDTH] :
                        tail + instr_valid_count[FETCH_WIDTH] - FETCHB_SIZE;
            end

            else
                tail <= tail;

            // READ
            if (can_read) begin
                head <= (head + out_count < FETCHB_SIZE) ?
                        head + out_count :
                        head + out_count - FETCHB_SIZE;
            end

            else
                head <= head;

            // COUNT UPDATE
            count <= count + instr_valid_count[FETCH_WIDTH] - 
                    out_count;
        end
    end

endmodule
