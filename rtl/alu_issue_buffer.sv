import include_pkg::*;

module alu_issue_buffer #(
    parameter int DEPTH = ISSUEB_SIZE,
    parameter int NUM_INT_FU = NUM_ALU_FU + NUM_MUL_DIV_FU
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
    output      sqN_t                          OUT_sqN,

    output      tag_t                          check_ready       [2],
    output      tag_t                          read_tag          [2],

    output      logic                          OUT_busy
);

    alu_dispatch_instr_t         queue [DEPTH];                 
    logic [$clog2(DEPTH):0]      tail;           

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
    
    // To Tag Buffer
    assign check_ready[0]= IN_instr.rs1_tag;
    assign check_ready[1]= IN_instr.rs2_tag;

    // To RF
    assign read_tag[0]   = queue[issue_idx].rs1_tag;
    assign read_tag[1]   = queue[issue_idx].rs2_tag;

    assign is_jump = (IN_instr.jump_type == 2'b10) || (IN_instr.jump_type == 2'b01);
    assign sel_ready2 = is_jump || IN_instr.is_imm;

    assign dispatch_ready_1 = is_jump ? 1'b1 : tag_ready[0];
    assign dispatch_ready_2 = sel_ready2 ? 1'b1 : tag_ready[1];
    
    assign OUT_busy = (tail == DEPTH-1);
 
    always_comb begin
        for (int i = 0; i < DEPTH; i++) begin
            if (queue[i].valid) begin
                logic r1, r2;
                r1 = queue[i].ready_1;
                r2 = queue[i].ready_2;
                // check live CDB for not-yet-ready operands
                for (int j = 0; j < ISSUE_WIDTH; j++) begin
                    if (CDB_valid[j] && !r1 &&
                        CDB_tag[j] == queue[i].rs1_tag) r1 = 1'b1;
                    if (CDB_valid[j] && !r2 &&
                        CDB_tag[j] == queue[i].rs2_tag) r2 = 1'b1;
                end
                ready_mask[i] = r1 & r2;
            end else begin
                ready_mask[i] = 1'b0;
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
            if (CDB_valid[j] &&
                !queue[issue_idx].ready_1 &&
                queue[issue_idx].rs1_tag == CDB_tag[j])
                rs1_data_selected = CDB_result[j];
        end
    end
    end

    always_comb begin
        rs2_data_selected = '0;
        if (issue_valid) begin
            rs2_data_selected = RF_data[1];
            for (int j = 0; j < ISSUE_WIDTH; j++) begin
                if (CDB_valid[j] && !queue[issue_idx].ready_2 &&
                    queue[issue_idx].rs2_tag == CDB_tag[j])
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

    assign op1 = sel1
            ? {{(XLEN-$bits(pc_t)){1'b0}}, queue[issue_idx].pc}
            : rs1_data_selected;

    assign op2 =
    sel2[1] ? {{(XLEN-3){1'b0}}, 3'd4} :
    sel2[0] ? queue[issue_idx].imm
            : rs2_data_selected;
 
    branch_comparator bc (
        .rs1_data (rs1_data_selected),
        .rs2_data (rs2_data_selected),
        .br_type  (issue_valid ? queue[issue_idx].br_type :NOT_BRANCH),
        .br_taken (OUT_br_taken)
    );

    logic [$clog2(DEPTH):0] new_tail;
    always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        for (int i = 0; i < DEPTH; i++) begin
            queue[i] <= '0;
        end
        tail <= '0;
  
    end else begin
        new_tail = tail;
        // 1. FLUSH   
        if (flush) begin
            new_tail = '0;
            for (int i = 0; i < DEPTH; i++) begin
                if (queue[i].valid) begin
                    automatic sqN_t diff;
                    diff = flush_sqN - queue[i].sqN;
                    if (diff < sqN_t'(ROB_SIZE)) begin
                        new_tail++;
                    end
                end
            end

            for (int i = new_tail; i < DEPTH; i++) begin
                queue[i].valid <= 0;
            end
        end

        else begin
            // 2. CDB UPDATE (wakeup) 
            for (int i = 0; i < DEPTH; i++) begin
                if (queue[i].valid) begin
                    for (int j = 0; j < ISSUE_WIDTH; j++) begin
                        if (CDB_valid[j]) begin
                            if (!queue[i].ready_1 &&
                                CDB_tag[j] == queue[i].rs1_tag)
                                queue[i].ready_1 <= 1'b1;

                            if (!queue[i].ready_2 &&
                                CDB_tag[j] == queue[i].rs2_tag)
                                queue[i].ready_2 <= 1'b1;
                        end
                    end
                end
            end
 
            // 3. ISSUE 
            if (issue_valid) begin
                OUT_instr.valid    <= 1'b1;
                OUT_instr.sqN      <= queue[issue_idx].sqN;
                OUT_instr.operand1 <= op1;
                OUT_instr.operand2 <= op2;
                OUT_instr.oper     <= queue[issue_idx].oper;
                OUT_instr.rd_tag   <= queue[issue_idx].rd_tag;

                OUT_sqN       <= queue[issue_idx].sqN;
                OUT_pc        <= queue[issue_idx].pc;
                OUT_jump_type <= queue[issue_idx].jump_type;
                OUT_br_type   <= queue[issue_idx].br_type;
                rs1_result    <= rs1_data_selected;
                imm           <= queue[issue_idx].imm;

                for (int i = issue_idx; i < DEPTH-1; i++)
                    queue[i] <= queue[i+1];

                queue[DEPTH-1] <= '0;

                if (new_tail > 0)
                    new_tail = new_tail - 1;

            end
            //4 . DISPATCH
            if (IN_instr.valid && !OUT_busy) begin
                alu_dispatch_instr_t temp;
                temp.valid      = 1'b1;
                temp.sqN        = IN_instr.sqN;
                temp.pc         = IN_instr.pc;
                temp.oper       = IN_instr.oper;

                temp.rs1_tag    = IN_instr.rs1_tag;
                temp.rs2_tag    = IN_instr.rs2_tag;
                temp.rd_tag     = IN_instr.rd_tag;

                temp.imm        = IN_instr.imm;
                temp.is_imm     = IN_instr.is_imm;

                temp.jump_type  = IN_instr.jump_type;
                temp.br_type    = IN_instr.br_type;
                temp.u_type     = IN_instr.u_type;

                temp.ready_1    = dispatch_ready_1;
                temp.ready_2    = dispatch_ready_2;

                queue[new_tail] <= temp;
                new_tail = new_tail + 1;

                end
            tail <= new_tail;
            end      
        end 
    end
endmodule
  
 