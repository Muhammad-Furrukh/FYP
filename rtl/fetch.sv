import include_pkg::*;
module fetch
(
    input       logic                     clk,
    input       logic                     rst,
    input       logic                     IN_busy,
    input       logic                     flush,
    input       pc_t                      instr_pc    [FETCH_WIDTH],
    input       logic                     instr_valid [FETCH_WIDTH],
    input       prefetch_instr_t          IN_instr    [FETCH_WIDTH],
    output      logic                     OUT_busy,
    output      logic                     jump1,
    output      pc_t                      jta1,
    output      fetch_instr_t             OUT_instr   [FETCH_WIDTH]
);

    fetch_instr_t in_fb [FETCH_WIDTH];
    ta_gen1 JTA1
    (
        .IN_pc(instr_pc),
        .valid(instr_valid),
        .IN_instr(IN_instr),
        .jump1(jump1),
        .jta1(jta1),
        .OUT_instr(in_fb)
    );

    fetch_buffer FB
    (
        .clk(clk),
        .rst(rst),
        .IN_instr(in_fb),
        .IN_busy(IN_busy),
        .flush(flush),
        .OUT_busy(OUT_busy),
        .OUT_instr(OUT_instr)
    );

endmodule
