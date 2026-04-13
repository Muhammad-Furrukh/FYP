import include_pkg::*;
module prefetch
(
    input       logic               clk,
    input       logic               rst,
    input       logic               IN_busy,
    input       pc_t                jta1,
    input       pc_t                jta2,
    input       logic               jump1,
    input       logic               jump2,
    input       logic               consumed,
    output      prefetch_instr_t    OUT_instr [FETCH_WIDTH],
    output      pc_t                out_pc
);

    pc_t fetch_base;
    pc_t in_pc;

    PC PC
    (
        .clk(clk),
        .rst(rst),
        .IN_pc(in_pc),
        .OUT_pc(out_pc),
        .wr_en(!IN_busy)
    );

    IMEM IMEM
    (
        .clk(clk),
        .addr(fetch_base[IMEM_ADDR_WIDTH -1:0]),
        .data(OUT_instr)
    );

    always_comb begin
        case({jump2, jump1})
            2'b00:   in_pc = 4 * consumed + out_pc; // No jump, increment PC by 4 for each consumed instruction
            2'b01:   in_pc = jta1; // Target address for jal
            2'b10:   in_pc = jta2; // Target address for branch or jalr
            default: in_pc = 4 * consumed + out_pc;
        endcase

        fetch_base = out_pc & ( ~( XLEN'(7) ) ); // Align to 8-byte boundary

    end

endmodule
