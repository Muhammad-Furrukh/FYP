import include_pkg::*;

module AGU
(
    input   lsu_issue_instr_t   IN_instr,
    output  agu_out_t           OUT
);

    // ════════════════════════════════════════════════════
    // Decode LSU operation
    // ════════════════════════════════════════════════════
    
    logic       is_load, is_store;
    data_size_t data_size;
    logic       is_unsigned;
    
    always_comb begin
        is_load     = 1'b0;
        is_store    = 1'b0;
        data_size   = WORD;
        is_unsigned = 1'b0;
        
        if (IN_instr.valid) begin
            case (IN_instr.oper.lsu_oper)
                LSU_LB: begin
                    is_load     = 1'b1;
                    data_size   = BYTE;
                    is_unsigned = 1'b0;
                end
                LSU_LH: begin
                    is_load     = 1'b1;
                    data_size   = HALF;
                    is_unsigned = 1'b0;
                end
                LSU_LW: begin
                    is_load     = 1'b1;
                    data_size   = WORD;
                    is_unsigned = 1'b0;
                end
                LSU_LBU: begin
                    is_load     = 1'b1;
                    data_size   = BYTE;
                    is_unsigned = 1'b1;
                end
                LSU_LHU: begin
                    is_load     = 1'b1;
                    data_size   = HALF;
                    is_unsigned = 1'b1;
                end
                LSU_SB: begin
                    is_store    = 1'b1;
                    data_size   = BYTE;
                end
                LSU_SH: begin
                    is_store    = 1'b1;
                    data_size   = HALF;
                end
                LSU_SW: begin
                    is_store    = 1'b1;
                    data_size   = WORD;
                end
                default: begin
                    is_load     = 1'b0;
                    is_store    = 1'b0;
                    data_size   = WORD;
                    is_unsigned = 1'b0;
                end
            endcase
        end
    end
    
    // ════════════════════════════════════════════════════
    // Address Generation (operand1 + operand2 or offset)
    // ════════════════════════════════════════════════════
    
    logic [XLEN - 1:0] target_addr;
    assign target_addr = IN_instr.operand1 + IN_instr.operand2;
    
    // ════════════════════════════════════════════════════
    // Output Assignment
    // ════════════════════════════════════════════════════
    
    assign OUT.valid       = IN_instr.valid;
    assign OUT.sqN         = IN_instr.sqN;
    assign OUT.target_addr = target_addr;
    assign OUT.store_data  = IN_instr.data;
    assign OUT.req_type    = is_store ? STORE : LOAD;
    assign OUT.data_size   = data_size;
    assign OUT.is_unsigned = is_unsigned;

endmodule
