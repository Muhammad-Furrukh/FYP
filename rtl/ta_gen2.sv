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

    logic [$clog2(NUM_ALU_FU)-1:0] oldest_idx;
    sqN_t oldest_sqN;

    always_comb begin

        oldest_idx = '0;
        oldest_sqN = '1;
        jump2 = 1'b0;
        jta2  = '0;
        
        for (int i = 0; i < NUM_ALU_FU; i++) begin
            if (IN_valid[i] && 
            (br_taken[i] || (jump_type[i] == 2'b10)) &&
            instr_sqN[i] < oldest_sqN) begin
                oldest_sqN = instr_sqN[i];
                oldest_idx = $clog2(NUM_ALU_FU)'(i);  // ← line 31
            end
        end

        if (IN_valid[oldest_idx]) begin
            if (br_taken[oldest_idx]) begin
                jump2 = 1'b1;
                jta2  = pc[oldest_idx] + 
                        imm[oldest_idx];
            end

            else if (jump_type[oldest_idx] == 2'b10) begin
                jump2 = 1'b1;
                jta2  = alu_rs1_result[oldest_idx] + 
                        imm[oldest_idx];
            end

            else begin
                jump2 = 1'b0;
                jta2  = '0;
            end
        end
    end
endmodule
