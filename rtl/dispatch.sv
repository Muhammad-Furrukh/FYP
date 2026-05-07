import include_pkg::*;

module dispatch
(
    input                                clk,
    input                                rst,
    input   var logic                    ALU_buffer_busy         [NUM_ALU_FU],
    input       logic                    MUL_DIV_buffer_busy     [NUM_MUL_DIV_FU],
    input       logic                    LSU_buffer_busy         [NUM_AGU_FU],
    input       logic                    LSU_busy,
    input       logic                    flush,
    input       sqN_t                    flush_sqN,
    input       logic			 comm_valid 		 [COMMIT_WIDTH],
    input       sqN_t                    commit_sqN              [COMMIT_WIDTH],
    input       sqN_t                    instr_sqN               [RENAME_WIDTH], 
    input   var rename_instr_t           IN_instr                [RENAME_WIDTH],
    input       logic                    checkpoint              [RENAME_WIDTH],
    input   var tag_t                    IN_specTag              [DECODE_WIDTH][32],
    input   var logic                    IN_free                 [DECODE_WIDTH][2**REG_ADDR_WIDTH],
    output      tag_t                    OUT_specTag             [32],
    output      logic                    OUT_free                [2**REG_ADDR_WIDTH],
    output      logic                    d_unit_busy,
    output      logic                    check_busy,
    output      alu_dispatch_instr_t     OUT_alu_instr           [NUM_ALU_FU],
    output      mul_div_dispatch_instr_t OUT_mul_div_instr       [NUM_MUL_DIV_FU],
    output      lsu_dispatch_instr_t     OUT_lsu_instr           [NUM_AGU_FU]
);

    alu_dispatch_instr_t        alu_dispatch_out        [NUM_ALU_FU];
    mul_div_dispatch_instr_t    mul_div_dispatch_out    [NUM_MUL_DIV_FU]; 
    lsu_dispatch_instr_t        lsu_dispatch_out        [NUM_AGU_FU];

    dispatch_unit DU
    (   .clk(clk),
        .rst(rst),
        .IN_instr(IN_instr),
        .flush(flush),
        .ALU_buffer_busy(ALU_buffer_busy),
        .MUL_DIV_buffer_busy(MUL_DIV_buffer_busy),
        .LSU_buffer_busy(LSU_buffer_busy),
        .LSU_busy(LSU_busy),
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
        .comm_valid	    (comm_valid),	
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
