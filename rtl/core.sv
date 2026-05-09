import include_pkg::*;

module core
(
    input logic clk, clk_m,
    input logic rst, rst_m
);
    logic                     fb_busy;
    logic                     jump1;
    logic                     jump2;
    pc_t                      jta1;
    pc_t                      jta2;
    pc_t                      prefetch_pc    [FETCH_WIDTH];
    logic                     prefetch_valid [FETCH_WIDTH];
    prefetch_instr_t          prefetch_instr [FETCH_WIDTH];

    prefetch prefetch
    (
        .clk(clk),
        .rst(rst),
        .IN_busy(fb_busy),
        .jta1(jta1),
        .jta2(jta2),
        .jump1(jump1),
        .jump2(jump2),
        .OUT_instr(prefetch_instr),
        .OUT_pc(prefetch_pc),
        .OUT_valid(prefetch_valid)
    );

    logic         rename_busy;
    logic         flush;
    fetch_instr_t fetch_instr   [FETCH_WIDTH];

    fetch fetch
    (
        .clk(clk),
        .rst(rst),
        .IN_busy(rename_busy),
        .flush(flush),
        .instr_pc(prefetch_pc),
        .instr_valid(prefetch_valid),
        .IN_instr(prefetch_instr),
        .OUT_busy(fb_busy),
        .jump1(jump1),
        .jta1(jta1),
        .OUT_instr(fetch_instr)
    );

    decode_instr_t decode_instr [DECODE_WIDTH];

    decode decode
    (
        .clk(clk),
        .rst(rst),
        .IN_busy(rename_busy),
        .flush(flush),
        .IN_instr(fetch_instr),
        .OUT_instr(decode_instr)
    );

    logic                        ROB_busy;
    logic                        chkpt_busy;
    tag_t                        restore_specTag     [32];
    logic                        restore_free        [2**REG_ADDR_WIDTH];
    commit_packet_t              commit_packet       [COMMIT_WIDTH];
    tag_t                        read_ready          [ISSUE_WIDTH][2];
    logic                        reg_ready           [ISSUE_WIDTH][2];
    rename_instr_t               rename_instr        [DECODE_WIDTH];
    logic                        chkpt               [DECODE_WIDTH];
    sqN_t                        chkpt_sqN           [DECODE_WIDTH];
    tag_t                        store_specTag       [DECODE_WIDTH][32];
    logic                        store_free          [DECODE_WIDTH][2**REG_ADDR_WIDTH];
    CDB_line_t                   CDB                 [NUM_CDB_LINES];
    tag_t                        CDB_tag             [NUM_CDB_LINES];
    logic                        CDB_valid           [NUM_CDB_LINES];
    logic           [XLEN - 1:0] CDB_result          [NUM_CDB_LINES];
    sqN_t                        CDB_sqN             [NUM_CDB_LINES];  
    logic                        dispatch_unit_busy; 

    always_comb begin
        for (int i = 0; i < NUM_CDB_LINES; i ++) begin
            CDB_tag[i]    = CDB[i].tag;
            CDB_valid[i]  = CDB[i].valid;
            CDB_result[i] = CDB[i].result;
            CDB_sqN[i]    = CDB[i].sqN;
        end
    end

    logic        [4:0] rename_rob_rd [DECODE_WIDTH];
    rename_rob_t       rename_rob    [DECODE_WIDTH];
    always_comb begin
        for (int i = 0; i < DECODE_WIDTH; i++) begin
            rename_rob[i].valid = rename_instr[i].valid;
            rename_rob[i].sqN   = rename_instr[i].sqN;
            rename_rob[i].archTag = rename_rob_rd[i];
            rename_rob[i].rd_tag  = rename_instr[i].rd_tag;
        end
    end

    rename rename
    (
        .clk(clk),
        .rst(rst),
        .ROB_busy(ROB_busy),
        .dispatch_busy(dispatch_unit_busy),
        .flush(flush), .OUT_busy(rename_busy),
        .chkpt_busy(chkpt_busy),
        .IN_specTag(restore_specTag),
        .IN_free(restore_free),
        .commit_packet(commit_packet),
        .IN_instr(decode_instr),
        .CDB_tag(CDB_tag),
        .CDB_valid(CDB_valid),
        .read_tag(read_ready),
        .OUT_instr(rename_instr),
        .reg_ready(reg_ready),
        .chkpt(chkpt),
        .chkpt_sqN(chkpt_sqN),
        .chkpt_specTag(store_specTag),
        .chkpt_free(store_free),
        .OUT_rd(rename_rob_rd)
    );

    logic                    alu_buffer_busy        [NUM_ALU_FU];
    logic                    mul_div_buffer_busy    [NUM_MUL_DIV_FU];
    logic                    lsu_buffer_busy        [NUM_AGU_FU];
    logic                    lsu_busy;
    sqN_t                    flush_sqN;
    logic		     comm_valid		    [COMMIT_WIDTH];	
    sqN_t                    commit_sqN             [COMMIT_WIDTH];
    alu_dispatch_instr_t     alu_dispatch_instr     [NUM_ALU_FU];
    mul_div_dispatch_instr_t mul_div_dispatch_instr [NUM_MUL_DIV_FU];
    lsu_dispatch_instr_t     lsu_dispatch_instr     [NUM_AGU_FU];
    logic                    issue_buffer_busy      [ISSUE_WIDTH];

    always_comb begin
        for (int i = 0; i < COMMIT_WIDTH; i++) begin
            commit_sqN[i]   = commit_packet[i].sqN;
            comm_valid[i]   = commit_packet[i].valid; 
        end

        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            if (i < NUM_ALU_FU) 
                alu_buffer_busy[i]     = issue_buffer_busy[i];
            else if (i < NUM_INT_FU)
                mul_div_buffer_busy[i] = issue_buffer_busy[i];
            else
                lsu_buffer_busy[i]     = issue_buffer_busy[i];
        end
    end

    dispatch dispatch
    (
        .clk(clk),
        .rst(rst),
        .ALU_buffer_busy(alu_buffer_busy),
        .MUL_DIV_buffer_busy(mul_div_buffer_busy),
        .LSU_buffer_busy(lsu_buffer_busy),
        .LSU_busy(lsu_busy),
        .flush(flush),
        .flush_sqN(flush_sqN),
        .comm_valid(comm_valid),
        .commit_sqN(commit_sqN),
        .instr_sqN(chkpt_sqN),
        .IN_instr(rename_instr),
        .checkpoint(chkpt),
        .IN_specTag(store_specTag),
        .IN_free(store_free),
        .OUT_specTag(restore_specTag),
        .OUT_free(restore_free),
        .d_unit_busy(dispatch_unit_busy),
        .check_busy(chkpt_busy),
        .OUT_alu_instr(alu_dispatch_instr),
        .OUT_mul_div_instr(mul_div_dispatch_instr),
        .OUT_lsu_instr(lsu_dispatch_instr)
    );

    tag_t              RF_raddr        [ISSUE_WIDTH][2];
    logic [XLEN - 1:0] RF_read_data    [ISSUE_WIDTH][2];
    logic              mul_div_fu_busy [NUM_MUL_DIV_FU];
    issue_instr_t      int_issue_instr [NUM_INT_FU];
    lsu_issue_instr_t  lsu_issue_instr [NUM_AGU_FU];
    logic              br_taken        [NUM_ALU_FU];
    jump_type_t        jump_type       [NUM_ALU_FU];

    issue issue
    (
        .clk(clk),
        .rst(rst),
        .IN_alu_instr(alu_dispatch_instr),
        .IN_mul_div_instr(mul_div_dispatch_instr),
        .IN_lsu_instr(lsu_dispatch_instr),
        .flush(flush),
        .flush_sqN(flush_sqN),
        .tag_ready(reg_ready),
        .RF_data(RF_read_data),
        .IN_busy(mul_div_fu_busy),
        .CDB_tag(CDB_tag),
        .CDB_valid(CDB_valid),
        .OUT_instr(int_issue_instr),
        .OUT_lsu_instr(lsu_issue_instr),
        .OUT_br_taken(br_taken),
        .OUT_jump_type(jump_type),
        .OUT_busy(issue_buffer_busy),
        .check_ready(read_ready),
        .read_tag(RF_raddr),
        .jta2(jta2),
        .jump2(jump2)
    );

    sqN_t br_jalr_sqN [NUM_ALU_FU];
    always_comb begin
        for (int i = 0; i < NUM_ALU_FU; i++) begin
            br_jalr_sqN[i] = int_issue_instr[i].sqN;
        end
    end

    flush_controller flush_controller
    (
	.clk(clk),          // add this
	.rst(rst),          // add this
	.br_taken(br_taken),
	.sqN(br_jalr_sqN),
	.jump_type(jump_type),
	.flush(flush),
	.flush_sqN(flush_sqN)
    );

    agu_out_t  agu_out       [NUM_AGU_FU];
    CDB_line_t int_cdb_lines [NUM_INT_FU];
    CDB_line_t lsu_cdb_lines [NUM_AGU_FU];

    always_comb begin
        for (int i = 0; i < NUM_INT_FU; i++) begin
            CDB[i] = int_cdb_lines[i];
        end
        for (int i = 0; i < NUM_AGU_FU; i++) begin
            CDB[i + NUM_INT_FU] = lsu_cdb_lines[i];
        end
    end

    execute execute
    (
        .clk(clk),
        .rst(rst),
        .flush(flush),
        .flush_sqN(flush_sqN),
        .int_issue_instr(int_issue_instr),
        .lsu_issue_instr(lsu_issue_instr),
        .CDB_line(int_cdb_lines),
        .agu_out(agu_out),
        .mul_div_busy(mul_div_fu_busy)
    );

    lsu lsu
    (
        .clk(clk),
        .clk_m(clk_m),
        .rst(rst),
        .rst_m(rst_m),
        .dispatch_instr(lsu_dispatch_instr),
        .agu_out(agu_out),
        .commit_sqN(commit_sqN),
        .flush(flush),
        .flush_sqN(flush_sqN),
        .OUT_busy(lsu_busy),
        .OUT_cdb(lsu_cdb_lines)
    );

    logic [XLEN - 1:0] rs1_data [ISSUE_WIDTH];
    logic [XLEN - 1:0] rs2_data [ISSUE_WIDTH];
    tag_t              rs1_addr [ISSUE_WIDTH];
    tag_t              rs2_addr [ISSUE_WIDTH];

    // Block 1: addr — purely driven by RF_raddr (output of issue)
    always_comb begin
	    for (int i = 0; i < ISSUE_WIDTH; i++) begin
		rs1_addr[i] = RF_raddr[i][0];
		rs2_addr[i] = RF_raddr[i][1];
	    end 
    end

    // Block 2: data — purely driven by register_file outputs
    always_comb begin
	    for (int i = 0; i < ISSUE_WIDTH; i++) begin
		RF_read_data[i][0] = rs1_data[i];
		RF_read_data[i][1] = rs2_data[i];
	    end
    end

    register_file register_file
    (
        .clk(clk),
        .rst(rst),
        .rs1_addr(rs1_addr),
        .rs2_addr(rs2_addr),
        .rd_addr(CDB_tag),
        .rd_write_en(CDB_valid),
        .rd_data(CDB_result),
        .rs1_data(rs1_data),
        .rs2_data(rs2_data)
    );

    ROB ROB
    (
        .clk(clk),
        .rst(rst),
        .rename_rob(rename_rob),
        .flush(flush),
        .flush_sqN(flush_sqN),
        .CDB_valid(CDB_valid),
        .CDB_sqN(CDB_sqN),
        .OUT_busy(ROB_busy),
        .OUT_commit(commit_packet)
    );

endmodule
