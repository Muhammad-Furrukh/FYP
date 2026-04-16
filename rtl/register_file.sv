import include_pkg::*;

module register_file(
    input logic                       clk,
    input logic                       rst_n,
    input logic  [REG_ADDR_WIDTH-1:0] rs1_addr    [ISSUE_WIDTH],
    input logic  [REG_ADDR_WIDTH-1:0] rs2_addr    [ISSUE_WIDTH],
    input logic  [REG_ADDR_WIDTH-1:0] rd_addr     [NUM_CDB_LINES], // CDB_tag
    input logic                       rd_write_en [NUM_CDB_LINES], // CDB_valid
    input logic  [XLEN-1:0]           rd_data     [NUM_CDB_LINES], // CDB_result
    output logic [XLEN-1:0]           rs1_data    [ISSUE_WIDTH],
    output logic [XLEN-1:0]           rs2_data    [ISSUE_WIDTH]
);

endmodule
