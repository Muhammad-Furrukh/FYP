import include_pkg::*;

module flush_controller (
    input  logic         br_taken[2],
    input  sqN_t         sqN[2],
    input  jump_type_t   jump_type[2],

    output logic         flush,
    output sqN_t         flush_sqN
);

endmodule
