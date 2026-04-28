import include_pkg::*;

module dispatch
(
    input                                clk,
    input                                rst,
    input   var logic                    ALU_buffer_busy         [2],
    input       logic                    MUL_DIV_buffer_busy,
    input       logic                    LSU_buffer_busy,
    input       logic                    LSU_busy,
    input       logic                    flush,
    input       sqN_t                    flush_sqN,
    input       sqN_t                    commit_sqN,
    input       sqN_t                    instr_sqN,
    input   var rename_instr_t           IN_instr                [RENAME_WIDTH],
    input       logic                    checkpoint,
    input   var tag_t                    IN_specTag              [32],
    input   var logic                    IN_free                 [REG_ADDR_WIDTH - 1:0],
    output      tag_t                    OUT_specTag             [32],
    output      logic                    OUT_free                [REG_ADDR_WIDTH - 1:0],
    output      logic                    d_unit_busy,
    output      logic                    check_busy,
    output      alu_dispatch_instr_t     OUT_alu_instr           [2],
    output      mul_div_dispatch_instr_t OUT_mul_div_instr,
    output      lsu_dispatch_instr_t     OUT_lsu_instr
);

    alu_dispatch_instr_t        alu_dispatch_out        [2];
    mul_div_dispatch_instr_t    mul_div_dispatch_out; 
    lsu_dispatch_instr_t        lsu_dispatch_out;

    dispatch_unit DU
    (
        .IN_instr(IN_instr),
        .flush(flush),
        .OUT_busy(d_unit_busy),
        .OUT_alu_instr(alu_dispatch_out ),
        .OUT_mul_div_instr(mul_div_dispatch_out),
        .OUT_lsu_instr(lsu_dispatch_out)
    );

    branch_checkpoint BC
    (
        .clk                (clk),
        .rst                (rst),
        .flush              (flush),
        .flush_sqN          (flush_sqN),
        .commit_sqN         (commit_sqN),
        .instr_sqN          (instr_sqN),
        .chk_valid          (checkpoint),
        .IN_specTag         (IN_specTag),
        .IN_free            (IN_free),
        .check_busy         (check_busy),
        .OUT_specTag        (OUT_specTag),
        .OUT_free           (OUT_free)
    );

endmodule
