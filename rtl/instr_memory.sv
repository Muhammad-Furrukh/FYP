import include_pkg::*;

// ════════════════════════════════════════════════════
// instr_memory_cdc
//
// Fast domain: clk_cpu  — interfaces with BIU/I-cache
// Slow domain: clk_mem  — interfaces with BRAM
//
// Protocol: 4-phase handshake (same as data_memory)
//   1. CPU asserts req.valid + holds req stable
//   2. Bridge synchronizes valid into mem domain
//   3. BRAM processes; bridge asserts ack back
//   4. CPU sees ack, de-asserts valid
//      → ack de-asserts (completing the handshake)
//
// Differences from data_memory:
//   - Read-only (no write ports)
//   - Wider data path (FETCH_WIDTH * 32 bits)
//   - Initialized via $readmemh
//   - Single port (only one cache miss at a time)
// ════════════════════════════════════════════════════

module instr_memory #(
    parameter int unsigned DEPTH = 1024  // 1024 words = 4KB
) (
    // Fast domain
    input   logic           clk_cpu,
    input   logic           rst_cpu,
    // Slow domain
    input   logic           clk_mem,
    input   logic           rst_mem,

    // Read request from BIU (fast domain)
    input   logic           rd_req_valid,
    input   pc_t            rd_req_addr,     // Byte address, aligned to 8 bytes
    output  logic           rd_stall,        // Back-pressure to BIU

    // Read response to BIU (fast domain)
    output  logic           rd_resp_valid,
    output  fetch_packet_t  rd_resp_data     // FETCH_WIDTH * 32 bits
);

    // ════════════════════════════════════════════════════
    // 1. Request register (fast domain)
    //
    //    Held stable while handshake is in progress.
    //    BIU must not change request until rd_stall
    //    de-asserts.
    // ════════════════════════════════════════════════════

    pc_t    rd_req_addr_held;
    logic   rd_pending;

    // Ack signal synchronized back to fast domain
    logic   rd_ack_sync;

    always_ff @(posedge clk_cpu or posedge rst_cpu) begin
        if (rst_cpu) begin
            rd_pending       <= 1'b0;
            rd_req_addr_held <= '0;
        end else begin
            if (rd_ack_sync) begin
                rd_pending <= 1'b0;
            end
            else if (rd_req_valid && !rd_pending) begin
                rd_req_addr_held <= rd_req_addr;
                rd_pending       <= 1'b1;
            end
        end
    end

    // Stall = pending and not yet acked
    assign rd_stall = rd_pending | (rd_ack_sync & !rd_pending);


    // ════════════════════════════════════════════════════
    // 2. Synchronize request valid into slow domain
    //
    //    Only the valid/pending pulse crosses via 2-FF.
    //    The address bus (rd_req_addr_held) is held
    //    stable for the entire handshake so it is safe
    //    to sample in the slow domain once valid_sync rises.
    // ════════════════════════════════════════════════════

    logic rd_valid_sync;

    sync_2ff #(.W(1)) u_rd_sync (
        .clk_dst (clk_mem),
        .rst_dst (rst_mem),
        .d       (rd_pending),
        .q       (rd_valid_sync)
    );


    // ════════════════════════════════════════════════════
    // 3. Slow-domain BRAM access
    //
    //    Since we need to read 64 bits (2 words) per access,
    //    we use two 32-bit BRAM banks. The low word comes from
    //    bank[0], high word from bank[1]. The address bit[2]
    //    selects between the upper/lower halves of each bank
    //    if you prefer a different banking scheme.
    //
    //    Here we use a flat 64-bit wide BRAM for simplicity.
    // ════════════════════════════════════════════════════

    localparam int BANK_AW = $clog2(DEPTH / 2);  // 9 bits for 512 entries

    (* ram_style = "block" *) logic [63:0] bram [DEPTH/2];

    // Slow-domain ack and response
    logic         rd_ack_mem;
    logic [63:0]  rd_data_mem;
    logic         rd_resp_valid_mem;

    // Track previous valid_sync to detect rising edge
    logic rd_valid_sync_r;

    always_ff @(posedge clk_mem or posedge rst_mem) begin
        if (rst_mem) begin
            rd_ack_mem         <= 1'b0;
            rd_resp_valid_mem  <= 1'b0;
            rd_valid_sync_r    <= 1'b0;
        end else begin
            // Default: deassert ack
            rd_ack_mem         <= 1'b0;
            rd_resp_valid_mem  <= 1'b0;
            rd_valid_sync_r    <= rd_valid_sync;

            // ── Read: rising edge of rd_valid_sync ───────
            if (rd_valid_sync && !rd_valid_sync_r) begin
                // Convert byte address to word-pair address
                // Byte address [11:3] → word-pair address [8:0]
                // We ignore bit[2] for 64-bit aligned access
                rd_data_mem        <= bram[rd_req_addr_held[BANK_AW+2:3]];
                rd_resp_valid_mem  <= 1'b1;
                rd_ack_mem         <= 1'b1;
            end
        end
    end


    // ════════════════════════════════════════════════════
    // 4. Synchronize ack back to fast domain
    // ════════════════════════════════════════════════════

    sync_2ff #(.W(1)) u_rd_ack (
        .clk_dst (clk_cpu),
        .rst_dst (rst_cpu),
        .d       (rd_ack_mem),
        .q       (rd_ack_sync)
    );


    // ════════════════════════════════════════════════════
    // 5. Synchronize read data back to fast domain
    //
    //    Data bus is held stable in slow domain from the
    //    moment rd_ack_mem pulses until rd_pending clears.
    //    Safe to sample in fast domain once rd_ack_sync rises.
    // ════════════════════════════════════════════════════

    always_ff @(posedge clk_cpu or posedge rst_cpu) begin
        if (rst_cpu) begin
            rd_resp_valid <= 1'b0;
            rd_resp_data  <= '0;
        end else begin
            rd_resp_valid <= 1'b0;
            if (rd_ack_sync) begin
                rd_resp_valid <= 1'b1;
                rd_resp_data  <= rd_data_mem;
            end
        end
    end

endmodule
