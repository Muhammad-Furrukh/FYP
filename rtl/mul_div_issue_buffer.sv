import include_pkg::*;clk(clk),
            
module mul_div_issue_buffer #(
    parameter int DEPTH = ISSUEB_SIZE,
    parameter int NUM_INT_FU = NUM_ALU_FU + NUM_MUL_DIV_FU
)(
    input       logic                          clk,
    input       logic                          rst,
    input       mul_div_dispatch_instr_t       IN_instr,

    input       logic                          flush,
    input       sqN_t                          flush_sqN,

    input       logic                          tag_ready         [2],
    input       logic          [31:0]          RF_data           [2],
    input       logic                          IN_busy,

    input       logic          [XLEN-1:0]      CDB_result        [ISSUE_WIDTH],
    input       tag_t                          CDB_tag           [ISSUE_WIDTH],
    input       logic                          CDB_valid         [ISSUE_WIDTH],

    output      issue_instr_t                  OUT_instr,
 

    output      tag_t                          check_ready       [2],
    output      tag_t                          read_tag          [2],

    output      logic                          OUT_busy
);

    mul_div_dispatch_instr_t     queue [DEPTH];     

    logic [$clog2(DEPTH):0]      tail;           

    logic [DEPTH-1:0]            ready_mask;
    logic [$clog2(DEPTH)-1:0]    issue_idx;
    logic                        issue_found;

    logic [XLEN-1:0]             rs1_data_selected;
    logic [XLEN-1:0]             rs2_data_selected;

    logic                        issue_valid;
    
    // To Tag Buffer
    assign check_ready[0]= IN_instr.rs1_tag;
    assign check_ready[1]= IN_instr.rs2_tag;

    // To RF
    assign read_tag[0]   = queue[issue_idx].rs1_tag;
    assign read_tag[1]   = queue[issue_idx].rs2_tag;

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
            if (issue_valid && !IN_busy) begin
                OUT_instr.valid    <= 1'b1;
                OUT_instr.sqN      <= queue[issue_idx].sqN;
                OUT_instr.operand1 <= rs1_data_selected;
                OUT_instr.operand2 <= rs2_data_selected;
                OUT_instr.oper     <= queue[issue_idx].oper;
                OUT_instr.rd_tag   <= queue[issue_idx].rd_tag;

                for (int i = issue_idx; i < DEPTH-1; i++)
                    queue[i] <= queue[i+1];

                queue[DEPTH-1] <= '0;

                if (new_tail > 0)
                    new_tail = new_tail - 1;

            end
            //4 . DISPATCH
            if (IN_instr.valid && !OUT_busy) begin
                mul_div_dispatch_instr_t temp;
                temp.valid      = 1'b1;
                temp.sqN        = IN_instr.sqN;
                temp.oper       = IN_instr.oper;

                temp.rs1_tag    = IN_instr.rs1_tag;
                temp.rs2_tag    = IN_instr.rs2_tag;
                temp.rd_tag     = IN_instr.rd_tag;

                temp.ready_1    = tag_ready[0] ;
                temp.ready_2    = tag_ready[1] ;

                queue[new_tail] <= temp;
                new_tail = new_tail + 1;

                end
            tail <= new_tail;
            end      
        end 
    end
endmodule
 