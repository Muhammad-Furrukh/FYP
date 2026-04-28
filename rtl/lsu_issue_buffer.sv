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

    input       logic          [XLEN-1:0]      CDB_result        [ISSUE_WIDTH],
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

    // Registers
    lsu_buffer_entry_t           queue [DEPTH];
    logic [$clog2(DEPTH):0]      tail;

    // Combinational signals
    logic [DEPTH-1:0]            ready_mask;
    logic [$clog2(DEPTH)-1:0]    issue_idx;
    logic                        issue_found;
    logic [XLEN-1:0]             rs1_data_selected;
    logic [XLEN-1:0]             rs2_data_selected;
    logic                        issue_valid;
    logic                        dispatch_ready_1;
    logic                        dispatch_ready_2;
 
    // --- Interface Assignments ---
    assign check_ready[0] = IN_instr.rs1_tag;
    assign check_ready[1] = IN_instr.rs2_tag;
 
    assign read_tag[0]    = queue[issue_idx].rs1_tag;
    assign read_tag[1]    = queue[issue_idx].rs2_tag;
 
    assign dispatch_ready_1 = tag_ready[0];
    assign dispatch_ready_2 = tag_ready[1];

    assign OUT_busy       = (tail == DEPTH);
 
    // --- Combinational Logic (Using Blocking =) ---
    always_comb begin
        ready_mask = '0;
        for (int i = 0; i < DEPTH; i++) begin
            if (queue[i].valid) begin
                logic r1, r2;
                r1 = queue[i].ready_1;
                r2 = queue[i].ready_2;
                for (int j = 0; j < ISSUE_WIDTH; j++) begin
                    if (CDB_valid[j] && !r1 && (CDB_tag[j] == queue[i].rs1_tag)) r1 = 1'b1;
                    if (CDB_valid[j] && !r2 && (CDB_tag[j] == queue[i].rs2_tag)) r2 = 1'b1;
                end
                ready_mask[i] = r1 & r2;
            end
        end
    end

    priority_encoder #(.WIDTH(DEPTH)) pe (
        .req        (ready_mask),
        .grant_idx  (issue_idx),
        .grant_valid(issue_found)
    );

    assign issue_valid = issue_found && !flush;
 
    always_comb begin
        rs1_data_selected = '0;
        if (issue_valid) begin
            rs1_data_selected = RF_data[0];
            for (int j = 0; j < ISSUE_WIDTH; j++) begin
                if (CDB_valid[j] && !queue[issue_idx].ready_1 && (queue[issue_idx].rs1_tag == CDB_tag[j]))
                    rs1_data_selected = CDB_result[j];
            end
        end
    end
 
    always_comb begin
        rs2_data_selected = '0;
        if (issue_valid) begin
            rs2_data_selected = RF_data[1];
            for (int j = 0; j < ISSUE_WIDTH; j++) begin
                if (CDB_valid[j] && !queue[issue_idx].ready_2 && (queue[issue_idx].rs2_tag == CDB_tag[j]))
                    rs2_data_selected = CDB_result[j];
            end
        end
    end
 
    // --- Sequential Logic (Blocking for Logic, Non-Blocking for Regs) ---
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (int i = 0; i < DEPTH; i++) begin
                queue[i] <= '0;
            end
            tail      <= '0;
            OUT_instr <= '0;
        end else begin
            // Temporary variables for logic
            lsu_buffer_entry_t v_queue [DEPTH];
            logic [$clog2(DEPTH):0] v_tail;

            v_queue = queue;
            v_tail  = tail;

            // 1. FLUSH (Blocking logic on variables)
            if (flush) begin
                v_tail = '0;
                for (int i = 0; i < DEPTH; i++) begin
                    if (queue[i].valid) begin
                        automatic sqN_t diff = flush_sqN - queue[i].sqN;
                        if (diff < sqN_t'(ROB_SIZE)) begin
                            v_queue[v_tail] = queue[i];
                            v_tail = v_tail + 1;
                        end
                    end
                end
                for (int i = 0; i < DEPTH; i++) begin
                    if (i >= v_tail) v_queue[i] = '0;
                end
            end else begin
                // 2. CDB WAKEUP
                for (int i = 0; i < DEPTH; i++) begin
                    if (v_queue[i].valid) begin
                        for (int j = 0; j < ISSUE_WIDTH; j++) begin
                            if (CDB_valid[j]) begin
                                if (!v_queue[i].ready_1 && (CDB_tag[j] == v_queue[i].rs1_tag))
                                    v_queue[i].ready_1 = 1'b1;
                                if (!v_queue[i].ready_2 && (CDB_tag[j] == v_queue[i].rs2_tag))
                                    v_queue[i].ready_2 = 1'b1;
                            end
                        end
                    end
                end

                // 3. ISSUE (Shift logic on variables)
                if (issue_valid) begin
                    // Output assignments (Non-blocking)
                    OUT_instr.valid    <= 1'b1;
                    OUT_instr.sqN      <= v_queue[issue_idx].sqN;
                    OUT_instr.oper     <= v_queue[issue_idx].oper;
                    OUT_instr.rd_tag   <= v_queue[issue_idx].rd_tag;
                    OUT_instr.operand1 <= rs1_data_selected;
                    OUT_instr.operand2 <= v_queue[issue_idx].is_imm ? v_queue[issue_idx].imm : '0;
                    OUT_instr.data     <= rs2_data_selected;

                    // Sequential shift in the variable array
                    for (int i = 0; i < DEPTH - 1; i++) begin
                        if (i >= issue_idx) begin
                            v_queue[i] = v_queue[i+1];
                        end
                    end
                    v_queue[DEPTH-1] = '0;
                    if (v_tail > 0) v_tail = v_tail - 1;
                end else begin
                    OUT_instr.valid <= 1'b0;
                end

                // 4. DISPATCH
                if (IN_instr.valid && (v_tail < DEPTH)) begin
                    v_queue[v_tail].valid   = 1'b1;
                    v_queue[v_tail].sqN     = IN_instr.sqN;
                    v_queue[v_tail].oper    = IN_instr.oper;
                    v_queue[v_tail].rs1_tag = IN_instr.rs1_tag;
                    v_queue[v_tail].rs2_tag = IN_instr.rs2_tag;
                    v_queue[v_tail].rd_tag  = IN_instr.rd_tag;
                    v_queue[v_tail].imm     = IN_instr.imm;
                    v_queue[v_tail].is_imm  = IN_instr.is_imm;
                    v_queue[v_tail].ready_1 = dispatch_ready_1;
                    v_queue[v_tail].ready_2 = dispatch_ready_2;
                    v_tail = v_tail + 1;
                end
            end

            // Final Register Update (Non-blocking)
            queue <= v_queue;
            tail  <= v_tail;
        end
    end

endmodule
