import include_pkg::*;

module ROB
(
    input logic             clk,
    input logic             rst,
    input rename_rob_t      rename_rob [RENAME_WIDTH],
    input logic             flush,
    input sqN_t             flush_sqN,
    input logic             CDB_valid  [NUM_CDB_LINES],
    input sqN_t             CDB_sqN    [NUM_CDB_LINES],
    output logic            OUT_busy,
    output commit_packet_t  OUT_commit [COMMIT_WIDTH]
);

endmodule
