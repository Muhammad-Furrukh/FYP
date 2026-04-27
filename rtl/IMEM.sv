import include_pkg::*;

module IMEM
(
    input  logic                                    clk,
    input  logic            [IMEM_ADDR_WIDTH - 1:0] addr, // 8-byte aligned address             
    output prefetch_instr_t                         data [FETCH_WIDTH]
);

    // Memory organized as 32-bit words 
    localparam int WORD_ADDR_BITS = IMEM_ADDR_WIDTH - 2;
    localparam int MEM_WORDS      = (1 << WORD_ADDR_BITS);

    logic [31:0] mem [MEM_WORDS];

    initial begin
        for (int i = 0; i < MEM_WORDS; i++)
            mem[i] = 32'b0;

        $readmemh("imem.hex", mem);
    end
    
    logic [IMEM_ADDR_WIDTH-1:0] block_idx;
    logic [IMEM_ADDR_WIDTH-1:0] base_word;
    logic [IMEM_ADDR_WIDTH-1:0] word_index;

    always_ff @(posedge clk) begin
        block_idx = (addr >> 3); 
        base_word = block_idx * FETCH_WIDTH;  

        for (int i = 0; i < FETCH_WIDTH; i++) begin
            word_index = base_word + i;

            if (word_index < MEM_WORDS)
                data[i] <= mem[word_index];
            else
                data[i] <= 32'b0;
        end
    end

endmodule
