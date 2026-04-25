import include_pkg::*;

module branch_comparator (
    input  logic [XLEN-1:0]  rs1_data,
    input  logic [XLEN-1:0]  rs2_data,
    input  br_type_t          br_type,
    output logic              br_taken
);
    always_comb begin
        case (br_type)
            BEQ    : br_taken =  (rs1_data == rs2_data);
            BNE    : br_taken =  (rs1_data != rs2_data);
            BLT    : br_taken = ($signed(rs1_data) <  $signed(rs2_data));
            BGE    : br_taken = ($signed(rs1_data) >= $signed(rs2_data));
            BLTU   : br_taken =  (rs1_data <  rs2_data);
            BGEU   : br_taken =  (rs1_data >= rs2_data);
            default: br_taken = 1'b0;
        endcase
    end
endmodule
