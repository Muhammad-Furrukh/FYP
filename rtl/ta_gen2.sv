import include_pkg::*;

module ta_gen2 (
    input  logic            clk,
    input  logic            rst_n,
    input  logic            br_taken,
    input  jump_type_t      jump_type,
    input  pc_t             pc,
    input  logic [XLEN-1:0] alu_rs1_result,
    input  imm_t            imm,
    input  logic            busy,

    output pc_t             jta2,
    output logic            jump2
);

    always_ff @(posedge clk or negedge rst_n) begin

        if (!rst_n) begin
            jta2  <= '0;
            jump2 <= 1'b0;
        end

        // Maintain previous target address when fetch buffer is busy
        else if (busy) begin
            jta2  <= jta2;
            jump2 <= jump2;
        end

        else if (jump_type == 2'b10) begin
            // JALR: rs1 + imm
            jta2  <= alu_rs1_result + imm;
            jump2 <= 1'b1;
        end

        else if (br_taken) begin
            // Branch: pc + imm
            jta2  <= pc + imm;
            jump2 <= 1'b1;
        end

        else begin
            jta2  <= '0;
            jump2 <= 1'b0;
        end

    end

endmodule