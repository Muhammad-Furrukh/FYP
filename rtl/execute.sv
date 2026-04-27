import include_pkg::*;

module execute
(
    input   logic             clk,
    input   logic             rst,
    input   logic             flush,
    input   sqN_t             flush_sqN,
    input   issue_instr_t     int_issue_instr [NUM_INT_FU],
    input   lsu_issue_instr_t lsu_issue_instr [NUM_AGU_FU],
    output  CDB_line_t        CDB_line        [NUM_INT_FU],
    output  agu_out_t         agu_out         [NUM_AGU_FU],
    output  logic             mul_div_busy    [NUM_MUL_DIV_FU]
);

    CDB_line_t int_fu_out [NUM_INT_FU];
    for (genvar i = 0; i < NUM_ALU_FU; i++) begin
        ALU ALU_i
        (
            .IN_instr(int_issue_instr[i]),
            .OUT(int_fu_out[i])
        );
    end

    for (genvar i = 0; i < NUM_MUL_DIV_FU; i++) begin
        MUL_DIV MUL_DIV_i
        (
            .clk(clk), .rst(rst), .flush(flush), .flush_sqN(flush_sqN),	
            .IN_instr(int_issue_instr[i + NUM_ALU_FU]),
            .OUT_cdb(int_fu_out[i + NUM_ALU_FU]),
            .OUT_busy(mul_div_busy[i])
        );
    end

    agu_out_t next_agu_out [NUM_AGU_FU];
    for (genvar i = 0; i < NUM_AGU_FU; i++) begin
        AGU AGU_i
        (
            .IN_instr(lsu_issue_instr[i]),
            .OUT(next_agu_out[i])
        );
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            for (int i = 0; i < NUM_INT_FU; i++) begin
                CDB_line[i] <= '0;
            end
            
            for (int i = 0; i < NUM_AGU_FU; i++) begin
                agu_out[i] <= '0;
            end
        end

        else if (flush) begin
            for (int i = 0; i < NUM_INT_FU; i++) begin
                if (((flush_sqN - int_fu_out[i].sqN) && SQN_MASK) > ROB_SIZE)
                    CDB_line[i].valid <= 1'b0;
            end

            for (int i = 0; i < NUM_AGU_FU; i++) begin
                if (((flush_sqN - next_agu_out[i].sqN) && SQN_MASK) > ROB_SIZE)
                    agu_out[i].valid <= 1'b0;
            end
        end

        else begin
            CDB_line <= int_fu_out;
            agu_out  <= next_agu_out;
        end
    end

endmodule
