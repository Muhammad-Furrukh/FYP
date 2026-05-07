import include_pkg::*;

module MUL_DIV (
    input  logic                  clk,
    input  logic                  rst,
    input  logic                  flush,
    input  sqN_t                  flush_sqN,
    input  issue_instr_t          IN_instr,
    output logic                  OUT_busy,
    output CDB_line_t             OUT_cdb
);

    // ════════════════════════════════════════════════════
    // 0. Types and Parameters
    // ════════════════════════════════════════════════════

    typedef enum logic [1:0] {
        DIV_IDLE,
        DIV_EXEC,
        DIV_COMPLETE
    } div_state_t;

    typedef struct packed {
        logic          valid;
        sqN_t          sqN;
        tag_t          tag;
        mul_div_oper_t oper;
        logic [15:0]   a_lo, a_hi;
        logic [15:0]   b_lo, b_hi;
        logic [31:0]   pp_ll;
        logic [31:0]   pp_lh;
        logic [31:0]   pp_hl;
        logic [31:0]   pp_hh;
        logic          neg_result;
    } mul_pipe_t;

    // ════════════════════════════════════════════════════
    // 1. State Declarations
    // ════════════════════════════════════════════════════

    // ── MUL Pipeline ───────────────────────────────────
    mul_pipe_t    mul_pipe [3];
    logic         mul_stall;
    
    // ── MUL CDB Output Register ───────────────────────
    logic         mul_cdb_valid;
    sqN_t         mul_cdb_sqN;
    tag_t         mul_cdb_tag;
    logic [31:0]  mul_cdb_result;
    
    // ── DIV State ────────────────────────────────────
    div_state_t   div_state;
    issue_instr_t div_instr_r;
    logic [63:0]  div_partial;
    logic [31:0]  div_divisor;
    logic [5:0]   div_count;
    logic         div_quot_sign;
    logic         div_rem_sign;
    logic         div_by_zero;
    
    // ── DIV CDB Output Register ─────────────────────
    logic         div_cdb_valid;
    sqN_t         div_cdb_sqN;
    tag_t         div_cdb_tag;
    logic [31:0]  div_cdb_result;

    // ════════════════════════════════════════════════════
    // 2. Helper Functions
    // ════════════════════════════════════════════════════

    function automatic logic [31:0] abs32(input logic [31:0] x);
        abs32 = x[31] ? (~x + 32'd1) : x;
    endfunction

    function automatic logic is_squashed(input sqN_t fsqn, input sqN_t isqn);
        logic [SQN_W:0] diff;
        diff = {1'b0, fsqn} - {1'b0, isqn};
        is_squashed = (diff[SQN_W-1:0] < ROB_SIZE) && !diff[SQN_W];
    endfunction

    // ════════════════════════════════════════════════════
    // 3. MUL Pipeline Datapath
    //    - 3-stage pipeline: stages 0, 1, 2
    //    - Stage 1 produces MUL result (lower 32 bits)
    //    - Stage 2 produces MULH/MULHU/MULHSU result (upper 32 bits)
    //    - All stages shift every cycle unless stalled
    //    - Stall occurs only on CDB conflict with DIV
    // ════════════════════════════════════════════════════

    // ── Combinational result computation ──────────────
    logic [31:0] mul_stage1_result;
    logic [31:0] mul_stage2_result;
    
    always_comb begin
    	logic [63:0] full;
        logic [31:0] upper;
        logic [63:0] partial;
    
        // Stage 1: MUL result (lower 32 bits)        
        partial = 64'(mul_pipe[1].pp_ll) +
                 (64'(mul_pipe[1].pp_lh) << 16) +
                 (64'(mul_pipe[1].pp_hl) << 16);
        mul_stage1_result = partial[31:0];
        
        // Stage 2: MULH result (upper 32 bits)
        
        full = 64'(mul_pipe[2].pp_ll) +
              (64'(mul_pipe[2].pp_lh) << 16) +
              (64'(mul_pipe[2].pp_hl) << 16) +
              (64'(mul_pipe[2].pp_hh) << 32);
              
        upper = full[63:32];
        
        mul_stage2_result = mul_pipe[2].neg_result ? (~upper + 32'd1) : upper;
    end

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            if (rst) begin
	    for (int s = 0; s < 3; s++) begin
		mul_pipe[s].valid      <= '0;
		mul_pipe[s].sqN        <= '0;
		mul_pipe[s].tag        <= '0;
		mul_pipe[s].oper       <= MUL_INVALID;
		mul_pipe[s].a_lo       <= '0;
		mul_pipe[s].a_hi       <= '0;
		mul_pipe[s].b_lo       <= '0;
		mul_pipe[s].b_hi       <= '0;
		mul_pipe[s].pp_ll      <= '0;
		mul_pipe[s].pp_lh      <= '0;
		mul_pipe[s].pp_hl      <= '0;
		mul_pipe[s].pp_hh      <= '0;
		mul_pipe[s].neg_result <= '0;
	    end
	    mul_cdb_valid  <= 1'b0;
	    mul_cdb_sqN    <= '0;
	    mul_cdb_tag    <= '0;
	    mul_cdb_result <= 32'd0;
	end
        end else begin
            // ── Default: clear MUL CDB valid ──────
            mul_cdb_valid <= 1'b0;
            
            // ── Flush handling ─────────────────────
            if (flush) begin
                for (int s = 0; s < 3; s++) begin
                    if (mul_pipe[s].valid && 
                        is_squashed(flush_sqN, mul_pipe[s].sqN)) begin
                        mul_pipe[s].valid <= 1'b0;
                    end
                end
            end
            
            // ── Pipeline control ────────────────────
            if (!mul_stall) begin
                // Pipeline advances normally
                
                // Stage 2 → CDB (MULH group)
                if (mul_pipe[2].valid && 
                    mul_pipe[2].oper inside {MULH, MULHU, MULHSU}) begin
                    mul_cdb_valid  <= 1'b1;
                    mul_cdb_sqN    <= mul_pipe[2].sqN;
                    mul_cdb_tag    <= mul_pipe[2].tag;
                    mul_cdb_result <= mul_stage2_result;
                    mul_pipe[2].valid <= 1'b0;
                end
                
                // Stage 2 → 3 (shift out)
                // Stage 2 receives from Stage 1
                mul_pipe[2] <= mul_pipe[1];
                if (mul_pipe[1].valid && 
                    mul_pipe[1].oper inside {MULH, MULHU, MULHSU}) begin
                    mul_pipe[2].pp_hh <= 32'(mul_pipe[1].a_hi) * 
                                        32'(mul_pipe[1].b_hi);
                end
                
                // Stage 1 → CDB (MUL)
                if (mul_pipe[1].valid && mul_pipe[1].oper == MUL) begin
                    mul_cdb_valid  <= 1'b1;
                    mul_cdb_sqN    <= mul_pipe[1].sqN;
                    mul_cdb_tag    <= mul_pipe[1].tag;
                    mul_cdb_result <= mul_stage1_result;
                    mul_pipe[1].valid <= 1'b0;
                end
                
                // Stage 1 → 2 (shift)
                // Already handled by mul_pipe[2] <= mul_pipe[1] above
                
                // Stage 0 → 1
                mul_pipe[1] <= mul_pipe[0];
                if (mul_pipe[0].valid) begin
                    mul_pipe[1].pp_lh <= 32'(mul_pipe[0].a_lo) * 
                                        32'(mul_pipe[0].b_hi);
                    mul_pipe[1].pp_hl <= 32'(mul_pipe[0].a_hi) * 
                                        32'(mul_pipe[0].b_lo);
                end
                
                // Stage 0: Accept new MUL instruction
                if (IN_instr.valid && 
                    IN_instr.oper.mul_div_oper inside {MUL, MULH, MULHU, MULHSU}) begin
                    logic [31:0] op1, op2;
                    
                    unique case (IN_instr.oper.mul_div_oper)
                        MULH: begin
                            op1 = abs32(IN_instr.operand1);
                            op2 = abs32(IN_instr.operand2);
                        end
                        MULHSU: begin
                            op1 = abs32(IN_instr.operand1);
                            op2 = IN_instr.operand2;
                        end
                        default: begin
                            op1 = IN_instr.operand1;
                            op2 = IN_instr.operand2;
                        end
                    endcase
                    
                    mul_pipe[0].valid  <= 1'b1;
                    mul_pipe[0].sqN    <= IN_instr.sqN;
                    mul_pipe[0].tag    <= IN_instr.rd_tag;
                    mul_pipe[0].oper   <= IN_instr.oper.mul_div_oper;
                    mul_pipe[0].a_lo   <= op1[15:0];
                    mul_pipe[0].a_hi   <= op1[31:16];
                    mul_pipe[0].b_lo   <= op2[15:0];
                    mul_pipe[0].b_hi   <= op2[31:16];
                    mul_pipe[0].pp_ll  <= 32'(op1[15:0]) * 32'(op2[15:0]);
                    mul_pipe[0].pp_lh  <= 32'd0;
                    mul_pipe[0].pp_hl  <= 32'd0;
                    mul_pipe[0].pp_hh  <= 32'd0;
                    mul_pipe[0].neg_result <= 
                        (IN_instr.oper.mul_div_oper == MULH) ? 
                        (IN_instr.operand1[31] ^ IN_instr.operand2[31]) :
                        (IN_instr.oper.mul_div_oper == MULHSU) ? 
                        IN_instr.operand1[31] : 1'b0;
                end else begin
                    mul_pipe[0].valid <= 1'b0;
                end
            end else begin
                // Pipeline stalled - freeze all stages
                // Do not accept new instructions
                // Do not clear valid bits
                // Do not shift stages
            end
        end
    end

    // ════════════════════════════════════════════════════
    // 4. DIV FSM - Restoring Division
    //    - 32 iterations, one per cycle
    //    - Produces quotient and remainder
    //    - CDB output registered in DIV_COMPLETE state
    // ════════════════════════════════════════════════════

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            div_state      <= DIV_IDLE;
            div_instr_r    <= '{default: '0};
            div_partial    <= 64'd0;
            div_divisor    <= 32'd0;
            div_count      <= 6'd0;
            div_quot_sign  <= 1'b0;
            div_rem_sign   <= 1'b0;
            div_by_zero    <= 1'b0;
            div_cdb_valid  <= 1'b0;
            div_cdb_sqN    <= '0;
            div_cdb_tag    <= '0;
            div_cdb_result <= 32'd0;
        end else begin
            // ── Default: clear DIV CDB valid ─────
            div_cdb_valid <= 1'b0;
            
            // ── Flush check ──────────────────────
            if (flush && div_state != DIV_IDLE && 
                is_squashed(flush_sqN, div_instr_r.sqN)) begin
                div_state <= DIV_IDLE;
            end else begin
                case (div_state)
                    DIV_IDLE: begin
                        if (IN_instr.valid && 
                            IN_instr.oper.mul_div_oper inside {DIV, DIVU, REM, REMU}) begin
                            logic [31:0] op1, op2;
                            logic        s1, s2;
                            
                            div_instr_r <= IN_instr;
                            op1 = IN_instr.operand1;
                            op2 = IN_instr.operand2;
                            
                            div_by_zero <= (op2 == 32'd0);
                            
                            if (IN_instr.oper.mul_div_oper inside {DIV, REM}) begin
                                s1 = op1[31];
                                s2 = op2[31];
                                div_quot_sign <= s1 ^ s2;
                                div_rem_sign  <= s1;
                                div_divisor   <= abs32(op2);
                                div_partial   <= {32'd0, abs32(op1)};
                            end else begin
                                div_quot_sign <= 1'b0;
                                div_rem_sign  <= 1'b0;
                                div_divisor   <= op2;
                                div_partial   <= {32'd0, op1};
                            end
                            
                            div_count <= 6'd0;
                            div_state <= DIV_EXEC;
                        end
                    end
                    
                    DIV_EXEC: begin
                        if (div_by_zero) begin
                            div_cdb_valid  <= 1'b1;
                            div_cdb_sqN    <= div_instr_r.sqN;
                            div_cdb_tag    <= div_instr_r.rd_tag;
                            div_cdb_result <= (div_instr_r.oper.mul_div_oper inside {DIV, DIVU}) ?
                                              32'hFFFFFFFF : div_instr_r.operand1;
                            div_state <= DIV_IDLE;
                        end else if (div_count == 6'd32) begin
                            logic [31:0] q, r;
                            q = div_partial[31:0];
                            r = div_partial[63:32];
                            
                            if (div_quot_sign) q = ~q + 32'd1;
                            if (div_rem_sign)  r = ~r + 32'd1;
                            
                            div_cdb_valid  <= 1'b1;
                            div_cdb_sqN    <= div_instr_r.sqN;
                            div_cdb_tag    <= div_instr_r.rd_tag;
                            div_cdb_result <= (div_instr_r.oper.mul_div_oper inside {DIV, DIVU}) ?
                                              q : r;
                            div_state <= DIV_IDLE;
                        end else begin
                            logic [32:0] partial_high, sub_result;
                            
                            partial_high = {1'b0, div_partial[62:31]};
                            sub_result   = partial_high - {1'b0, div_divisor};
                            
                            if (sub_result[32]) begin
                                div_partial <= {partial_high[31:0], 
                                               div_partial[30:0], 1'b0};
                            end else begin
                                div_partial <= {sub_result[31:0], 
                                               div_partial[30:0], 1'b1};
                            end
                            div_count <= div_count + 6'd1;
                        end
                    end
                    
                    default: begin
                        div_state <= DIV_IDLE;
                    end
                endcase
            end
        end
    end

    // ════════════════════════════════════════════════════
    // 5. Stall Generation
    //    MUL pipeline stalls when:
    //    - MUL result would be produced this cycle AND
    //    - DIV is also producing a result this cycle
    //    (CDB can only accept one write per cycle)
    // ════════════════════════════════════════════════════

    always_comb begin
        logic mul_result_ready;
        logic div_result_ready;
        
        // MUL result ready this cycle?
        mul_result_ready = (mul_pipe[2].valid && 
                            mul_pipe[2].oper inside {MULH, MULHU, MULHSU}) ||
                           (mul_pipe[1].valid && 
                            mul_pipe[1].oper == MUL);
        
        // DIV result ready this cycle?
        div_result_ready = (div_state == DIV_EXEC) && 
                           (div_by_zero || (div_count == 6'd32));
        
        // Stall MUL if both want CDB simultaneously
        mul_stall = mul_result_ready && div_result_ready;
    end

    // ════════════════════════════════════════════════════
    // 6. CDB Output Arbitration
    //    DIV has priority over MUL
    //    Both outputs are registered, so no timing path
    //    from pipeline stages to CDB output
    // ════════════════════════════════════════════════════

    always_comb begin
        if (div_cdb_valid) begin
            OUT_cdb.valid  = 1'b1;
            OUT_cdb.sqN    = div_cdb_sqN;
            OUT_cdb.tag    = div_cdb_tag;
            OUT_cdb.result = div_cdb_result;
        end else if (mul_cdb_valid) begin
            OUT_cdb.valid  = 1'b1;
            OUT_cdb.sqN    = mul_cdb_sqN;
            OUT_cdb.tag    = mul_cdb_tag;
            OUT_cdb.result = mul_cdb_result;
        end else begin
            OUT_cdb = '{default: '0};
        end
    end

    // ════════════════════════════════════════════════════
    // 7. Busy Output
    //    DIV busy: stall new DIV instructions
    //    MUL stall: indicate pipeline is frozen
    // ════════════════════════════════════════════════════

    assign OUT_busy = (div_state != DIV_IDLE) || mul_stall;

endmodule
