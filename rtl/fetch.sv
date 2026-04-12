import include_pkg::*;
module fetch
(
    input       logic                     clk,
    input       logic                     rst,
    input       logic                     IN_busy,
    input       logic                     jump2,
    input       logic                     flush,
    input       pc_t                      pc,
    input   var prefetch_instr_t          prefetch_instr  [FETCH_WIDTH],
    output      logic                     OUT_busy,
    output      logic                     jump1,
    output      logic               [1:0] consumed,
    output      pc_t                      jta1,
    output  var fetch_instr_t             fetch_instr     [FETCH_WIDTH]
);

    logic                           q;
    logic                           invalidate;
    aligner_instr_t                 aligner_out [FETCH_WIDTH];
    pc_t                            pc_array    [FETCH_WIDTH];
    logic                           valid       [FETCH_WIDTH];
    logic           [6:0]           opcode      [FETCH_WIDTH];
    logic           [20:0]          imm         [FETCH_WIDTH];
    logic           [XLEN -1:0]     iw;


    IA instr_aligner
    (
        .IN_instr(prefetch_instr),
        .pc(pc),
        .invalidate(invalidate),
        .OUT_instr(aligner_out),
        .consumed(consumed)
    );

    JTA1 ta_gen1
    (
        .pc(pc_array),
        .valid(valid),
        .opcode(opcode),
        .imm(imm),
        .IN_busy(OUT_busy),
        .jump1(jump1),
        .jta1(jta1)
    );

    FB fetch_buffer
    (
        .clk(clk),
        .rst(rst),
        .IN_instr(aligner_out),
        .IN_busy(IN_busy),
        .flush(flush),
        .OUT_busy(OUT_busy),
        .OUT_instr(fetch_instr)
    );

    always_comb begin
        for (int i = 0; i < FETCH_WIDTH; i++) begin
            iw          = aligner_out[i].instr;
            pc_array[i] = aligner_out[i].pc;
            valid[i]    = aligner_out[i].valid;
            opcode[i]   = iw[6:0];
            imm[i]      = {iw[31], iw[19:12], iw[20], iw[30:21], 1'b0};
        end

        invalidate = q | flush;
    end

    always_ff @(posedge clk) begin
        if (rst)
            q <= 1'b0;
        else
            q <= jump1 | jump2;
    end

endmodule
