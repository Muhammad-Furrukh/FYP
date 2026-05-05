import include_pkg::*;
module decode
(
    input                           clk,
    input                           rst,
    input                           IN_busy,
    input                           flush,
    input   var     fetch_instr_t   IN_instr     [FETCH_WIDTH],
    output          decode_instr_t  OUT_instr    [DECODE_WIDTH]
);

    decode_instr_t  decoder_out [DECODE_WIDTH];
    decode_instr_t  decode_out  [DECODE_WIDTH];
    sqN_t           next_sqN;
    logic [FETCH_WIDTH:0] valid_count;

    decoder Decoder
    (
        .IN_instr(IN_instr),
        .OUT_instr(decoder_out)
    );

    always_comb begin
        // Count valid instructions based on decoder output validity
        valid_count = 0;
        for (int i = 0; i < FETCH_WIDTH; i++) begin
            if (decoder_out[i].valid)
                valid_count = valid_count + 1'b1;
        end

        // Assign sqN to decode_out based on decoder_out validity
        for (int i = 0; i < DECODE_WIDTH; i++) begin
            decode_out[i] = decoder_out[i];
            if (decoder_out[i].valid)
                decode_out[i].sqN = next_sqN + i;
            else
                decode_out[i].sqN = '0;
        end
    end

    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            next_sqN <= '0;
        else
            next_sqN <= next_sqN + valid_count;
    end

    always_ff @(posedge clk) begin
        for (int i = 0; i < DECODE_WIDTH; i++) begin
            if (rst)
                OUT_instr[i] <= '{valid: 1'b0,
                                  sqN: '0,
                                  pc: '0,
                                  f_unit: NO_UNIT,
                                  oper: COPY,
                                  rs1: '0,
                                  rs2: '0,
                                  rd: '0,
                                  imm: '0,
                                  is_imm: 1'b0,
                                  jump_type: NOT_JUMP,
                                  br_type: NOT_BRANCH,
                                  u_type: NOT_U};

            else if (flush) begin
                OUT_instr[i] <= '{valid: 1'b0,
                                  sqN: '0,
                                  pc: '0,
                                  f_unit: NO_UNIT,
                                  oper: COPY,
                                  rs1: '0,
                                  rs2: '0,
                                  rd: '0,
                                  imm: '0,
                                  is_imm: 1'b0,
                                  jump_type: NOT_JUMP,
                                  br_type: NOT_BRANCH,
                                  u_type: NOT_U};
            end

            else
                OUT_instr[i] <= decode_out[i];
        end
    end

endmodule
