import include_pkg::*;
module fetch
(
    input   logic                     clk,
    input   logic                     rst,
    input   logic                     IN_busy,
    input   logic                     jump2,
    input   logic                     flush,
    input   pc_t                      pc,
    input   prefetch_instr_t          prefetch_instr  [FETCH_WIDTH],
    output  logic                     OUT_busy,
    output  logic                     jump1,
    output  logic               [1:0] consumed,
    output  fetch_instr_t             fetch_instr     [FETCH_WIDTH]
);



endmodule
