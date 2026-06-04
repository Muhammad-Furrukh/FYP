import include_pkg::*;

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

    assign rd_stall = rd_pending | rd_ack_sync;

    logic rd_valid_sync;

    sync_2ff #(.W(1)) u_rd_sync (
        .clk_dst (clk_mem),
        .rst_dst (rst_mem),
        .d       (rd_pending),
        .q       (rd_valid_sync)
    );

    localparam int BANK_AW = $clog2(DEPTH / 2); 

    (* ram_style = "block" *) logic [63:0] bram [DEPTH/2];

    logic         rd_ack_mem;
    logic [63:0]  rd_data_mem;
    logic         rd_resp_valid_mem;

    logic rd_valid_sync_r;

    always_ff @(posedge clk_mem or posedge rst_mem) begin
        if (rst_mem) begin
            rd_ack_mem         <= 1'b0;
            rd_resp_valid_mem  <= 1'b0;
            rd_valid_sync_r    <= 1'b0;
        end else begin
            rd_ack_mem         <= 1'b0;
            rd_resp_valid_mem  <= 1'b0;
            rd_valid_sync_r    <= rd_valid_sync;

            if (rd_valid_sync && !rd_valid_sync_r) begin
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

    logic rd_ack_sync_r;

    always_ff @(posedge clk_cpu or posedge rst_cpu) begin
        if (rst_cpu) begin
            rd_ack_sync_r <= 1'b0;
            rd_resp_valid <= 1'b0;
            rd_resp_data  <= '0;
        end else begin
            rd_ack_sync_r <= rd_ack_sync;

            rd_resp_valid <= 1'b0;

            if (rd_ack_sync && !rd_ack_sync_r) begin
                rd_resp_valid <= 1'b1;
                rd_resp_data  <= rd_data_mem;
            end
        end
    end

endmodule