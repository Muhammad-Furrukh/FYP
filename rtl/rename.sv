import include_pkg::*;

module rename
(
    input       logic             clk,
    input       logic             rst,
    input       logic             ROB_busy,
    input       logic             dispatch_busy,
    input       logic             flush,
    input	    logic		      chkpt_busy,
    input  var  commit_packet_t   commit_packet  [COMMIT_WIDTH],
    input  var  decode_instr_t    IN_instr       [DECODE_WIDTH],
    input  var  tag_t             IN_specTag     [32],
    input  var  logic             IN_free        [2**REG_ADDR_WIDTH],
    input  var  tag_t             CDB_tag        [ISSUE_WIDTH],
    input  var  logic             CDB_valid      [ISSUE_WIDTH],
    input  var  tag_t             read_tag       [ISSUE_WIDTH][2],
    output      rename_instr_t    OUT_instr      [DECODE_WIDTH],
    output      logic             reg_ready      [ISSUE_WIDTH][2],
    output      logic             chkpt          [DECODE_WIDTH],
    output      sqN_t             chkpt_sqN      [DECODE_WIDTH],
    output      tag_t             OUT_specTag    [DECODE_WIDTH][32],
    output      logic             OUT_free       [DECODE_WIDTH][2**REG_ADDR_WIDTH]
);

    // ════════════════════════════════════════════════════
    // 0. Types
    // ════════════════════════════════════════════════════
    typedef struct packed {
        logic freeComm;
        logic ready;
        logic free;
    } tag_buffer_entry_t;

    typedef struct packed {
        logic [REG_ADDR_WIDTH-1:0] commTag;
        logic [REG_ADDR_WIDTH-1:0] specTag;
    } RAT_entry_t;

    localparam int NUM_REG = 2**REG_ADDR_WIDTH;

    // ════════════════════════════════════════════════════
    // 1. State
    // ════════════════════════════════════════════════════

    var tag_buffer_entry_t  tag_buffer   [NUM_REG];    // physical tag status
    var RAT_entry_t         rename_table [32];         // architectural → physical map


    // ════════════════════════════════════════════════════
    // 2. Free Tag Bitmap (FTB)
    //    Combinationally reflect tag_buffer.free so the
    //    allocator always sees the current cycle's state.
    // ════════════════════════════════════════════════════

    logic [NUM_REG-1:0] ftb;

    always_comb
        for (int i = 0; i < NUM_REG; i++)
            ftb[i] = tag_buffer[i].free;


    // ════════════════════════════════════════════════════
    // 3. Tag Allocation — cascaded priority encoders
    //
    //    masked[0]   = raw FTB
    //    masked[i+1] = masked[i] with chosen[i] cleared
    //
    //    Each stage picks the lowest free bit from its
    //    masked view, guaranteeing K unique tags in one
    //    cycle with no extra arbitration.
    // ════════════════════════════════════════════════════

    logic [DECODE_WIDTH-1:0]   req_valid;   // which slots need a new tag
    logic [NUM_REG-1:0]        masked  [DECODE_WIDTH+1];
    logic [NUM_REG-1:0]        onehot  [DECODE_WIDTH];
    logic [REG_ADDR_WIDTH-1:0] chosen  [DECODE_WIDTH];

    always_comb begin
        for (int i = 0; i < DECODE_WIDTH; i++)
            req_valid[i] = IN_instr[i].valid && (IN_instr[i].rd != 5'd0);

        masked[0] = ftb;
    end

    for (genvar i = 0; i < DECODE_WIDTH; i++) begin : g_alloc
        // Isolate lowest free bit (x & -x idiom)
        assign onehot[i] = req_valid[i] ? (masked[i] & (~masked[i] + 1'b1)) : '0;

        // One-hot → binary
        always_comb begin
            for (int b = 0; b < NUM_REG; b++) begin
                if (onehot[i][b]) 
                    chosen[i] = REG_ADDR_WIDTH'(b);
                else
                    chosen[i] = REG_ADDR_WIDTH'(0);
            end
        end

        // Suppress chosen tag for next stage
        assign masked[i+1] = masked[i] & ~onehot[i];
    end


    // ════════════════════════════════════════════════════
    // 4. Stall
    //    Stall if the ROB/dispatch is busy, or if there
    //    aren't enough free tags/chekpoints for all requesting slots.
    // ════════════════════════════════════════════════════

    logic [$clog2(NUM_REG+1)-1:0]      free_count;
    logic [$clog2(DECODE_WIDTH+1)-1:0] req_count;
    logic                              chkpt_need;

    always_comb begin
        free_count = '0;
        for (int b = 0; b < NUM_REG; b++)
            free_count += ftb[b];

        req_count  = '0;
        chkpt_need = 1'b0;
        for (int i = 0; i < DECODE_WIDTH; i++)  begin
            req_count += req_valid[i];
            if (req_valid[i]) begin
                chkpt_need |= chkpt_need || ((IN_instr[i].br_type != NOT_BRANCH) || 
                                (IN_instr[i].jump_type == JALR));
            end
        end
    end

    logic stall;
    assign stall = ROB_busy || dispatch_busy || (free_count < NUM_REG'(req_count)) 
                    || (chkpt_busy && chkpt_need);


    // ════════════════════════════════════════════════════
    // 5. Local RAT — intra-group forwarding
    //
    //    local_rat[i] = specTag state visible to instr i,
    //    i.e. after instructions 0..i-1 have renamed.
    //
    //    Reading local_rat[i][rs] therefore automatically
    //    forwards the tag from any earlier instruction in
    //    this group that wrote the same architectural reg.
    //    No separate bypass network needed.
    //
    //    Seeded from IN_specTag on flush,
    //    otherwise from rename_table.specTag.
    // ════════════════════════════════════════════════════

    logic [REG_ADDR_WIDTH-1:0] local_rat [DECODE_WIDTH+1][32];

    always_comb begin
        for (int r = 0; r < 32; r++)
            local_rat[0][r] = flush ? IN_specTag[r] : rename_table[r].specTag;

        for (int i = 0; i < DECODE_WIDTH; i++) begin
            for (int r = 0; r < 32; r++)
                local_rat[i+1][r] = local_rat[i][r];          // carry forward

            if (IN_instr[i].valid && (IN_instr[i].rd != 5'd0)) 
                local_rat[i+1][IN_instr[i].rd] = chosen[i];   // write new tag
        end
    end


    // ════════════════════════════════════════════════════
    // 6. Outputs
    // ════════════════════════════════════════════════════

    // ── 6a. Renamed instructions ─────────────────────────
    // rs tags come from local_rat[i] — capturing intra-group
    // forwarding. archTag tag is chosen[i] from the allocator.
    always_ff @(posedge clk) begin
        if (rst || flush) begin
            for (int i = 0; i < DECODE_WIDTH; i++)
                OUT_instr[i] <= '0;
        end 
        else if (stall) begin
            // Stall: hold outputs steady with the same inputs but no stall/flush.
            OUT_instr <= OUT_instr;
        end 
        else begin
            for (int i = 0; i < DECODE_WIDTH; i++) begin
                OUT_instr[i].valid          <= IN_instr[i].valid && !flush;
                OUT_instr[i].sqN            <= IN_instr[i].sqN;
                OUT_instr[i].pc             <= IN_instr[i].pc;
                OUT_instr[i].f_unit         <= IN_instr[i].f_unit;
                OUT_instr[i].oper           <= IN_instr[i].oper;
                OUT_instr[i].rs1_tag        <= local_rat[i][IN_instr[i].rs1];
                OUT_instr[i].rs2_tag        <= local_rat[i][IN_instr[i].rs2];
                OUT_instr[i].rd_tag         <= chosen[i];
                OUT_instr[i].imm            <= IN_instr[i].imm;
                OUT_instr[i].is_imm         <= IN_instr[i].is_imm;
                OUT_instr[i].jump_type      <= IN_instr[i].jump_type;
                OUT_instr[i].br_type        <= IN_instr[i].br_type;
                OUT_instr[i].u_type         <= IN_instr[i].u_type;
            end
        end
    end

    // ── 6b. Register ready (for wakeup / issue) ──────────
    for (genvar i = 0; i < ISSUE_WIDTH; i++) begin
        assign reg_ready[i][0] = tag_buffer[read_tag[i][0]].ready;
        assign reg_ready[i][1] = tag_buffer[read_tag[i][1]].ready;
    end

    // ── 6c. Branch checkpoints ────────────────────────────
    // OUT_specTag[i] / OUT_free[i] snapshot the RAT and FTB
    // *just before* instruction i renames, so that a restore
    // rolls back exactly to the state at the branch.
    //
    //   OUT_specTag[i] = local_rat[i]  (RAT before instr i)
    //   OUT_free[i]    = masked[i]     (FTB before instr i)
    always_comb begin
        for (int i = 0; i < DECODE_WIDTH; i++) begin
            for (int r = 0; r < 32; r++)
                OUT_specTag[i][r] = rename_table[r].specTag;
            for (int b = 0; b < NUM_REG; b++)
                OUT_free[i][b]    = masked[i][b];
            chkpt_sqN[i]   = IN_instr[i].sqN;

            if (flush || stall)
                chkpt[i] = 1'b0; // no checkpoint on flush or stall
             
            else if (IN_instr[i].valid &&
                (IN_instr[i].jump_type == JALR ||
                 IN_instr[i].br_type   != NOT_BRANCH)) 
                chkpt[i] = 1'b1;
            else 
                chkpt[i] = 1'b0;
        end
    end


    // ════════════════════════════════════════════════════
    // 7. Sequential updates
    //
    //    Priority (highest → lowest):
    //      rst         — full reset to identity state
    //      flush — restore specTag + free bitmap;
    //                    commTag/freeComm untouched
    //      flush       — roll specTag from branch checkpoint;
    //                    roll free bitmap from checkpoint
    //      normal      — CDB ready, commit free, allocate
    // ════════════════════════════════════════════════════

    // Combinational: old commTag to free on commit
    // (rename_table[archTag].commTag is the tag that held
    //  the architectural value before this instruction wrote it)
    logic [REG_ADDR_WIDTH-1:0] free_CommTag [COMMIT_WIDTH];
    for (genvar i = 0; i < COMMIT_WIDTH; i++)
        assign free_CommTag[i] = rename_table[commit_packet[i].archTag].commTag;

    // ── 7a. tag_buffer ────────────────────────────────────
    always_ff @(posedge clk) begin
        if (rst) begin
            for (int i = 0; i < 32; i++)
                tag_buffer[i] <= '{freeComm: 1'b0, ready: 1'b0, free: 1'b0};
            for (int i = 32; i < NUM_REG; i++)
                tag_buffer[i] <= '{freeComm: 1'b1, ready: 1'b0, free: 1'b1};
        end 

        else if (flush) begin
            // Restore free bitmap; leave freeComm/ready intact
            // so commit and CDB progress since the snapshot isn't lost.
            for (int b = 0; b < NUM_REG; b++)
                tag_buffer[b].free <= IN_free[b];
        end 

        else if (stall) begin
            // Stall: no changes to tag_buffer; just wait for the
            // next cycle with the same inputs but no stall/flush.
            tag_buffer <= tag_buffer;
        end

        else begin
            // CDB: broadcast results → mark tags ready
            for (int i = 0; i < ISSUE_WIDTH; i++)
                if (CDB_valid[i])
                    tag_buffer[CDB_tag[i]].ready <= 1'b1;

            // Commit: free the old commTag, clear freeComm on new commTag
            for (int i = 0; i < COMMIT_WIDTH; i++) begin
                if (commit_packet[i].valid &&
                    commit_packet[i].archTag != 5'd0) begin
                    tag_buffer[commit_packet[i].comTag].freeComm <= 1'b0;
                    tag_buffer[free_CommTag[i]].freeComm         <= 1'b1;
                    tag_buffer[free_CommTag[i]].free             <= 1'b1;
                end
            end

            // Allocate: claim the tags chosen this cycle
            for (int i = 0; i < DECODE_WIDTH; i++)
                if (req_valid[i]) begin
                    tag_buffer[chosen[i]].ready <= 1'b0;
                    tag_buffer[chosen[i]].free  <= 1'b0;
                end
            end
    end

    // ── 7b. rename_table ──────────────────────────────────
    always_ff @(posedge clk) begin
        if (rst) begin
            for (int r = 0; r < 32; r++) begin
                rename_table[r].specTag <= REG_ADDR_WIDTH'(r);
                rename_table[r].commTag <= REG_ADDR_WIDTH'(r);
            end
        end 

        else if (flush) begin
            // Restore specTag only; commTag tracks architectural
            // state and is unaffected by a mispredict.
            for (int r = 0; r < 32; r++)
                rename_table[r].specTag <= IN_specTag[r];
        end 
        
        else if (stall) begin
            // Stall: no changes to rename_table; just wait for the
            // next cycle with the same inputs but no stall/flush.
            rename_table <= rename_table;
        end
        
        else begin
            // Normal: advance specTag to end-of-group RAT state
            for (int r = 0; r < 32; r++)
                rename_table[r].specTag <= local_rat[DECODE_WIDTH][r];

            // Commit always advances commTag
            for (int i = 0; i < COMMIT_WIDTH; i++) begin
                if (commit_packet[i].valid &&
                    commit_packet[i].archTag != 5'd0) begin
                    rename_table[commit_packet[i].archTag].commTag
                        <= commit_packet[i].comTag;
                end
            end
        end
    end

endmodule
