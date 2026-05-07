import include_pkg::*;

module flush_controller #(
    parameter int NUM_PORTS = NUM_ALU_FU    
)(
    input  logic         clk,
    input  logic         rst,
    input  logic         br_taken  [NUM_PORTS],
    input  sqN_t         sqN       [NUM_PORTS],
    input  jump_type_t   jump_type [NUM_PORTS],
    output logic         flush,
    output sqN_t         flush_sqN
);

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            flush     <= 1'b0;
            flush_sqN <= '0;
        end else begin
            logic      valid    [NUM_PORTS];
            sqN_t      best_sqN;
            logic      any_valid;
            sqN_t      diff;        

            // compute valid per port
            for (int i = 0; i < NUM_PORTS; i++)
                valid[i] = br_taken[i] || (jump_type[i] == 2'b10);

            // find oldest (smallest) sqN among ALL valid ports
            any_valid = 1'b0;
            best_sqN  = '0;

            for (int i = 0; i < NUM_PORTS; i++) begin
                if (valid[i]) begin
                    if (!any_valid) begin
                        best_sqN  = sqN[i];
                        any_valid = 1'b1;
                    end else begin
                        diff = sqN[i] - best_sqN;
                        if (diff[$bits(sqN_t)-1])    // MSB=1 : sqN[i] is OLDER than best_sqN
                            best_sqN = sqN[i];       // replace with older one
                    end
                end else begin
                    diff = '0;   
                end
            end

            flush     <= any_valid;
            flush_sqN <= best_sqN;
        end
    end
endmodule
