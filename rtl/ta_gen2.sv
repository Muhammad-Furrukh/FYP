import include_pkg::*;

module ta_gen2 ( 
    input  logic            br_taken,
    input  jump_type_t      jump_type,
    input  pc_t             pc,
    input  logic [XLEN-1:0] alu_rs1_result,
    input  imm_t            imm, 

    output pc_t             jta2,
    output logic            jump2
);

    always_comb begin
        jta2  = '0;
        jump2 = 1'b0;

        if (jump_type == 2'b10) begin
            // JALR: rs1 + imm
            jta2  = alu_rs1_result + imm;
            jump2 = 1'b1;
        end
        else if (br_taken) begin
            // Branch: pc + imm
            jta2  = pc + imm;
            jump2 = 1'b1;
        end
    end

endmodule