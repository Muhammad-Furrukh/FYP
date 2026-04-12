import include_pkg::*;
module decoder
(
    input  var  fetch_instr_t     fetch_instr     [FETCH_WIDTH],
    output      decode_instr_t    decode_instr    [DECODE_WIDTH]
);

    logic [6:0]  opcode     [FETCH_WIDTH];
    logic [31:0] immediate  [FETCH_WIDTH];

    IG immediate_gen
    (
        .instr(fetch_instr), 
        .immediate(immediate)
    );

    always_comb begin
        for (int i = 0; i < FETCH_WIDTH; i++) begin
            decode_instr[i].valid = fetch_instr[i].valid;
            decode_instr[i].sqN = fetch_instr[i].sqN;
            decode_instr[i].pc  = fetch_instr[i].pc;

            opcode[i] = fetch_instr[i].instr[6:0];

            case(opcode[i])
                7'd3: // Load instrs
                    begin
                        decode_instr[i].f_unit      = LSU;
                        decode_instr[i].rs1         = fetch_instr[i].instr[19:15];
                        decode_instr[i].rs2         = 5'b0;
                        decode_instr[i].rd          = fetch_instr[i].instr[11:7];
                        decode_instr[i].imm         = immediate[i];
                        decode_instr[i].is_imm      = 1'b1;
                        decode_instr[i].jump_type   = NOT_JUMP;
                        decode_instr[i].br_type     = NOT_BRANCH;
                        decode_instr[i].u_type      = NOT_U;

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
                        decode_instr[i].f_unit      = ALU;
                        decode_instr[i].rs1         = fetch_instr[i].instr[19:15];
                        decode_instr[i].rs2         = 5'b0;
                        decode_instr[i].rd          = fetch_instr[i].instr[11:7];
                        decode_instr[i].imm         = immediate[i];
                        decode_instr[i].is_imm      = 1'b1;
                        decode_instr[i].jump_type   = NOT_JUMP;
                        decode_instr[i].br_type     = NOT_BRANCH;
                        decode_instr[i].u_type      = NOT_U;

                        case(fetch_instr[i].instr[14:12])
                            3'd0: decode_instr[i].oper.alu_oper = ADD;
                            3'd1: decode_instr[i].oper.alu_oper = SLL;
                            3'd2: decode_instr[i].oper.alu_oper = SLT;
                            3'd3: decode_instr[i].oper.alu_oper = SLTU;
                            3'd4: decode_instr[i].oper.alu_oper = XOR;
                            3'd5: 
                                begin
                                    if (fetch_instr[i].instr[31:25] == 7'b0)
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
                        decode_instr[i].f_unit      = LSU;
                        decode_instr[i].rs1         = fetch_instr[i].instr[19:15];
                        decode_instr[i].rs2         = fetch_instr[i].instr[24:20];
                        decode_instr[i].rd          = 5'b0;
                        decode_instr[i].imm         = immediate[i];
                        decode_instr[i].is_imm      = 1'b1;
                        decode_instr[i].jump_type   = NOT_JUMP;
                        decode_instr[i].br_type     = NOT_BRANCH;
                        decode_instr[i].u_type      = NOT_U;

                        case(fetch_instr[i].instr[14:12])
                            3'd0: decode_instr[i].oper.lsu_oper = STORE_BYTE;
                            3'd1: decode_instr[i].oper.lsu_oper = STORE_HALF;
                            3'd2: decode_instr[i].oper.lsu_oper = STORE_WORD;
                        endcase
                    end

                7'd23:  // AUIPC
                    begin
                        decode_instr[i].f_unit          = ALU;
                        decode_instr[i].rs1             = 5'b0;
                        decode_instr[i].rs2             = 5'b0;
                        decode_instr[i].rd              = fetch_instr[i].instr[11:7];
                        decode_instr[i].imm             = immediate[i];
                        decode_instr[i].is_imm          = 1'b1;
                        decode_instr[i].jump_type       = NOT_JUMP;
                        decode_instr[i].br_type         = NOT_BRANCH;
                        decode_instr[i].u_type          = AUIPC;
                        decode_instr[i].oper.alu_oper   = ADD;
                    end

                7'd51:  // ALU R and MUL/DIV instructions
                    begin
                        decode_instr[i].rs1         = fetch_instr[i].instr[19:15];
                        decode_instr[i].rs2         = fetch_instr[i].instr[24:20];
                        decode_instr[i].rd          = fetch_instr[i].instr[11:7];
                        decode_instr[i].imm         = 32'b0;
                        decode_instr[i].is_imm      = 1'b0;
                        decode_instr[i].jump_type   = NOT_JUMP;
                        decode_instr[i].br_type     = NOT_BRANCH;
                        decode_instr[i].u_type      = NOT_U;

                        if (fetch_instr[i].instr[31:25] == 7'b1) begin
                            decode_instr[i].f_unit = MUL_DIV;

                            case(fetch_instr[i].instr[14:12])
                                3'd0: decode_instr[i].oper.mul_div_oper = MUL;
                                3'd1: decode_instr[i].oper.mul_div_oper = MULH;
                                3'd2: decode_instr[i].oper.mul_div_oper = MULHSU;
                                3'd3: decode_instr[i].oper.mul_div_oper = MULHU;
                                3'd4: decode_instr[i].oper.mul_div_oper = DIV;
                                3'd5: decode_instr[i].oper.mul_div_oper = DIVU;
                                3'd6: decode_instr[i].oper.mul_div_oper = REM;
                                3'd7: decode_instr[i].oper.mul_div_oper = REMU;
                            endcase
                        end
                        else begin
                            decode_instr[i].f_unit = ALU;

                            case(fetch_instr[i].instr[14:12])
                                3'd0: 
                                    begin
                                        if (fetch_instr[i].instr[31:25] == 7'b0)
                                            decode_instr[i].oper.alu_oper = ADD;
                                        else
                                            decode_instr[i].oper.alu_oper = SUB;
                                    end
                                3'd1: decode_instr[i].oper.alu_oper = SLL;
                                3'd2: decode_instr[i].oper.alu_oper = SLT;
                                3'd3: decode_instr[i].oper.alu_oper = SLTU;
                                3'd4: decode_instr[i].oper.alu_oper = XOR;
                                3'd5: 
                                    begin
                                        if (fetch_instr[i].instr[31:25] == 7'b0)
                                            decode_instr[i].oper.alu_oper = SRL;
                                        else
                                            decode_instr[i].oper.alu_oper = SRA;
                                    end
                                3'd6: decode_instr[i].oper.alu_oper = OR;
                                3'd7: decode_instr[i].oper.alu_oper = AND;
                            endcase
                        end  
                    end

                7'd55: // LUI
                    begin
                        decode_instr[i].f_unit          = ALU;
                        decode_instr[i].rs1             = 5'b0;
                        decode_instr[i].rs2             = 5'b0;
                        decode_instr[i].rd              = fetch_instr[i].instr[11:7];
                        decode_instr[i].imm             = immediate[i];
                        decode_instr[i].is_imm          = 1'b1;
                        decode_instr[i].jump_type       = NOT_JUMP;
                        decode_instr[i].br_type         = NOT_BRANCH;
                        decode_instr[i].u_type          = LUI;
                        decode_instr[i].oper.alu_oper   = COPY;
                    end

                7'd99:  // Branch instructions
                    begin
                        decode_instr[i].f_unit          = ALU;
                        decode_instr[i].rs1             = fetch_instr[i].instr[19:15];
                        decode_instr[i].rs2             = fetch_instr[i].instr[24:20];
                        decode_instr[i].rd              = 5'b0;
                        decode_instr[i].imm             = immediate[i];
                        decode_instr[i].is_imm          = 1'b1;
                        decode_instr[i].jump_type       = NOT_JUMP;
                        decode_instr[i].oper.alu_oper   = COPY;
                        decode_instr[i].u_type          = NOT_U;

                        case(fetch_instr[i].instr[14:12])
                            3'd0: decode_instr[i].br_type = BEQ;
                            3'd1: decode_instr[i].br_type = BNE; 
                            3'd4: decode_instr[i].br_type = BLT;
                            3'd5: decode_instr[i].br_type = BGE;
                            3'd6: decode_instr[i].br_type = BLTU;
                            3'd7: decode_instr[i].br_type = BGEU;
                        endcase
                    end

                7'd103: // JALR
                    begin
                        decode_instr[i].f_unit          = ALU;
                        decode_instr[i].rs1             = fetch_instr[i].instr[19:15];
                        decode_instr[i].rs2             = 5'b0;
                        decode_instr[i].rd              = fetch_instr[i].instr[11:7];
                        decode_instr[i].imm             = immediate[i];
                        decode_instr[i].is_imm          = 1'b1;
                        decode_instr[i].jump_type       = JALR;
                        decode_instr[i].br_type         = NOT_BRANCH;
                        decode_instr[i].u_type          = NOT_U;
                        decode_instr[i].oper.alu_oper   = ADD;
                    end

                7'd111: // JAL
                    begin
                        decode_instr[i].f_unit = ALU;
                        decode_instr[i].rs1             = 5'b0;
                        decode_instr[i].rs2             = 5'b0;
                        decode_instr[i].rd              = fetch_instr[i].instr[11:7];
                        decode_instr[i].imm             = immediate[i];
                        decode_instr[i].is_imm          = 1'b1;
                        decode_instr[i].jump_type       = JAL;
                        decode_instr[i].br_type         = NOT_BRANCH;
                        decode_instr[i].u_type          = NOT_U;
                        decode_instr[i].oper.alu_oper   = ADD;
                    end
            endcase

        end
    end
endmodule
