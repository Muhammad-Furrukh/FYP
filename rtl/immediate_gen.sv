import include_pkg::*;
module immediate_gen
(
    input   var fetch_instr_t fetch_instr [FETCH_WIDTH],
    output  logic [31:0]  immediate [FETCH_WIDTH]
);

    logic [2:0]     funct3;
    logic [6:0]     opcode;
    logic [11:0]    imm12;
    logic [12:0]    imm13;
    logic [20:0]    imm21;
    logic [31:0]    iw;

    always_comb begin
        for (int i = 0; i < FETCH_WIDTH; i++) begin
            if (!fetch_instr[i].valid) begin
                immediate[i] = 32'b0;
            end
            else begin
                iw = fetch_instr[i].instr;
                opcode = iw[6:0];

                case (opcode)
                    7'd3,   // I-type: loads
                    7'd103: // I-type: JALR
                        immediate[i] = {{20{iw[31]}}, iw[31:20]};

                    7'd19: // I-type: ALU immediate (ADDI, SLLI, SRLI, SRAI, ...)
                        begin
                            funct3 = iw[14:12];
                            // For shift-immediates (SLLI, SRLI, SRAI) use the shamt field (rs2/imm[4:0])
                            if (funct3 == 3'd1 || funct3 == 3'd5)
                                immediate[i] = {27'b0, iw[24:20]};
                            else
                                immediate[i] = {{20{iw[31]}}, iw[31:20]};
                        end

                    7'd35: // S-type: stores
                        begin
                            imm12 = {iw[31:25], iw[11:7]};
                            immediate[i] = {{20{imm12[11]}}, imm12};
                        end

                    7'd99: // B-type: branches
                        begin
                            imm13 = {iw[31], iw[7], iw[30:25], iw[11:8], 1'b0};
                            immediate[i] = {{19{imm13[12]}}, imm13};
                        end

                    7'd23, // AUIPC (U-type)
                    7'd55: // LUI   (U-type)
                        immediate[i] = {iw[31:12], 12'b0};

                    7'd111: // J-type: JAL
                        begin
                            imm21 = {iw[31], iw[19:12], iw[20], iw[30:21], 1'b0};
                            immediate[i] = {{11{imm21[20]}}, imm21};
                        end

                    default:
                        immediate[i] = 32'b0;
                endcase
            end
        end
    end

endmodule