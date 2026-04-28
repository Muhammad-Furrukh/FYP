import include_pkg::*;

module fetch_buffer
(
    input  logic                   clk,
    input  logic                   rst,
    input  logic                   IN_busy,
    input  logic                   flush,
    input  sqN_t                   flush_sqN,
    input  var     aligner_instr_t IN_instr  [FETCH_WIDTH],

    output logic                   OUT_busy,
    output         fetch_instr_t   OUT_instr [FETCH_WIDTH]  
);

    localparam int PTR_W = $clog2(FETCHB_SIZE);

    // Buffer payload
    typedef struct packed {
        prefetch_instr_t instr;
        pc_t             pc;
        sqN_t            sqN;
    } fetch_payload_t;

    fetch_payload_t buffer [FETCHB_SIZE];

    logic [PTR_W -1:0] head;
    logic [PTR_W -1:0] tail;
    logic [PTR_W:0]    count;
    sqN_t              sqN_counter;

    logic [$clog2(FETCH_WIDTH + 1) - 1:0] in_valid_count;
    logic [$clog2(FETCH_WIDTH + 1) - 1:0] out_count;

    logic can_write;
    logic can_read;

    // Count incoming valid instructions
    always_comb begin
        in_valid_count = 0;
        for (int i = 0; i < FETCH_WIDTH; i++)
            if (IN_instr[i].valid)
                in_valid_count++;
    end

    // FIFO status
    assign can_write = (count <= FETCHB_SIZE - FETCH_WIDTH);
    assign can_read  = (!IN_busy && count > 0);
    assign OUT_busy  = !can_write;

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
    logic [PTR_W - 1:0] idx_head;
    always_comb begin
        for (int i = 0; i < FETCH_WIDTH; i++) begin
            idx_head = (head + i < FETCHB_SIZE) ? head + i : head + i - FETCHB_SIZE;

            if (i < out_count) begin
                OUT_instr[i].instr = buffer[idx_head].instr;
                OUT_instr[i].pc    = buffer[idx_head].pc;
                OUT_instr[i].valid = 1'b1;
            end
            else begin
                OUT_instr[i].valid = 1'b0;
            end
        end
    end

    // Sequential updates
    logic [PTR_W - 1:0] idx_tail;
    always_ff @(posedge clk) begin
        if (rst) begin
            head  <= '0;
            tail  <= '0;
            count <= '0;
            sqN_counter <= 0;
        end

        else if (flush) begin
            head  <= '0;
            tail  <= '0;
            count <= '0;
            sqN_counter <= flush_sqN + 1;
        end

        else begin
            // WRITE
            if (can_write) begin
                for (int i = 0; i < FETCH_WIDTH; i++) begin
                    if (IN_instr[i].valid) begin
                        idx_tail = (tail + i < FETCHB_SIZE) ? tail + i : tail + i - FETCHB_SIZE;

                        buffer[idx_tail].instr <= IN_instr[i].instr;
                        buffer[idx_tail].pc    <= IN_instr[i].pc;
                        buffer[idx_tail].sqN   <= sqN_counter;
                        sqN_counter            <= sqN_counter + 1;
                    end
                end

                tail <= (tail + in_valid_count < FETCHB_SIZE) ?
                        tail + in_valid_count :
                        tail + in_valid_count - FETCHB_SIZE;
            end

            // READ
            if (can_read) begin
                head <= (head + out_count < FETCHB_SIZE) ?
                        head + out_count :
                        head + out_count - FETCHB_SIZE;
            end

            // COUNT UPDATE
            count <= count + in_valid_count - out_count;
        end
    end

endmodule
