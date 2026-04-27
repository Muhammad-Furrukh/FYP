import include_pkg::*;

// ════════════════════════════════════════════════════
// data_memory_cdc
//
// Fast domain: clk_cpu  — interfaces with LDB/STB
// Slow domain: clk_mem  — interfaces with BRAM
//
// Protocol: 4-phase handshake per port
//   1. CPU asserts req.valid + holds req stable
//   2. Bridge synchronizes valid into mem domain
//   3. BRAM processes; bridge asserts ack back
//   4. CPU sees ack, de-asserts valid
//      → ack de-asserts (completing the handshake)
//
// Read latency: 2 slow cycles (sync) + 1 BRAM cycle
//             + 2 fast cycles (sync back)
//             = visible as LDB_WAITING state
// ════════════════════════════════════════════════════

module data_memory (
    // Fast domain
    input  logic         clk_cpu,
    input  logic         rst_cpu,
    // Slow domain
    input  logic         clk_mem,
    input  logic         rst_mem,

    // STB write ports (fast domain)
    input  stb_mem_req_t wr_req  [2],
    output logic         wr_stall[2],   // back-pressure to STB

    // LDB read ports (fast domain)
    input  ldb_mem_req_t rd_req  [2],
    output dmem_resp_t   rd_resp [2],
    output logic         rd_stall[2]    // back-pressure to LDB
);

    // ════════════════════════════════════════════════════
    // 1. Request registers (fast domain)
    //
    //    Held stable while handshake is in progress.
    //    STB/LDB must not change request until wr/rd_stall
    //    de-asserts.
    // ════════════════════════════════════════════════════

    stb_mem_req_t wr_req_held [2];
    ldb_mem_req_t rd_req_held [2];

    // Pending flags in fast domain
    logic wr_pending [2];
    logic rd_pending [2];

    // Ack signals synchronized back to fast domain
    logic wr_ack_sync [2];
    logic rd_ack_sync [2];

    always_ff @(posedge clk_cpu or posedge rst_cpu) begin
        if (rst_cpu) begin
            for (int i = 0; i < 2; i++) begin
                wr_pending[i]  <= 1'b0;
                rd_pending[i]  <= 1'b0;
                wr_req_held[i] <= '{default: '0};
                rd_req_held[i] <= '{default: '0};
            end
        end else begin
            for (int i = 0; i < 2; i++) begin
                // Latch new request when not already pending
                if (wr_req[i].valid && !wr_pending[i]) begin
                    wr_req_held[i] <= wr_req[i];
                    wr_pending[i]  <= 1'b1;
                end
                // Clear pending when ack arrives
                if (wr_ack_sync[i]) wr_pending[i] <= 1'b0;

                if (rd_req[i].valid && !rd_pending[i]) begin
                    rd_req_held[i] <= rd_req[i];
                    rd_pending[i]  <= 1'b1;
                end
                if (rd_ack_sync[i]) rd_pending[i] <= 1'b0;
            end
        end
    end

    // Stall = pending and not yet acked
    for (genvar i = 0; i < 2; i++) begin
        assign wr_stall[i] = wr_pending[i] && !wr_ack_sync[i];
        assign rd_stall[i] = rd_pending[i] && !rd_ack_sync[i];
    end


    // ════════════════════════════════════════════════════
    // 2. Synchronize request valid into slow domain
    //
    //    Only the valid/pending pulse crosses via 2-FF.
    //    The data bus (wr_req_held / rd_req_held) is held
    //    stable for the entire handshake so it is safe
    //    to sample in the slow domain once valid_sync rises.
    // ════════════════════════════════════════════════════

    logic wr_valid_sync [2];
    logic rd_valid_sync [2];

    for (genvar i = 0; i < 2; i++) begin : g_req_sync
        sync_2ff #(.W(1)) u_wr_sync (
            .clk_dst (clk_mem),
            .rst_dst (rst_mem),
            .d       (wr_pending[i]),
            .q       (wr_valid_sync[i])
        );
        sync_2ff #(.W(1)) u_rd_sync (
            .clk_dst (clk_mem),
            .rst_dst (rst_mem),
            .d       (rd_pending[i]),
            .q       (rd_valid_sync[i])
        );
    end


    // ════════════════════════════════════════════════════
    // 3. Slow-domain BRAM access
    //
    //    Once valid_sync rises, sample the held data bus
    //    and issue to BRAM. Assert ack after BRAM responds.
    //    Ack is a pulse — one slow cycle wide.
    // ════════════════════════════════════════════════════

    localparam DEPTH      = 256;
    localparam BANK_DEPTH = DEPTH / 2;
    localparam BANK_AW    = $clog2(BANK_DEPTH);

    (* ram_style = "block" *) logic [31:0] bank [2][BANK_DEPTH];

    // Slow-domain ack signals (before sync back)
    logic wr_ack_mem [2];
    logic rd_ack_mem [2];

    // Read response data held in slow domain until synced back
    logic [31:0]  rd_data_mem [2];
    tag_t         rd_tag_mem  [2];
    logic         rd_resp_valid_mem [2];

    // Track previous valid_sync to detect rising edge
    logic wr_valid_sync_r [2];
    logic rd_valid_sync_r [2];

    function automatic logic [3:0] byte_en(
        input logic [1:0] data_size,
        input logic [1:0] byte_off
    );
        case (data_size)
            2'b00:   byte_en = 4'b0001 << byte_off;
            2'b01:   byte_en = 4'b0011 << byte_off;
            default: byte_en = 4'b1111;
        endcase
    endfunction

    always_ff @(posedge clk_mem or posedge rst_mem) begin
        if (rst_mem) begin
            for (int i = 0; i < 2; i++) begin
                wr_ack_mem[i]        <= 1'b0;
                rd_ack_mem[i]        <= 1'b0;
                rd_resp_valid_mem[i] <= 1'b0;
                wr_valid_sync_r[i]   <= 1'b0;
                rd_valid_sync_r[i]   <= 1'b0;
            end
        end else begin
            // Default: deassert acks
            for (int i = 0; i < 2; i++) begin
                wr_ack_mem[i]        <= 1'b0;
                rd_ack_mem[i]        <= 1'b0;
                rd_resp_valid_mem[i] <= 1'b0;
                wr_valid_sync_r[i]   <= wr_valid_sync[i];
                rd_valid_sync_r[i]   <= rd_valid_sync[i];
            end

            // ── Write: rising edge of wr_valid_sync ──────
            for (int i = 0; i < 2; i++) begin
                if (wr_valid_sync[i] && !wr_valid_sync_r[i]) begin
                    // Sample held request and write to BRAM
                    begin
                        logic [3:0]      be;
                        logic            bsel;
                        logic [BANK_AW-1:0] boff;
                        be   = byte_en(wr_req_held[i].data_size,
                                       wr_req_held[i].wr_addr[1:0]);
                        bsel = wr_req_held[i].wr_addr[2];
                        boff = wr_req_held[i].wr_addr[BANK_AW+2:3];
                        if (be[0]) bank[bsel][boff][7:0]   <= wr_req_held[i].data[7:0];
                        if (be[1]) bank[bsel][boff][15:8]  <= wr_req_held[i].data[15:8];
                        if (be[2]) bank[bsel][boff][23:16] <= wr_req_held[i].data[23:16];
                        if (be[3]) bank[bsel][boff][31:24] <= wr_req_held[i].data[31:24];
                    end
                    wr_ack_mem[i] <= 1'b1;
                end
            end

            // ── Read: rising edge of rd_valid_sync ───────
            
            for (int i = 0; i < 2; i++) begin
                if (rd_valid_sync[i] && !rd_valid_sync_r[i]) begin
                    rd_data_mem[i]       <= bank[rd_req_held[i].r_addr[2]]
                                               [rd_req_held[i].r_addr[BANK_AW+2:3]];
                    rd_resp_valid_mem[i] <= 1'b1;
                    rd_ack_mem[i]        <= 1'b1;
                end
            end
        end
    end


    // ════════════════════════════════════════════════════
    // 4. Synchronize ack back to fast domain
    // ════════════════════════════════════════════════════

    for (genvar i = 0; i < 2; i++) begin : g_ack_sync
        sync_2ff #(.W(1)) u_wr_ack (
            .clk_dst (clk_cpu),
            .rst_dst (rst_cpu),
            .d       (wr_ack_mem[i]),
            .q       (wr_ack_sync[i])
        );
        sync_2ff #(.W(1)) u_rd_ack (
            .clk_dst (clk_cpu),
            .rst_dst (rst_cpu),
            .d       (rd_ack_mem[i]),
            .q       (rd_ack_sync[i])
        );
    end


    // ════════════════════════════════════════════════════
    // 5. Synchronize read data back to fast domain
    //
    //    Data bus is held stable in slow domain from the
    //    moment rd_ack_mem pulses until rd_pending clears.
    //    Safe to sample in fast domain once rd_ack_sync rises.
    // ════════════════════════════════════════════════════

    always_ff @(posedge clk_cpu or posedge rst_cpu) begin
        if (rst_cpu) begin
            for (int i = 0; i < 2; i++)
                rd_resp[i] <= '{default: '0};
        end else begin
            for (int i = 0; i < 2; i++) begin
                rd_resp[i] <= '{default: '0};
                if (rd_ack_sync[i]) begin
                    rd_resp[i].valid <= 1'b1;
                    rd_resp[i].data  <= rd_data_mem[i];
                end
            end
        end
    end

endmodule
