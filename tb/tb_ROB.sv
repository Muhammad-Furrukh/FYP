import include_pkg::*;

module tb_ROB;

logic clk;
logic rst;
logic flush;
sqN_t flush_SqN;

// CDB
sqN_t CDB_sqN [NUM_CDB_LINES];
logic CDB_valid [NUM_CDB_LINES];

// inputs (NEW interface)
rename_rob_t rename_rob [RENAME_WIDTH];

// outputs (NEW interface)
commit_packet_t OUT_commit [COMMIT_WIDTH];
logic OUT_busy;

// DUT
ROB dut (
    .clk(clk),
    .rst(rst),
    .rename_rob(rename_rob),
    .flush(flush),
    .flush_sqN(flush_SqN),

    .CDB_valid(CDB_valid),
    .CDB_sqN(CDB_sqN),

    .OUT_busy(OUT_busy),
    .OUT_commit(OUT_commit)
);

// clock
always #5 clk = ~clk;

initial begin
    clk = 0;
    rst = 1;

    flush = 0;
    flush_SqN = 0;

    rename_rob = '{default:0};
    CDB_sqN    = '{default:0};
    CDB_valid  = '{default:0};

    // RESET
    #20 rst = 0;

    // =====================================================
    // 1) WRITE 0 → 63
    // =====================================================
    #10;
    for (int i = 0; i < 64; i += 2) begin
        rename_rob[0] = '{valid:1, sqN:i,   archTag:1, rd_tag:1};
        rename_rob[1] = '{valid:1, sqN:i+1, archTag:2, rd_tag:2};
        #10;
    end

    rename_rob[0].valid = 0;
    rename_rob[1].valid = 0;
    #10;

    // =====================================================
    // 2) COMMIT 0 → 63
    // =====================================================
    CDB_valid[0] = 1;
    CDB_valid[1] = 1;

    for (int i = 0; i < 64; i+=2) begin
        CDB_sqN[0] = i;
        CDB_sqN[1] = i+1;
        #10;
    end

    CDB_valid[0] = 0;
    CDB_valid[1] = 0;
    #10;

    // =====================================================
    // 3) WRITE 64 → 127
    // =====================================================
    #10;
    for (int i = 64; i < 128; i += 2) begin
        rename_rob[0] = '{valid:1, sqN:i,   archTag:1, rd_tag:1};
        rename_rob[1] = '{valid:1, sqN:i+1, archTag:2, rd_tag:2};
        #10;
    end

    rename_rob[0].valid = 0;
    rename_rob[1].valid = 0;
    #10;

    // =====================================================
    // 4) COMMIT 64 → 95
    // =====================================================
    CDB_valid[0] = 1;
    CDB_valid[1] = 1;

    for (int i = 64; i < 96; i+=2) begin
        CDB_sqN[0] = i;
        CDB_sqN[1] = i+1;
        #10;
    end

    CDB_valid[0] = 0;
    CDB_valid[1] = 0;
    #10;

    // =====================================================
    // 5) WRITE 0 → 31
    // =====================================================
    #10;
    for (int i = 0; i < 32; i += 2) begin
        rename_rob[0] = '{valid:1, sqN:i,   archTag:1, rd_tag:1};
        rename_rob[1] = '{valid:1, sqN:i+1, archTag:2, rd_tag:2};
        #10;
    end

    rename_rob[0].valid = 0;
    rename_rob[1].valid = 0;
    #10;

    // =====================================================
    // Flush
    // =====================================================
    flush = 1;
    flush_SqN = 20;
    #10;

    flush = 0;
    #10;

    // =====================================================
    // 2nd entry is ready
    // =====================================================
    CDB_valid[1] = 1;
    CDB_sqN[1] = 97;
    #10;

    CDB_valid[1] = 0;
    #10;

    // =====================================================
    // FINAL ROB STATE
    // =====================================================
    @(posedge clk); #1;

    for (int i = 0; i < 64; i++) begin
        $display("ROB[%0d]: SqN=%0d tag=%0d rd=%0d ready=%0b",
                  i,
                  dut.rob[i].SqN,
                  dut.rob[i].tag,
                  dut.rob[i].rd,
                  dut.rob[i].ready);
    end

    $finish;
end

endmodule


