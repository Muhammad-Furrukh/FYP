import include_pkg::*;

// ════════════════════════════════════════════════════
// 2-FF synchronizer — standard metastability guard
// ════════════════════════════════════════════════════
module sync_2ff #(parameter W = 1) (
    input  logic         clk_dst,
    input  logic         rst_dst,
    input  logic [W-1:0] d,
    output logic [W-1:0] q
);
    (* ASYNC_REG = "TRUE" *) logic [W-1:0] ff1, ff2;

    always_ff @(posedge clk_dst or posedge rst_dst) begin
        if (rst_dst) begin ff1 <= '0; ff2 <= '0; end
        else         begin ff1 <= d;  ff2 <= ff1; end
    end
    assign q = ff2;
endmodule

