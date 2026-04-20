import include_pkg::*;

module dispatch_unit
(
    input           logic                       clk,
    input           logic                       rst,
    input           logic                       flush,
    input   var     rename_instr_t              IN_instr            [RENAME_WIDTH],
    input           logic                       ALU_buffer_busy     [NUM_ALU_FU],
    input           logic                       MUL_DIV_buffer_busy [NUM_MUL_DIV_FU],
    input           logic                       LSU_buffer_busy     [NUM_AGU_FU],
    input           logic                       LSU_busy,
    output          logic                       OUT_busy,
    output          alu_dispatch_instr_t        OUT_alu_instr       [NUM_ALU_FU],
    output          mul_div_dispatch_instr_t    OUT_mul_div_instr   [NUM_MUL_DIV_FU],
    output          lsu_dispatch_instr_t        OUT_lsu_instr       [NUM_AGU_FU]
);

    // ════════════════════════════════════════════════════
    // 1. State
    // ════════════════════════════════════════════════════

    rename_instr_t  packet      [RENAME_WIDTH];
    logic           dispatched  [RENAME_WIDTH];


    // ════════════════════════════════════════════════════
    // 2. Downstream ready
    // ════════════════════════════════════════════════════

    logic alu_ready [NUM_ALU_FU];
    logic mul_ready [NUM_MUL_DIV_FU];
    logic lsu_ready [NUM_AGU_FU];

    for (genvar i = 0; i < NUM_ALU_FU;     i++) assign alu_ready[i] = !ALU_buffer_busy[i];
    for (genvar i = 0; i < NUM_MUL_DIV_FU; i++) assign mul_ready[i] = !MUL_DIV_buffer_busy[i];
    for (genvar i = 0; i < NUM_AGU_FU;     i++) assign lsu_ready[i] = !LSU_buffer_busy[i] && !LSU_busy;


    // ════════════════════════════════════════════════════
    // 3. Slot classification
    //    Determine type of each pending packet slot.
    // ════════════════════════════════════════════════════

    logic slot_pending [RENAME_WIDTH];
    logic slot_is_alu  [RENAME_WIDTH];
    logic slot_is_mul  [RENAME_WIDTH];
    logic slot_is_lsu  [RENAME_WIDTH];

    for (genvar i = 0; i < RENAME_WIDTH; i++) begin : g_slot_class
        assign slot_pending[i] = packet[i].valid && !dispatched[i];
        assign slot_is_alu[i]  = slot_pending[i] && (packet[i].f_unit == ALU);
        assign slot_is_mul[i]  = slot_pending[i] && (packet[i].f_unit == MUL_DIV);
        assign slot_is_lsu[i]  = slot_pending[i] && (packet[i].f_unit == LSU);
    end


    // ════════════════════════════════════════════════════
    // 4. Port assignment
    //
    //    For each FU port, scan packet slots in order and
    //    take the first pending matching slot not already
    //    claimed by an earlier port of the same FU type.
    //
    //    alu_slot[p] = which packet slot drives ALU port p
    //    mul_slot[p] = which packet slot drives MUL port p
    //    lsu_slot[p] = which packet slot drives LSU port p
    //    *_valid[p]  = port p has a valid assignment
    //
    //    The "already claimed" mask is built by walking
    //    ports 0..p-1 and marking their assigned slots.
    // ════════════════════════════════════════════════════

    logic [$clog2(RENAME_WIDTH)-1:0] alu_slot  [NUM_ALU_FU];
    logic [$clog2(RENAME_WIDTH)-1:0] mul_slot  [NUM_MUL_DIV_FU];
    logic [$clog2(RENAME_WIDTH)-1:0] lsu_slot  [NUM_AGU_FU];
    
    logic                            alu_valid  [NUM_ALU_FU];
    logic                            mul_valid  [NUM_MUL_DIV_FU];
    logic                            lsu_valid  [NUM_AGU_FU];

    always_comb begin
        // ── ALU ─────────────────────────────────────────
        // claimed_alu[s] = slot s already assigned to a lower ALU port
        logic claimed_alu [RENAME_WIDTH];
        for (int s = 0; s < RENAME_WIDTH; s++) claimed_alu[s] = 1'b0;

        for (int p = 0; p < NUM_ALU_FU; p++) begin
            alu_slot[p]  = '0;
            alu_valid[p] = 1'b0;
            for (int s = 0; s < RENAME_WIDTH; s++) begin
                if (slot_is_alu[s] && !claimed_alu[s] && alu_ready[p] && !alu_valid[p]) begin
                    alu_slot[p]  = $clog2(RENAME_WIDTH)'(s);
                    alu_valid[p] = 1'b1; 
                end
            end
            // Mark this port's slot as claimed for subsequent ports
            if (alu_valid[p]) claimed_alu[alu_slot[p]] = 1'b1;
        end

        // ── MUL ─────────────────────────────────────────
        logic claimed_mul [RENAME_WIDTH];
        for (int s = 0; s < RENAME_WIDTH; s++) claimed_mul[s] = 1'b0;

        for (int p = 0; p < NUM_MUL_DIV_FU; p++) begin
            mul_slot[p]  = '0;
            mul_valid[p] = 1'b0;
            for (int s = 0; s < RENAME_WIDTH; s++) begin
                if (slot_is_mul[s] && !claimed_mul[s] && mul_ready[p] && !mul_valid[p]) begin
                    mul_slot[p]  = $clog2(RENAME_WIDTH)'(s);
                    mul_valid[p] = 1'b1;
                end
            end
            if (mul_valid[p]) claimed_mul[mul_slot[p]] = 1'b1;
        end

        // ── LSU ─────────────────────────────────────────
        logic claimed_lsu [RENAME_WIDTH];
        for (int s = 0; s < RENAME_WIDTH; s++) claimed_lsu[s] = 1'b0;

        for (int p = 0; p < NUM_AGU_FU; p++) begin
            lsu_slot[p]  = '0;
            lsu_valid[p] = 1'b0;
            for (int s = 0; s < RENAME_WIDTH; s++) begin
                if (slot_is_lsu[s] && !claimed_lsu[s] && lsu_ready[p] && !lsu_valid[p]) begin
                    lsu_slot[p]  = $clog2(RENAME_WIDTH)'(s);
                    lsu_valid[p] = 1'b1;
                end
            end
            if (lsu_valid[p]) claimed_lsu[lsu_slot[p]] = 1'b1;
        end
    end


    // ════════════════════════════════════════════════════
    // 5. can_dispatch
    //    A slot can be dispatched this cycle if any FU
    //    port has been assigned to it.
    // ════════════════════════════════════════════════════

    logic can_dispatch [RENAME_WIDTH];

    always_comb begin
        for (int s = 0; s < RENAME_WIDTH; s++) can_dispatch[s] = 1'b0;
        for (int p = 0; p < NUM_ALU_FU;     p++) if (alu_valid[p]) can_dispatch[alu_slot[p]] = 1'b1;
        for (int p = 0; p < NUM_MUL_DIV_FU; p++) if (mul_valid[p]) can_dispatch[mul_slot[p]] = 1'b1;
        for (int p = 0; p < NUM_AGU_FU;     p++) if (lsu_valid[p]) can_dispatch[lsu_slot[p]] = 1'b1;
    end


    // ════════════════════════════════════════════════════
    // 6. packet_done / OUT_busy
    // ════════════════════════════════════════════════════

    logic packet_done;
    always_comb begin
        packet_done = 1'b1;
        for (int i = 0; i < RENAME_WIDTH; i++)
            if (slot_pending[i]) packet_done = 1'b0;
    end

    assign OUT_busy = !packet_done;


    // ════════════════════════════════════════════════════
    // 7. Output drive (combinational)
    // ════════════════════════════════════════════════════

    always_comb begin
        OUT_alu_instr     = '{default: '0};
        OUT_mul_div_instr = '{default: '0};
        OUT_lsu_instr     = '{default: '0};

        // ALU
        for (int p = 0; p < NUM_ALU_FU; p++) begin
            if (alu_valid[p]) begin
                OUT_alu_instr[p].valid     = 1'b1;
                OUT_alu_instr[p].sqN       = packet[alu_slot[p]].sqN;
                OUT_alu_instr[p].pc        = packet[alu_slot[p]].pc;
                OUT_alu_instr[p].f_unit    = packet[alu_slot[p]].f_unit;
                OUT_alu_instr[p].oper      = packet[alu_slot[p]].oper;
                OUT_alu_instr[p].rs1_tag   = packet[alu_slot[p]].rs1_tag;
                OUT_alu_instr[p].rs2_tag   = packet[alu_slot[p]].rs2_tag;
                OUT_alu_instr[p].rd_tag    = packet[alu_slot[p]].rd_tag;
                OUT_alu_instr[p].imm       = packet[alu_slot[p]].imm;
                OUT_alu_instr[p].is_imm    = packet[alu_slot[p]].is_imm;
                OUT_alu_instr[p].jump_type = packet[alu_slot[p]].jump_type;
                OUT_alu_instr[p].br_type   = packet[alu_slot[p]].br_type;
                OUT_alu_instr[p].u_type    = packet[alu_slot[p]].u_type;
            end
        end

        // MUL
        for (int p = 0; p < NUM_MUL_DIV_FU; p++) begin
            if (mul_valid[p]) begin
                OUT_mul_div_instr[p].valid   = 1'b1;
                OUT_mul_div_instr[p].sqN     = packet[mul_slot[p]].sqN;
                OUT_mul_div_instr[p].pc      = packet[mul_slot[p]].pc;
                OUT_mul_div_instr[p].f_unit  = packet[mul_slot[p]].f_unit;
                OUT_mul_div_instr[p].oper    = packet[mul_slot[p]].oper;
                OUT_mul_div_instr[p].rs1_tag = packet[mul_slot[p]].rs1_tag;
                OUT_mul_div_instr[p].rs2_tag = packet[mul_slot[p]].rs2_tag;
                OUT_mul_div_instr[p].rd_tag  = packet[mul_slot[p]].rd_tag;
            end
        end

        // LSU
        for (int p = 0; p < NUM_AGU_FU; p++) begin
            if (lsu_valid[p]) begin
                OUT_lsu_instr[p].valid   = 1'b1;
                OUT_lsu_instr[p].sqN     = packet[lsu_slot[p]].sqN;
                OUT_lsu_instr[p].pc      = packet[lsu_slot[p]].pc;
                OUT_lsu_instr[p].f_unit  = packet[lsu_slot[p]].f_unit;
                OUT_lsu_instr[p].oper    = packet[lsu_slot[p]].oper;
                OUT_lsu_instr[p].rs1_tag = packet[lsu_slot[p]].rs1_tag;
                OUT_lsu_instr[p].rs2_tag = packet[lsu_slot[p]].rs2_tag;
                OUT_lsu_instr[p].rd_tag  = packet[lsu_slot[p]].rd_tag;
                OUT_lsu_instr[p].imm     = packet[lsu_slot[p]].imm;
                OUT_lsu_instr[p].is_imm  = packet[lsu_slot[p]].is_imm;
            end
        end
    end


    // ════════════════════════════════════════════════════
    // 8. Sequential
    // ════════════════════════════════════════════════════

    always_ff @(posedge clk) begin
        if (rst || flush) begin
            for (int i = 0; i < RENAME_WIDTH; i++) begin
                packet[i]     <= '{default: '0};
                dispatched[i] <= 1'b0;
            end
        end else begin
            // Mark slots dispatched this cycle
            for (int i = 0; i < RENAME_WIDTH; i++)
                if (can_dispatch[i]) dispatched[i] <= 1'b1;

            // Load new packet when current one is fully dispatched
            if (packet_done) begin
                for (int i = 0; i < RENAME_WIDTH; i++) begin
                    packet[i]     <= IN_instr[i];
                    dispatched[i] <= 1'b0;
                end
            end
        end
    end

endmodule
