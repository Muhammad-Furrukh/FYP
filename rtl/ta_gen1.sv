import include_pkg::*;

module ta_gen1
(
    input   pc_t              IN_pc      [FETCH_WIDTH],
    input   logic             valid      [FETCH_WIDTH],
    input   prefetch_instr_t  IN_instr   [FETCH_WIDTH],
    output  logic             jump1,
    output  pc_t              jta1,
    output  fetch_instr_t     OUT_instr  [FETCH_WIDTH]
);

    logic [6:0]  opcode [FETCH_WIDTH];
    logic [20:0] imm    [FETCH_WIDTH];

    // Extract immediate and opcodes
    always_comb begin
        for (int i = 0; i < FETCH_WIDTH; i++) begin
            opcode[i] = IN_instr[i][6:0];
            imm[i]    = {IN_instr[i][31], IN_instr[i][19:12], IN_instr[i][20], 
                         IN_instr[i][30:21], 1'b0};
        end
    end

    logic                               jump_valid;
    logic [$clog2(FETCH_WIDTH) -1:0]    jump_index;
    // Determination of jump and target address generation
    always_comb begin
        jump_valid = 1'b0;
        jump_index = '0;
        
        for (int i = 0; i < FETCH_WIDTH; i++) begin
            if (valid[i]) begin
                if ( (!jump_valid) && (opcode[i] == 7'd111) ) begin  // first jal encountered
                    jump_valid = 1'b1;
                    jump_index = i;
                end
            end
        end

        if (jump_valid) begin
            jump1  = 1'b1;
            jta1   = IN_pc[jump_index] + { { 11 {imm[jump_index][20]} }, imm[jump_index] };
        end
        else begin
            jump1 = 1'b0;
            jta1  = XLEN'(0);
        end

        // Outputing instr
        for (int i = 0; i < FETCH_WIDTH; i++) begin
            // Invalidate instrs following jump instr in packet
            if (jump1 && (i > jump_index))
                OUT_instr[i].valid = 1'b0;
            else
                OUT_instr[i].valid = valid[i];
            
            OUT_instr[i].pc    = IN_pc[i];
            OUT_instr[i].instr = IN_instr[i];
        end
    end

endmodule
