import include_pkg::*;

module branch_checkpoint
(
    input           logic       clk,
    input           logic       rst,
    input           logic       flush,
    input           sqN_t       flush_sqN,
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
    localparam int NUM_CHKPT  = ROB_SIZE/4;
    localparam int CHKPT_BITS = $clog2(NUM_CHKPT);
    
    logic            	valid	    [NUM_CHKPT];
    tag_t      		specTag     [NUM_CHKPT][32];
    logic    		free 	    [NUM_CHKPT][NUM_REG];

    // ── Fullness: count valid entries ───────────────────────
    logic [CHKPT_BITS:0] count [NUM_CHKPT];
    
    always_comb begin
        for (int i = 0; i < NUM_CHKPT; i++) begin 	
            count[i] = '0; if (valid[i]) count[i+1] = count[i] + 1;
        end
    end
	
    logic [DECODE_WIDTH-1:0] stall;	
    always_comb begin 
        stall = '0;
    	for (int i = 0; i < DECODE_WIDTH; i++)
    	    stall[i+1] = stall[i] || valid[instr_sqN[i][CHKPT_BITS-1:0]]; 	
    end
    
    assign check_busy = stall[DECODE_WIDTH-1] || count[NUM_CHKPT][CHKPT_BITS];

    // ── Output mux ──────────────────────────────────────────
    always_comb begin
        if (flush && valid[flush_sqN[CHKPT_BITS-1:0]]) begin
            OUT_specTag = specTag[flush_sqN[CHKPT_BITS-1:0]];
            OUT_free    = free[flush_sqN[CHKPT_BITS-1:0]];
        end else begin
            OUT_specTag = IN_specTag[DECODE_WIDTH-1];
            OUT_free    = IN_free   [DECODE_WIDTH-1];
        end
    end

    // ── Sequential ──────────────────────────────────────────
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (int i = 0; i < NUM_CHKPT; i++)
                valid[i] <= 1'b0;

        end else begin

            // ── Commit: free the committed entry directly ────
            for (int i = 0; i < COMMIT_WIDTH; i++)
                valid[commit_sqN[i][CHKPT_BITS-1:0]] <= 1'b0;

            // ── Flush: restore and immediately free matched entry,
            //           invalidate everything strictly after it.
            if (flush) begin
                for (int i = 0; i < NUM_CHKPT; i++)
                    if (valid[i] &&
			$signed({1'b0, sqN_t'(i)} - {1'b0, flush_sqN}) >= 0) 
                        valid[i] <= 1'b0;  // >= catches the match itself too


            // ── Allocate ─────────────────────────────────────
            end else begin
                for (int i = 0; i < DECODE_WIDTH; i++) begin
                    if (chk_valid[i] && !stall[i]) begin
                        valid[instr_sqN[i][CHKPT_BITS-1:0]]   <= 1'b1;
                        specTag[instr_sqN[i][CHKPT_BITS-1:0]] <= IN_specTag[i];
                        free[instr_sqN[i][CHKPT_BITS-1:0]]    <= IN_free[i];
                    end
                end
            end
        end
    end

endmodule
