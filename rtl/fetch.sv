import include_pkg::*;
module fetch
(
    input       logic                     clk,
    input       logic                     rst,
    input       logic                     IN_busy,
    input       logic                     flush,
    input       pc_t                      instr_pc    [FETCH_WIDTH],
    input       logic                     instr_valid [FETCH_WIDTH],
    input       prefetch_instr_t          IN_instr    [FETCH_WIDTH],
    output      logic                     OUT_busy,
    output      logic                     jump1,
    output      pc_t                      jta1,
    output      fetch_instr_t             OUT_instr   [FETCH_WIDTH]
);

    logic           [6:0]           opcode      [FETCH_WIDTH];
    logic           [20:0]          imm         [FETCH_WIDTH];
    logic           [XLEN -1:0]     iw          [FETCH_WIDTH];

    always_comb begin
        for (int i = 0; i < FETCH_WIDTH; i++) begin
            iw[i]     = IN_instr[i];
            opcode[i] = iw[i][6:0];
            imm[i]    = {iw[i][31], iw[i][19:12], iw[i][20], 
                         iw[i][30:21], 1'b0};
        end
    end

    pc_t jal_instr_pc;
    ta_gen1 JTA1
    (
        .IN_pc(instr_pc),
        .valid(instr_valid),
        .opcode(opcode),
        .imm(imm),
        .IN_busy(OUT_busy),
        .jump1(jump1),
        .OUT_pc(jal_instr_pc),
        .jta1(jta1)
    );

    logic delayed_jump1;
    pc_t delayed_jal_pc;
    fetch_buffer FB
    (
        .clk(clk),
        .rst(rst),
        .IN_instr(IN_instr),
        .IN_valid(instr_valid),
        .IN_pc(instr_pc),
        .IN_busy(IN_busy),
        .flush(flush),
        .jump1(delayed_jump1),
        .jal_pc(delayed_jal_pc),
        .OUT_busy(OUT_busy),
        .OUT_instr(OUT_instr)
    );

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            delayed_jump1 <= 1'b0;
            delayed_jal_pc <= '0;
        end
        else begin 
            delayed_jump1 <= jump1;
            delayed_jal_pc <= jal_instr_pc;
        end
    end

endmodule
