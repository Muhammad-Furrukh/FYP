import include_pkg::*;
module decoder
(
    input  var  fetch_instr_t     IN_instr     [FETCH_WIDTH],
    output      decode_instr_t    OUT_instr    [DECODE_WIDTH]
);

    logic [6:0]  opcode     [FETCH_WIDTH];
    logic [31:0] immediate  [FETCH_WIDTH];

    immediate_gen IG
    (
        .IN_instr(IN_instr), 
        .immediate(immediate)
    );

    always_comb begin
        for (int i = 0; i < FETCH_WIDTH; i++) begin
            OUT_instr[i].pc  = IN_instr[i].pc;
            OUT_instr[i].sqN = '0;  // sqN will be assigned by decode module

            opcode[i] = IN_instr[i].instr[6:0];

            case(opcode[i])
                7'd3: // Load instrs
                    begin
                        OUT_instr[i].f_unit      = LSU;
                        OUT_instr[i].rs1         = IN_instr[i].instr[19:15];
                        OUT_instr[i].rs2         = 5'b0;
                        OUT_instr[i].rd          = IN_instr[i].instr[11:7];
                        OUT_instr[i].imm         = immediate[i];
                        OUT_instr[i].is_imm      = 1'b1;
                        OUT_instr[i].jump_type   = NOT_JUMP;
                        OUT_instr[i].br_type     = NOT_BRANCH;
                        OUT_instr[i].u_type      = NOT_U;

                        case(IN_instr[i].instr[14:12])
                            3'd0: begin
                                OUT_instr[i].oper.lsu_oper = LSU_LB;
                                OUT_instr[i].valid         = IN_instr[i].valid;
                            end
                            3'd1: begin
                                OUT_instr[i].oper.lsu_oper = LSU_LH;
                                OUT_instr[i].valid         = IN_instr[i].valid;
                            end
                            3'd2: begin
                                OUT_instr[i].oper.lsu_oper = LSU_LW;
                                OUT_instr[i].valid         = IN_instr[i].valid;
                            end
                            3'd4: begin
                                OUT_instr[i].oper.lsu_oper = LSU_LBU;
                                OUT_instr[i].valid         = IN_instr[i].valid;
                            end
                            3'd5: begin
                                OUT_instr[i].oper.lsu_oper = LSU_LHU;
                                OUT_instr[i].valid         = IN_instr[i].valid;
                            end
                            default: begin
                                OUT_instr[i].oper.lsu_oper = LSU_INVALID;
                                OUT_instr[i].valid         = 1'b0;
                            end
                        endcase
                    end

                7'd19:  // ALU Immediate instrs
                    begin
                        OUT_instr[i].f_unit      = ALU;
                        OUT_instr[i].rs1         = IN_instr[i].instr[19:15];
                        OUT_instr[i].rs2         = 5'b0;
                        OUT_instr[i].rd          = IN_instr[i].instr[11:7];
                        OUT_instr[i].imm         = immediate[i];
                        OUT_instr[i].is_imm      = 1'b1;
                        OUT_instr[i].jump_type   = NOT_JUMP;
                        OUT_instr[i].br_type     = NOT_BRANCH;
                        OUT_instr[i].u_type      = NOT_U;

                        case(IN_instr[i].instr[14:12])
                            3'd0: begin
                                OUT_instr[i].oper.alu_oper = ADD;
                                OUT_instr[i].valid         = IN_instr[i].valid;
                            end
                            3'd1: begin
                                OUT_instr[i].oper.alu_oper = SLL;
                                OUT_instr[i].valid         = IN_instr[i].valid;
                            end
                            3'd2: begin
                                OUT_instr[i].oper.alu_oper = SLT;
                                OUT_instr[i].valid         = IN_instr[i].valid;
                            end
                            3'd3: begin
                                OUT_instr[i].oper.alu_oper = SLTU;
                                OUT_instr[i].valid         = IN_instr[i].valid;
                            end
                            3'd4: begin
                                OUT_instr[i].oper.alu_oper = XOR;
                                OUT_instr[i].valid         = IN_instr[i].valid;
                            end
                            3'd5: begin
                                if (IN_instr[i].instr[31:25] == 7'h00) begin
                                    OUT_instr[i].oper.alu_oper = SRL;
                                    OUT_instr[i].valid         = IN_instr[i].valid;
                                end
                                else if (IN_instr[i].instr[31:25] == 7'h20) begin
                                    OUT_instr[i].oper.alu_oper = SRA;
                                    OUT_instr[i].valid         = IN_instr[i].valid;
                                end
                                else
                                    OUT_instr[i].valid         = 1'b0;
                            end
                            3'd6: begin
                                OUT_instr[i].oper.alu_oper = OR;
                                OUT_instr[i].valid         = IN_instr[i].valid;
                            end
                            3'd7: begin
                                OUT_instr[i].oper.alu_oper = AND;
                                OUT_instr[i].valid         = IN_instr[i].valid;
                            end
                            default: begin
                                OUT_instr[i].oper.alu_oper = ALU_INVALID;
                                OUT_instr[i].valid         = 1'b0;
                            end
                        endcase
                    end

                7'd35:  // Store instrs
                    begin
                        OUT_instr[i].f_unit      = LSU;
                        OUT_instr[i].rs1         = IN_instr[i].instr[19:15];
                        OUT_instr[i].rs2         = IN_instr[i].instr[24:20];
                        OUT_instr[i].rd          = 5'b0;
                        OUT_instr[i].imm         = immediate[i];
                        OUT_instr[i].is_imm      = 1'b1;
                        OUT_instr[i].jump_type   = NOT_JUMP;
                        OUT_instr[i].br_type     = NOT_BRANCH;
                        OUT_instr[i].u_type      = NOT_U;

                        case(IN_instr[i].instr[14:12])
                            3'd0: begin
                                OUT_instr[i].oper.lsu_oper = LSU_SB;
                                OUT_instr[i].valid         = IN_instr[i].valid;
                            end
                            3'd1: begin
                                OUT_instr[i].oper.lsu_oper = LSU_SH;
                                OUT_instr[i].valid         = IN_instr[i].valid;
                            end
                            3'd2: begin
                                OUT_instr[i].oper.lsu_oper = LSU_SW;
                                OUT_instr[i].valid         = IN_instr[i].valid;
                            end
                            default: begin
                                OUT_instr[i].oper.lsu_oper = LSU_INVALID;
                                OUT_instr[i].valid         = 1'b0;
                            end
                        endcase
                    end

                7'd23:  // AUIPC
                    begin
                        OUT_instr[i].valid           = IN_instr[i].valid;
                        OUT_instr[i].f_unit          = ALU;
                        OUT_instr[i].rs1             = 5'b0;
                        OUT_instr[i].rs2             = 5'b0;
                        OUT_instr[i].rd              = IN_instr[i].instr[11:7];
                        OUT_instr[i].imm             = immediate[i];
                        OUT_instr[i].is_imm          = 1'b1;
                        OUT_instr[i].jump_type       = NOT_JUMP;
                        OUT_instr[i].br_type         = NOT_BRANCH;
                        OUT_instr[i].u_type          = AUIPC;
                        OUT_instr[i].oper.alu_oper   = ADD;
                    end

                7'd51:  // ALU R and MUL/DIV instructions
                    begin
                        OUT_instr[i].rs1         = IN_instr[i].instr[19:15];
                        OUT_instr[i].rs2         = IN_instr[i].instr[24:20];
                        OUT_instr[i].rd          = IN_instr[i].instr[11:7];
                        OUT_instr[i].imm         = 32'b0;
                        OUT_instr[i].is_imm      = 1'b0;
                        OUT_instr[i].jump_type   = NOT_JUMP;
                        OUT_instr[i].br_type     = NOT_BRANCH;
                        OUT_instr[i].u_type      = NOT_U;

                        if (IN_instr[i].instr[31:25] == 7'b1) begin
                            OUT_instr[i].f_unit = MUL_DIV;

                            case(IN_instr[i].instr[14:12])
                                3'd0: begin
                                    OUT_instr[i].oper.mul_div_oper = MUL;
                                    OUT_instr[i].valid = IN_instr[i].valid;
                                end
                                3'd1: begin
                                    OUT_instr[i].oper.mul_div_oper = MULH;
                                    OUT_instr[i].valid = IN_instr[i].valid;
                                end
                                3'd2: begin
                                    OUT_instr[i].oper.mul_div_oper = MULHSU;
                                    OUT_instr[i].valid = IN_instr[i].valid;
                                end
                                3'd3: begin
                                    OUT_instr[i].oper.mul_div_oper = MULHU;
                                    OUT_instr[i].valid = IN_instr[i].valid;
                                end
                                3'd4: begin
                                    OUT_instr[i].oper.mul_div_oper = DIV;
                                    OUT_instr[i].valid = IN_instr[i].valid;
                                end
                                3'd5: begin
                                    OUT_instr[i].oper.mul_div_oper = DIVU;
                                    OUT_instr[i].valid = IN_instr[i].valid;
                                end
                                3'd6: begin
                                    OUT_instr[i].oper.mul_div_oper = REM;
                                    OUT_instr[i].valid = IN_instr[i].valid;
                                end
                                3'd7: begin
                                    OUT_instr[i].oper.mul_div_oper = REMU;
                                    OUT_instr[i].valid = IN_instr[i].valid;
                                end
                                default: begin
                                    OUT_instr[i].oper.mul_div_oper = MUL_INVALID;
                                    OUT_instr[i].valid = 1'b0;
                                end
                            endcase
                        end
                        else begin
                            OUT_instr[i].f_unit = ALU;

                            case(IN_instr[i].instr[14:12])
                                3'd0: begin
                                    if (IN_instr[i].instr[31:25] == 7'h0) begin
                                        OUT_instr[i].oper.alu_oper = ADD;
                                        OUT_instr[i].valid         = IN_instr[i].valid;
                                    end
                                    else if (IN_instr[i].instr[31:25] == 7'h20) begin
                                        OUT_instr[i].oper.alu_oper = SUB;
                                        OUT_instr[i].valid         = IN_instr[i].valid;
                                    end
                                    else 
                                        OUT_instr[i].valid = 1'b0;
                                end
                                3'd1: begin
                                    OUT_instr[i].oper.alu_oper = SLL;
                                    OUT_instr[i].valid         = IN_instr[i].valid;
                                end
                                3'd2: begin
                                    OUT_instr[i].oper.alu_oper = SLT;
                                    OUT_instr[i].valid         = IN_instr[i].valid;
                                end
                                3'd3: begin
                                    OUT_instr[i].oper.alu_oper = SLTU;
                                    OUT_instr[i].valid         = IN_instr[i].valid;
                                end
                                3'd4: begin
                                    OUT_instr[i].oper.alu_oper = XOR;
                                    OUT_instr[i].valid         = IN_instr[i].valid;
                                end
                                3'd5: begin
                                    if (IN_instr[i].instr[31:25] == 7'h0) begin
                                        OUT_instr[i].oper.alu_oper = SRL;
                                        OUT_instr[i].valid         = IN_instr[i].valid;
                                    end
                                    else if (IN_instr[i].instr[31:25] == 7'h20) begin
                                        OUT_instr[i].oper.alu_oper = SRA;
                                        OUT_instr[i].valid         = IN_instr[i].valid;
                                    end
                                    else begin
                                        OUT_instr[i].valid = 1'b0;
                                    end
                                end
                                3'd6: begin
                                    OUT_instr[i].oper.alu_oper = OR;
                                    OUT_instr[i].valid = IN_instr[i].valid;
                                end
                                3'd7: begin
                                    OUT_instr[i].oper.alu_oper = AND;
                                    OUT_instr[i].valid = IN_instr[i].valid;
                                end
                                default: begin
                                    OUT_instr[i].oper.alu_oper = ALU_INVALID;
                                    OUT_instr[i].valid = 1'b0;
                                end
                            endcase
                        end  
                    end

                7'd55: // LUI
                    begin
                        OUT_instr[i].valid           = IN_instr[i].valid;
                        OUT_instr[i].f_unit          = ALU;
                        OUT_instr[i].rs1             = 5'b0;
                        OUT_instr[i].rs2             = 5'b0;
                        OUT_instr[i].rd              = IN_instr[i].instr[11:7];
                        OUT_instr[i].imm             = immediate[i];
                        OUT_instr[i].is_imm          = 1'b1;
                        OUT_instr[i].jump_type       = NOT_JUMP;
                        OUT_instr[i].br_type         = NOT_BRANCH;
                        OUT_instr[i].u_type          = LUI;
                        OUT_instr[i].oper.alu_oper   = COPY;
                    end

                7'd99:  // Branch instructions
                    begin
                        OUT_instr[i].f_unit          = ALU;
                        OUT_instr[i].rs1             = IN_instr[i].instr[19:15];
                        OUT_instr[i].rs2             = IN_instr[i].instr[24:20];
                        OUT_instr[i].rd              = 5'b0;
                        OUT_instr[i].imm             = immediate[i];
                        OUT_instr[i].is_imm          = 1'b1;
                        OUT_instr[i].jump_type       = NOT_JUMP;
                        OUT_instr[i].oper.alu_oper   = COPY;
                        OUT_instr[i].u_type          = NOT_U;

                        case(IN_instr[i].instr[14:12])
                            3'd0: begin
                                OUT_instr[i].br_type = BEQ;
                                OUT_instr[i].valid   = IN_instr[i].valid;
                            end
                            3'd1: begin
                                OUT_instr[i].br_type = BNE;
                                OUT_instr[i].valid   = IN_instr[i].valid;
                            end
                            3'd4: begin
                                OUT_instr[i].br_type = BLT;
                                OUT_instr[i].valid   = IN_instr[i].valid;
                            end
                            3'd5: begin
                                OUT_instr[i].br_type = BGE;
                                OUT_instr[i].valid   = IN_instr[i].valid;
                            end
                            3'd6: begin
                                OUT_instr[i].br_type = BLTU;
                                OUT_instr[i].valid   = IN_instr[i].valid;
                            end
                            3'd7: begin
                                OUT_instr[i].br_type = BGEU;
                                OUT_instr[i].valid   = IN_instr[i].valid;
                            end
                            default: begin
                                OUT_instr[i].br_type = NOT_BRANCH;
                                OUT_instr[i].valid   = 1'b0;
                            end
                        endcase
                    end

                7'd103: // JALR
                    begin
                        OUT_instr[i].f_unit          = ALU;
                        OUT_instr[i].rs1             = IN_instr[i].instr[19:15];
                        OUT_instr[i].rs2             = 5'b0;
                        OUT_instr[i].rd              = IN_instr[i].instr[11:7];
                        OUT_instr[i].imm             = immediate[i];
                        OUT_instr[i].is_imm          = 1'b1;
                        OUT_instr[i].jump_type       = JALR;
                        OUT_instr[i].br_type         = NOT_BRANCH;
                        OUT_instr[i].u_type          = NOT_U;
                        OUT_instr[i].oper.alu_oper   = ADD;

                        if (IN_instr[i].instr[14:12] == 3'd0)
                            OUT_instr[i].valid = IN_instr[i].valid;
                        else
                            OUT_instr[i].valid = 1'b0;
                    end

                7'd111: // JAL
                    begin
                        OUT_instr[i].valid           = IN_instr[i].valid;
                        OUT_instr[i].f_unit          = ALU;
                        OUT_instr[i].rs1             = 5'b0;
                        OUT_instr[i].rs2             = 5'b0;
                        OUT_instr[i].rd              = IN_instr[i].instr[11:7];
                        OUT_instr[i].imm             = immediate[i];
                        OUT_instr[i].is_imm          = 1'b1;
                        OUT_instr[i].jump_type       = JAL;
                        OUT_instr[i].br_type         = NOT_BRANCH;
                        OUT_instr[i].u_type          = NOT_U;
                        OUT_instr[i].oper.alu_oper   = ADD;
                    end
                default: 
                    begin
                        OUT_instr[i].valid           = 1'b0;
                        OUT_instr[i].f_unit          = ALU;
                        OUT_instr[i].rs1             = 5'b0;
                        OUT_instr[i].rs2             = 5'b0;
                        OUT_instr[i].rd              = '0;
                        OUT_instr[i].imm             = '0;
                        OUT_instr[i].is_imm          = '0;
                        OUT_instr[i].jump_type       = NOT_JUMP;
                        OUT_instr[i].br_type         = NOT_BRANCH;
                        OUT_instr[i].u_type          = NOT_U;
                        OUT_instr[i].oper.alu_oper   = ALU_INVALID;
                    end    
            endcase

        end
    end
endmodule
