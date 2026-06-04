import include_pkg::*;

module icache (
    input   logic               clk,
    input   logic               rst,

    //======================================================================
    // Fetch Interface
    //======================================================================
    input   logic               fetch_valid,
    output  logic               fetch_ready,
    input   pc_t                fetch_addr,
    output  fetch_packet_t      fetch_data,
    output  logic               fetch_hit,

    //======================================================================
    // Bus Interface (for line fills)
    //======================================================================
    output  logic               bus_req_valid,
    input   logic               bus_req_ready,
    output  pc_t                bus_req_addr,
    input   logic               bus_resp_valid,
    input   fetch_packet_t      bus_resp_data,

    //======================================================================
    // Cache Control
    //======================================================================
    input   logic               inval_valid,
    input   pc_t                inval_addr,
    output  logic               inval_done
);

    //==========================================================================
    // Local Parameters
    //==========================================================================
    localparam int unsigned OFFSET_BITS = $clog2(CACHE_LINE_BYTES);
    localparam int unsigned INDEX_BITS  = $clog2(CACHE_NUM_LINES);
    localparam int unsigned TAG_BITS    = XLEN - INDEX_BITS - OFFSET_BITS;

    typedef logic [TAG_BITS-1:0]    cache_tag_t;
    typedef logic [INDEX_BITS-1:0]  cache_index_t;

    //==========================================================================
    // State Machine
    //==========================================================================
    typedef enum logic [1:0] {
        CACHE_IDLE,
        CACHE_MISS_REQ,
        CACHE_MISS_WAIT,
        CACHE_INVAL
    } cache_state_t;

    cache_state_t state, next_state;

    //==========================================================================
    // Cache Storage Arrays (synchronous read)
    //==========================================================================
    cache_tag_t     tag_array   [CACHE_NUM_LINES-1:0];
    logic           valid_array [CACHE_NUM_LINES-1:0];
    fetch_packet_t  data_array  [CACHE_NUM_LINES-1:0];

    //==========================================================================
    // Pipeline Stage 0: Address Register
    //==========================================================================
    pc_t                addr_r;
    logic               addr_valid_r;

    //==========================================================================
    // Pipeline Stage 1: Index/Tag + Array Read
    //==========================================================================
    cache_index_t       index_r;
    cache_tag_t         tag_r;
    cache_tag_t         tag_read_r;
    logic               valid_read_r;
    fetch_packet_t      data_read_r;
    logic               pipe1_valid_r;   // tracks whether Stage 1 holds a valid addr

    //==========================================================================
    // Pipeline Stage 2: Hit Detection + Data Output
    //==========================================================================
    logic               hit_r;
    fetch_packet_t      data_out_r;
    logic               data_valid_r;

    //==========================================================================
    // Miss Handling Registers
    //==========================================================================
    pc_t                miss_addr_r;
    cache_index_t       miss_index_r;
    cache_tag_t         miss_tag_r;

    //==========================================================================
    // Invalidation Register
    //==========================================================================
    cache_index_t       inval_index_r;

    //==========================================================================
    // Stage 0: Register incoming address
    //==========================================================================
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            addr_r       <= '0;
            addr_valid_r <= 1'b0;
        end else begin
            if (fetch_ready && fetch_valid) begin
                addr_r       <= fetch_addr;
                addr_valid_r <= 1'b1;
            end else if (!fetch_ready) begin
                // Hold during stall
                addr_r       <= addr_r;
                addr_valid_r <= addr_valid_r;
            end else begin
                addr_valid_r <= 1'b0;
            end
        end
    end

    //==========================================================================
    // Stage 1: Extract index/tag and read arrays
    //==========================================================================
    cache_index_t index_comb;
    cache_tag_t   tag_comb;

    assign index_comb = addr_r[INDEX_BITS + OFFSET_BITS - 1 : OFFSET_BITS];
    assign tag_comb   = addr_r[XLEN-1 : INDEX_BITS + OFFSET_BITS];

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            index_r       <= '0;
            tag_r         <= '0;
            tag_read_r    <= '0;
            valid_read_r  <= 1'b0;
            data_read_r   <= '0;
            pipe1_valid_r <= 1'b0;
        end else begin
            index_r       <= index_comb;
            tag_r         <= tag_comb;
            tag_read_r    <= tag_array[index_comb];
            valid_read_r  <= valid_array[index_comb];
            data_read_r   <= data_array[index_comb];
            pipe1_valid_r <= addr_valid_r;
        end
    end

    logic miss_detected;
    assign miss_detected = pipe1_valid_r && !(valid_read_r && (tag_read_r == tag_r))
                           && (state == CACHE_IDLE) && !inval_valid;

    //==========================================================================
    // Stage 2: Hit detection and data output
    //==========================================================================
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            hit_r        <= 1'b0;
            data_out_r   <= '0;
            data_valid_r <= 1'b0;
        end else begin
            hit_r        <= valid_read_r && (tag_read_r == tag_r);
            data_out_r   <= data_read_r;
            // FIX (Bug 2c): data_valid_r simply tracks whether Stage 1
            // contained a valid transaction.  The old condition gated on
            // (state != CACHE_MISS_WAIT || bus_resp_valid) which could
            // suppress the flag on the fill-completion cycle.
            data_valid_r <= pipe1_valid_r;
        end
    end

    //==========================================================================
    // State Machine - Next State Logic
    //==========================================================================
    always_comb begin
        next_state = state;

        case (state)
            CACHE_IDLE: begin
                if (inval_valid) begin
                    next_state = CACHE_INVAL;
                end
                // FIX (Bug 2a): use the combinational miss_detected signal
                // so transition happens one cycle earlier than before.
                else if (miss_detected) begin
                    next_state = CACHE_MISS_REQ;
                end
            end

            CACHE_MISS_REQ: begin
                if (bus_req_ready) begin
                    next_state = CACHE_MISS_WAIT;
                end
            end

            CACHE_MISS_WAIT: begin
                if (bus_resp_valid) begin
                    next_state = CACHE_IDLE;
                end
            end

            CACHE_INVAL: begin
                next_state = CACHE_IDLE;
            end

            default: next_state = CACHE_IDLE;
        endcase
    end

    //==========================================================================
    // State Register
    //==========================================================================
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= CACHE_IDLE;
        end else begin
            state <= next_state;
        end
    end

    always_ff @(posedge clk) begin
        if (miss_detected) begin
            // Reconstruct the aligned line address from Stage-1 registers.
            miss_addr_r  <= pc_t'({tag_r, index_r, {OFFSET_BITS{1'b0}}});
            miss_index_r <= index_r;
            miss_tag_r   <= tag_r;
        end
    end

    //==========================================================================
    // Invalidation Index Capture
    //==========================================================================
    always_ff @(posedge clk) begin
        if (state == CACHE_IDLE && inval_valid) begin
            inval_index_r <= inval_addr[INDEX_BITS + OFFSET_BITS - 1 : OFFSET_BITS];
        end
    end

    //==========================================================================
    // Array Write - Unified block (single writer)
    //==========================================================================
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (int i = 0; i < CACHE_NUM_LINES; i++) begin
                valid_array[i] <= 1'b0;
            end
        end else begin
            // Invalidation has priority over line fill
            if (state == CACHE_INVAL) begin
                valid_array[inval_index_r] <= 1'b0;
            end
            // Line fill on miss completion
            else if (state == CACHE_MISS_WAIT && bus_resp_valid) begin
                data_array[miss_index_r]  <= bus_resp_data;
                tag_array[miss_index_r]   <= miss_tag_r;
                valid_array[miss_index_r] <= 1'b1;
            end
        end
    end

    //==========================================================================
    // Output Signals
    //==========================================================================
    assign fetch_data = data_out_r;
    assign fetch_hit  = hit_r && data_valid_r && (state == CACHE_IDLE);

    //==========================================================================
    // Flow Control
    // fetch_ready: We can accept a new address when:
    //   - In IDLE state (not handling miss or inval)
    //   - AND not currently waiting for data from a previous request
    //   - When data_valid_r is set, the current request's data is available,
    //     so we can accept the next one
    //==========================================================================
    assign fetch_ready = (state == CACHE_IDLE) &&
                         !inval_valid &&
                         (!addr_valid_r || data_valid_r);

    //==========================================================================
    // Bus Request
    //==========================================================================
    assign bus_req_valid = (state == CACHE_MISS_REQ);
    assign bus_req_addr  = miss_addr_r;

    //==========================================================================
    // Invalidation Status
    //==========================================================================
    assign inval_done = (state == CACHE_INVAL);

endmodule