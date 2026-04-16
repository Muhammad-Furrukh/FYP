import include_pkg::*;

module issue
(
    input  logic                    clk,
    input  logic                    rst,
    input  alu_dispatch_instr_t     IN_alu_instr   [2],
    input  mul_div_dispatch_instr_t IN_mul_div_instr,
    input  lsu_dispatch_instr_t     IN_lsu_instr,
    input  logic                    flush,
    input  sqN_t                    flush_sqN,
    input  logic                    ready_tag      [ISSUE_WIDTH][2],
    input  logic             [31:0] RF_data        [ISSUE_WIDTH][2],
    input  logic                    IN_busy        [ISSUE_WIDTH],
    input  logic         [XLEN-1:0] CDB_result     [ISSUE_WIDTH],
    input  tag_t                    CDB_tag        [ISSUE_WIDTH],
    input  logic                    CDB_valid      [ISSUE_WIDTH],
    output issue_instr_t            OUT_instr      [3],
    output lsu_issue_instr_t        OUT_lsu_instr,
    output br_type_t                OUT_br_type    [2],
    output jump_type_t              OUT_jump_type  [2],
    output sqN_t                    OUT_alu_sqN    [2],
    output tag_t                    check_ready    [ISSUE_WIDTH][2],
    output tag_t                    ready_tag      [ISSUE_WIDTH][2]    
);

endmodule  
