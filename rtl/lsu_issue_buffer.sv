import include_pkg::*;

module lsu_issue_buffer #(
    parameter int DEPTH = ISSUEB_SIZE
)(
    input       logic                          clk,
    input       logic                          rst,
    input       lsu_dispatch_instr_t           IN_instr,

    input       logic                          flush,
    input       sqN_t                          flush_sqN,

    input       logic                          tag_ready         [2],
    input       logic          [31:0]          RF_data           [2],

    input       tag_t                          CDB_tag           [ISSUE_WIDTH],
    input       logic                          CDB_valid         [ISSUE_WIDTH],

    output      lsu_issue_instr_t              OUT_instr,

    output      tag_t                          check_ready       [2],
    output      tag_t                          read_tag          [2],

    output      logic                          OUT_busy
);

    typedef struct packed {
        logic               valid;
        sqN_t               sqN;
        oper_t              oper;
        tag_t               rs1_tag;
        tag_t               rs2_tag;
        tag_t               rd_tag;
        imm_t               imm;
        logic               is_imm;
        logic               ready_1;
        logic               ready_2;
    } lsu_buffer_entry_t;

    localparam TAIL_W = $clog2(DEPTH);

    // State Registers
    lsu_buffer_entry_t           queue [DEPTH];
    logic [TAIL_W-1:0]           tail;

    // Combinational signals
    logic [DEPTH-1:0]            ready_mask;
    logic [TAIL_W-1:0]           issue_idx;
    logic                        issue_found;

    logic [XLEN-1:0]             rs1_data;
    logic [XLEN-1:0]             rs2_data;

    logic                        dispatch_cdb_match_1;
    logic                        dispatch_cdb_match_2;
    logic                        dispatch_ready_1;
    logic                        dispatch_ready_2;

    // --- Interface Assignments ---
    assign check_ready[0] = IN_instr.rs1_tag;
    assign check_ready[1] = IN_instr.rs2_tag;

    assign read_tag[0]    = queue[issue_idx].rs1_tag;
    assign read_tag[1]    = queue[issue_idx].rs2_tag;

    assign rs1_data       = RF_data[0];
    assign rs2_data       = RF_data[1];

    assign OUT_busy       = (tail == TAIL_W'(DEPTH - 1));

    // --- CDB Snoop at Dispatch ---
    always_comb begin
        dispatch_cdb_match_1 = 1'b0;
        dispatch_cdb_match_2 = 1'b0;
        for (int j = 0; j < ISSUE_WIDTH; j++) begin
            if (CDB_valid[j] && (CDB_tag[j] == IN_instr.rs1_tag))
                dispatch_cdb_match_1 = 1'b1;
            if (CDB_valid[j] && (CDB_tag[j] == IN_instr.rs2_tag))
                dispatch_cdb_match_2 = 1'b1;
        end
    end

    assign dispatch_ready_1 = tag_ready[0] || dispatch_cdb_match_1;
    assign dispatch_ready_2 = tag_ready[1] || dispatch_cdb_match_2;

    // --- Ready Mask Logic ---
    logic r1 [DEPTH];
    logic r2 [DEPTH];

    always_comb begin
        for (int i = 0; i < DEPTH; i++) begin
            r1[i] = queue[i].ready_1;
            r2[i] = queue[i].ready_2;
            for (int j = 0; j < ISSUE_WIDTH; j++) begin
                if (CDB_valid[j] && (CDB_tag[j] == queue[i].rs1_tag))
                    r1[i] = 1'b1;
                if (CDB_valid[j] && (CDB_tag[j] == queue[i].rs2_tag))
                    r2[i] = 1'b1;
            end
            ready_mask[i] = queue[i].valid & r1[i] & r2[i];
        end
    end

    priority_encoder #(.WIDTH(DEPTH)) pe (
        .req        (ready_mask),
        .grant_idx  (issue_idx),
        .grant_valid(issue_found)
    );

    // --- Sequential Logic ---
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (int i = 0; i < DEPTH; i++) begin
                queue[i] <= '0;
            end
            tail      <= '0;
            OUT_instr <= '0;
        end else begin
            lsu_buffer_entry_t next_queue [DEPTH];
            logic [TAIL_W:0] next_tail;

            next_queue = queue;
            next_tail  = {1'b0, tail};

            // 1. FLUSH
            if (flush) begin
                next_tail = '0;
                for (int i = 0; i < DEPTH; i++) begin
                    if (queue[i].valid) begin
                        automatic sqN_t diff = flush_sqN - queue[i].sqN;
                        if (diff < sqN_t'(ROB_SIZE)) begin
                            next_queue[next_tail[TAIL_W-1:0]] = queue[i];
                            next_tail++;
                        end
                    end
                end
                for (int i = 0; i < DEPTH; i++) begin
                    if (i >= next_tail) next_queue[i] = '0;
                end

            end else begin
                // 2. CDB UPDATE (Wakeup)
                for (int i = 0; i < DEPTH; i++) begin
                    next_queue[i].ready_1 = r1[i];
                    next_queue[i].ready_2 = r2[i];
                end

                // 3. ISSUE
                if (issue_found) begin
                    OUT_instr.valid    <= 1'b1;
                    OUT_instr.sqN      <= next_queue[issue_idx].sqN;
                    OUT_instr.oper     <= next_queue[issue_idx].oper;
                    OUT_instr.rd_tag   <= next_queue[issue_idx].rd_tag;
                    OUT_instr.operand1 <= rs1_data;
                    OUT_instr.operand2 <= next_queue[issue_idx].is_imm
                                         ? next_queue[issue_idx].imm : '0;
                    OUT_instr.data     <= rs2_data;

                    for (int i = 0; i < DEPTH - 1; i++) begin
                        if (i >= issue_idx)
                            next_queue[i] = next_queue[i+1];
                    end
                    next_queue[DEPTH-1] = '0;
                    if (next_tail > 0) next_tail = next_tail - 1;

                end else begin
                    OUT_instr.valid <= 1'b0;
                end

                // 4. DISPATCH  
                if (IN_instr.valid && (next_tail < (TAIL_W+1)'(DEPTH - 1))) begin
                    next_queue[next_tail[TAIL_W-1:0]].valid   = 1'b1;
                    next_queue[next_tail[TAIL_W-1:0]].sqN     = IN_instr.sqN;
                    next_queue[next_tail[TAIL_W-1:0]].oper    = IN_instr.oper;
                    next_queue[next_tail[TAIL_W-1:0]].rs1_tag = IN_instr.rs1_tag;
                    next_queue[next_tail[TAIL_W-1:0]].rs2_tag = IN_instr.rs2_tag;
                    next_queue[next_tail[TAIL_W-1:0]].rd_tag  = IN_instr.rd_tag;
                    next_queue[next_tail[TAIL_W-1:0]].imm     = IN_instr.imm;
                    next_queue[next_tail[TAIL_W-1:0]].is_imm  = IN_instr.is_imm;
                    next_queue[next_tail[TAIL_W-1:0]].ready_1 = dispatch_ready_1;
                    next_queue[next_tail[TAIL_W-1:0]].ready_2 = dispatch_ready_2;
                    next_tail = next_tail + 1;
                end
            end

            queue <= next_queue;
            tail  <= next_tail[TAIL_W-1:0];
        end
    end

endmodule