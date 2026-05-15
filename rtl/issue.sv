import include_pkg::*;

module issue
(
    input       logic                               clk,
    input       logic                               rst,
    input  var  alu_dispatch_instr_t                IN_alu_instr      [NUM_ALU_FU],
    input  var  mul_div_dispatch_instr_t            IN_mul_div_instr  [NUM_MUL_DIV_FU],
    input  var  lsu_dispatch_instr_t                IN_lsu_instr      [NUM_AGU_FU],
    input       logic                               flush,
    input       sqN_t                               flush_sqN,
    input  var  logic                    [31:0]     RF_data           [ISSUE_WIDTH][2],
    input  var  logic                               IN_busy           [NUM_MUL_DIV_FU],
    input  var  tag_t                               CDB_tag           [ISSUE_WIDTH],
    input  var  logic                               CDB_valid         [ISSUE_WIDTH],
    output      issue_instr_t                       OUT_instr         [NUM_INT_FU],
    output      lsu_issue_instr_t                   OUT_lsu_instr     [NUM_AGU_FU],
    output      logic                               OUT_br_taken      [NUM_ALU_FU],
    output      jump_type_t                         OUT_jump_type     [NUM_ALU_FU],
    output      logic                               OUT_busy          [ISSUE_WIDTH],
    output      tag_t                               read_tag          [ISSUE_WIDTH][2],
    output      pc_t                                jta2,
    output      logic                               jump2    
);

    pc_t             pc             [NUM_ALU_FU];
    sqN_t            instr_sqN      [NUM_ALU_FU];
    logic            instr_valid    [NUM_ALU_FU];
    logic [XLEN-1:0] alu_rs1_result [NUM_ALU_FU];
    logic [XLEN-1:0] alu_imm        [NUM_ALU_FU];

    for (genvar i = 0; i < NUM_ALU_FU; i++) begin : gen_alu_buffer
        alu_issue_buffer alu_issue_buffer_i
        (
            .clk(clk),
            .rst(rst),
            .IN_instr(IN_alu_instr[i]),
            .flush(flush),
            .flush_sqN(flush_sqN),
            .RF_data(RF_data[i]),
            .CDB_tag(CDB_tag),
            .CDB_valid(CDB_valid),
            .OUT_instr(OUT_instr[i]),
            .OUT_br_taken(OUT_br_taken[i]),
            .OUT_jump_type(OUT_jump_type[i]),
            .OUT_pc(pc[i]),
            .OUT_busy(OUT_busy[i]),
            .rs1_result(alu_rs1_result[i]),
            .imm(alu_imm[i]),
            .read_tag(read_tag[i])
        );
    end

    always_comb begin 
        for (int i = 0; i < NUM_ALU_FU; i++) begin
            instr_sqN[i] = OUT_instr[i].sqN;
            instr_valid[i] = OUT_instr[i].valid;
        end
    end

    for (genvar i = 0; i < NUM_MUL_DIV_FU; i++) begin : gen_mul_div_buffer
        mul_div_issue_buffer mul_div_issue_buffer_i
        (
            .clk(clk),
            .rst(rst),
            .IN_instr(IN_mul_div_instr[i]),
            .flush(flush),
            .flush_sqN(flush_sqN),
            .RF_data(RF_data[NUM_ALU_FU + i]),
            .IN_busy(IN_busy[i]),
            .CDB_tag(CDB_tag),
            .CDB_valid(CDB_valid),
            .OUT_instr(OUT_instr[NUM_ALU_FU + i]),
            .OUT_busy(OUT_busy[NUM_ALU_FU + i]),
            .read_tag(read_tag[NUM_ALU_FU + i])
        );
    end

    for (genvar i = 0; i < NUM_AGU_FU; i++) begin : gen_agu_buffer
        lsu_issue_buffer lsu_issue_buffer_i
        (
            .clk(clk),
            .rst(rst),
            .IN_instr(IN_lsu_instr[i]),
            .flush(flush),
            .flush_sqN(flush_sqN),
            .RF_data(RF_data[NUM_INT_FU + i]),
            .CDB_tag(CDB_tag),
            .CDB_valid(CDB_valid),
            .OUT_instr(OUT_lsu_instr[i]),
            .OUT_busy(OUT_busy[NUM_INT_FU + i]),
            .read_tag(read_tag[NUM_INT_FU + i])
        );
    end

    ta_gen2 ta_gen2
    (   .IN_valid(instr_valid),
        .br_taken(OUT_br_taken),
        .jump_type(OUT_jump_type),
        .instr_sqN(instr_sqN),
        .pc(pc),
        .alu_rs1_result(alu_rs1_result),
        .imm(alu_imm),
        .jta2(jta2),
        .jump2(jump2)
    );

endmodule  
