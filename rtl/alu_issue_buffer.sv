import include_pkg::*;

module alu_issue_buffer #(
    parameter int DEPTH = ISSUEB_SIZE
)(
    input       logic                          clk,
    input       logic                          rst,
    input       alu_dispatch_instr_t           IN_instr,

    input       logic                          flush,
    input       sqN_t                          flush_sqN,

    input       logic                          tag_ready         [2],
    input       logic          [31:0]          RF_data           [2],

    input       logic          [XLEN-1:0]      CDB_result        [ISSUE_WIDTH],
    input       tag_t                          CDB_tag           [ISSUE_WIDTH],
    input       logic                          CDB_valid         [ISSUE_WIDTH],

    output      issue_instr_t                  OUT_instr,

    output      logic                          OUT_br_taken,
    output      jump_type_t                    OUT_jump_type,
    output      pc_t                           OUT_pc,
    output      logic           [XLEN-1:0]     rs1_result,
    output      logic           [XLEN-1:0]     imm,
    output      tag_t                          check_ready       [2],
    output      tag_t                          read_tag          [2],
    output      logic                          OUT_busy
);

    typedef struct packed {
        logic               valid;
        sqN_t               sqN;
        pc_t                pc;
        oper_t              oper;
        tag_t               rs1_tag;
        tag_t               rs2_tag;
        tag_t               rd_tag;
        imm_t               imm;
        logic               is_imm;
        jump_type_t         jump_type;
        br_type_t           br_type;
        u_type_t            u_type;
        logic               ready_1;
        logic               ready_2;
    } alu_buffer_entry_t;

    // Registers
    alu_buffer_entry_t           queue [DEPTH];                 
    logic [$clog2(DEPTH):0]      tail;           

    // Combinational Logic
    logic [DEPTH-1:0]            ready_mask;
    logic [$clog2(DEPTH)-1:0]    issue_idx;
    logic                        issue_found;

    logic [XLEN-1:0]             rs1_data_selected;
    logic [XLEN-1:0]             rs2_data_selected;

    logic                        sel1;
    logic [1:0]                  sel2;

    logic [XLEN - 1:0]           op1;
    logic [XLEN - 1:0]           op2;

    logic                        is_jump;
    logic                        sel_ready2;
    logic                        dispatch_ready_1;
    logic                        dispatch_ready_2;
    logic                        issue_valid;
    
    // --- Interface Assignments ---
    assign check_ready[0] = IN_instr.rs1_tag;
    assign check_ready[1] = IN_instr.rs2_tag;

    assign read_tag[0]    = queue[issue_idx].rs1_tag;
    assign read_tag[1]    = queue[issue_idx].rs2_tag;

    assign is_jump        = (IN_instr.jump_type == 2'b10) || (IN_instr.jump_type == 2'b01);
    assign sel_ready2     = is_jump || IN_instr.is_imm;

    assign dispatch_ready_1 = is_jump ? 1'b1 : tag_ready[0];
    assign dispatch_ready_2 = sel_ready2 ? 1'b1 : tag_ready[1];
    
    assign OUT_busy       = (tail == DEPTH - 1);

    // --- Ready Mask Logic ---
    always_comb begin
        ready_mask = '0;
        for (int i = 0; i < DEPTH; i++) begin
            if (queue[i].valid) begin
                logic r1, r2;
                r1 = queue[i].ready_1;
                r2 = queue[i].ready_2;
                // check live CDB for not-yet-ready operands (bypass)
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

    // --- Operand Selection Logic ---
    always_comb begin
        rs1_data_selected = '0;
        if (issue_valid) begin
            rs1_data_selected = RF_data[0];
            for (int j = 0; j < ISSUE_WIDTH; j++) begin
                if (CDB_valid[j] && 
                   !queue[issue_idx].ready_1 && 
                   (queue[issue_idx].rs1_tag == CDB_tag[j]))
                    rs1_data_selected = CDB_result[j];
            end
        end
    end

    always_comb begin
        rs2_data_selected = '0;
        if (issue_valid) begin
            rs2_data_selected = RF_data[1];
            for (int j = 0; j < ISSUE_WIDTH; j++) begin
                if (CDB_valid[j] && 
                !queue[issue_idx].ready_2 && 
                (queue[issue_idx].rs2_tag == CDB_tag[j]))
                    rs2_data_selected = CDB_result[j];
            end
        end
    end
    
    always_comb begin
        sel1 = '0;
        sel2 = '0;
        if (issue_valid) begin
            sel1 = (queue[issue_idx].jump_type == 2'b10) ||
                   (queue[issue_idx].jump_type == 2'b01) ||
                   (queue[issue_idx].u_type    == 2'b01);

            sel2[1] = (queue[issue_idx].jump_type == 2'b01) ||
                      (queue[issue_idx].jump_type == 2'b10);

            sel2[0] = (queue[issue_idx].u_type    == 2'b10) ||
                      (queue[issue_idx].u_type    == 2'b01) ||
                      (queue[issue_idx].jump_type == 2'b01) ||
                      (queue[issue_idx].jump_type == 2'b10) ||
                      queue[issue_idx].is_imm;
        end
    end

    assign op1 = sel1 ? {{(XLEN-$bits(pc_t)){1'b0}}, queue[issue_idx].pc} : rs1_data_selected;
    assign op2 = sel2[1] ? {{(XLEN-3){1'b0}}, 3'd4} :
                 sel2[0] ? queue[issue_idx].imm : rs2_data_selected;
 
    branch_comparator bc (
        .rs1_data (rs1_data_selected),
        .rs2_data (rs2_data_selected),
        .br_type  (issue_valid ? queue[issue_idx].br_type : NOT_BRANCH),
        .br_taken (OUT_br_taken)
    );

    // --- Sequential Logic ---
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (int i = 0; i < DEPTH; i++) begin
                queue[i] <= '0;
            end
            tail       <= '0;
            OUT_instr  <= '0;
            OUT_pc     <= '0;
            rs1_result <= '0;
            imm        <= '0;
        end else begin
            // Temporary variables for blocking logic
            alu_buffer_entry_t next_queue [DEPTH];
            logic [$clog2(DEPTH):0] next_tail;
            
            next_queue = queue;
            next_tail  = tail;

            // 1. FLUSH LOGIC
            if (flush) begin
                next_tail = '0;
                for (int i = 0; i < DEPTH; i++) begin
                    if (queue[i].valid) begin
                        automatic sqN_t diff = flush_sqN - queue[i].sqN;
                        if (diff < sqN_t'(ROB_SIZE)) begin
                            next_queue[next_tail] = queue[i];
                            next_tail++;
                        end
                    end
                end
                // Clear remaining slots
                for (int i = 0; i < DEPTH; i++) begin
                    if (i >= next_tail) next_queue[i] = '0;
                end
            end else begin
                // 2. CDB UPDATE (Wakeup)
                for (int i = 0; i < DEPTH; i++) begin
                    if (next_queue[i].valid) begin
                        for (int j = 0; j < ISSUE_WIDTH; j++) begin
                            if (CDB_valid[j]) begin
                                if (!next_queue[i].ready_1 && (CDB_tag[j] == next_queue[i].rs1_tag))
                                    next_queue[i].ready_1 = 1'b1;
                                if (!next_queue[i].ready_2 && (CDB_tag[j] == next_queue[i].rs2_tag))
                                    next_queue[i].ready_2 = 1'b1;
                            end
                        end
                    end
                end

                // 3. ISSUE LOGIC (Shift Queue)
                if (issue_valid) begin
                    // Register Outputs
                    OUT_instr.valid    <= 1'b1;
                    OUT_instr.sqN      <= next_queue[issue_idx].sqN;
                    OUT_instr.operand1 <= op1;
                    OUT_instr.operand2 <= op2;
                    OUT_instr.oper     <= next_queue[issue_idx].oper;
                    OUT_instr.rd_tag   <= next_queue[issue_idx].rd_tag;

                    OUT_pc        <= next_queue[issue_idx].pc;
                    OUT_jump_type <= next_queue[issue_idx].jump_type;
                    rs1_result    <= rs1_data_selected;
                    imm           <= next_queue[issue_idx].imm;

                    // Shift elements down
                    for (int i = 0; i < DEPTH - 1; i++) begin
                        if (i >= issue_idx) begin
                            next_queue[i] = next_queue[i+1];
                        end
                    end
                    next_queue[DEPTH-1] = '0;
                    if (next_tail > 0) next_tail = next_tail - 1;
                end else begin
                    OUT_instr.valid <= 1'b0;
                end

                // 4. DISPATCH LOGIC
                if (IN_instr.valid && (next_tail < DEPTH)) begin
                    next_queue[next_tail].valid      = 1'b1;
                    next_queue[next_tail].sqN        = IN_instr.sqN;
                    next_queue[next_tail].pc         = IN_instr.pc;
                    next_queue[next_tail].oper       = IN_instr.oper;
                    next_queue[next_tail].rs1_tag    = IN_instr.rs1_tag;
                    next_queue[next_tail].rs2_tag    = IN_instr.rs2_tag;
                    next_queue[next_tail].rd_tag     = IN_instr.rd_tag;
                    next_queue[next_tail].imm        = IN_instr.imm;
                    next_queue[next_tail].is_imm     = IN_instr.is_imm;
                    next_queue[next_tail].jump_type  = IN_instr.jump_type;
                    next_queue[next_tail].br_type    = IN_instr.br_type;
                    next_queue[next_tail].u_type     = IN_instr.u_type;
                    next_queue[next_tail].ready_1    = dispatch_ready_1;
                    next_queue[next_tail].ready_2    = dispatch_ready_2;
                    next_tail = next_tail + 1;
                end
            end

            // Final Assignment to actual Registers
            queue <= next_queue;
            tail  <= next_tail;
        end
    end

endmodule
