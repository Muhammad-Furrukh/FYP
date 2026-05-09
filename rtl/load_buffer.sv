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
        tag_t            rs1_tag;        // base register tag
        logic [XLEN-1:0] imm;            // immediate offset
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
    // 3. STB alias check
    //
    //    For each load entry:
    //      Scan STB for entries with matching rs1_tag + imm
    //      that are older (sqN < load.sqN, wrap-safe).
    //      Track the YOUNGEST such match.
    //
    //    Decision on youngest match:
    //      addr_data_valid=1 → forward, set fwd_hit
    //      addr_data_valid=0 → stall
    //
    //    No match → no stall, issue to memory when addr_valid
    // ════════════════════════════════════════════════════

    logic [XLEN-1:0] fwd_data    [LOADB_SIZE];
    logic            fwd_hit     [LOADB_SIZE];
    logic            stall       [LOADB_SIZE];

    always_comb begin
        logic               found;
        sqN_t               youngest_sqN;
        logic [PTR_W-1:0]   youngest_j;
        logic               is_older;
        logic               tags_match;

        found           = 1'b0;
        youngest_sqN    = '0;
        youngest_j      = '0;
        is_older        = 1'b0;
        tags_match      = 1'b0;

        for (int i = 0; i < LOADB_SIZE; i++) begin
            fwd_hit[i]  = 1'b0;
            fwd_data[i] = '0;
            stall[i]    = 1'b0;

            if (entries[i].valid) begin
                // ── Find youngest older aliasing store ───
                

                for (int j = 0; j < STOREB_SIZE; j++) begin
                    if (stb_fwd[j].valid || stb_fwd[j].committed) begin
                        // Older = (load.sqN - store.sqN) in [1, ROB_SIZE)
                        

                        is_older = ((entries[i].sqN - stb_fwd[j].sqN)
                                    & SQN_MASK) < sqN_t'(ROB_SIZE)
                                && (stb_fwd[j].sqN != entries[i].sqN);
                                
                        tags_match = (stb_fwd[j].rs1_tag == entries[i].rs1_tag)
                                  && (stb_fwd[j].imm      == entries[i].imm);

                        if (is_older && tags_match) begin
                            // Youngest = store whose sqN is closest
                            // below load.sqN — largest sqN seen so far
                            if (!found ||
                                ((stb_fwd[j].sqN - youngest_sqN)
                                 & SQN_MASK) < sqN_t'(ROB_SIZE)) begin
                                found        = 1'b1;
                                youngest_sqN = stb_fwd[j].sqN;
                                youngest_j   = PTR_W'(j);
                            end
                        end
                    end
                end

                // ── Evaluate youngest match ──────────────
                if (found) begin
                    if (stb_fwd[youngest_j].addr_data_valid) begin
                        // Data ready — forward
                        fwd_hit[i]  = 1'b1;
                        fwd_data[i] = stb_fwd[youngest_j].data;
                    end else begin
                        // Data not ready — stall
                        stall[i] = 1'b1;
                    end
                end
                // No match → proceed to memory
            end
        end
    end


    // ════════════════════════════════════════════════════
    // 4. Memory request arbitration
    //    Issue up to 2 entries that:
    //      - addr_valid (need real address for request)
    //      - not stalled
    //      - no fwd_hit (data not coming from STB)
    //      - data not already valid
    //    Prefix-sum: port p gets p-th issuable entry
    // ════════════════════════════════════════════════════

    logic [PTR_W-1:0] req_idx   [2];
    logic             req_valid [2];

    always_comb begin
        logic [$clog2(LOADB_SIZE):0] prefix [LOADB_SIZE+1];
        prefix[0] = '0;
        for (int i = 0; i < LOADB_SIZE; i++) begin
            logic can_issue;
            can_issue  = entries[i].valid
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
    // 5. CDB output
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
    // 6. Busy
    // ════════════════════════════════════════════════════

    logic [PTR_W:0] used_count;

    always_comb begin
        used_count = '0;
        for (int i = 0; i < LOADB_SIZE; i++)
            if (entries[i].valid) used_count++;
    end

    assign ld_busy = (used_count >= PTR_W'(LOADB_SIZE - COMMIT_WIDTH));


    // ════════════════════════════════════════════════════
    // 7. Sign/zero extension
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
    // 8. Sequential
    //
    //    Priority (highest → lowest):
    //      rst          — full reset
    //      flush        — squash speculative entries
    //      cdb_drain    — free broadcast entry
    //      mem_resp     — write back memory data
    //      fwd_hit      — write forwarded STB data
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
            // fwd_hit is combinational — write result into
            // entry so it broadcasts on the next cycle.
            for (int i = 0; i < LOADB_SIZE; i++) begin
                if (fwd_hit[i] && !entries[i].data_valid) begin
                    // data_size/is_unsigned known only after addr_wb;
                    // if addr not yet written, latch raw and re-extend
                    // when addr_wb arrives. If addr already valid,
                    // extend now.
                    if (entries[i].addr_valid) begin
                        entries[i].data <= extend_data(
                                               fwd_data[i],
                                               entries[i].data_size,
                                               entries[i].is_unsigned);
                    end else begin
                        // Store raw — addr_wb handler will extend
                        entries[i].data <= fwd_data[i];
                    end
                    entries[i].data_valid <= 1'b1;
                end
            end

            // ── AGU addr writeback ────────────────────────
            if (addr_wb.valid) begin
                entries[ta_wb_idx].addr        <= addr_wb.addr;
                entries[ta_wb_idx].addr_valid  <= 1'b1;
                entries[ta_wb_idx].data_size   <= addr_wb.data_size;
                entries[ta_wb_idx].is_unsigned <= addr_wb.is_unsigned;

                // If data was forwarded before addr arrived,
                // apply size/sign extension now
                if (entries[ta_wb_idx].data_valid) begin
                    entries[ta_wb_idx].data <= extend_data(
                                                   entries[ta_wb_idx].data,
                                                   addr_wb.data_size,
                                                   addr_wb.is_unsigned);
                end
            end

            // ── Alloc ─────────────────────────────────────
            if (alloc.valid) begin
                entries[alloc_idx].valid      <= 1'b1;
                entries[alloc_idx].sqN        <= alloc.sqN;
                entries[alloc_idx].rd_tag     <= alloc.rd_tag;
                entries[alloc_idx].rs1_tag    <= alloc.rs1_tag;
                entries[alloc_idx].imm        <= alloc.imm;
                entries[alloc_idx].data_size  <= '0;
                entries[alloc_idx].is_unsigned<= 1'b0;
                entries[alloc_idx].addr       <= '0;
                entries[alloc_idx].addr_valid <= 1'b0;
                entries[alloc_idx].data       <= '0;
                entries[alloc_idx].data_valid <= 1'b0;
            end
        end
    end

endmodule
