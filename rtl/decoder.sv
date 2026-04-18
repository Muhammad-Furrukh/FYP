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
            OUT_instr[i].valid = IN_instr[i].valid;
            OUT_instr[i].sqN = IN_instr[i].sqN;
            OUT_instr[i].pc  = IN_instr[i].pc;

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
                            3'd0: OUT_instr[i].oper.lsu_oper = LSU_LB;
                            3'd1: OUT_instr[i].oper.lsu_oper = LSU_LH;
                            3'd2: OUT_instr[i].oper.lsu_oper = LSU_LW;
                            3'd4: OUT_instr[i].oper.lsu_oper = LSU_LBU;
                            3'd5: OUT_instr[i].oper.lsu_oper = LSU_LHU;
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
                            3'd0: OUT_instr[i].oper.alu_oper = ADD;
                            3'd1: OUT_instr[i].oper.alu_oper = SLL;
                            3'd2: OUT_instr[i].oper.alu_oper = SLT;
                            3'd3: OUT_instr[i].oper.alu_oper = SLTU;
                            3'd4: OUT_instr[i].oper.alu_oper = XOR;
                            3'd5: 
                                begin
                                    if (IN_instr[i].instr[31:25] == 7'b0)
                                        OUT_instr[i].oper.alu_oper = SRL;
                                    else
                                        OUT_instr[i].oper.alu_oper = SRA;
                                end
                            3'd6: OUT_instr[i].oper.alu_oper = OR;
                            3'd7: OUT_instr[i].oper.alu_oper = AND;
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
                            3'd0: OUT_instr[i].oper.lsu_oper = LSU_SB;
                            3'd1: OUT_instr[i].oper.lsu_oper = LSU_SH;
                            3'd2: OUT_instr[i].oper.lsu_oper = LSU_SW;
                        endcase
                    end

                7'd23:  // AUIPC
                    begin
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
                                3'd0: OUT_instr[i].oper.mul_div_oper = MUL;
                                3'd1: OUT_instr[i].oper.mul_div_oper = MULH;
                                3'd2: OUT_instr[i].oper.mul_div_oper = MULHSU;
                                3'd3: OUT_instr[i].oper.mul_div_oper = MULHU;
                                3'd4: OUT_instr[i].oper.mul_div_oper = DIV;
                                3'd5: OUT_instr[i].oper.mul_div_oper = DIVU;
                                3'd6: OUT_instr[i].oper.mul_div_oper = REM;
                                3'd7: OUT_instr[i].oper.mul_div_oper = REMU;
                            endcase
                        end
                        else begin
                            OUT_instr[i].f_unit = ALU;

                            case(IN_instr[i].instr[14:12])
                                3'd0: 
                                    begin
                                        if (IN_instr[i].instr[31:25] == 7'b0)
                                            OUT_instr[i].oper.alu_oper = ADD;
                                        else
                                            OUT_instr[i].oper.alu_oper = SUB;
                                    end
                                3'd1: OUT_instr[i].oper.alu_oper = SLL;
                                3'd2: OUT_instr[i].oper.alu_oper = SLT;
                                3'd3: OUT_instr[i].oper.alu_oper = SLTU;
                                3'd4: OUT_instr[i].oper.alu_oper = XOR;
                                3'd5: 
                                    begin
                                        if (IN_instr[i].instr[31:25] == 7'b0)
                                            OUT_instr[i].oper.alu_oper = SRL;
                                        else
                                            OUT_instr[i].oper.alu_oper = SRA;
                                    end
                                3'd6: OUT_instr[i].oper.alu_oper = OR;
                                3'd7: OUT_instr[i].oper.alu_oper = AND;
                            endcase
                        end  
                    end

                7'd55: // LUI
                    begin
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
                            3'd0: OUT_instr[i].br_type = BEQ;
                            3'd1: OUT_instr[i].br_type = BNE; 
                            3'd4: OUT_instr[i].br_type = BLT;
                            3'd5: OUT_instr[i].br_type = BGE;
                            3'd6: OUT_instr[i].br_type = BLTU;
                            3'd7: OUT_instr[i].br_type = BGEU;
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
                    end

                7'd111: // JAL
                    begin
                        OUT_instr[i].f_unit = ALU;
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
            endcase

        end
    end
endmodule
