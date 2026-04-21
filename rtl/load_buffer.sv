import include_pkg::*;

module load_buffer (
    input  logic             clk,
    input  logic             rst,
    input  ldb_alloc_t       alloc,
    input  ldb_addr_t        addr_wb,
    input  stb_fwd_entry_t   stb_fwd    [STOREB_SIZE],
    input  logic             flush,
    input  sqN_t             flush_sqN,
    input  dmem_resp_t       mem_resp   [2],
    output ldb_mem_req_t     mem_req    [2],
    output CDB_line_t        cdb_out,
    output logic             ld_busy
);

    // ════════════════════════════════════════════════════
    // 0. Entry type
    // ════════════════════════════════════════════════════

    typedef enum logic [2:0] {
        LDB_EMPTY,
        LDB_PENDING,     // waiting for AGU address
        LDB_ADDR_READY,  // address known, not yet issued
        LDB_WAITING,     // memory request issued
        LDB_COMPLETE     // data ready, pending CDB broadcast
    } ldb_state_t;

    typedef struct packed {
        ldb_state_t      state;
        sqN_t            sqN;
        tag_t            rd_tag;
        logic [1:0]      data_size;
        logic            is_unsigned;
        logic [XLEN-1:0] addr;
        logic [XLEN-1:0] data;
        logic [1:0]      mem_port;   // which mem_resp port to watch
    } ldb_entry_t;

    // ════════════════════════════════════════════════════
    // 1. State
    // ════════════════════════════════════════════════════

    ldb_entry_t entries [LOADB_SIZE];

    logic [$clog2(LOADB_SIZE)-1:0] ldb_empty_idx;
    
    always_comb begin
    	for (int i = LOADB_SIZE - 1; i >= 0; i--)
    	    if (entries[i].state == LDB_EMPTY) begin
    	    	ldb_empty_idx = i;
    	    end
    end
    
    logic stall [STOREB_SIZE];
    
    always_comb begin
        stall = '0;
        for (int i = 0; i < STOREB_SIZE; i++) begin
            assign stall[i+1] = stall[i] && !(stb_fwd[i].valid ^ stb_fwd[i].addr_data_valid == 1);
        end
    end
    
    // ════════════════════════════════════════════════════
    // 2. Forwarding check
    //
    //    For each load entry in ADDR_READY, scan stb_fwd
    //    to find the YOUNGEST store older than this load
    //    (highest sqN still less than load's sqN) whose
    //    address fully covers the load address/size.
    //
    //    "Fully covers" = same base address (aligned) and
    //    store data_size >= load data_size.
    //
    //    fwd_hit[i]  — entry i has a forwarding match
    //    fwd_data[i] — the forwarded data for entry i
    // ════════════════════════════════════════════════════

    logic [XLEN-1:0] fwd_data [LOADB_SIZE];
    logic            fwd_hit  [LOADB_SIZE];

    always_comb begin
        for (int i = 0; i < LOADB_SIZE; i++) begin
            fwd_hit[i]  = 1'b0;
            fwd_data[i] = '0;

            if (entries[i].state == LDB_ADDR_READY) begin
                // Scan all STB entries; youngest older store wins
                // (iterate in order, last hit overwrites — assumes
                //  stb_fwd is ordered oldest→youngest by sqN)
                for (int j = 0; j < STOREB_SIZE; j++) begin
                    if (stb_fwd[j].valid 
	                && ((stb_fwd[j].sqN - entries[i].sqN) & SQN_MASK < ROB_SIZE)
	                && (stb_fwd[j].data_size >= entries[i].data_size)
	                && (stb_fwd[j].addr == entries[i].addr)) begin
	                fwd_hit[i]  = 1'b1;
	                fwd_data[i] = stb_fwd[j].data;
	            end
                end
            end
        end
    end


    // ════════════════════════════════════════════════════
    // 3. Memory request arbitration
    //
    //    Up to 2 ADDR_READY entries (with no fwd_hit) can
    //    issue memory requests per cycle. We scan entries
    //    in sqN order and assign to ports 0 and 1.
    //    Prefix-sum approach — same as dispatch_unit,
    //    no combinational loops.
    // ════════════════════════════════════════════════════

    logic can_issue  [LOADB_SIZE];  // entry wants to go to memory
    logic issue_port [LOADB_SIZE];  // which mem port (0 or 1)
    logic issue_en   [LOADB_SIZE];  // entry actually issues this cycle

    // can_issue: ADDR_READY with no forwarding hit
    always_comb
        for (int i = 0; i < LOADB_SIZE; i++)
            can_issue[i] = (entries[i].state == LDB_ADDR_READY) && !fwd_hit[i];

    // prefix count of can_issue entries — determines port assignment
    logic [$clog2(LOADB_SIZE):0] prefix_issue [LOADB_SIZE+1];
    assign prefix_issue[0] = '0;
    for (genvar i = 0; i < LOADB_SIZE; i++)
        assign prefix_issue[i+1] = prefix_issue[i] + ($clog2(LOADB_SIZE)+1)'(can_issue[i]);

    // Assign port 0 to the 0th can_issue entry,
    //         port 1 to the 1st can_issue entry
    always_comb begin
        for (int i = 0; i < LOADB_SIZE; i++) begin
            issue_en[i]   = 1'b0;
            issue_port[i] = 1'b0;
            if (can_issue[i] && (prefix_issue[i] < ($clog2(LOADB_SIZE)+1)'(2))) begin
                issue_en[i]   = 1'b1;
                issue_port[i] = prefix_issue[i][0]; // 0 or 1
            end
        end
    end

    // Drive mem_req outputs
    always_comb begin
        mem_req[0] = '{default: '0};
        mem_req[1] = '{default: '0};
        for (int i = 0; i < LOADB_SIZE; i++) begin
            if (issue_en[i]) begin
                mem_req[issue_port[i]].valid     = 1'b1;
                mem_req[issue_port[i]].addr      = entries[i].addr;
                mem_req[issue_port[i]].data_size = entries[i].data_size;
                mem_req[issue_port[i]].tag       = entries[i].rd_tag;
            end
        end
    end


    // ════════════════════════════════════════════════════
    // 4. CDB output
    //
    //    One COMPLETE entry broadcasts per cycle.
    //    Pick the oldest (lowest sqN) complete entry.
    // ════════════════════════════════════════════════════
	
    logic [$clog2(LOADB_SIZE)-1:0] ldb_free_idx;
    
    always_comb begin
        cdb_out = '{default: '0};
        // Scan all entries; last write with lowest sqN wins
        // (iterate reverse so lowest index / oldest sqN wins)
        for (int i = LOADB_SIZE-1; i >= 0; i--) begin
            if (entries[i].state == LDB_COMPLETE) begin
                ldb_free_idx   = i;
                cdb_out.valid  = 1'b1;
                cdb_out.sqN    = entries[i].sqN;
                cdb_out.tag    = entries[i].rd_tag;
                cdb_out.result = entries[i].data;
            end
        end
    end


    // ════════════════════════════════════════════════════
    // 5. ld_busy
    //    Signal backpressure when buffer is nearly full.
    // ════════════════════════════════════════════════════

    logic [$clog2(LOADB_SIZE):0] used_count;
    always_comb begin
        used_count = '0;
        for (int i = 0; i < LOADB_SIZE; i++)
            if (entries[i].state != LDB_EMPTY)
                used_count += ($clog2(LOADB_SIZE)+1)'(1);
    end

    assign ld_busy = (used_count >= ($clog2(LOADB_SIZE)+1)'(LOADB_SIZE - COMMIT_WIDTH)) & ;


    // ════════════════════════════════════════════════════
    // 6. Data sign/zero extension
    //
    //    Applied when an entry reaches COMPLETE, whether
    //    via forwarding or memory response.
    // ════════════════════════════════════════════════════

    function automatic logic [XLEN-1:0] extend_data(
        input logic [XLEN-1:0] raw,
        input logic [1:0]      data_size,
        input logic            is_unsigned
    );
        case (data_size)
            2'b00: extend_data = is_unsigned ? {{24{1'b0}},        raw[7:0]}
                                             : {{24{raw[7]}},      raw[7:0]};
            2'b01: extend_data = is_unsigned ? {{16{1'b0}},        raw[15:0]}
                                             : {{16{raw[15]}},     raw[15:0]};
            default: extend_data = raw;
        endcase
    endfunction


    // ════════════════════════════════════════════════════
    // 7. Sequential update
    //
    //    Priority per entry (highest → lowest):
    //      rst / flush — invalidate
    //      cdb_drain   — clear COMPLETE entry that broadcast
    //      mem_resp    — WAITING → COMPLETE
    //      fwd_hit     — ADDR_READY → COMPLETE via forwarding
    //      issue       — ADDR_READY → WAITING
    //      addr_wb     — PENDING → ADDR_READY
    //      alloc       — EMPTY → PENDING (tail insert)
    // ════════════════════════════════════════════════════

    always_ff @(posedge clk) begin
        if (rst) begin
            for (int i = 0; i < LOADB_SIZE; i++)
                entries[i] <= '{state: LDB_EMPTY, default: '0};

        end else if (!stall) begin

            // ── Flush ────────────────────────────────────
            if (flush) begin
                for (int i = 0; i < LOADB_SIZE; i++)
                    if (entries[i].state != LDB_EMPTY
                        && entries[i].sqN > flush_sqN)
                        entries[i].state <= LDB_EMPTY;
            end

            // ── CDB drain ────────────────────────────────
            // Clear whichever COMPLETE entry we just broadcast.
            // Matches the combinational cdb_out selection above.
            
            entries[ldb_free_idx].state <= LDB_EMPTY;
               
            // ── Memory response → COMPLETE ────────────────
            for (int p = 0; p < 2; p++) begin
                if (mem_resp[p].valid) begin
                    for (int i = 0; i < LOADB_SIZE; i++) begin
                        if (entries[i].state   == LDB_WAITING
                            && entries[i].mem_port == 2'(p)
                            && entries[i].rd_tag   == mem_resp[p].tag) begin
                            entries[i].state <= LDB_COMPLETE;
                            entries[i].data  <= extend_data(
                                                    mem_resp[p].data,
                                                    entries[i].data_size,
                                                    entries[i].is_unsigned);
                        end
                    end
                end
            end

            // ── Forwarding hit → COMPLETE ─────────────────
            for (int i = 0; i < LOADB_SIZE; i++) begin
                if (fwd_hit[i]) begin
                    entries[i].state <= LDB_COMPLETE;
                    entries[i].data  <= extend_data(
                                            fwd_data[i],
                                            entries[i].data_size,
                                            entries[i].is_unsigned);
                end
            end

            // ── Issue → WAITING ───────────────────────────
            for (int i = 0; i < LOADB_SIZE; i++) begin
                if (issue_en[i]) begin
                    entries[i].state    <= LDB_WAITING;
                    entries[i].mem_port <= {1'b0, issue_port[i]};
                end
            end

            // ── AGU writeback → ADDR_READY ────────────────
            if (addr_wb.valid) begin
                for (int i = 0; i < LOADB_SIZE; i++) begin
                    if (entries[i].state == LDB_PENDING
                        && entries[i].sqN == addr_wb.sqN) begin
                        entries[i].state <= LDB_ADDR_READY;
                        entries[i].addr  <= addr_wb.addr;
                    end
                end
            end

            // ── Alloc → PENDING ───────────────────────────
            // Find the first EMPTY slot (lowest index = oldest slot) 
            if (alloc.valid) begin
                entries[ldb_empty_idx].state       <= LDB_PENDING;
                entries[ldb_empty_idx].sqN         <= alloc.sqN;
                entries[ldb_empty_idx].rd_tag      <= alloc.rd_tag;
                entries[ldb_empty_idx].data_size   <= alloc.data_size;
                entries[ldb_empty_idx].is_unsigned <= alloc.is_unsigned;
                entries[ldb_empty_idx].addr        <= '0;
                entries[ldb_empty_idx].data        <= '0;
                entries[ldb_empty_idx].mem_port    <= '0;
            end
        end
    end

endmodule
