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
    decoder Decoder
    (
        .IN_instr(IN_instr),
        .OUT_instr(decoder_out)
    );

    always_ff @(posedge clk) begin
        for (int i = 0; i < DECODE_WIDTH; i++) begin
            if (rst)
                OUT_instr[i] <= '{default: '0};

            else if (flush) begin
                OUT_instr[i] <= '{
                    valid: 1'b0
                };
            end

            else
                OUT_instr[i] <= decoder_out[i];
        end
    end

endmodule
