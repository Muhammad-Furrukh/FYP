import include_pkg::*;

module dispatch_unit
(
    input           logic                       clk,
    input           logic                       rst,
    input           logic                       flush,
    input   var     rename_instr_t              IN_instr            [RENAME_WIDTH],
    input           logic                       ALU_buffer_busy     [2],
    input           logic                       MUL_DIV_buffer_busy,
    input           logic                       LSU_buffer_busy,
    input           logic                       LSU_busy,
    output          logic                       OUT_busy,
    output          alu_dispatch_instr_t        OUT_alu_instr       [2],
    output          mul_div_dispatch_instr_t    OUT_mul_div_instr,
    output          lsu_dispatch_instr_t        OUT_lsu_instr
);

    // ── Held packet ──────────────────────────────────────────
    rename_instr_t  packet      [RENAME_WIDTH]; // This is sampled sequentially, can be combinational.
    logic           dispatched  [RENAME_WIDTH];

    // ── Downstream ready ─────────────────────────────────────
    logic alu_ready [2];
    logic mul_ready;
    logic lsu_ready;

    assign alu_ready[0] = !ALU_buffer_busy[0];
    assign alu_ready[1] = !ALU_buffer_busy[1];
    assign mul_ready    = !MUL_DIV_buffer_busy;
    assign lsu_ready    = !LSU_buffer_busy && !LSU_busy;

    // ── packet_done ──────────────────────────────────────────
    logic packet_done;
    always_comb begin
        packet_done = 1'b1;
        for (int i = 0; i < RENAME_WIDTH; i++)
            if (packet[i].valid && !dispatched[i])
                packet_done = 1'b0;
    end

    assign OUT_busy = !packet_done;

    // ── Explicit slot classification ─────────────────────────
    // Determine what type each packet slot is, only if pending.
    // No automatic variables — pure combinational logic.
    logic slot_is_alu     [RENAME_WIDTH];
    logic slot_is_mul     [RENAME_WIDTH];
    logic slot_is_lsu     [RENAME_WIDTH];
    logic slot_pending    [RENAME_WIDTH];

    for (genvar i = 0; i < RENAME_WIDTH; i++) begin : g_slot_class
        assign slot_pending[i] = packet[i].valid && !dispatched[i];
        assign slot_is_alu[i]  = slot_pending[i] && (packet[i].f_unit == ALU);
        assign slot_is_mul[i]  = slot_pending[i] && (packet[i].f_unit == MUL_DIV);
        assign slot_is_lsu[i]  = slot_pending[i] && (packet[i].f_unit == LSU);
    end

    // ── ALU slot assignment ──────────────────────────────────
    // slot 0 of packet → ALU port 0, slot 1 → ALU port 1
    // If slot 0 is not ALU but slot 1 is, slot 1 gets port 0.
    logic [1:0] alu_port [RENAME_WIDTH]; // which ALU port each slot maps to
    logic       alu_port_valid [2];

    always_comb begin
        alu_port[0]      = 2'd0;
        alu_port[1]      = 2'd1;
        alu_port_valid[0] = 1'b0;
        alu_port_valid[1] = 1'b0;

        // First pending ALU slot gets port 0, second gets port 1
        if (slot_is_alu[0] && slot_is_alu[1]) begin
            alu_port[0]       = 2'd0;
            alu_port[1]       = 2'd1;
            alu_port_valid[0] = alu_ready[0];
            alu_port_valid[1] = alu_ready[1];
        end else if (slot_is_alu[0]) begin
            alu_port[0]       = 2'd0;
            alu_port_valid[0] = alu_ready[0];
        end else if (slot_is_alu[1]) begin
            alu_port[1]       = 2'd0;  // only one ALU, takes port 0
            alu_port_valid[1] = alu_ready[0];
        end
    end

    // ── MUL: first pending MUL slot wins this cycle ──────────
    logic mul_slot; // which packet slot drives MUL output
    logic mul_valid;

    always_comb begin
        mul_slot  = '0;
        mul_valid = 1'b0;
        if      (slot_is_mul[0] && mul_ready) begin mul_slot = 0; mul_valid = 1'b1; end
        else if (slot_is_mul[1] && mul_ready) begin mul_slot = 1; mul_valid = 1'b1; end
    end

    // ── LSU: first pending LSU slot wins this cycle ──────────
    logic lsu_slot;
    logic lsu_valid;

    always_comb begin
        lsu_slot  = '0;
        lsu_valid = 1'b0;
        if      (slot_is_lsu[0] && lsu_ready) begin lsu_slot = 0; lsu_valid = 1'b1; end
        else if (slot_is_lsu[1] && lsu_ready) begin lsu_slot = 1; lsu_valid = 1'b1; end
    end

    // ── can_dispatch ─────────────────────────────────────────
    logic can_dispatch [RENAME_WIDTH];

    always_comb begin
        can_dispatch[0] = 1'b0;
        can_dispatch[1] = 1'b0;

        // ALU
        if (slot_is_alu[0] && alu_port_valid[0]) can_dispatch[0] = 1'b1;
        if (slot_is_alu[1] && alu_port_valid[1]) can_dispatch[1] = 1'b1;
        // Single ALU case — slot 1 on port 0
        if (slot_is_alu[1] && !slot_is_alu[0] && alu_port_valid[1])
            can_dispatch[1] = 1'b1;

        // MUL
        if (mul_valid) can_dispatch[mul_slot] = 1'b1;

        // LSU
        if (lsu_valid) can_dispatch[lsu_slot] = 1'b1;
    end

    // ── Output drive ─────────────────────────────────────────
    always_comb begin
        OUT_alu_instr     = '{default: '0};
        OUT_mul_div_instr = '{default: '0};
        OUT_lsu_instr     = '{default: '0};

        // ALU outputs
        for (int i = 0; i < RENAME_WIDTH; i++) begin
            if (slot_is_alu[i] && can_dispatch[i]) begin
                OUT_alu_instr[alu_port[i]].valid     = 1'b1;
                OUT_alu_instr[alu_port[i]].sqN       = packet[i].sqN;
                OUT_alu_instr[alu_port[i]].pc        = packet[i].pc;
                OUT_alu_instr[alu_port[i]].f_unit    = packet[i].f_unit;
                OUT_alu_instr[alu_port[i]].oper      = packet[i].oper;
                OUT_alu_instr[alu_port[i]].rs1_tag   = packet[i].rs1_tag;
                OUT_alu_instr[alu_port[i]].rs2_tag   = packet[i].rs2_tag;
                OUT_alu_instr[alu_port[i]].rd_tag    = packet[i].rd_tag;
                OUT_alu_instr[alu_port[i]].imm       = packet[i].imm;
                OUT_alu_instr[alu_port[i]].is_imm    = packet[i].is_imm;
                OUT_alu_instr[alu_port[i]].jump_type = packet[i].jump_type;
                OUT_alu_instr[alu_port[i]].br_type   = packet[i].br_type;
                OUT_alu_instr[alu_port[i]].u_type    = packet[i].u_type;
            end
        end

        // MUL output
        if (mul_valid) begin
            OUT_mul_div_instr.valid   = 1'b1;
            OUT_mul_div_instr.sqN     = packet[mul_slot].sqN;
            OUT_mul_div_instr.pc      = packet[mul_slot].pc;
            OUT_mul_div_instr.f_unit  = packet[mul_slot].f_unit;
            OUT_mul_div_instr.oper    = packet[mul_slot].oper;
            OUT_mul_div_instr.rs1_tag = packet[mul_slot].rs1_tag;
            OUT_mul_div_instr.rs2_tag = packet[mul_slot].rs2_tag;
            OUT_mul_div_instr.rd_tag  = packet[mul_slot].rd_tag;
        end

        // LSU output
        if (lsu_valid) begin
            OUT_lsu_instr.valid   = 1'b1;
            OUT_lsu_instr.sqN     = packet[lsu_slot].sqN;
            OUT_lsu_instr.pc      = packet[lsu_slot].pc;
            OUT_lsu_instr.f_unit  = packet[lsu_slot].f_unit;
            OUT_lsu_instr.oper    = packet[lsu_slot].oper;
            OUT_lsu_instr.rs1_tag = packet[lsu_slot].rs1_tag;
            OUT_lsu_instr.rs2_tag = packet[lsu_slot].rs2_tag;
            OUT_lsu_instr.rd_tag  = packet[lsu_slot].rd_tag;
            OUT_lsu_instr.imm     = packet[lsu_slot].imm;
            OUT_lsu_instr.is_imm  = packet[lsu_slot].is_imm;
        end
    end

    // ── Sequential ───────────────────────────────────────────
    always_ff @(posedge clk) begin
        if (rst || flush) begin
            for (int i = 0; i < RENAME_WIDTH; i++) begin
                packet[i]     <= '{default: '0};
                dispatched[i] <= 1'b0;
            end
        end else begin
            for (int i = 0; i < RENAME_WIDTH; i++)
                if (can_dispatch[i])
                    dispatched[i] <= 1'b1;

            if (packet_done) begin
                for (int i = 0; i < RENAME_WIDTH; i++) begin
                    packet[i]     <= IN_instr[i];
                    dispatched[i] <= 1'b0;
                end
            end
        end
    end

endmodule
