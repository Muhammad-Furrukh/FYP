import include_pkg::*;

module AGU
(
    input   lsu_issue_instr_t IN_instr,
    output  agu_out_t         OUT
);

    // ════════════════════════════════════════════════════
    // AGU Result Computation
    // ════════════════════════════════════════════════════
    
    logic [XLEN - 1:0] addr_result;
    
    always_comb begin
        case (IN_instr.oper.alu_oper)
            ADD: begin
                addr_result = IN_instr.operand1 + IN_instr.operand2;
            end
            
            SUB: begin
                addr_result = IN_instr.operand1 - IN_instr.operand2;
            end
            
            default: begin
                addr_result = '0;
            end
        endcase
    end
    
    assign OUT.valid = IN_instr.valid;
    assign OUT.sqN = IN_instr.sqN;
    assign OUT.addr_result = addr_result;
    assign OUT.store_data = IN_instr.operand2; // For store instructions, operand2 holds the data to be stored

endmodule
