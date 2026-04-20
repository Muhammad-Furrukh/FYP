import include_pkg::*;

module flushController (
    input  logic         br_taken [2],
    input  sqN_t         sqN [2],
    input  jump_type_t   jump_type [2],

    output logic         flush,
    output sqN_t         flush_sqN
);

    always_comb begin

        logic valid0, valid1;
        sqN_t diff;


        // branch , JALR  
        valid0 = br_taken[0] || (jump_type[0] == 2'b10);
        valid1 = br_taken[1] || (jump_type[1] == 2'b10);

        if (valid0 && valid1) begin
            flush = 1'b1;
            diff = sqN[0] - sqN[1];
            if (diff[$bits(sqN_t)-1])
                flush_sqN = sqN[0];
            else
                flush_sqN = sqN[1];

        end
        else if (valid0) begin
            flush     = 1'b1;
            flush_sqN = sqN[0];
        end
        else if (valid1) begin
            flush     = 1'b1;
            flush_sqN = sqN[1];
        end

    end

endmodule
