import include_pkg::*;
module prefetch
(
    input       logic                                           clk,
    input       logic                                           rst,
    input       logic                                           IN_busy,
    input       pc_t                                            jta1,
    input       pc_t                                            jta2,
    input       logic                                           jump1,
    input       logic                                           jump2,
    output      prefetch_instr_t                                OUT_instr   [FETCH_WIDTH],
    output      pc_t                                            OUT_pc      [FETCH_WIDTH],
    output      logic                                           OUT_valid   [FETCH_WIDTH]
);

    pc_t                                     fetch_base;
    pc_t                                     next_pc;
    pc_t                                     current_pc;
    pc_t                                     instr_pc        [FETCH_WIDTH];
    logic                                    instr_valid     [FETCH_WIDTH];
    logic            [$clog2(FETCH_WIDTH):0] instr_consumed;

    PC PC
    (
        .clk(clk),
        .rst(rst),
        .IN_pc(next_pc),
        .OUT_pc(current_pc),
        .wr_en(!IN_busy)
    );

    IMEM IMEM
    (
        .clk(clk),
        .rst(rst),
        .IN_busy(IN_busy),
        .addr(fetch_base[IMEM_ADDR_WIDTH -1:0]),
        .data(OUT_instr)
    );

    instr_aligner aligner
    (
        .in_pc(current_pc),
        .instr_pc(instr_pc),
        .instr_valid(instr_valid),
        .consumed(instr_consumed)
    );

    always_comb begin
        case({jump2, jump1})
            2'b00:   next_pc = (instr_consumed << 2) + current_pc; // No jump, increment PC by 4 for each consumed instruction
            2'b01:   next_pc = jta1; // Target address for jal
            2'b10:   next_pc = jta2; // Target address for branch or jalr
            default: next_pc = (instr_consumed << 2) + current_pc;
        endcase

        fetch_base = current_pc & ( ~( XLEN'(7) ) ); // Align to 8-byte boundary
    end

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            OUT_pc    <= '{default: '0};
            OUT_valid <= '{default: '0};
        end

        else if (IN_busy) begin
            OUT_pc    <= OUT_pc;
            OUT_valid <= OUT_valid;
        end

        else begin
            OUT_pc    <= instr_pc;
            OUT_valid <= instr_valid;
        end
    end

endmodule
