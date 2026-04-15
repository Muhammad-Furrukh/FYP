import include_pkg::*;

module rename
(
    input       logic             clk,
    input       logic             rst,
    input       logic             ROB_busy,
    input       logic             dispatch_busy,
    input       logic             flush,
    input  var  commit_packet_t   commit_packet  [COMMIT_WIDTH],
    input  var  tag_t             read_tag       [ISSUE_WIDTH * 2],
    input  var  decode_instr_t    IN_instr       [DECODE_WIDTH],
    input  var  tag_t             IN_specTag     [32],
    input  var  logic             IN_free        [REG_ADDR_WIDTH - 1:0],
    input  var  tag_t             CDB_tag        [ISSUE_WIDTH],
    input  var  logic             CDB_valid      [ISSUE_WIDTH],
    output      rename_instr_t    OUT_instr      [RENAME_WIDTH],
    output      logic             reg_ready      [ISSUE_WIDTH * 2],
    output      logic             checkpoint,
    output      tag_t             OUT_specTag    [32],
    output      logic             OUT_free       [REG_ADDR_WIDTH - 1:0]
);

    logic stall;
    assign stall = ROB_busy || dispatch_busy;

    rename_table RAT
    (
        .clk(clk),
        .rst(rst),
        .IN_busy(stall),
        .flush(flush),
        .commit_packet(commit_packet),
        .read_tag(read_tag),
        .IN_instr(IN_instr),
        .IN_specTag(IN_specTag),
        .IN_free(IN_free),
        .CDB_tag(CDB_tag),
        .CDB_valid(CDB_valid),
        .OUT_instr(OUT_instr),
        .reg_ready(reg_ready),
        .checkpoint(checkpoint),
        .OUT_specTag(OUT_specTag),
        .OUT_free(OUT_free)
    );

endmodule
