import include_pkg::*;

module ta_gen2 ( 
    input  logic            IN_valid [NUM_ALU_FU],
    input  logic            br_taken [NUM_ALU_FU],
    input  jump_type_t      jump_type [NUM_ALU_FU],
    input  sqN_t            instr_sqN [NUM_ALU_FU],
    input  pc_t             pc [NUM_ALU_FU],
    input  logic [XLEN-1:0] alu_rs1_result [NUM_ALU_FU],
    input  imm_t            imm [NUM_ALU_FU], 

    output pc_t             jta2,
    output logic            jump2
);

    logic [$clog2(NUM_ALU_FU)-1:0] oldest_idx [NUM_ALU_FU];

    always_comb begin

        oldest_idx = '{default: '0};
        for (int i = 1; i < NUM_ALU_FU; i++) begin
            if (IN_valid[i] && 
            (br_taken[i] || (jump_type[i] == JALR)) &&
            (((oldest_idx[i] - instr_sqN[i]) & SQN_MASK)) < ROB_SIZE)
                oldest_idx[i] = i;
            
            else
                oldest_idx[i] = oldest_idx[i-1];
        end

        if (IN_valid[oldest_idx[NUM_ALU_FU-1]]) begin
            if (br_taken[oldest_idx[NUM_ALU_FU-1]]) begin
                jump2 = 1'b1;
                jta2  = pc[oldest_idx[NUM_ALU_FU-1]] + 
                        imm[oldest_idx[NUM_ALU_FU-1]];
            end

            else if (jump_type[oldest_idx[NUM_ALU_FU-1]] == JALR) begin
                jump2 = 1'b1;
                jta2  = alu_rs1_result[oldest_idx[NUM_ALU_FU-1]] + 
                        imm[oldest_idx[NUM_ALU_FU-1]];
            end

            else
                jump2 = 1'b0;
                jta2  = '0;
        end

        else
            jump2 = 1'b0;
            jta2  = '0;
    end

endmodule