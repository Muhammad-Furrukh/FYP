import include_pkg::*;
module fetch
(
    input       logic                     clk,
    input       logic                     rst,
    input       logic                     IN_busy,
    input       logic                     jump2,
    input       logic                     flush,
    input       sqN_t                     flush_sqN,
    input       pc_t                      pc,
    input   var prefetch_instr_t          IN_instr  [FETCH_WIDTH],
    output      logic                     OUT_busy,
    output      logic                     jump1,
    output      logic               [1:0] consumed,
    output      pc_t                      jta1,
    output      fetch_instr_t             OUT_instr     [FETCH_WIDTH]
);

    logic                           q;
    logic                           invalidate;
    aligner_instr_t                 aligner_out [FETCH_WIDTH];
    pc_t                            pc_array    [FETCH_WIDTH];
    logic                           valid       [FETCH_WIDTH];
    logic           [6:0]           opcode      [FETCH_WIDTH];
    logic           [20:0]          imm         [FETCH_WIDTH];
    logic           [XLEN -1:0]     iw;


    instr_aligner IA
    (
        .IN_instr(IN_instr),
        .pc(pc),
        .invalidate(invalidate),
        .OUT_instr(aligner_out),
        .consumed(consumed)
    );

    ta_gen1 JTA1
    (
        .pc(pc_array),
        .valid(valid),
        .opcode(opcode),
        .imm(imm),
        .IN_busy(OUT_busy),
        .jump1(jump1),
        .jta1(jta1)
    );

    fetch_buffer FB
    (
        .clk(clk),
        .rst(rst),
        .IN_instr(aligner_out),
        .IN_busy(IN_busy),
        .flush(flush),
        .flush_sqN(flush_sqN),
        .OUT_busy(OUT_busy),
        .OUT_instr(OUT_instr)
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

    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            q <= 1'b0;
        else
            q <= jump1 | jump2;
    end

endmodule
