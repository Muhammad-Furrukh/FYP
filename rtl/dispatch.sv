import include_pkg::*;

module dispatch
(
    input                                clk,
    input                                rst,
    input   var logic                    ALU_buffer_busy      [NUM_ALU_FU],
    input       logic                    MUL_DIV_buffer_busy  [NUM_MUL_DIV_FU],
    input       logic                    LSU_buffer_busy      [NUM_AGU_FU],
    input       logic                    LSU_busy,
    input       logic                    flush,
    input       sqN_t                    flush_sqN,
    input       sqN_t                    commit_sqN           [COMMIT_WIDTH],
    input       sqN_t                    instr_sqN            [DECODE_WIDTH],
    input   var rename_instr_t           IN_instr             [RENAME_WIDTH],
    input       logic                    checkpoint           [DECODE_WIDTH],
    input   var tag_t                    IN_specTag           [DECODE_WIDTH][32],
    input   var logic                    IN_free              [DECODE_WIDTH][2**REG_ADDR_WIDTH],
    output      tag_t                    OUT_specTag          [32],
    output      logic                    OUT_free             [2**REG_ADDR_WIDTH],
    output      logic                    d_unit_busy,
    output      logic                    check_busy,
    output      alu_dispatch_instr_t     OUT_alu_instr        [NUM_ALU_FU],
    output      mul_div_dispatch_instr_t OUT_mul_div_instr    [NUM_MUL_DIV_FU],
    output      lsu_dispatch_instr_t     OUT_lsu_instr        [NUM_AGU_FU]
);

    dispatch_unit DU
    (
        .clk                (clk),
        .rst                (rst),
        .flush              (flush),
        .IN_instr           (IN_instr),
        .ALU_buffer_busy    (ALU_buffer_busy),
        .MUL_DIV_buffer_busy(MUL_DIV_buffer_busy),
        .LSU_buffer_busy    (LSU_buffer_busy),
        .LSU_busy           (LSU_busy),
        .OUT_busy           (d_unit_busy),
        .OUT_alu_instr      (OUT_alu_instr),
        .OUT_mul_div_instr  (OUT_mul_div_instr),
        .OUT_lsu_instr      (OUT_lsu_instr)
    );

    branch_checkpoint BC
    (
        .clk                (clk),
        .rst                (rst),
        .flush              (flush),
        .flush_sqN          (flush_sqN),
        .commit_sqN         (commit_sqN),
        .instr_sqN          (instr_sqN),
        .checkpoint         (checkpoint),
        .IN_specTag         (IN_specTag),
        .IN_free            (IN_free),
        .check_busy         (check_busy),
        .OUT_specTag        (OUT_specTag),
        .OUT_free           (OUT_free)
    );

endmodule
