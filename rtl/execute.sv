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
    for (genvar i = 0; i < NUM_ALU_FU; i++) begin : gen_alu_fu
        ALU ALU_i
        (
            .IN_instr(int_issue_instr[i]),
            .OUT(int_fu_out[i])
        );
    end

    for (genvar i = 0; i < NUM_MUL_DIV_FU; i++) begin : gen_mul_div_fu
        MUL_DIV MUL_DIV_i
        (
            .clk(clk), .rst(rst), .flush(flush), .flush_sqN(flush_sqN),	
            .IN_instr(int_issue_instr[i + NUM_ALU_FU]),
            .OUT_cdb(int_fu_out[i + NUM_ALU_FU]),
            .OUT_busy(mul_div_busy[i])
        );
    end

    agu_out_t next_agu_out [NUM_AGU_FU];
    for (genvar i = 0; i < NUM_AGU_FU; i++) begin : gen_agu_fu
        AGU AGU_i
        (
            .IN_instr(lsu_issue_instr[i]),
            .OUT(next_agu_out[i])
        );
    end

    CDB_line_t registered_CDB_output [NUM_INT_FU];
    agu_out_t  registered_AGU_output [NUM_AGU_FU];
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            registered_CDB_output <= '{default: '0};
            registered_AGU_output <= '{default: '0};
        end

        else if (flush) begin
            for (int i = 0; i < NUM_INT_FU; i++) begin
                if (((flush_sqN - int_fu_out[i].sqN) & SQN_MASK) > ROB_SIZE)
                    registered_CDB_output[i] <= '0;
                else
                    registered_CDB_output[i] <= registered_CDB_output[i]; // Keep if still valid
            end

            for (int i = 0; i < NUM_AGU_FU; i++) begin
                if (((flush_sqN - next_agu_out[i].sqN) & SQN_MASK) > ROB_SIZE)
                    registered_AGU_output[i] <= '0;
                else
                    registered_AGU_output[i] <= registered_AGU_output[i]; // Keep if still valid
            end
        end

        else begin
        	for (int i = 0; i < NUM_INT_FU; i++) begin
            	registered_CDB_output[i] <= int_fu_out[i];
            end
            for (int i = 0; i < NUM_AGU_FU; i++) begin
            	registered_AGU_output[i] <= next_agu_out[i];
        	end
        end
    end

    // Final output assignment
    for (genvar i = 0; i < NUM_INT_FU; i++) begin
		assign CDB_line[i] = (flush && ((flush_sqN - registered_CDB_output[i].sqN) & SQN_MASK) > ROB_SIZE) 
		                     ? '0 
		                     : registered_CDB_output[i];
	end

    for (genvar i = 0; i < NUM_AGU_FU; i++) begin : gen_output_assign_agu
        assign agu_out[i] = (flush && ((flush_sqN - registered_AGU_output[i].sqN) & SQN_MASK) > ROB_SIZE)
                    ? '0
                    : registered_AGU_output[i];
    end

endmodule
