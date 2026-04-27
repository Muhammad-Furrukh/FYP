import include_pkg::*;

module ta_gen2 ( 
    input  logic            br_taken [2],
    input  jump_type_t      jump_type [2],
    input  pc_t             pc [2],
    input  logic [XLEN-1:0] alu_rs1_result [2],
    input  imm_t            imm [2], 

    output pc_t             jta2 [2],
    output logic            jump2 [2]
);

    integer i;

    always_comb begin

        for (i = 0; i < 2; i++) begin

            jta2[i]  = '0;
            jump2[i] = 1'b0;

            // JALR
            if (jump_type[i] == 2'b10) begin
                jta2[i]  = (alu_rs1_result[i] + imm[i]) & ~32'b1;
                jump2[i] = 1'b1;
            end

            // Branch
            else if (br_taken[i]) begin
                jta2[i]  = pc[i] + imm[i];
                jump2[i] = 1'b1;
            end

        end
    end

endmodule