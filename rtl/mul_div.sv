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
    // 0. Types
    // ════════════════════════════════════════════════════

    typedef enum logic [2:0] {
        IDLE,
        MUL_EXEC,   // waiting for DSP pipeline
        DIV_EXEC,   // iterative division
        COMPLETE    // result ready, waiting for CDB
    } state_t;


    // ════════════════════════════════════════════════════
    // 1. State
    // ════════════════════════════════════════════════════

    state_t          state;
    issue_instr_t    instr_r;       // latched instruction
    logic [31:0]     result;

    // ── MUL pipeline registers ───────────────────────────
    // 3-stage DSP pipeline: input → stage1 → stage2 → result
    logic [63:0]     mul_pipe [3];
    logic [2:0]      mul_pipe_valid;
    sqN_t            mul_pipe_sqN  [3];
    tag_t            mul_pipe_tag  [3];
    mul_div_oper_t   mul_pipe_oper [3];

    // ── DIV state ────────────────────────────────────────
    logic [31:0]     div_dividend;  // unsigned working dividend
    logic [31:0]     div_divisor;   // unsigned divisor
    logic [31:0]     div_quotient;
    logic [31:0]     div_remainder;
    logic [63:0]     div_partial;   // {remainder, dividend} shift register
    logic [5:0]      div_count;     // counts 0..31
    logic            div_quot_sign; // result sign correction
    logic            div_rem_sign;
    logic            div_by_zero;


    // ════════════════════════════════════════════════════
    // 2. Sign helpers
    // ════════════════════════════════════════════════════

    function automatic logic [31:0] abs32(input logic [31:0] x);
        abs32 = x[31] ? (~x + 32'd1) : x;
    endfunction


    // ════════════════════════════════════════════════════
    // 3. MUL: 3-stage DSP pipeline
    //
    //    Stage 0→1: sign-extend / zero-extend operands
    //    Stage 1→2: 32x32 multiply (DSP48 inferred)
    //    Stage 2→3: select upper/lower half
    //
    //    (* use_dsp = "yes" *) hints Vivado to use DSP48.
    //    All stages shift in parallel — fully pipelined,
    //    but we only accept one instruction at a time
    //    (OUT_busy held) so no structural hazard.
    // ════════════════════════════════════════════════════

    // Sign-extended operands for multiply
    logic signed [32:0] mul_op1_s, mul_op2_s; // 33-bit signed
    logic        [32:0] mul_op1_u, mul_op2_u; // 33-bit unsigned (zero-ext)

    always_comb begin
        mul_op1_s = {instr_r.operand1[31], instr_r.operand1}; // sign-extend
        mul_op2_s = {instr_r.operand2[31], instr_r.operand2};
        mul_op1_u = {1'b0, instr_r.operand1};                 // zero-extend
        mul_op2_u = {1'b0, instr_r.operand2};
    end

    // ── DSP multiply ───────────
    (* use_dsp = "yes" *)
    logic signed [65:0] mul_result_ss; // signed × signed
    (* use_dsp = "yes" *)
    logic        [65:0] mul_result_uu; // unsigned × unsigned
    (* use_dsp = "yes" *)
    logic signed [65:0] mul_result_su; // signed × unsigned (MULHSU)

    always_ff @(posedge clk) begin
        // Stage 1: register inputs to DSP
        mul_result_ss <= $signed(mul_op1_s) * $signed(mul_op2_s);
        mul_result_uu <= mul_op1_u * mul_op2_u;
        mul_result_su <= $signed(mul_op1_s) * mul_op2_u;
	
	
         // ── MUL pipeline flush ────────────────────────
         // Also need to invalidate MUL pipeline stages
         if (flush) begin
             for (int s = 0; s < 3; s++) begin
                 if (mul_pipe_valid[s] && (({1'b0, flush_sqN} - {1'b0, mul_pipe_sqN[s]}) & SQN_MASK) < ROB_SIZE) mul_pipe_valid[s] <= 1'b0;
	     end
         end else begin
             // Shift valid/tag/oper through pipeline
             mul_pipe_valid <= {mul_pipe_valid[1:0],
                        (state == IDLE && IN_instr.valid &&
                         IN_instr.oper.mul_div_oper inside
                         {MUL, MULH, MULHU, MULHSU})};                    
        end
        
        for (int s = 1; s < 3; s++) begin
            mul_pipe_sqN[s]  <= mul_pipe_sqN[s-1];
            mul_pipe_tag[s]  <= mul_pipe_tag[s-1];
            mul_pipe_oper[s] <= mul_pipe_oper[s-1];
        end
        mul_pipe_sqN[0]  <= IN_instr.sqN;
        mul_pipe_tag[0]  <= IN_instr.rd_tag;
        mul_pipe_oper[0] <= IN_instr.oper.mul_div_oper;
    end


    // ════════════════════════════════════════════════════
    // 4. Main FSM
    // ════════════════════════════════════════════════════

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state           <= IDLE;
            instr_r         <= '{default: '0};
            result          <= '0;
            div_count       <= '0;
            div_partial     <= '0;
            div_divisor     <= '0;
            div_quot_sign   <= '0;
            div_rem_sign    <= '0;
            div_by_zero     <= '0;
            OUT_cdb         <= '{default: '0};

        end else begin

            // ── Flush ────────────────────────────────────
            // If in-flight instruction is squashed, abort.
            if (flush && state != IDLE
                && (({1'b0, flush_sqN} - {1'b0, instr_r.sqN}) & SQN_MASK) < ROB_SIZE) begin
                state   <= IDLE;
                OUT_cdb <= '{default: '0};
            end

            else begin
                case (state)

                    // ── IDLE ─────────────────────────────
                    IDLE: begin
                        OUT_cdb <= '{default: '0};

                        if (IN_instr.valid) begin
                            instr_r <= IN_instr;

                            case (IN_instr.oper.mul_div_oper)
                                // ── MUL: kick off DSP pipeline ──
                                MUL, MULH, MULHU, MULHSU: begin
                                    state <= MUL_EXEC;
                                end

                                // ── DIV/REM: setup iterative ─────
                                DIV, DIVU, REM, REMU: begin
                                    begin
                                        logic [31:0] op1, op2;
                                        logic        s1, s2;
                                        op1 = IN_instr.operand1;
                                        op2 = IN_instr.operand2;

                                        // Division by zero
                                        div_by_zero <= (op2 == 32'd0);

                                        // Signed: track sign and work with abs values
                                        if (IN_instr.oper.mul_div_oper inside {DIV, REM}) begin
                                            s1 = op1[31]; s2 = op2[31];
                                            div_quot_sign <= s1 ^ s2;
                                            div_rem_sign  <= s1;
                                            div_dividend  <= abs32(op1);
                                            div_divisor   <= abs32(op2);
                                        end else begin
                                            // DIVU, REMU: unsigned, no sign correction
                                            div_quot_sign <= 1'b0;
                                            div_rem_sign  <= 1'b0;
                                            div_dividend  <= op1;
                                            div_divisor   <= op2;
                                        end
                                    end

                                    // Initialise shift register:
                                    // {remainder=0, dividend} packed into 64 bits
                                    div_partial <= {32'd0,
                                                    IN_instr.operand1[31]
                                                    ? abs32(IN_instr.operand1)
                                                    : IN_instr.operand1};
                                    div_count   <= 6'd0;
                                    state       <= DIV_EXEC;
                                end

                                default: state <= IDLE;
                            endcase
                        end
                    end

                    // ── MUL_EXEC ─────────────────────────
                    // Wait for the 3-stage DSP pipeline to flush.
                    // mul_pipe_valid[2] goes high when result is ready.
                    MUL_EXEC: begin
                        if (mul_pipe_valid[2]) begin
                            // Select result word based on operation
                            case (mul_pipe_oper[2])
                                MUL:    result <= mul_result_ss[31:0];
                                MULH:   result <= mul_result_ss[63:32];
                                MULHU:  result <= mul_result_uu[63:32];
                                MULHSU: result <= mul_result_su[63:32];
                                default:result <= '0;
                            endcase
                            state <= COMPLETE;
                        end
                    end

                    // ── DIV_EXEC ─────────────────────────
                    // Non-restoring division: each cycle shifts
                    // div_partial left by 1, subtracts divisor
                    // from upper 32 bits. If result ≥ 0, quotient
                    // bit = 1 and keep subtracted value.
                    // If result < 0, quotient bit = 0 and restore.
                    DIV_EXEC: begin
                        if (div_by_zero) begin
                            // RISC-V spec: div by zero → quotient = -1, rem = dividend
                            result <= (instr_r.oper.mul_div_oper inside {DIV, DIVU})
                                      ? 32'hFFFFFFFF
                                      : instr_r.operand1;
                            state  <= COMPLETE;

                        end else if (div_count == 6'd32) begin
                            // Division complete — apply sign correction
                            begin
                                logic [31:0] q, r;
                                q = div_partial[31:0];   // quotient accumulated
                                r = div_partial[63:32];  // remainder in upper half

                                // Sign correction
                                if (div_quot_sign) q = ~q + 32'd1;
                                if (div_rem_sign)  r = ~r + 32'd1;

                                result <= (instr_r.oper.mul_div_oper inside {DIV, DIVU})
                                          ? q : r;
                            end
                            state <= COMPLETE;

                        end else begin
                            // One iteration of restoring division
                            begin
                                logic [32:0] partial_high;
                                logic [32:0] sub_result;

                                // Shift left and trial subtract
                                partial_high = {1'b0, div_partial[62:31]}; // shift left (Check it if lsb should be 0 & div_partial[62:32]?).
                                sub_result   = partial_high - {1'b0, div_divisor};

                                if (sub_result[32]) begin
                                    // Subtraction went negative → restore, quotient bit = 0
                                    div_partial <= {partial_high[31:0],
                                                    div_partial[30:0], 1'b0};
                                end else begin
                                    // Subtraction positive → keep, quotient bit = 1
                                    div_partial <= {sub_result[31:0],
                                                    div_partial[30:0], 1'b1};
                                end
                            end
                            div_count <= div_count + 6'd1;
                        end
                    end

                    // ── COMPLETE ─────────────────────────
                    // Broadcast result on CDB for one cycle.
                    COMPLETE: begin
                        OUT_cdb.valid  <= 1'b1;
                        OUT_cdb.sqN    <= instr_r.sqN;
                        OUT_cdb.tag    <= instr_r.rd_tag;
                        OUT_cdb.result <= result;
                        state          <= IDLE;
                    end
		default: begin
		    state           <= IDLE;
		    instr_r         <= '{default: '0};
		    result          <= '0;
		    div_count       <= '0;
		    div_partial     <= '0;
		    div_divisor     <= '0;
		    div_quot_sign   <= '0;
		    div_rem_sign    <= '0;
		    div_by_zero     <= '0;
		    OUT_cdb         <= '{default: '0};

		end
                endcase
            end
        end
    end

    assign OUT_busy = (state != IDLE);

endmodule
