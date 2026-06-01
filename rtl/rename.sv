	import include_pkg::*;

	module rename
	(
		input       logic             clk,
		input       logic             rst,
		input       logic             ROB_busy,
		input       logic             dispatch_busy,
		input       logic             flush,
		input       logic             chkpt_busy,
		input  var  tag_t             IN_specTag     [32],
		input  var  logic             IN_free        [2**REG_ADDR_WIDTH],
		input  var  commit_packet_t   commit_packet  [COMMIT_WIDTH],
		input  var  decode_instr_t    IN_instr       [DECODE_WIDTH],
		input  var  tag_t             CDB_tag        [NUM_CDB_LINES],
		input  var  logic             CDB_valid      [NUM_CDB_LINES],
		output      rename_instr_t    OUT_instr      [DECODE_WIDTH], 
		output      logic             chkpt          [DECODE_WIDTH],
		output      sqN_t             chkpt_sqN      [DECODE_WIDTH],
		output      tag_t             chkpt_specTag  [DECODE_WIDTH][32],
		output      logic             chkpt_free     [DECODE_WIDTH][2**REG_ADDR_WIDTH],
		output      logic             OUT_busy,
		output      logic  [4:0]      OUT_rd         [DECODE_WIDTH]
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

		var tag_buffer_entry_t  tag_buffer   [NUM_REG];
		var RAT_entry_t         rename_table [32];


		// ════════════════════════════════════════════════════
		// 2. Free Tag Bitmap (FTB)
		//    Combinationally reflects tag_buffer.free.
		//    Tag 0 is hardwired to never be free (maps to x0).
		// ════════════════════════════════════════════════════

		logic [NUM_REG-1:0] ftb;
		always_comb begin
			for (int i = 0; i < NUM_REG; i++) begin
				ftb[i] = tag_buffer[i].free;
			end
		end

		// always_comb begin
		// 	for (int i = 0; i < DECODE_WIDTH; i++) 
		// 		ftb[i][0] = 1'b0;  // Tag 0 is never free
			
		// 	for (int i = 0; i < DECODE_WIDTH; i++) begin
		// 		logic is_source;
		// 		is_source = 1'b0;
		// 		for (int j = 1 < NUM_REG; j++) begin
		// 			if (IN_instr[i].valid) begin
		// 				is_source |= (rename_table[IN_instr[i].rs1].specTag == REG_ADDR_WIDTH'(j))
		// 				          |  (rename_table[IN_instr[i].rs2].specTag == REG_ADDR_WIDTH'(j));
		// 			end
		// 			ftb[i][j] = is_source ? 1'b0 : tag_buffer[i].free;
		// 		end
		// 	end

		// end


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

		logic [DECODE_WIDTH-1:0]   req_valid;
		logic [NUM_REG-1:0]        masked  [DECODE_WIDTH+1];
		logic [NUM_REG-1:0]        onehot  [DECODE_WIDTH];
		logic [REG_ADDR_WIDTH-1:0] chosen  [DECODE_WIDTH];

		always_comb
		    for (int i = 0; i < DECODE_WIDTH; i++)
		        req_valid[i] = IN_instr[i].valid && (IN_instr[i].rd != 5'd0);

		// Priority encoder as a function — fully combinational, no latch risk
		function automatic logic [REG_ADDR_WIDTH-1:0] onehot_to_bin(
		    input logic [NUM_REG-1:0] oh
		);
		    onehot_to_bin = '0;
		    for (int b = NUM_REG-1; b >= 0; b--)
		        if (oh[b]) onehot_to_bin = REG_ADDR_WIDTH'(b);
		endfunction

		always_comb begin
			masked[0] = ftb;
			for (int i = 0; i < DECODE_WIDTH; i++) begin
				 onehot[i] = req_valid[i] ? (masked[i] & (~masked[i] + 1'b1)) : '0;
				 chosen[i] = onehot_to_bin(onehot[i]);
				 masked[i+1] = masked[i] & ~onehot[i];
			end
		end

		// ════════════════════════════════════════════════════
		// 4. Stall
		//    Stall if ROB/dispatch is busy, not enough free
		//    tags, or a checkpoint is needed but slots are full.
		// ════════════════════════════════════════════════════

		logic [$clog2(NUM_REG+1)-1:0]      free_count 	[NUM_REG]; 
		logic [$clog2(NUM_REG+1)-1:0]      req_count 	[DECODE_WIDTH];
		logic                              chkpt_need;

		always_comb begin
		    free_count = '{default: '0};
		    for (int b = 0; b < NUM_REG; b++)
		        free_count[b+1] = free_count[b] + ftb[b];

		    req_count  = '{default: '0};
		    chkpt_need = 1'b0;
		    for (int i = 0; i < DECODE_WIDTH; i++) begin
		        req_count[i+1] = req_count[i] + req_valid[i];
		        if (IN_instr[i].valid)
		            chkpt_need |= (IN_instr[i].br_type  != NOT_BRANCH)
		                       || (IN_instr[i].jump_type == JALR);
		    end
		end

		logic stall;
		assign stall    = ROB_busy || dispatch_busy
		                  || (free_count[NUM_REG-1] < req_count[DECODE_WIDTH-1])
		                  || (chkpt_busy && chkpt_need);
		                  
		assign OUT_busy = stall;


		// ════════════════════════════════════════════════════
		// 5. Local RAT — intra-group forwarding
		//
		//    local_rat[i] = specTag state visible to instr i,
		//    i.e. after instructions 0..i-1 have renamed.
		//
		//    Reading local_rat[i][rs] automatically forwards
		//    the tag from any earlier instruction in this group
		//    that wrote the same architectural register.
		//
		//    Seeded from IN_specTag on flush (checkpoint restore),
		//    otherwise from rename_table.specTag.
		// ════════════════════════════════════════════════════

		logic [REG_ADDR_WIDTH-1:0] local_rat [DECODE_WIDTH+1][32];

		always_comb begin
		    for (int r = 0; r < 32; r++)
		        local_rat[0][r] = flush ? IN_specTag[r]
		                                : rename_table[r].specTag;

		    for (int i = 0; i < DECODE_WIDTH; i++) begin
		        for (int r = 0; r < 32; r++)
		            local_rat[i+1][r] = local_rat[i][r];

		        if (IN_instr[i].valid && (IN_instr[i].rd != 5'd0))
		            local_rat[i+1][IN_instr[i].rd] = chosen[i];
		    end
		end


		// ════════════════════════════════════════════════════
		// 6. Outputs
		// ════════════════════════════════════════════════════

		// ── 6a. Ready state transmission 
		logic cdb_ready_rs1   [DECODE_WIDTH];
		logic cdb_ready_rs2   [DECODE_WIDTH];
		logic intra_ready_rs1 [DECODE_WIDTH];
		logic intra_ready_rs2 [DECODE_WIDTH];
		logic rs1_ready 	  [DECODE_WIDTH];
		logic rs2_ready 	  [DECODE_WIDTH];
		always_comb begin
			cdb_ready_rs1   = '{default: 1'b0};
			cdb_ready_rs2   = '{default: 1'b0};
			intra_ready_rs1 = '{default: 1'b1};
    		intra_ready_rs2 = '{default: 1'b1};

			// Check and mark operands ready if broadcasted on CDB
			for (int i = 0; i < DECODE_WIDTH; i++) begin
				for (int j = 0; j < ISSUE_WIDTH; j++) begin
					if (local_rat[i][IN_instr[i].rs1] == CDB_tag[j])
						cdb_ready_rs1[i] = 1'b1;
					if (local_rat[i][IN_instr[i].rs2] == CDB_tag[j])
						cdb_ready_rs2[i] = 1'b1;
				end
			end

			// Check if operands are produced by earlier instr in same group
			for (int i = 0; i < DECODE_WIDTH; i++) begin
				for (int k = 0; k < i; k++) begin  // Look at earlier instructions only
					if (IN_instr[k].valid && IN_instr[k].rd != 5'd0) begin
						// Instr k writes to rd, check if i reads it
						if (IN_instr[i].rs1 != 5'd0 && IN_instr[k].rd == IN_instr[i].rs1)
							intra_ready_rs1[i] = 1'b0;
						if (IN_instr[i].rs2 != 5'd0 && IN_instr[k].rd == IN_instr[i].rs2)
							intra_ready_rs2[i] = 1'b0;
					end
				end
			end

			for (int i = 0; i < DECODE_WIDTH; i++) begin
				rs1_ready[i] = (IN_instr[i].rs1 == 0) || (intra_ready_rs1[i] && 
				            (cdb_ready_rs1[i] || tag_buffer[local_rat[i][IN_instr[i].rs1]].ready));

				rs2_ready[i] = (IN_instr[i].rs2 == 0) || (intra_ready_rs2[i] && 
				            (cdb_ready_rs2[i] || tag_buffer[local_rat[i][IN_instr[i].rs2]].ready));
			end
		end

		// ── 6b. Renamed instructions (registered) ────────────
		// Cleared on rst/flush. Held on stall. Written otherwise.
		always_ff @(posedge clk or posedge rst) begin
		    if (rst || flush) begin
		        for (int i = 0; i < DECODE_WIDTH; i++) begin
		            OUT_instr[i] <= '0;
		            OUT_rd[i]    <= '0;
		        end

		    end else if (!stall) begin
		        for (int i = 0; i < DECODE_WIDTH; i++) begin
			    OUT_instr[i].valid     <= IN_instr[i].valid;
			    OUT_instr[i].sqN       <= IN_instr[i].sqN;
			    OUT_instr[i].pc        <= IN_instr[i].pc;
			    OUT_instr[i].f_unit    <= IN_instr[i].f_unit;
			    OUT_instr[i].oper      <= IN_instr[i].oper;
			    OUT_instr[i].rs1_tag   <= local_rat[i][IN_instr[i].rs1];
				OUT_instr[i].rs1_ready <= rs1_ready[i];
			    OUT_instr[i].rs2_tag   <= local_rat[i][IN_instr[i].rs2];
				OUT_instr[i].rs2_ready <= rs2_ready[i];
			    OUT_instr[i].rd_tag    <= chosen[i];
			    OUT_instr[i].imm       <= IN_instr[i].imm;
			    OUT_instr[i].is_imm    <= IN_instr[i].is_imm;
			    OUT_instr[i].jump_type <= IN_instr[i].jump_type;
			    OUT_instr[i].br_type   <= IN_instr[i].br_type;
			    OUT_instr[i].u_type    <= IN_instr[i].u_type;
			    OUT_rd[i]              <= IN_instr[i].rd;
		        end
		    end
		    // stall: outputs hold implicitly
		end

		// ── 6c. Branch checkpoints (registered) ──────────────
		// Snapshot is taken combinationally from local_rat[i] and
		// masked[i] — state *before* instruction i renames — then
		// registered so downstream (branch predictor / ROB) sees
		// stable signals aligned with the renamed instruction.
		// Cleared on rst/flush. Held on stall. Written otherwise.
		always_ff @(posedge clk or posedge rst) begin
		    if (rst || flush) begin
		        for (int i = 0; i < DECODE_WIDTH; i++) begin
		            chkpt[i]     <= 1'b0;
		            chkpt_sqN[i] <= '0;
		            for (int r = 0; r < 32; r++)
		                chkpt_specTag[i][r] <= '0;
		            for (int b = 0; b < NUM_REG; b++)
		                chkpt_free[i][b] <= '0;
		        end

		    end else if (!stall) begin
		        for (int i = 0; i < DECODE_WIDTH; i++) begin
		            chkpt[i]     <= IN_instr[i].valid
		                         && (IN_instr[i].br_type  != NOT_BRANCH
		                         ||  IN_instr[i].jump_type == JALR);
		            chkpt_sqN[i] <= IN_instr[i].sqN;

		            for (int r = 0; r < 32; r++)
		                chkpt_specTag[i][r] <= local_rat[i][r];

		            for (int b = 0; b < NUM_REG; b++)
		                chkpt_free[i][b] <= masked[i][b];
		        end
		    end
		    // stall: checkpoint outputs hold implicitly
		end


		// ════════════════════════════════════════════════════
		// 7. Sequential state updates
		//
		//    Priority (highest → lowest):
		//      rst    — full reset to identity state
		//      flush  — restore specTag + free bitmap from
		//               checkpoint; commTag/freeComm untouched
		//      stall  — hold rename state; commit/CDB still run
		//      normal — CDB ready, commit free, allocate
		//
		//    Commit (commTag + freeComm/free) always runs —
		//    it is independent of the rename pipeline.
		// ════════════════════════════════════════════════════

		logic [REG_ADDR_WIDTH-1:0] free_CommTag [COMMIT_WIDTH];
		for (genvar i = 0; i < COMMIT_WIDTH; i++) begin : gen_freeCom
		    assign free_CommTag[i] = rename_table[commit_packet[i].archTag].commTag;
		end

		// ── 7a. tag_buffer ────────────────────────────────────
		always_ff @(posedge clk or posedge rst) begin
		    if (rst) begin
			tag_buffer[0] <= '{freeComm: 1'b1, ready: 1'b1, free: 1'b0};
		        for (int i = 1; i < 32; i++)
		            tag_buffer[i] <= '{freeComm: 1'b0, ready: 1'b1, free: 1'b0};

				for (int i = 32; i < NUM_REG; i++)
					tag_buffer[i] <= '{freeComm: 1'b1, ready: 1'b1, free: 1'b1};

		    end else if (flush) begin
		        // Restore free bitmap from checkpoint.
		        // freeComm and ready preserved — they reflect architectural
		        // commit and CDB progress after the checkpoint was taken.
		        for (int b = 0; b < NUM_REG; b++)
		            tag_buffer[b].free <= IN_free[b];

		    end else begin
		        // CDB: mark completed tags ready (runs even on stall)
		        for (int i = 0; i < ISSUE_WIDTH; i++)
		            if (CDB_valid[i])
		                tag_buffer[CDB_tag[i]].ready <= 1'b1;

		        // Commit: free old commTag, clear freeComm on new commTag
		        // (runs even on stall — commit is independent of rename)
		        for (int i = 0; i < COMMIT_WIDTH; i++) begin
		            if (commit_packet[i].valid &&
		                commit_packet[i].archTag != 5'd0) begin
		                tag_buffer[commit_packet[i].comTag].freeComm <= 1'b0;
		                tag_buffer[free_CommTag[i]].freeComm         <= 1'b1;
		                tag_buffer[free_CommTag[i]].free             <= 1'b1;
		            end
		        end

		        // Allocate: only when not stalled
		        if (!stall) begin
		            for (int i = 0; i < DECODE_WIDTH; i++)
		                if (req_valid[i]) begin
		                    tag_buffer[chosen[i]].ready <= 1'b0;
		                    tag_buffer[chosen[i]].free  <= 1'b0;
		                end
		        end
		    end
		end

		// ── 7b. rename_table ──────────────────────────────────
		always_ff @(posedge clk or posedge rst) begin
		    if (rst) begin
		        for (int r = 0; r < 32; r++) begin
		            rename_table[r].specTag <= REG_ADDR_WIDTH'(r);
		            rename_table[r].commTag <= REG_ADDR_WIDTH'(r);
		        end

		    end else if (flush) begin
		        // Restore specTag from checkpoint.
		        // commTag is architectural truth — never touched by flush.
		        for (int r = 0; r < 32; r++)
		            rename_table[r].specTag <= IN_specTag[r];

		        // Commit still advances commTag this cycle
		        for (int i = 0; i < COMMIT_WIDTH; i++)
		            if (commit_packet[i].valid &&
		                commit_packet[i].archTag != 5'd0)
		                rename_table[commit_packet[i].archTag].commTag
		                    <= commit_packet[i].comTag;

		    end else begin
		        // Advance specTag to end-of-group RAT (only when not stalled)
		        if (!stall)
		            for (int r = 0; r < 32; r++)
		                rename_table[r].specTag <= local_rat[DECODE_WIDTH][r];

		        // Commit always advances commTag
		        for (int i = 0; i < COMMIT_WIDTH; i++)
		            if (commit_packet[i].valid &&
		                commit_packet[i].archTag != 5'd0)
		                rename_table[commit_packet[i].archTag].commTag
		                    <= commit_packet[i].comTag;
		    end
		end

	endmodule