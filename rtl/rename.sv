import include_pkg::*;

module rename
(
    input       logic             clk,
    input       logic             rst,
    input       logic             ROB_busy,
    input       logic             dispatch_busy,
    input       logic             flush,
    input  var  commit_packet_t   commit_packet  [COMMIT_WIDTH],
    input  var  tag_t             read_tag       [ISSUE_WIDTH][2],
    input  var  decode_instr_t    IN_instr       [DECODE_WIDTH],
    input  var  tag_t             IN_specTag     [32],
    input    	logic             IN_free        [DECODE_WIDTH][ROB_SIZE],
    input  var  tag_t             CDB_tag        [ISSUE_WIDTH],
    input  	logic             CDB_valid      [ISSUE_WIDTH],
    output      rename_instr_t    OUT_instr      [DECODE_WIDTH],
    output      logic             reg_ready      [ISSUE_WIDTH][2],
    output      logic             checkpoint,
    output      tag_t             OUT_specTag    [DECODE_WIDTH][32],
    output      logic             OUT_free       [DECODE_WIDTH][ROB_SIZE] 
);

    // ── Structs ──────────────────────────────────────────
    typedef struct packed {
        logic freeComm;
        logic ready;
        logic free;
    } tag_stat_t;

    typedef struct packed {
        logic [REG_ADDR_WIDTH-1:0] commTag;
        logic [REG_ADDR_WIDTH-1:0] specTag;
    } tags_t;

    // ── State ────────────────────────────────────────────
    var tag_stat_t  tag_buffer   [ROB_SIZE];
    var tags_t      rename_table [32];

    // ── FTB from tag_buffer ──────────────────────────────
    logic [ROB_SIZE-1:0] ftb;
    always_comb
        for (int i = 0; i < ROB_SIZE; i++)
            ftb[i] = tag_buffer[i].free;

    // ── Cascaded priority encoder ────────────────────────
    logic [ROB_SIZE-1:0]              	masked  [DECODE_WIDTH];
    logic [ROB_SIZE-1:0]              	onehot  [DECODE_WIDTH];
    logic [REG_ADDR_WIDTH-1:0] 		chosen  [DECODE_WIDTH];
    logic [DECODE_WIDTH-1:0]   		req_valid;

    always_comb
        for (int i = 0; i < DECODE_WIDTH; i++)
            req_valid[i] = IN_instr[i].valid && (IN_instr[i].rd != 5'd0);

    assign masked[0] = ftb;

    for (genvar i = 0; i < DECODE_WIDTH; i++) begin : g_alloc
        assign onehot[i] = req_valid[i]
                           ? (masked[i] & (~masked[i] + 1'b1))
                           : '0;
        always_comb begin
            chosen[i] = '0;
            for (int b = 0; b < ROB_SIZE; b++)
                if (onehot[i][b]) chosen[i] = REG_ADDR_WIDTH'(b);
        end
        assign masked[i+1] = masked[i] & ~onehot[i];
    end

    // ── Stall ────────────────────────────────────────────
    logic [$clog2(M+1)-1:0]            free_count;
    logic [$clog2(DECODE_WIDTH+1)-1:0] req_count;

    always_comb begin
        free_count = '0;
        for (int b = 0; b < ROB_SIZE; b++)
            free_count += ftb[b];
        req_count = '0;
        for (int i = 0; i < DECODE_WIDTH; i++)
            req_count += req_valid[i];
    end

    logic stall;
    assign stall = ROB_busy || dispatch_busy || (free_count < ROB_SIZE'(req_count));

    // ── reg_ready from tag_buffer ────────────────────────
    for (genvar i = 0; i < ISSUE_WIDTH; i++) begin
        assign reg_ready[i][0] = tag_buffer[read_tag[i][0]].ready;
        assign reg_ready[i][1] = tag_buffer[read_tag[i][1]].ready;
    end

    // ── commTag free pointer ─────────────────────────────
    logic [REG_ADDR_WIDTH-1:0] free_CommTag [COMMIT_WIDTH];
    for (genvar i = 0; i < COMMIT_WIDTH; i++)
        assign free_CommTag[i] = rename_table[commit_packet[i].rd].commTag;

    // ── tag_buffer update ────────────────────────────────
    always_ff @(posedge clk) begin
        if (rst) begin
            for (int i = 0; i < ROB_SIZE; i++)
                tag_buffer[i] <= '{freeComm: 1'b1, ready: 1'b1, free: 1'b1};
        end else begin
            if (!flush) begin
                // CDB: mark completed tags ready
                for (int i = 0; i < ISSUE_WIDTH; i++)
                    if (CDB_valid[i])
                        tag_buffer[CDB_tag[i]].ready <= 1'b1;

                // Commit: free old commTag, mark new commTag as !freeComm
                for (int i = 0; i < COMMIT_WIDTH; i++) begin
                    if (commit_packet[i].valid && commit_packet[i].rd != 5'd0) begin
                        tag_buffer[commit_packet[i].tag].freeComm   <= 1'b0;
                        tag_buffer[free_CommTag[i]].freeComm        <= 1'b1;
                        tag_buffer[free_CommTag[i]].free            <= 1'b1;
                    end
                end

                // Allocate: claim chosen tags
                if (!stall) begin
                    for (int i = 0; i < DECODE_WIDTH; i++) begin
                        if (req_valid[i]) begin
                            tag_buffer[chosen[i]].ready <= 1'b0;
                            tag_buffer[chosen[i]].free  <= 1'b0;
                        end
                    end
                end
            end
        end
    end

    // ── Local RAT: cascading intra-group forwarding ──────
    //
    // local_rat starts as the committed rename_table state.
    // As we walk i = 0..DECODE_WIDTH-1, each instruction that
    // writes rd updates local_rat[rd] = chosen[i].
    // When instruction j reads rs, it reads local_rat[rs] —
    // which already reflects any prior write in this group.
    // This is what gives you the K → K-1 forwarding for free.
    //
    logic [REG_ADDR_WIDTH-1:0] local_rat      	[DECODE_WIDTH][32];

    always_comb begin
        // Seed from committed rename table specTag
        for (int r = 0; r < 32; r++) begin
            local_rat[0][r]       = rename_table[r].specTag;
        end

        // Walk instructions in order, updating local_rat after each
        for (int i = 0; i < DECODE_WIDTH; i++) begin
            // Default: carry forward from previous stage
            for (int r = 0; r < 32; r++) begin
                local_rat[i+1][r]       = local_rat[i][r];
            end
            // If this instruction writes rd, update that entry
            if (IN_instr[i].valid && (IN_instr[i].rd != 5'd0) && !stall) begin
                local_rat[i+1][IN_instr[i].rd]       = chosen[i];
            end
        end
    end

    // ── Checkpoint: snapshot specTag + free on branches ──
    //
    // OUT_specTag[i] and OUT_free[i] hold the snapshot *as seen
    // by instruction i* — i.e. after instructions 0..i-1 have
    // updated the RAT, using local_rat[i].
    // This means a branch at slot i checkpoints the correct
    // post-predecessor state.
    //
    always_comb begin
        checkpoint = 1'b0;
        for (int i = 0; i < DECODE_WIDTH; i++) begin
            for (int r = 0; r < 32; r++)
                OUT_specTag[i][r] = local_rat[i][r]; // pre-self state
            for (int b = 0; b < ROB_SIZE; b++)
                // free snapshot: current ftb minus tags allocated by instrs 0..i-1
                OUT_free[i][b] = masked[i][b];       // masked[i] = ftb with 0..i-1 cleared

            if (IN_instr[i].valid &&
                (IN_instr[i].jump_type || IN_instr[i].br_type))
                checkpoint = 1'b1;
        end
    end

    // ── Rename table update (sequential) ─────────────────
    always_ff @(posedge clk) begin
        if (rst) begin
            for (int r = 0; r < 32; r++) begin
                rename_table[r].specTag <= REG_ADDR_WIDTH'(r);
                rename_table[r].commTag <= REG_ADDR_WIDTH'(r);
            end
        end else begin
            if (flush) begin
                // Roll specTag back to commTag for every register
                for (int r = 0; r < 32; r++)
                    rename_table[r].specTag <= rename_table[r].commTag;
            end else if (!stall) begin
                // Advance specTag using the final local_rat state
                for (int r = 0; r < 32; r++)
                    rename_table[r].specTag <= local_rat[DECODE_WIDTH][r];
            end

            // Commit: advance commTag (independent of stall/flush)
            for (int i = 0; i < COMMIT_WIDTH; i++) begin
                if (commit_packet[i].valid && commit_packet[i].rd != 5'd0)
                    rename_table[commit_packet[i].rd].commTag <= commit_packet[i].tag;
            end
        end
    end

    // ── Output instructions ───────────────────────────────
    always_comb begin
        for (int i = 0; i < DECODE_WIDTH; i++) begin
            OUT_instr[i]         = '0;
            OUT_instr[i].valid   = IN_instr[i].valid && !stall;
            OUT_instr[i].rd_tag  = chosen[i];
            // rs tags: read from local_rat[i] — captures intra-group forwarding
            OUT_instr[i].rs1_tag   = local_rat[i][IN_instr[i].rs1];
            OUT_instr[i].rs2_tag   = local_rat[i][IN_instr[i].rs2];
            OUT_instr[i].instr     = IN_instr[i];
        end
    end

endmodule
