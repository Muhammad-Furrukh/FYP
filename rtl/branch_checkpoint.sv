import include_pkg::*;

module branch_checkpoint
(
    input           logic       clk,
    input           logic       rst,
    input           logic       flush,
    input           sqN_t       flush_sqN,
    input 	    logic 	comm_valid  [COMMIT_WIDTH],
    input           sqN_t       commit_sqN  [COMMIT_WIDTH],
    input           sqN_t       instr_sqN   [DECODE_WIDTH],
    input           logic       chk_valid   [DECODE_WIDTH],
    input   var     tag_t       IN_specTag  [DECODE_WIDTH][32],
    input   var     logic       IN_free     [DECODE_WIDTH][2**REG_ADDR_WIDTH],
    output          logic       check_busy,
    output          tag_t       OUT_specTag [32],
    output          logic       OUT_free    [2**REG_ADDR_WIDTH]
);
    localparam int NUM_REG    = 2**REG_ADDR_WIDTH;
    localparam int NUM_CHKPT  = ROB_SIZE / 4;
    localparam int CHKPT_BITS = $clog2(NUM_CHKPT);

    logic  valid   [NUM_CHKPT];
    tag_t  specTag [NUM_CHKPT][32];
    logic  free_bm [NUM_CHKPT][NUM_REG];

    // ── Fullness ─────────────────────────────────────
    // Fix: accumulate in a single always_comb with a running
    // sum — the original per-entry count array was broken
    // (reset to 0 each iteration, out-of-bounds write).
    logic [$clog2(NUM_CHKPT+1)-1:0] used_count;
    always_comb begin
        used_count = '0;
        for (int i = 0; i < NUM_CHKPT; i++)
            if (valid[i]) used_count++;
    end

    // ── Stall: slot already occupied ─────────────────
    logic slot_collision;
    always_comb begin
        slot_collision = 1'b0;
        for (int i = 0; i < DECODE_WIDTH; i++)
            if (chk_valid[i] && valid[instr_sqN[i][CHKPT_BITS-1:0]])
                slot_collision = 1'b1;
    end

    assign check_busy = slot_collision || (used_count == NUM_CHKPT[$clog2(NUM_CHKPT+1)-1:0]);

    // ── Output mux ───────────────────────────────────
    always_comb begin
        // Default: pass through latest rename snapshot
        OUT_specTag = IN_specTag[DECODE_WIDTH-1];
        OUT_free    = IN_free[DECODE_WIDTH-1];

        if (flush && valid[flush_sqN[CHKPT_BITS-1:0]]) begin
            OUT_specTag = specTag[flush_sqN[CHKPT_BITS-1:0]];
            OUT_free    = free_bm[flush_sqN[CHKPT_BITS-1:0]];
        end
    end

    // ── Sequential ───────────────────────────────────
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (int i = 0; i < NUM_CHKPT; i++)
                valid[i] <= 1'b0;
        end else begin
            // Commit: free entries
            for (int i = 0; i < COMMIT_WIDTH; i++) begin
            	if (comm_valid) valid[commit_sqN[i][CHKPT_BITS-1:0]] <= 1'b0;
            end

            if (flush) begin
                // Invalidate flush target and everything after it
                for (int i = 0; i < NUM_CHKPT; i++) begin
                    if (valid[i] &&
                        $signed({1'b0, sqN_t'(i)} -
                                {1'b0, flush_sqN[CHKPT_BITS-1:0]}) >= 0)
                        valid[i] <= 1'b0;
                end
            end else begin
                // Allocate
                for (int i = 0; i < DECODE_WIDTH; i++) begin
                    if (chk_valid[i] && !slot_collision) begin
                        valid  [instr_sqN[i][CHKPT_BITS-1:0]] <= 1'b1;
                        specTag[instr_sqN[i][CHKPT_BITS-1:0]] <= IN_specTag[i];
                        free_bm[instr_sqN[i][CHKPT_BITS-1:0]] <= IN_free[i];
                    end
                end
            end
        end
    end

endmodule
