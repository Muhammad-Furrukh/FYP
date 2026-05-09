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
        sqN_t            sqN;
        tag_t            rd_tag;
        logic [1:0]      data_size;
        logic            is_unsigned;
        logic [XLEN-1:0] addr;
        logic            addr_valid;
        logic [XLEN-1:0] data;
        logic            data_valid;
    } ldb_entry_t;

    localparam PTR_W = $clog2(LOADB_SIZE);

    ldb_entry_t entries [LOADB_SIZE];


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
    // 3. Byte-lane helpers
    //
    //    byte_lanes(addr, data_size) returns a 4-bit mask
    //    of which byte lanes within a 32-bit word the
    //    access touches.
    //
    //    extract_bytes(word, addr, data_size) right-shifts
    //    the store word so the relevant bytes land in
    //    bits [XLEN-1:0] aligned to bit 0, ready for
    //    sign/zero extension.
    // ════════════════════════════════════════════════════

    function automatic logic [3:0] byte_lanes(
        input logic [XLEN-1:0] addr,
        input logic [1:0]      data_size
    );
        case (data_size)
            2'b00:   byte_lanes = 4'b0001 << addr[1:0];          // byte
            2'b01:   byte_lanes = 4'b0011 << addr[1:0];          // halfword
            default: byte_lanes = 4'b1111;                       // word
        endcase
    endfunction

    function automatic logic [XLEN-1:0] extract_bytes(
        input logic [XLEN-1:0] store_word,
        input logic [XLEN-1:0] ld_addr,
        input logic [XLEN-1:0] st_addr,
        input logic [1:0]      ld_size
    );
        // Byte offset of the load's LSB within the store word
        logic [1:0] byte_off;
        byte_off = ld_addr[1:0] - st_addr[1:0];
        extract_bytes = store_word >> (byte_off * 8);
        // Upper bits beyond ld_size are don't-cares;
        // extend_data will mask/sign-extend them.
    endfunction


    // ════════════════════════════════════════════════════
    // 4. STB alias / forwarding / stall
    //
    //    For each load entry, only when addr_valid = 1:
    //
    //      a) Scan every older STB entry.
    //         If ANY older entry has addr_data_valid = 0
    //         → stall (we cannot yet rule out aliasing).
    //
    //      b) Among older entries with addr_data_valid = 1,
    //         check whether the store's byte lanes fully
    //         cover the load's byte lanes (address match).
    //         Track the YOUNGEST such covering store.
    //
    //      c) If no stall and a covering store was found
    //         → forward (fwd_hit + fwd_data).
    //
    //      d) If no stall and no covering store
    //         → fall through to memory arbitration.
    // ════════════════════════════════════════════════════

    logic [XLEN-1:0] fwd_data [LOADB_SIZE];
    logic            fwd_hit  [LOADB_SIZE];
    logic            stall    [LOADB_SIZE];

    always_comb begin
        logic             is_older;
        logic             addr_covers;
        logic [3:0]       ld_lanes;
        logic [3:0]       st_lanes;
        logic             found_match;
        sqN_t             youngest_sqN;
        logic [PTR_W-1:0] youngest_j;
        
        found_match  	= '0;
        youngest_sqN 	= '0;
        youngest_j    	= '0;
        ld_lanes		  	= '0;
        st_lanes			= '0;
        is_older			= '0;
        addr_covers		= '0;
        
        for (int i = 0; i < LOADB_SIZE; i++) begin
            fwd_hit[i]  = 1'b0;
            fwd_data[i] = '0;
            stall[i]    = 1'b0;

            // ── Gate: load address must be known ─────────
            if (entries[i].valid && entries[i].addr_valid) begin

                ld_lanes     = byte_lanes(entries[i].addr,
                                          entries[i].data_size);

                for (int j = 0; j < STOREB_SIZE; j++) begin
                    if (stb_fwd[j].valid || stb_fwd[j].committed) begin

                        // Older = (load.sqN - store.sqN) wraps into [1, ROB_SIZE)
                        is_older = ((entries[i].sqN - stb_fwd[j].sqN) & SQN_MASK)
                                       < sqN_t'(ROB_SIZE)
                                && (stb_fwd[j].sqN != entries[i].sqN);

                        if (is_older) begin
                            if (!stb_fwd[j].addr_data_valid) begin
                                // ── (a) Older store with unknown result → stall
                                stall[i] = 1'b1;
                            end else begin
                                // ── (b) Older store with known addr+data
                                //        Check byte-lane coverage:
                                //        store lanes must cover all load lanes
                                //        (word-aligned base must also match)
                                st_lanes    = byte_lanes(stb_fwd[j].addr,
                                                         stb_fwd[j].data_size);
                                addr_covers = (stb_fwd[j].addr[XLEN-1:2]
                                                  == entries[i].addr[XLEN-1:2])
                                           && ((st_lanes & ld_lanes) == ld_lanes);

                                if (addr_covers) begin
                                    // Track youngest covering store
                                    if (!found_match ||
                                        ((stb_fwd[j].sqN - youngest_sqN) & SQN_MASK)
                                            < sqN_t'(ROB_SIZE))
                                    begin
                                        found_match  = 1'b1;
                                        youngest_sqN = stb_fwd[j].sqN;
                                        youngest_j   = PTR_W'(j);
                                    end
                                end
                            end
                        end
                    end
                end

                // ── (c) Forward from youngest covering store ──
                // Only act if nothing triggered a stall
                if (!stall[i] && found_match) begin
                    fwd_hit[i]  = 1'b1;
                    fwd_data[i] = extract_bytes(
                                      stb_fwd[youngest_j].data,
                                      entries[i].addr,
                                      stb_fwd[youngest_j].addr,
                                      entries[i].data_size);
                end
                // ── (d) !stall && !found_match → memory ───────
            end
        end
    end


    // ════════════════════════════════════════════════════
    // 5. Memory request arbitration
    //    Issue up to 2 entries that:
    //      - addr_valid
    //      - not stalled
    //      - no fwd_hit
    //      - data not already valid
    //    Prefix-sum: port p gets the p-th issuable entry
    // ════════════════════════════════════════════════════

    logic [PTR_W-1:0] req_idx   [2];
    logic             req_valid [2];

    always_comb begin
        logic [$clog2(LOADB_SIZE):0] prefix [LOADB_SIZE+1];
        prefix[0] = '0;
        for (int i = 0; i < LOADB_SIZE; i++) begin
            logic can_issue;
            can_issue   = entries[i].valid
                       && entries[i].addr_valid
                       && !stall[i]
                       && !fwd_hit[i]
                       && !entries[i].data_valid;
            prefix[i+1] = prefix[i] + ($clog2(LOADB_SIZE)+1)'(can_issue);
        end

        req_valid[0] = 1'b0; req_idx[0] = '0;
        req_valid[1] = 1'b0; req_idx[1] = '0;

        for (int i = 0; i < LOADB_SIZE; i++) begin
            logic can_issue;
            can_issue = entries[i].valid
                     && entries[i].addr_valid
                     && !stall[i]
                     && !fwd_hit[i]
                     && !entries[i].data_valid;

            if (can_issue && prefix[i] == '0) begin
                req_valid[0] = 1'b1;
                req_idx[0]   = PTR_W'(i);
            end else if (can_issue && prefix[i] == 1) begin
                req_valid[1] = 1'b1;
                req_idx[1]   = PTR_W'(i);
            end
        end

        // Drive outputs
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
    //    Oldest entry with data_valid broadcasts.
    //    Iterate reverse so lowest index wins on tie.
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
    //
    //    Priority (highest → lowest):
    //      rst          — full reset
    //      flush        — squash speculative entries
    //      cdb_drain    — free broadcast entry
    //      mem_resp     — write back memory data
    //      fwd_hit      — write forwarded STB data
    //                     (addr_valid is guaranteed here,
    //                      so extend immediately — no raw
    //                      latch / re-extend path needed)
    //      addr_wb      — write back AGU address
    //      alloc        — claim new slot
    // ════════════════════════════════════════════════════

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (int i = 0; i < LOADB_SIZE; i++)
                entries[i] <= '{default: '0};

        end else if (flush) begin
            for (int i = 0; i < LOADB_SIZE; i++)
                if (entries[i].valid &&
                    ((entries[i].sqN - flush_sqN) & SQN_MASK) < sqN_t'(ROB_SIZE))
                    entries[i].valid <= 1'b0;

        end else begin

            // ── CDB drain ────────────────────────────────
            if (broadcast_valid)
                entries[broadcast_idx].valid <= 1'b0;

            // ── Memory response → data_valid ─────────────
            for (int p = 0; p < 2; p++) begin
                if (mem_resp[p].valid) begin
                    for (int i = 0; i < LOADB_SIZE; i++) begin
                        if (entries[i].valid
                            && entries[i].sqN == mem_resp[p].sqN) begin
                            entries[i].data       <= extend_data(
                                                        mem_resp[p].data,
                                                        entries[i].data_size,
                                                        entries[i].is_unsigned);
                            entries[i].data_valid <= 1'b1;
                        end
                    end
                end
            end

            // ── STB forwarding → data_valid ───────────────
            // addr_valid is guaranteed before fwd_hit can assert
            // (section 4 gates on it), so data_size/is_unsigned
            // are already correct — extend immediately, no
            // deferred re-extend path required.
            for (int i = 0; i < LOADB_SIZE; i++) begin
                if (fwd_hit[i] && !entries[i].data_valid) begin
                    entries[i].data       <= extend_data(
                                                fwd_data[i],
                                                entries[i].data_size,
                                                entries[i].is_unsigned);
                    entries[i].data_valid <= 1'b1;
                end
            end

            // ── AGU addr writeback ────────────────────────
            if (addr_wb.valid) begin
                entries[ta_wb_idx].addr        <= addr_wb.addr;
                entries[ta_wb_idx].addr_valid  <= 1'b1;
                entries[ta_wb_idx].data_size   <= addr_wb.data_size;
                entries[ta_wb_idx].is_unsigned <= addr_wb.is_unsigned;
                // data_valid cannot be set yet at this point:
                // fwd_hit requires addr_valid which only becomes
                // true next cycle, so no re-extend case exists.
            end

            // ── Alloc ─────────────────────────────────────
            if (alloc.valid) begin
                entries[alloc_idx].valid       <= 1'b1;
                entries[alloc_idx].sqN         <= alloc.sqN;
                entries[alloc_idx].rd_tag      <= alloc.rd_tag;
                entries[alloc_idx].data_size   <= '0;
                entries[alloc_idx].is_unsigned <= 1'b0;
                entries[alloc_idx].addr        <= '0;
                entries[alloc_idx].addr_valid  <= 1'b0;
                entries[alloc_idx].data        <= '0;
                entries[alloc_idx].data_valid  <= 1'b0;
            end
        end
    end

endmodule
