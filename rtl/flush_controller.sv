import include_pkg::*;

module flush_controller (
    input  logic         clk,
    input  logic         rst,
    input  logic         br_taken [2],
    input  sqN_t         sqN [2],
    input  jump_type_t   jump_type [2],

    output logic         flush,
    output sqN_t         flush_sqN
);

    logic flush_next;
    sqN_t flush_sqN_next;

    always_comb begin
        logic valid0, valid1;
        sqN_t diff;
        flush_next = 1'b0;
        flush_sqN_next = '0;

        // branch, JALR  
        valid0 = br_taken[0] || (jump_type[0] == 2'b10);
        valid1 = br_taken[1] || (jump_type[1] == 2'b10);

        if (valid0 && valid1) begin
            flush_next = 1'b1;
            diff = sqN[0] - sqN[1];
            if (diff[$bits(sqN_t)-1])
                flush_sqN_next = sqN[0];
            else
                flush_sqN_next = sqN[1];
        end
        else if (valid0) begin
            flush_next = 1'b1;
            flush_sqN_next = sqN[0];
        end
        else if (valid1) begin
            flush_next = 1'b1;
            flush_sqN_next = sqN[1];
        end
    end

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            flush     <= 1'b0;
            flush_sqN <= '0;
        end else begin
            flush     <= flush_next;
            flush_sqN <= flush_sqN_next;
        end
    end

endmodule
