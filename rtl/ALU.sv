import include_pkg::*;

module ALU
(
    input   issue_instr_t   IN_instr,
    output  CDB_line_t      OUT
);

    // ════════════════════════════════════════════════════
    // ALU Result Computation
    // ════════════════════════════════════════════════════
    
    logic [XLEN - 1:0] alu_result;
    
    always_comb begin
        case (IN_instr.oper.alu_oper)
            ADD: begin
                alu_result = IN_instr.operand1 + IN_instr.operand2;
            end
            
            SUB: begin
                alu_result = IN_instr.operand1 - IN_instr.operand2;
            end
            
            SLL: begin
                alu_result = IN_instr.operand1 << IN_instr.operand2[4:0];
            end
            
            SLT: begin
                // Signed less than
                alu_result = $signed(IN_instr.operand1) < $signed(IN_instr.operand2);
            end
            
            SLTU: begin
                // Unsigned less than
                alu_result = IN_instr.operand1 < IN_instr.operand2;
            end
            
            XOR: begin
                alu_result = IN_instr.operand1 ^ IN_instr.operand2;
            end
            
            SRL: begin
                alu_result = IN_instr.operand1 >> IN_instr.operand2[4:0];
            end
            
            SRA: begin
                // Arithmetic right shift
                alu_result = IN_instr.operand1 >>> IN_instr.operand2[4:0];
            end
            
            OR: begin
                alu_result = IN_instr.operand1 | IN_instr.operand2;
            end
            
            AND: begin
                alu_result = IN_instr.operand1 & IN_instr.operand2;
            end
            
            COPY: begin
                // For LUI instruction, just copy operand1
                alu_result = IN_instr.operand1;
            end
            
            default: begin
                alu_result = '0;
            end
        endcase
    end

    // ════════════════════════════════════════════════════
    // Output Assignment
    // ════════════════════════════════════════════════════
    
    assign OUT.valid    = IN_instr.valid;
    assign OUT.sqN      = IN_instr.sqN;
    assign OUT.tag      = IN_instr.rd_tag;
    assign OUT.result   = alu_result;

endmodule
