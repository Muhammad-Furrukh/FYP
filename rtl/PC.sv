import include_pkg::*;

module PC
(
    input  logic    clk,
    input  logic    rst,
    input  pc_t     IN_pc,
    input  logic    wr_en,
    output pc_t     OUT_pc
);

    pc_t pc_reg;

    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            pc_reg <= '0;
        else if (wr_en)
            pc_reg <= IN_pc;
    end

    assign OUT_pc = pc_reg;

endmodule
