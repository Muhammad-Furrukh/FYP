`timescale 1ns / 1ns
import include_pkg::*;

module fetch_tb;

    // Parameters / Constants
    localparam int WIDTH = 2;

    // Inputs
    logic                     clk;
    logic                     rst;
    logic                     IN_busy;
    logic                     flush;
    pc_t                      instr_pc    [WIDTH];
    logic                     instr_valid [WIDTH];
    prefetch_instr_t          IN_instr    [WIDTH];

    // Outputs
    logic                     OUT_busy;
    logic                     jump1;
    pc_t                      jta1;
    fetch_instr_t             OUT_instr   [WIDTH];

    // Instantiate Unit Under Test
    fetch uut (.*);

    // Creates a unique ADDI instruction: addi x1, x0, [PC_LOW_12_BITS]
    // Opcode is 0010011. This will NOT trigger your JAL logic.
    function prefetch_instr_t make_norm(pc_t pc);
        logic [31:0] inst;
        inst[6:0]   = 7'b0010011;       // ADDI Opcode
        inst[11:7]  = 5'b00001;         // rd = x1
        inst[14:12] = 3'b000;           // funct3 = 0
        inst[19:15] = 5'b00000;         // rs1 = x0
        inst[31:20] = pc[11:0];         // Immediate = lower 12 bits of PC
        return inst;
    endfunction

    // Enhanced JAL: Encodes the offset but keeps it distinct
    function prefetch_instr_t make_jal(logic [20:0] offset, logic [4:0] rd_id = 5'd1);
        logic [31:0] inst;
        inst[6:0]   = 7'b1101111;       // JAL Opcode
        inst[11:7]  = rd_id;            // Configurable rd to distinguish JALs
        inst[31]    = offset[20];
        inst[30:21] = offset[10:1];
        inst[20]    = offset[11];
        inst[19:12] = offset[19:12];
        return inst;
    endfunction

    // Clock Generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    pc_t pc0;
    pc_t pc1;
    // Stimulus
    initial begin
        // --- Initialization ---
        rst       = 1'b1;
        IN_busy   = 1'b0;
        flush     = 1'b0;
        for(int i = 0; i < WIDTH; i++) begin
            instr_pc[i]    = '0;
            instr_valid[i] =  0;
            IN_instr[i]    = '0;
        end

        repeat(2) @(posedge clk);
        rst = 0;
        @(posedge clk);

        $display("TC1: Normal Operation - Each instruction encodes its own PC");
        for (int i = 0; i < 6; i++) begin
            pc0 = (i*8);
            pc1 = (i*8)+4;
            instr_valid[0] = 1; instr_pc[0] = pc0; IN_instr[0] = make_norm(pc0);
            instr_valid[1] = 1; instr_pc[1] = pc1; IN_instr[1] = make_norm(pc1);
            @(posedge clk);
        end

        // --- 2. Single JAL (Slot 0) followed by 2 cycles normal ---
        $display("TC2: Single JAL arriving in Slot 0");
        instr_valid[0] = 1; instr_pc[0] = 32'h100; IN_instr[0] = make_jal(21'h40); // Target: 0x140
        instr_valid[1] = 1; instr_pc[1] = 32'h104; IN_instr[1] = make_norm(32'h104);
        
        @(posedge clk);
        // Followed by 2 cycles of "wrong path" or next instrs
        for (int i = 0; i < 2; i++) begin
            instr_pc[0] = 32'h108 + (i*8); IN_instr[0] = make_norm(32'h108 + (i*8));
            instr_pc[1] = 32'h10C + (i*8); IN_instr[1] = make_norm(32'h108 + (i*8));
            @(posedge clk);
        end

        $display("TC3: Double JAL - JAL_A (x1) and JAL_B (x2)");
        instr_valid[0] = 1; instr_pc[0] = 32'h200; 
        IN_instr[0] = make_jal(21'h10, 5'd1); // x1, Target 0x210
        
        instr_valid[1] = 1; instr_pc[1] = 32'h204; 
        IN_instr[1] = make_jal(21'h20, 5'd2); // x2, Target 0x224
        @(posedge clk);

        // --- 4. Backpressure & Flush ---
        $display("TC4: Filling Buffer (IN_busy=1)");
        IN_busy = 1; // Downstream is busy, stop consuming from fetch buffer
        
        // Feed instructions until OUT_busy (fetch buffer full) triggers
        // With size 16 and width 2, it takes ~8 cycles to fill
        for (int i = 0; i < (FETCHB_SIZE >> 1) - 1; i++) begin
            instr_pc[0] = instr_pc[0] + 8;
            instr_pc[1] = instr_pc[1] + 8;
            IN_instr[0] = make_norm(instr_pc[0] + (i*8));
            IN_instr[1] = make_norm(instr_pc[1] + (i*8));
            @(posedge clk);
        end
        
        $display("TC4: Buffer Full (OUT_busy=1). Staying full for 2 cycles.");
        repeat(2) @(posedge clk);
        
        $display("TC4: Issuing Flush");
        flush = 1;
        @(posedge clk);
        flush = 0;
        IN_busy = 0;

        repeat(5) @(posedge clk);
        $display("All Test Cases Completed.");
        $finish;
    end

    // Monitor
    initial begin
        $monitor("Time:%0t | OutBusy:%b | Jump1:%b | JTA1:%h | InstrOut0:%h", 
                 $time, OUT_busy, jump1, jta1, OUT_instr[0]);
    end

endmodule