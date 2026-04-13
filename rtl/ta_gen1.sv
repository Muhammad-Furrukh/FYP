import include_pkg::*;

module ta_gen1
(
    input   var      pc_t           pc      [FETCH_WIDTH],
    input   var      logic          valid   [FETCH_WIDTH],
    input   var      logic  [6:0]   opcode  [FETCH_WIDTH],
    input   var      logic  [20:0]  imm     [FETCH_WIDTH],
    input   logic                   IN_busy,
    output  logic                   jump1,
    output           pc_t           jta1   
);

    logic jump_valid;
    logic [$clog2(FETCH_WIDTH) -1:0]    jump_index;
    always_comb begin
        for (int i = 0; i < FETCH_WIDTH; i++) begin
            jump_valid = 1'b0;
            jump_index = '0;

            if (valid[i]) begin
                if ( (!jump_valid) && (opcode[i] == 7'd111) ) begin  // first jal encountered
                    jump_valid = 1'b1;
                    jump_index = i;
                end
            end
        end

        if (jump_valid) begin
            jump1 = 1'b1;
            jta1  = pc[jump_index] + { { 11 {imm[jump_index][20]} }, imm[jump_index] };
        end
        else begin
            jump1 = 1'b0;
            jta1  = XLEN'(0);
        end
    end

endmodule
