import include_pkg::*;

module register_file(
    input  logic                       clk,
    input  logic                       rst,
    input  logic  [REG_ADDR_WIDTH-1:0] rs1_addr    [ISSUE_WIDTH],
    input  logic  [REG_ADDR_WIDTH-1:0] rs2_addr    [ISSUE_WIDTH],
    input  logic  [REG_ADDR_WIDTH-1:0] rd_addr     [NUM_CDB_LINES],
    input  logic                       rd_write_en [NUM_CDB_LINES],
    input  logic  [XLEN-1:0]           rd_data     [NUM_CDB_LINES],
    output logic  [XLEN-1:0]           rs1_data    [ISSUE_WIDTH],
    output logic  [XLEN-1:0]           rs2_data    [ISSUE_WIDTH]
);

logic [XLEN-1:0] registers [(1<<REG_ADDR_WIDTH)-1:0];
integer i;

// ---------------- WRITE (Sequential) ----------------
always @(posedge clk or posedge rst) begin
    if (rst) begin
        for (i = 0; i < (1<<REG_ADDR_WIDTH); i++)
            registers[i] <= '0;
    end
    else begin
        for (i = 0; i < NUM_CDB_LINES; i++) begin
            if (rd_write_en[i]) begin
                registers[rd_addr[i]] <= rd_data[i];
            end
        end
    end
end

// ---------------- READ (Combinational) ----------------
always @(*) begin
    for (i = 0; i < ISSUE_WIDTH; i++) begin
        rs1_data[i] = registers[rs1_addr[i]];
        rs2_data[i] = registers[rs2_addr[i]];
    end
end

endmodule
