import include_pkg::*;

 
module priority_encoder #(
    parameter int WIDTH = 8
)(
    input  logic [WIDTH-1:0]           req,
    output logic [$clog2(WIDTH)-1:0]   grant_idx,
    output logic                       grant_valid
);
    always_comb begin
        grant_idx   = '0;
        grant_valid = 1'b0;
        // iterate high to low so lowest index wins  
        for (int i = WIDTH-1; i >= 0; i--) begin
            if (req[i]) begin
                grant_idx   = ($clog2(WIDTH))'(unsigned'(i));
                grant_valid = 1'b1;
            end
        end
    end
endmodule 
