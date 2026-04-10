module decoder
import include_pkg::*;
(
    input  fetch_instr_t     fetch_instr     [FETCH_WIDTH],
    input  logic             flush,
    output decode_instr_t    decode_instr    [DECODE_WIDTH]
);

    logic [6:0] opcode [FETCH_WIDTH];
    
    always_comb begin
        for (int i = 0; i < FETCH_WIDTH; i++) begin
            opcode[i] = fetch_instr[i].instr[6:0];
        end
    end

    always_comb begin
        for (int i = 0; i < FETCH_WIDTH; i++) begin
            if (flush)
                decode_instr[i].valid = 1'b0;
            else
                decode_instr[i].valid = fetch_instr[i].valid;

            decode_instr[i].sqN = fetch_instr[i].sqN;
            decode_instr[i].pc  = fetch_instr[i].pc;

            case(opcode[i])
                7'd3: // Load instrs
                    begin
                        decode_instr[i].f_unit  = LSU;
                        decode_instr[i].rs1     = fetch_instr[i].instr[19:15];
                        decode_instr[i].rs2     = 5'b0;
                        decode_instr[i].rd      = fetch_instr[i].instr[11:7];
                        decode_instr[i].imm     = ;
                        decode_instr[i].is_imm  = 1'b1;
                        decode_instr[i].is_jump = 1'b0;
                        decode_instr[i].br_type = NOT_BRANCH;

                        case(fetch_instr[i].instr[14:12])
                            3'd0: decode_instr[i].oper.lsu_oper = LOAD_BYTE;
                            3'd1: decode_instr[i].oper.lsu_oper = LOAD_HALF;
                            3'd2: decode_instr[i].oper.lsu_oper = LOAD_WORD;
                            3'd4: decode_instr[i].oper.lsu_oper = LOAD_BYTEU;
                            3'd5: decode_instr[i].oper.lsu_oper = LOAD_HALFU;
                        endcase
                    end

                7'd19:  // ALU Immediate instrs
                    begin
                        decode_instr[i].f_type  = ALU;
                        decode_instr[i].rs1     = fetch_instr[i].instr[19:15];
                        decode_instr[i].rs2     = 5'b0;
                        decode_instr[i].rd      = fetch_instr[i].instr[11:7];
                        decode_instr[i].imm     = ;
                        decode_instr[i].is_imm  = 1'b1;
                        decode_instr[i].is_jump = 1'b0;
                        decode_instr[i].br_type = NOT_BRANCH;

                        case(fetch_instr[i].instr[14:12])
                            3'd0: decode_instr[i].oper.alu_oper = ADD;
                            3'd1: decode_instr[i].oper.alu_oper = SLL;
                            3'd2: decode_instr[i].oper.alu_oper = SLT;
                            3'd3: decode_instr[i].oper.alu_oper = SLTU;
                            3'd4: decode_instr[i].oper.alu_oper = XOR;
                            3'd5: 
                                begin
                                    if (!fetch_instr[i].instr[31:25])
                                        decode_instr[i].oper.alu_oper = SRL;
                                    else
                                        decode_instr[i].oper.alu_oper = SRA;
                                end
                            3'd6: decode_instr[i].oper.alu_oper = OR;
                            3'd7: decode_instr[i].oper.alu_oper = AND;
                        endcase
                    end

                7'd35:  // Store instrs
                    begin
                        decode_instr[i].f_unit  = LSU;
                        decode_instr[i].rs1     = fetch_instr[i].instr[19:15];
                        decode_instr[i].rs2     = fetch_instr[i].instr[24:20];
                        decode_instr[i].rd      = 5'b0;
                        decode_instr[i].imm     = ;
                        decode_instr[i].is_imm  = 1'b1;
                        decode_instr[i].is_jump = 1'b0;
                        decode_instr[i].br_type = NOT_BRANCH;

                        case(fetch_instr[i].instr[14:12])
                            3'd0: decode_instr[i].oper.lsu_oper = STORE_BYTE;
                            3'd1: decode_instr[i].oper.lsu_oper = STORE_HALF;
                            3'd2: decode_instr[i].oper.lsu_oper = STORE_WORD;
                        endcase
                    end

                7'd23:  // AUIPC
                    begin
                        decode_instr[i].f_unit  = ALU;
                        decode_instr[i].rs1     = 5'b0;
                        decode_instr[i].rs2     = 5'b0;
                        decode_instr[i].rd      = fetch_instr[i].instr[11:7];
                        decode_instr[i].imm     = ;
                        decode_instr[i].is_imm  = 1'b1;
                        decode_instr[i].is_jump = 1'b0;
                        decode_instr[i].br_type = NOT_BRANCH;

                        case(fetch_instr[i].instr[14:12])
                            3'd0: decode_instr[i].oper.lsu_oper = LOAD_BYTE;
                            3'd1: decode_instr[i].oper.lsu_oper = LOAD_HALF;
                            3'd2: decode_instr[i].oper.lsu_oper = LOAD_WORD;
                            3'd4: decode_instr[i].oper.lsu_oper = LOAD_BYTEU;
                            3'd5: decode_instr[i].oper.lsu_oper = LOAD_HALFU;
                        endcase
                    end

                7'd51:  begin
                            if (fetch_instr[i].instr[31:25] == 1'b1)
                                decode_instr[i].f_unit = MUL_DIV;
                            else
                                decode_instr[i].f_unit = ALU;
                        end
                7'd55:  decode_instr[i].f_unit = ALU;
                7'd99:  decode_instr[i].f_unit = ALU;
                7'd103: decode_instr[i].f_unit = ALU;
                7'd111: decode_instr[i].f_unit = ALU;
            endcase
        end
    end

endmodule