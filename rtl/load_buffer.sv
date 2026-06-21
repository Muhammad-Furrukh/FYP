import include_pkg::*;

module load_buffer (
    input  logic             clk,
    input  logic             rst,
    input  ldb_alloc_t       alloc,
    input  ldb_addr_t        addr_wb,
    input  stb_fwd_entry_t   stb_fwd   [STOREB_SIZE],
    input  logic             flush,
    input  sqN_t             flush_sqN,
    input  dmem_resp_t       mem_resp  [2],
    input  logic             mem_stall [2],
    output ldb_mem_req_t     mem_req   [2],
    output CDB_line_t        cdb_out,
    output logic             ld_busy
);

    // ════════════════════════════════════════════════════
    // 0. Entry type
    // ════════════════════════════════════════════════════

    typedef struct packed {
        logic            valid;
        logic            issued;
        sqN_t            sqN;
        tag_t            rd_tag;
        logic [1:0]      data_size;
        logic            is_unsigned;
        logic [XLEN-1:0] addr;
        logic            addr_valid;
        logic [XLEN-1:0] data;
        logic            data_valid;
        logic [3:0]      fwd_lanes;
        logic [XLEN-1:0] fwd_partial;
    } ldb_entry_t;

    localparam PTR_W = $clog2(LOADB_SIZE);

    ldb_entry_t entries [LOADB_SIZE];


    // ════════════════════════════════════════════════════
    // 3. Byte-lane helpers
    // ════════════════════════════════════════════════════

    // Returns a 4-bit one-hot / two-hot / four-hot mask for the byte lanes
    // touched by an access.  The shift is always by a 2-bit constant-width
    // amount derived from addr[1:0], which every synthesis tool handles as a
    // small barrel shifter — no multiplier is implied.
    function automatic logic [3:0] byte_lanes(
        input logic [XLEN-1:0] addr,
        input logic [1:0]      data_size
    );
        case (data_size)
            2'b00:   byte_lanes = 4'b0001 << addr[1:0];
            2'b01:   byte_lanes = 4'b0011 << addr[1:0];
            default: byte_lanes = 4'b1111;
        endcase
    endfunction

    // ── byte_select ───────────────────────────────────────────────────────────
    //  Replaces  word >> (byte_offset * 8)  with an explicit mux so that no
    //  combinational multiplier is inferred.
    //
    //  byte_offset is the 2-bit difference  (ld_addr[1:0] - st_addr[1:0]);
    //  the result is the 8-bit byte at that position within word.
    //
    //  (ld_byte_off - st_byte_off) gives how many bytes into the store word
    //  the first load byte sits; extracting lane b therefore uses offset+b,
    //  but since we call this per-lane with a fixed b already folded into the
    //  caller's arithmetic, the 2-bit argument here is the final offset.
    // ─────────────────────────────────────────────────────────────────────────
    function automatic logic [7:0] byte_select(
        input logic [XLEN-1:0] word,
        input logic [1:0]      byte_off   // 0-3
    );
        case (byte_off)
            2'd0:    byte_select = word[ 7: 0];
            2'd1:    byte_select = word[15: 8];
            2'd2:    byte_select = word[23:16];
            2'd3:    byte_select = word[31:24];
            default: byte_select = '0;
        endcase
    endfunction


    // ════════════════════════════════════════════════════
    // 1. Alloc index — first invalid slot
    // ════════════════════════════════════════════════════

    logic [PTR_W-1:0] alloc_idx;

    always_comb begin
        alloc_idx = '0;
        for (int i = LOADB_SIZE-1; i >= 0; i--)
            if (!entries[i].valid) alloc_idx = PTR_W'(i);
    end


    // ════════════════════════════════════════════════════
    // 2. Addr-WB index — match on sqN
    // ════════════════════════════════════════════════════

    logic [PTR_W-1:0] ta_wb_idx;

    always_comb begin
        ta_wb_idx = '0;
        for (int i = 0; i < LOADB_SIZE; i++)
            if (entries[i].valid && entries[i].sqN == addr_wb.sqN)
                ta_wb_idx = PTR_W'(i);
    end


    // ════════════════════════════════════════════════════
    // 4. Byte-granular store-to-load forwarding
    //
    //    For each load entry, for each byte lane required
    //    by the load, find the youngest older store that
    //    covers that lane.  Three outcomes per load:
    //      stall       – some lane needs an unresolved store
    //      all_covered – all lanes forwarded from STB
    //      any_covered – partial forward, memory still needed
    //
    //  All local variables that were previously declared
    //  inside the always_comb body are hoisted here so that
    //  the code is legal under stricter IEEE 1800 tool flows.
    // ════════════════════════════════════════════════════

    // --- outputs of the forwarding block ---
    logic             stall       [LOADB_SIZE];
    logic             all_covered [LOADB_SIZE];
    logic             any_covered [LOADB_SIZE];
    logic [3:0]       fwd_lanes   [LOADB_SIZE];
    logic [XLEN-1:0]  fwd_partial [LOADB_SIZE];

    // --- hoisted per-load temporaries ---
    logic [3:0]       ld_lanes_w      [LOADB_SIZE];

    // per-lane tracking (for each load entry, for each of 4 byte lanes)
    logic             lane_covered_w  [LOADB_SIZE][4];
    logic             lane_stalled_w  [LOADB_SIZE][4];
    sqN_t             lane_sqN_w      [LOADB_SIZE][4];
    logic [PTR_W-1:0] lane_store_j_w  [LOADB_SIZE][4];
    logic [7:0]       lane_byte_w     [LOADB_SIZE][4];

    logic             any_stalled_w   [LOADB_SIZE];
    logic             all_covered_w   [LOADB_SIZE];
    logic             any_covered_w   [LOADB_SIZE];

    always_comb begin
        for (int i = 0; i < LOADB_SIZE; i++) begin

            // ── default outputs ───────────────────────────
            stall[i]       = 1'b0;
            all_covered[i] = 1'b0;
            any_covered[i] = 1'b0;
            fwd_lanes[i]   = '0;
            fwd_partial[i] = '0;

            ld_lanes_w[i]    = '0;
            any_stalled_w[i] = 1'b0;
            all_covered_w[i] = 1'b1;
            any_covered_w[i] = 1'b0;

            for (int b = 0; b < 4; b++) begin
                lane_covered_w [i][b] = 1'b0;
                lane_stalled_w [i][b] = 1'b0;
                lane_sqN_w     [i][b] = '0;
                lane_store_j_w [i][b] = '0;
                lane_byte_w    [i][b] = '0;
            end

            if (entries[i].valid && entries[i].addr_valid) begin

                ld_lanes_w[i] = byte_lanes(entries[i].addr, entries[i].data_size);

                // ── scan store buffer ─────────────────────
                for (int j = 0; j < STOREB_SIZE; j++) begin
                    if (stb_fwd[j].valid || stb_fwd[j].committed) begin

                        logic       is_older;
                        logic [3:0] st_lanes;

                        is_older = ((entries[i].sqN - stb_fwd[j].sqN) & SQN_MASK)
                                       < sqN_t'(ROB_SIZE)
                                && (stb_fwd[j].sqN != entries[i].sqN);
                        
                        // Only consider stores to the same aligned word
                        if (is_older) begin
                            if(!stb_fwd[j].addr_data_valid) begin
                                for (int b = 0; b < 4; b++) begin
                                    lane_stalled_w[i][b] = 1'b1;
                                end
                            end else if (stb_fwd[j].addr[XLEN-1:2] == entries[i].addr[XLEN-1:2]) begin
                                st_lanes = byte_lanes(stb_fwd[j].addr, stb_fwd[j].data_size);

                                for (int b = 0; b < 4; b++) begin
                                    if (st_lanes[b] && ld_lanes_w[i][b]) begin
                                        // Store is resolved — is it younger than the current
                                        // best match for this lane?
                                        logic is_younger_for_lane;
                                        is_younger_for_lane =
                                            !lane_covered_w[i][b] ||
                                            (((stb_fwd[j].sqN - lane_sqN_w[i][b]) & SQN_MASK)
                                                < sqN_t'(ROB_SIZE));

                                        if (is_younger_for_lane) begin
                                            // ── byte extraction (no multiplier) ──────
                                            // Compute which byte position within the
                                            // store word this load lane maps to.
                                            logic [1:0] byte_off_in_store;

                                            // b is the word-relative byte lane (0-3), so it directly
                                            // gives the absolute byte position within the word.
                                            // The store's byte 0 is at st_addr[1:0], so the offset
                                            // of lane b within the store word is just:
                                            byte_off_in_store = 2'(b) - stb_fwd[j].addr[1:0];

                                            lane_covered_w [i][b] = 1'b1;
                                            lane_sqN_w     [i][b] = stb_fwd[j].sqN;
                                            lane_store_j_w [i][b] = PTR_W'(j);
                                            lane_byte_w    [i][b] =
                                                byte_select(stb_fwd[j].data,
                                                            byte_off_in_store);
                                        end
                                    end
                                end
                            end
                        end
                    end
                end // for j

                // ── aggregate lane results ────────────────
                for (int b = 0; b < 4; b++) begin
                    if (ld_lanes_w[i][b]) begin
                        if (lane_stalled_w[i][b]) begin
                            any_stalled_w[i] = 1'b1;
                        end 
                        if (lane_covered_w[i][b]) begin
                            any_covered_w[i]         = 1'b1;
                            fwd_lanes[i][b]          = 1'b1;
                            fwd_partial[i][b*8 +: 8] = lane_byte_w[i][b];
                        end else begin
                            all_covered_w[i] = 1'b0;
                        end
                    end
                end

                stall[i]       = any_stalled_w[i];
                all_covered[i] = all_covered_w[i] && any_covered_w[i];
                any_covered[i] = any_covered_w[i];

            end // if valid && addr_valid
        end // for i
    end


    // ════════════════════════════════════════════════════
    // 5. Memory request arbitration
    // ════════════════════════════════════════════════════

    logic [PTR_W-1:0] req_idx   [2];
    logic             req_valid [2];

    // Hoisted prefix-sum array
    logic [$clog2(LOADB_SIZE):0] prefix [LOADB_SIZE+1];

    always_comb begin
        prefix[0] = '0;
        
        req_valid[0] = 1'b0; req_idx[0] = '0;
        req_valid[1] = 1'b0; req_idx[1] = '0;

        for (int i = 0; i < LOADB_SIZE; i++) begin
            logic can_issue;
            can_issue = entries[i].valid
                     && entries[i].addr_valid
                     && !entries[i].issued
                     && !stall[i]
                     && !all_covered[i]
                     && !entries[i].data_valid;

            prefix[i+1] = prefix[i] + ($clog2(LOADB_SIZE)+1)'(can_issue);

            if (can_issue && prefix[i] == '0) begin
                req_valid[0] = 1'b1;
                req_idx[0]   = PTR_W'(i);
            end else if (can_issue && prefix[i] == 1) begin
                req_valid[1] = 1'b1;
                req_idx[1]   = PTR_W'(i);
            end
        end

        for (int p = 0; p < 2; p++) begin
            mem_req[p] = '{default: '0};
            if (req_valid[p] && !mem_stall[p]) begin
                mem_req[p].valid       = 1'b1;
                mem_req[p].sqN         = entries[req_idx[p]].sqN;
                mem_req[p].r_addr      = entries[req_idx[p]].addr;
                mem_req[p].data_size   = entries[req_idx[p]].data_size;
                mem_req[p].is_unsigned = entries[req_idx[p]].is_unsigned;
            end
        end
    end


    // ════════════════════════════════════════════════════
    // 6. CDB output
    // ════════════════════════════════════════════════════

    logic [PTR_W-1:0] broadcast_idx;
    logic             broadcast_valid;

    always_comb begin
        broadcast_idx   = '0;
        broadcast_valid = 1'b0;
        cdb_out         = '{default: '0};

        for (int i = LOADB_SIZE-1; i >= 0; i--) begin
            if (entries[i].valid && entries[i].data_valid) begin
                broadcast_idx   = PTR_W'(i);
                broadcast_valid = 1'b1;
            end
        end

        if (broadcast_valid) begin
            cdb_out.valid  = 1'b1;
            cdb_out.sqN    = entries[broadcast_idx].sqN;
            cdb_out.tag    = entries[broadcast_idx].rd_tag;
            cdb_out.result = entries[broadcast_idx].data;
        end
    end


    // ════════════════════════════════════════════════════
    // 7. Busy
    // ════════════════════════════════════════════════════

    logic [PTR_W:0] used_count;

    always_comb begin
        used_count = '0;
        for (int i = 0; i < LOADB_SIZE; i++)
            if (entries[i].valid) used_count++;
    end

    assign ld_busy = (used_count >= PTR_W'(LOADB_SIZE - COMMIT_WIDTH));


    // ════════════════════════════════════════════════════
    // 8. Sign/zero extension
    // ════════════════════════════════════════════════════

    function automatic logic [XLEN-1:0] extend_data(
        input logic [XLEN-1:0] raw,
        input logic [1:0]      data_size,
        input logic            is_unsigned
    );
        case (data_size)
            2'b00: extend_data = is_unsigned ? {{24{1'b0}},   raw[7:0]}
                                             : {{24{raw[7]}}, raw[7:0]};
            2'b01: extend_data = is_unsigned ? {{16{1'b0}},    raw[15:0]}
                                             : {{16{raw[15]}}, raw[15:0]};
            default: extend_data = raw;
        endcase
    endfunction


    // ════════════════════════════════════════════════════
    // 9. Sequential
    // ════════════════════════════════════════════════════

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (int i = 0; i < LOADB_SIZE; i++)
                entries[i] <= '{default: '0};

        end else if (flush) begin
            for (int i = 0; i < LOADB_SIZE; i++) begin
                entries[i].data_valid <= 1'b0;
                if (entries[i].valid &&
                    ((entries[i].sqN - flush_sqN) & SQN_MASK) < sqN_t'(LOADB_SIZE)) begin
                    entries[i].valid  <= 1'b0;
                    entries[i].issued <= 1'b0;
                end
            end

        end else begin

            // ── CDB drain ────────────────────────────────
            if (broadcast_valid)
                entries[broadcast_idx].valid <= 1'b0;

            // ── Memory response → data_valid (with merge) ─
            for (int p = 0; p < 2; p++) begin
                if (mem_resp[p].valid) begin
                    for (int i = 0; i < LOADB_SIZE; i++) begin
                        if (entries[i].valid
                            && entries[i].sqN == mem_resp[p].sqN) begin

                            logic [XLEN-1:0] mem_data_extended;
                            logic [XLEN-1:0] merged_data;

                            mem_data_extended = extend_data(
                                                    mem_resp[p].data,
                                                    entries[i].data_size,
                                                    entries[i].is_unsigned);

                            merged_data = mem_data_extended;

                            // Overlay forwarded bytes
                            for (int b = 0; b < 4; b++) begin
                                if (entries[i].fwd_lanes[b])
                                    merged_data[b*8 +: 8] =
                                        entries[i].fwd_partial[b*8 +: 8];
                            end

                            entries[i].data       <= merged_data;
                            entries[i].data_valid <= 1'b1;
                            entries[i].issued     <= 1'b0;
                        end
                    end
                end
            end

            // ── Pure forwarding → data_valid ─────────────
            for (int i = 0; i < LOADB_SIZE; i++) begin
                if (all_covered[i] && !entries[i].data_valid
                    && !stall[i] && entries[i].addr_valid) begin
                    entries[i].data       <= extend_data(
                                                fwd_partial[i],
                                                entries[i].data_size,
                                                entries[i].is_unsigned);
                    entries[i].data_valid <= 1'b1;
                end
            end

            // ── Capture forwarding metadata ───────────────
            for (int i = 0; i < LOADB_SIZE; i++) begin
                if (entries[i].addr_valid && !stall[i]) begin
                    entries[i].fwd_lanes   <= fwd_lanes[i];
                    entries[i].fwd_partial <= fwd_partial[i];
                end
            end

            // ── Mark issued when request fires ───────────
            for (int p = 0; p < 2; p++) begin
                if (req_valid[p] && !mem_stall[p])
                    entries[req_idx[p]].issued <= 1'b1;
            end

            // ── AGU addr writeback ────────────────────────
            if (addr_wb.valid) begin
                entries[ta_wb_idx].addr        <= addr_wb.addr;
                entries[ta_wb_idx].addr_valid  <= 1'b1;
                entries[ta_wb_idx].data_size   <= addr_wb.data_size;
                entries[ta_wb_idx].is_unsigned <= addr_wb.is_unsigned;
            end

            // ── Alloc ─────────────────────────────────────
            if (alloc.valid) begin
                entries[alloc_idx].valid       <= 1'b1;
                entries[alloc_idx].issued      <= 1'b0;
                entries[alloc_idx].sqN         <= alloc.sqN;
                entries[alloc_idx].rd_tag      <= alloc.rd_tag;
                entries[alloc_idx].data_size   <= '0;
                entries[alloc_idx].is_unsigned <= 1'b0;
                entries[alloc_idx].addr        <= '0;
                entries[alloc_idx].addr_valid  <= 1'b0;
                entries[alloc_idx].data        <= '0;
                entries[alloc_idx].data_valid  <= 1'b0;
                entries[alloc_idx].fwd_lanes   <= '0;
                entries[alloc_idx].fwd_partial <= '0;
            end
        end
    end

endmodule
