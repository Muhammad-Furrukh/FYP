import include_pkg::*;

module lsu_issue_buffer #(
    parameter int DEPTH = ISSUEB_SIZE
)(
    input       logic                          clk,
    input       logic                          rst,
    input       lsu_dispatch_instr_t           IN_instr,

    input       logic                          flush,
    input       sqN_t                          flush_sqN,
    input       logic          [31:0]          RF_data           [2],

    input       tag_t                          CDB_tag           [ISSUE_WIDTH],
    input       logic          [XLEN-1:0]      CDB_result        [ISSUE_WIDTH],
    input       logic                          CDB_valid         [ISSUE_WIDTH],

    output      lsu_issue_instr_t              OUT_instr,

    output      logic                          OUT_busy
);

    typedef struct packed {
        logic               valid;
        sqN_t               sqN;
        oper_t              oper;
        tag_t               rs1_tag;
        logic   [XLEN-1:0]  data1;
        tag_t               rs2_tag;
        logic   [XLEN-1:0]  data2;
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

    assign OUT_busy       = (tail == TAIL_W'(DEPTH - 1));

    // --- Ready Mask Logic ---
    logic            r1    [DEPTH];
    logic            r2    [DEPTH];
    logic [XLEN-1:0] data1 [DEPTH];
    logic [XLEN-1:0] data2 [DEPTH];

    always_comb begin
        for (int i = 0; i < DEPTH; i++) begin
            r1[i]    = queue[i].ready_1;
            r2[i]    = queue[i].ready_2;
            data1[i] = queue[i].data1;
            data2[i] = queue[i].data2;
            for (int j = 0; j < ISSUE_WIDTH; j++) begin
                if (!queue[i].ready_1  && CDB_valid[j] && (CDB_tag[j] == queue[i].rs1_tag)) begin
                    r1[i]    = 1'b1;
                    data1[i] = CDB_result[j];
                end
                if (!queue[i].ready_2 && CDB_valid[j] && (CDB_tag[j] == queue[i].rs2_tag)) begin
                    r2[i]    = 1'b1;
                    data2[i] = CDB_result[j];
                end
            end
            ready_mask[i] = queue[i].valid & r1[i] & r2[i];
        end
    end

    priority_encoder #(.WIDTH(DEPTH)) pe (
        .req        (ready_mask),
        .grant_idx  (issue_idx),
        .grant_valid(issue_found)
    );

    // Next queue and tail logic (combinational)
    lsu_buffer_entry_t             next_queue         [DEPTH];
    logic                   [TAIL_W:0] next_tail; // One extra bit to detect overflow
    lsu_issue_instr_t                  next_issue_instr;
    always_comb begin
        next_queue = queue;
        next_tail  = {{1'b0}, tail};
        next_issue_instr = '0;

        // 1. Flush Logic
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
            // Clear remaining slots
            for (int i = 0; i < DEPTH; i++) begin
                if (i >= next_tail) next_queue[i] = '0;
            end   
        end

        else begin
            // 2. CDB UPDATE (Wakeup)
            for (int i = 0; i < DEPTH; i++) begin
                next_queue[i].ready_1 = r1[i];
                next_queue[i].ready_2 = r2[i];
                next_queue[i].data1   = data1[i];
                next_queue[i].data2   = data2[i];
            end

            // 3. ISSUE LOGIC (Shift Queue)
            if (issue_found) begin
                next_issue_instr.valid    = 1'b1;
                next_issue_instr.sqN      = next_queue[issue_idx].sqN;
                next_issue_instr.operand1 = data1[issue_idx];               
                next_issue_instr.operand2 = next_queue[issue_idx].is_imm ? next_queue[issue_idx].imm : data2[issue_idx];               
                next_issue_instr.oper     = next_queue[issue_idx].oper;
                next_issue_instr.rd_tag   = next_queue[issue_idx].rd_tag;
                next_issue_instr.data     = data2[issue_idx];

                // Shift elements down
                for (int i = 0; i < DEPTH - 1; i++) begin
                    if (i >= issue_idx)
                        next_queue[i] = next_queue[i+1];
                end

                next_queue[DEPTH-1] = '0;
                if (next_tail > 0)
                    next_tail = next_tail - 1;
            end

            // 4. DISPATCH LOGIC
            if (IN_instr.valid && (next_tail < (TAIL_W+1)'(DEPTH-1))) begin
                next_queue[next_tail[TAIL_W-1:0]].valid      = 1'b1;
                next_queue[next_tail[TAIL_W-1:0]].sqN        = IN_instr.sqN;
                next_queue[next_tail[TAIL_W-1:0]].oper       = IN_instr.oper;
                next_queue[next_tail[TAIL_W-1:0]].rs1_tag    = IN_instr.rs1_tag;
                next_queue[next_tail[TAIL_W-1:0]].data1      = IN_instr.rs1_ready ? RF_data[0] : '0;
                next_queue[next_tail[TAIL_W-1:0]].rs2_tag    = IN_instr.rs2_tag;
                next_queue[next_tail[TAIL_W-1:0]].data2      = IN_instr.rs2_ready ? RF_data[1] : '0;
                next_queue[next_tail[TAIL_W-1:0]].rd_tag     = IN_instr.rd_tag;
                next_queue[next_tail[TAIL_W-1:0]].imm        = IN_instr.imm;
                next_queue[next_tail[TAIL_W-1:0]].is_imm     = IN_instr.is_imm;
                next_queue[next_tail[TAIL_W-1:0]].ready_1    = IN_instr.rs1_ready;
                next_queue[next_tail[TAIL_W-1:0]].ready_2    = IN_instr.rs2_ready;
                next_tail = next_tail + 1;
            end
        end
    end


    // --- Buffer ---
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (int i = 0; i < DEPTH; i++)
                queue[i]      <= '0;
            tail       <= '0;
        end 
        
        // Final Assignment to actual Buffer registers
        else begin
            queue <= next_queue;
            tail  <= next_tail[TAIL_W-1:0];
        end
    end

    // --- Output Reg ---
    lsu_issue_instr_t            registered_out_instr;
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            registered_out_instr <= '0;
        end

        else if (flush) begin
            automatic sqN_t diff = flush_sqN - OUT_instr.sqN;
            if (diff < sqN_t'(ROB_SIZE)) begin
                registered_out_instr <= registered_out_instr; // Keep if still valid
            end

            else begin
                registered_out_instr <= '0;
            end
        end

        else if (issue_found) begin
            registered_out_instr <= next_issue_instr;
        end

        else begin
            registered_out_instr  <= '0;
        end
    end

    // Final output
    assign OUT_instr = (flush)? '0: registered_out_instr;

endmodule
