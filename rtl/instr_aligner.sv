import include_pkg::*;

module instr_aligner
(
    input  pc_t                              in_pc,
    output logic [$clog2(FETCH_WIDTH+1)-1:0] consumed,
    output pc_t                              instr_pc    [FETCH_WIDTH],
    output logic                             instr_valid [FETCH_WIDTH]
);

    localparam int unsigned INSN_BYTES       = 4;
    localparam int unsigned BLOCK_SIZE_BYTES = FETCH_WIDTH * INSN_BYTES;
    localparam int unsigned ALIGN_BITS       = $clog2(BLOCK_SIZE_BYTES);

    // Check if the input PC is aligned to the fetch block
    logic                             is_aligned; 
    // Compute number of valid instrs
    logic [$clog2(FETCH_WIDTH+1)-1:0] consumed_sum [FETCH_WIDTH+1];

    // Calculate the base aligned PC by clearing the lower alignment bits
    pc_t aligned_base_pc;
    assign aligned_base_pc = {in_pc[$bits(pc_t)-1:ALIGN_BITS], {ALIGN_BITS{1'b0}}};

    always_comb begin
        consumed_sum = '{default: '0};
        // The input PC is aligned if its lower address bits match zero for the whole fetch block
        is_aligned = (in_pc[ALIGN_BITS-1:0] == '0);

        for (int i = 0; i < FETCH_WIDTH; i++) begin
            // Calculate the PC address for each instruction slot in the packet
            instr_pc[i] = aligned_base_pc + (i * INSN_BYTES);

            // Set the valid flag:
            // If the input PC is unaligned, only the instructions at or above the `in_pc` address are valid for this fetch cycle.
            if (instr_pc[i] >= in_pc) begin
                instr_valid[i]    = 1'b1;
                consumed_sum[i+1] = consumed_sum[i] + 1;
            end 
            else begin
                instr_valid[i]    = 1'b0;
                consumed_sum[i+1] = consumed_sum[i];
            end
        end

        consumed = consumed_sum[FETCH_WIDTH];
    end

endmodule

