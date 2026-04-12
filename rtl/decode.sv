import include_pkg::*;
module decode
(
    input                           clk,
    input                           rst,
    input                           IN_busy,
    input                           flush,
    input   var     fetch_instr_t   fetch_instr     [FETCH_WIDTH],
    output          decode_instr_t  decode_instr    [DECODE_WIDTH]
);

    decode_instr_t  decoder_out [DECODE_WIDTH];
    Decoder Decoder
    (
        .fetch_instr(fetch_instr),
        .decode_instr(decoder_out)
    );

    always_ff @(posedge clk) begin
        for (int i = 0; i < DECODE_WIDTH; i++) begin
            if (rst)
                decode_instr[i] <= '{default: '0};

            else if (flush) begin
                decode_instr[i] <= '{
                    valid: 1'b0
                };
            end

            else
                decode_instr[i] <= decoder_out[i];
        end
    end

endmodule
