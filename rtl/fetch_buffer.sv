import include_pkg::*;

module fetch_buffer
(
    input  logic                   clk,
    input  logic                   rst,
    input  logic                   IN_busy,
    input  logic                   flush,
    input  fetch_instr_t           IN_instr  [FETCH_WIDTH],
    output logic                   OUT_busy,
    output fetch_instr_t           OUT_instr [FETCH_WIDTH]
);
    localparam int PTR_W = $clog2(FETCHB_SIZE);

    typedef struct packed {
        prefetch_instr_t instr;
        pc_t             pc;
    } fetch_payload_t;

    fetch_payload_t          buffer [FETCHB_SIZE];
    logic [PTR_W-1:0]        head;
    logic [PTR_W-1:0]        tail;
    logic [PTR_W:0]          count;
    logic [PTR_W-1:0]        write_addr [FETCH_WIDTH];
    logic [PTR_W-1:0]        read_addr  [FETCH_WIDTH];
    logic [$clog2(FETCHB_SIZE):0] instr_valid_count [FETCH_WIDTH+1];
    logic [$clog2(FETCHB_SIZE):0] out_count;
    logic                    can_write;
    logic                    can_read;

    assign can_write = (!flush) &&
                       (count <= (PTR_W+1)'(FETCHB_SIZE) - (PTR_W+1)'(FETCH_WIDTH));
    assign can_read  = (!flush) && (!IN_busy) && (count > 0);
    assign OUT_busy  = !can_write;

    // Prefix sum over valid inputs — purely combinational, no division
    always_comb begin
        instr_valid_count[0] = '0;
        for (int i = 0; i < FETCH_WIDTH; i++)
            instr_valid_count[i+1] = instr_valid_count[i] 
                                   + {{$clog2(FETCHB_SIZE){1'b0}}, IN_instr[i].valid};
    end

    // Pre-compute write addresses: tail + prefix_offset, single wrap
    always_comb begin
        for (int i = 0; i < FETCH_WIDTH; i++) begin
            logic [PTR_W:0] sum;
            sum = {1'b0, tail} + {{1'b0}, instr_valid_count[i][PTR_W-1:0]};
            write_addr[i] = (sum >= (PTR_W+1)'(FETCHB_SIZE))
                          ? sum[PTR_W-1:0] - PTR_W'(FETCHB_SIZE)
                          : sum[PTR_W-1:0];
        end
    end

    // Pre-compute read addresses: head + i, single wrap
    always_comb begin
        for (int i = 0; i < FETCH_WIDTH; i++) begin
            logic [PTR_W:0] sum;
            sum = {1'b0, head} + (PTR_W+1)'(i);
            read_addr[i] = (sum >= (PTR_W+1)'(FETCHB_SIZE))
                         ? sum[PTR_W-1:0] - PTR_W'(FETCHB_SIZE)
                         : sum[PTR_W-1:0];
        end
    end

    always_comb begin
        if (!can_read)                 out_count = '0;
        else if (count >= (PTR_W+1)'(FETCH_WIDTH)) out_count = (PTR_W+1)'(FETCH_WIDTH);
        else                           out_count = count[$clog2(FETCHB_SIZE):0];
    end

    // Output
    always_comb begin
        OUT_instr = '{default: '0};
        if (!flush) begin
            for (int i = 0; i < FETCH_WIDTH; i++) begin
                if ((PTR_W+1)'(i) < out_count) begin
                    OUT_instr[i].instr = buffer[read_addr[i]].instr;
                    OUT_instr[i].pc    = buffer[read_addr[i]].pc;
                    OUT_instr[i].valid = 1'b1;
                end
            end
        end
    end

    // Sequential
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            head   <= '0;
            tail   <= '0;
            count  <= '0;
            buffer <= '{default: '0};
        end
        else if (flush) begin
            head  <= '0;
            tail  <= '0;
            count <= '0;
        end
        else begin
            if (can_write) begin
                for (int i = 0; i < FETCH_WIDTH; i++)
                    if (IN_instr[i].valid) begin
                        buffer[write_addr[i]].instr <= IN_instr[i].instr;
                        buffer[write_addr[i]].pc    <= IN_instr[i].pc;
                    end
                tail  <= tail + instr_valid_count[FETCH_WIDTH]; // tail + total valid
            end

            if (can_read)
                head <= head + out_count;

            count <= count
                   + (can_write ? {1'b0, instr_valid_count[FETCH_WIDTH]} : '0)
                   - out_count;
        end
    end
endmodule
