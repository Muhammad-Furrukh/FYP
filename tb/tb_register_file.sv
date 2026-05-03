import include_pkg::*;

module tb_register_file;

logic clk;
logic rst;

// inputs
logic [REG_ADDR_WIDTH-1:0] rs1_addr [ISSUE_WIDTH];
logic [REG_ADDR_WIDTH-1:0] rs2_addr [ISSUE_WIDTH];

logic [REG_ADDR_WIDTH-1:0] rd_addr [NUM_CDB_LINES];
logic rd_write_en [NUM_CDB_LINES];
logic [XLEN-1:0] rd_data [NUM_CDB_LINES];

// outputs
logic [XLEN-1:0] rs1_data [ISSUE_WIDTH];
logic [XLEN-1:0] rs2_data [ISSUE_WIDTH];

// expected model (reference)
logic [XLEN-1:0] expected [(1<<REG_ADDR_WIDTH)-1:0];

// DUT
register_file dut (
    .clk(clk),
    .rst(rst),
    .rs1_addr(rs1_addr),
    .rs2_addr(rs2_addr),
    .rd_addr(rd_addr),
    .rd_write_en(rd_write_en),
    .rd_data(rd_data),
    .rs1_data(rs1_data),
    .rs2_data(rs2_data)
);

// clock
always #5 clk = ~clk;

initial begin
    clk = 1;
    rst = 1;

    // init
    rs1_addr = '{default:0};
    rs2_addr = '{default:0};
    rd_addr = '{default:0};
    rd_write_en = '{default:0};
    rd_data = '{default:0};

    // reset expected
    for (int i = 0; i < (1<<REG_ADDR_WIDTH); i++)
        expected[i] = 0;

    // RESET
    #20;
    rst = 0;

    // =====================================================
    // TEST 1: WRITE ALL REGISTERS
    // =====================================================
    $display("TEST 1: Writing all registers");

    for (int i = 0; i < 64; i += NUM_CDB_LINES) begin
        for (int j = 0; j < NUM_CDB_LINES; j++) begin
            rd_write_en[j] = 1;
            rd_addr[j]     = i + j;
            rd_data[j]     = (i + j) * 10;

            // update expected
            expected[i + j] = (i + j) * 10;
        end
        #10;
    end

    rd_write_en = '{default:0};
    #10;

    // =====================================================
    // TEST 2: READ + CHECK
    // =====================================================
    $display("TEST 2: Reading and checking");

    for (int k = 0; k < 20; k++) begin

        // random read addresses
        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            rs1_addr[i] = $urandom_range(0,63);
            rs2_addr[i] = $urandom_range(0,63);
        end

        #1; // combinational settle

        for (int i = 0; i < ISSUE_WIDTH; i++) begin

            if (rs1_data[i] !== expected[rs1_addr[i]]) begin
                $display("ERROR RS1: addr=%0d expected=%0d got=%0d",
                         rs1_addr[i], expected[rs1_addr[i]], rs1_data[i]);
            end

            if (rs2_data[i] !== expected[rs2_addr[i]]) begin
                $display("ERROR RS2: addr=%0d expected=%0d got=%0d",
                         rs2_addr[i], expected[rs2_addr[i]], rs2_data[i]);
            end

        end

        #10;
    end

    // =====================================================
    // TEST 3: OVERWRITE
    // =====================================================
    $display("TEST 3: Overwrite test");

    rd_write_en[0] = 1;
    rd_addr[0]     = 10;
    rd_data[0]     = 999;
    expected[10]   = 999;

    #10;
    rd_write_en[0] = 0;

    rs1_addr[0] = 10;
    #1;

    if (rs1_data[0] !== 999)
        $display("ERROR overwrite failed");

    #10;

    // =====================================================
    // TEST 4: SAME ADDRESS MULTI-WRITE
    // =====================================================
    $display("TEST 4: Same address multi-write");

    for (int i = 0; i < NUM_CDB_LINES; i++) begin
        rd_write_en[i] = 1;
        rd_addr[i]     = 20;
        rd_data[i]     = i;
    end

    #10;

    // expected = last port wins
    expected[20] = NUM_CDB_LINES-1;

    rd_write_en = '{default:0};

    rs1_addr[0] = 20;
    #1;

    if (rs1_data[0] !== expected[20])
        $display("ERROR multi-write conflict");

    #10;

    // =====================================================
    // TEST 5: RANDOM STRESS
    // =====================================================
    $display("TEST 5: Random test");

    for (int t = 0; t < 20; t++) begin

        // random writes
        for (int i = 0; i < NUM_CDB_LINES; i++) begin
            rd_write_en[i] = $urandom_range(0,1);
            rd_addr[i]     = $urandom_range(0,63);
            rd_data[i]     = $urandom;

            if (rd_write_en[i])
                expected[rd_addr[i]] = rd_data[i];
        end

        #10;

        // random reads
        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            rs1_addr[i] = $urandom_range(0,63);
            rs2_addr[i] = $urandom_range(0,63);
        end

        #1;

        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            if (rs1_data[i] !== expected[rs1_addr[i]])
                $display("ERROR RS1 random");

            if (rs2_data[i] !== expected[rs2_addr[i]])
                $display("ERROR RS2 random");
        end

    end
    
    $display("TEST COMPLETE");
    #20;

    $finish;

end

endmodule
