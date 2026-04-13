import include_pkg::*;

module instr_aligner
(
    input   var prefetch_instr_t    IN_instr [FETCH_WIDTH],
    input       pc_t                pc,
    input       logic               invalidate,
    output      aligner_instr_t     OUT_instr [FETCH_WIDTH],
    output      logic [1:0]         consumed
);

    logic  pc_align;
    logic  pc_valid    [FETCH_WIDTH];

    always_comb begin
        pc_align = ( pc[2:0] == 3'b0 );

        for (int i = 0; i < FETCH_WIDTH; i++) begin
            // Determine instr validity based on pc
            if (pc_align)
                pc_valid[i] = 1'b1;
            else
                pc_valid[i] = (i != 0)? 1'b1 : 1'b0;

            // Setting final validity; incase of a flush, or jal in previous cycle
            if (invalidate)
                OUT_instr[i].valid = 1'b0;
            else
                OUT_instr[i].valid = pc_valid[i];

            // Passing pc with instr
            if (pc_align)
                OUT_instr[i].pc = pc + pc_t'(4 * i);
            else
                OUT_instr[i].pc = pc;
        end

        case({invalidate, pc_align})
            2'b00:      consumed = 2'b01;
            2'b01:      consumed = 2'b10;
            2'b10:      consumed = 2'b00;
            default:    consumed = 2'b10;
        endcase
    end

endmodule
