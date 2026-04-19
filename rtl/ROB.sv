import include_pkg::*;
module ROB
(
input  logic           clk,
input  logic           rst,
input  rename_rob_t    rename_rob [RENAME_WIDTH],
input  logic           flush,
input  sqN_t           flush_sqN,
input  logic           CDB_valid  [NUM_CDB_LINES],
input  sqN_t           CDB_sqN    [NUM_CDB_LINES],

output logic           OUT_busy,
output commit_packet_t OUT_commit [COMMIT_WIDTH]
);

logic commit1, commit2;
logic dataout_valid0, dataout_valid1;
logic write_en1, write_en2;

logic [6:0] count;
logic [5:0] head, tail;

rob_entry rob [63:0];

logic [5:0] alloc_index1, alloc_index2;
logic [5:0] commit_index1, commit_index2;

logic full, empty;

// ---------------- COMBINATIONAL ----------------
always_comb begin
    alloc_index1 = tail;
    alloc_index2 = tail + 1;

    commit_index1 = head;
    commit_index2 = head + 1;

    OUT_busy = (count >= 63);

    write_en1 = (rename_rob[0].valid && (count < 64));
    write_en2 = (rename_rob[1].valid && (count < 63));

    commit1 = rob[commit_index1].ready && (!empty) ;
    commit2 = rob[commit_index2].ready && (!empty) ;
    
    if (rst) begin
        dataout_valid0 = 0;
        dataout_valid1 = 0; end
    else begin
        dataout_valid0 = OUT_commit[0].valid;
        dataout_valid1 = OUT_commit[1].valid;end
end

assign full  = (count == 64);
assign empty = (count == 0);

// ---------------- SEQUENTIAL ----------------
always_ff @(posedge clk or posedge rst) begin

    if (rst) begin
        count <= 0;
        head  <= 0;
        tail  <= 0;
        OUT_commit[0].valid <= 0;
        OUT_commit[1].valid <= 0;
        
        for (int i = 0; i < 64; i++) begin
            rob[i] <= '0;
        end
    end

    else begin
    
          // update ready bits
        for (int j = 0; j < 64; j++) begin
            if (((j == alloc_index1) && write_en1) ||
                ((j == alloc_index2) && write_en2)) begin
                rob[j].ready <= 0;
            end
            else begin
                if (
                    (rob[j].SqN == CDB_sqN[0] && CDB_valid[0]) ||
                    (rob[j].SqN == CDB_sqN[1] && CDB_valid[1]) ||
                    (rob[j].SqN == CDB_sqN[2] && CDB_valid[2]) ||
                    (rob[j].SqN == CDB_sqN[3] && CDB_valid[3])
                )
                    rob[j].ready <= 1;
            end
        end

          if (flush && !empty) begin
             OUT_commit[0].valid <= 0;
             OUT_commit[1].valid <= 0;
             $display("inside flush big statement");
                  if (rob[tail-1].SqN < flush_sqN) begin
                       $display("inside formula1");
                       tail <= tail - (rob[tail-1].SqN-flush_sqN+128);
                       count <= count - (rob[tail-1].SqN-flush_sqN+128);
                       
                                                   end
                  else begin
                       $display("inside formula2");
                       tail <= tail-(rob[tail-1].SqN-flush_sqN);
                       count <= count - (rob[tail-1].SqN-flush_sqN);
                       
                       end
        end

       

        // ---------------- BASIC CASE (your original logic kept) ----------------

        else if ((!write_en1 && !write_en2) && (!commit1 && !commit2)) begin // 0 case
            count <= count;
            tail  <= tail;
            head  <= head;

            OUT_commit[0].valid <= (rob[commit_index1].ready && commit1);
            OUT_commit[1].valid <= (rob[commit_index2].ready && commit2);
        end

        else if ((write_en1 && !write_en2) && (!commit1 && !commit2)) begin // 1 case
            rob[alloc_index1].SqN <= rename_rob[0].sqN;
            rob[alloc_index1].tag <= rename_rob[0].rd_tag;
            rob[alloc_index1].rd  <= rename_rob[0].archTag;

            count <= count + 1;
            tail  <= tail + 1;

            OUT_commit[0].valid <= (rob[commit_index1].ready && commit1);
            OUT_commit[1].valid <= (rob[commit_index2].ready && commit2);
        end

        else if ((!write_en1 && write_en2) && (!commit1 && !commit2)) begin // 2 case
            rob[alloc_index1].SqN <= rename_rob[1].sqN;
            rob[alloc_index1].tag <= rename_rob[1].rd_tag;
            rob[alloc_index1].rd  <= rename_rob[1].archTag;

            count <= count + 1;
            tail  <= tail + 1;

            OUT_commit[0].valid <= (rob[commit_index1].ready && commit1);
            OUT_commit[1].valid <= (rob[commit_index2].ready && commit2);
        end

        else if ((write_en1 && write_en2) && (!commit1 && !commit2)) begin // 3 case
            rob[alloc_index1].SqN <= rename_rob[0].sqN;
            rob[alloc_index1].tag <= rename_rob[0].rd_tag;
            rob[alloc_index1].rd  <= rename_rob[0].archTag;

            rob[alloc_index2].SqN <= rename_rob[1].sqN;
            rob[alloc_index2].tag <= rename_rob[1].rd_tag;
            rob[alloc_index2].rd  <= rename_rob[1].archTag;

            count <= count + 2;
            tail  <= tail + 2;

            OUT_commit[0].valid <= (rob[commit_index1].ready && commit1);
            OUT_commit[1].valid <= (rob[commit_index2].ready && commit2);
        end
     else if ((!write_en1 && !write_en2) && (commit1 && !commit2)) // 4 case
     begin   
       OUT_commit[0].sqN <= rob[commit_index1].SqN;
       OUT_commit[0].comTag <= rob[commit_index1].tag;
       OUT_commit[0].archTag <= rob[commit_index1].rd;
     
       count <= count - 1;
       tail <= tail;
       head <= head + 1;
    
       OUT_commit[0].valid <= (rob[commit_index1].ready && commit1);
       OUT_commit[1].valid <= (rob[commit_index2].ready && commit2);
     end
  
     else if ((write_en1 && !write_en2) && (commit1 && !commit2))  // 5 case
     begin 
       rob[alloc_index1].SqN <= rename_rob[0].sqN;
       rob[alloc_index1].tag <= rename_rob[0].rd_tag;
       rob[alloc_index1].rd <= rename_rob[0].archTag;
  
       OUT_commit[0].sqN <= rob[commit_index1].SqN;
       OUT_commit[0].comTag <= rob[commit_index1].tag;
       OUT_commit[0].archTag <= rob[commit_index1].rd;
       
       count <= count;
       tail <= tail+1;
       head <= head+1;
  
       OUT_commit[0].valid <= (rob[commit_index1].ready && commit1);
       OUT_commit[1].valid <= (rob[commit_index2].ready && commit2);
     end
  
     else if ((!write_en1 && write_en2) && (commit1 && !commit2))  // 6 case
     begin 
       rob[alloc_index1].SqN <= rename_rob[1].sqN;
       rob[alloc_index1].tag <= rename_rob[1].rd_tag;
       rob[alloc_index1].rd <= rename_rob[1].archTag;

       OUT_commit[0].sqN <= rob[commit_index1].SqN;
       OUT_commit[0].comTag <= rob[commit_index1].tag;
       OUT_commit[0].archTag <= rob[commit_index1].rd;
       
       count <= count;
       tail <= tail+1;
       head <= head+1;
  
       OUT_commit[0].valid <= (rob[commit_index1].ready && commit1);
       OUT_commit[1].valid <= (rob[commit_index2].ready && commit2);
     end
  
     else if ((write_en1 && write_en2) && (commit1 && !commit2))  // 7 case
     begin 
       rob[alloc_index1].SqN <= rename_rob[0].sqN;
       rob[alloc_index1].tag <= rename_rob[0].rd_tag;
       rob[alloc_index1].rd <= rename_rob[0].archTag;
  
       rob[alloc_index2].SqN <= rename_rob[1].sqN;
       rob[alloc_index2].tag <= rename_rob[1].rd_tag;
       rob[alloc_index2].rd <= rename_rob[1].archTag;
  
       OUT_commit[0].sqN <= rob[commit_index1].SqN;
       OUT_commit[0].comTag <= rob[commit_index1].tag;
       OUT_commit[0].archTag <= rob[commit_index1].rd;
       
       count <= count + 1;
       tail <= tail+2;
       head <= head+1;
  
       OUT_commit[0].valid <= (rob[commit_index1].ready && commit1);
       OUT_commit[1].valid <= (rob[commit_index2].ready && commit2);
     end
  //=================================================================================================
     else if ((!write_en1 && !write_en2) && (!commit1 && commit2)) // 8 case
     begin   
       count <= count;
       tail <= tail;
       head <= head;
     end
  
     else if ((write_en1 && !write_en2) && (!commit1 && commit2))  // 9 case
     begin 
       rob[alloc_index1].SqN <= rename_rob[0].sqN;
       rob[alloc_index1].tag <= rename_rob[0].rd_tag;
       rob[alloc_index1].rd <= rename_rob[0].archTag;
  
       count <= count + 1;
       tail <= tail+1;
       head <= head;
  
       OUT_commit[0].valid <= (rob[commit_index1].ready && commit1);
       OUT_commit[1].valid <= (rob[commit_index2].ready && commit2);
     end
  
     else if ((!write_en1 && write_en2) && (!commit1 && commit2))  // 10 case
     begin 
       rob[alloc_index1].SqN <= rename_rob[1].sqN;
       rob[alloc_index1].tag <= rename_rob[1].rd_tag;
       rob[alloc_index1].rd <= rename_rob[1].archTag;
  
       count <= count + 1;
       tail <= tail+1;
       head <= head;
  
       OUT_commit[0].valid <= (rob[commit_index1].ready && commit1);
       OUT_commit[1].valid <= (rob[commit_index2].ready && commit2);
     end
  
     else if ((write_en1 && write_en2) && (!commit1 && commit2))  // 11 case
     begin 
       rob[alloc_index1].SqN <= rename_rob[0].sqN;
       rob[alloc_index1].tag <= rename_rob[0].rd_tag;
       rob[alloc_index1].rd <= rename_rob[0].archTag;
  
       rob[alloc_index2].SqN <= rename_rob[1].sqN;
       rob[alloc_index2].tag <= rename_rob[1].rd_tag;
       rob[alloc_index2].rd <= rename_rob[1].archTag;
  
       count <= count + 2;
       tail <= tail+2;
       head <= head;
  
       OUT_commit[0].valid <= (rob[commit_index1].ready && commit1);
       OUT_commit[1].valid <= (rob[commit_index2].ready && commit2);
     end
  //=================================================================================================
  
    
     else if ((!write_en1 && !write_en2) && (commit1 && commit2)) // 12 case
     begin   
       OUT_commit[0].sqN <= rob[commit_index1].SqN;
       OUT_commit[0].comTag <= rob[commit_index1].tag;
       OUT_commit[0].archTag <= rob[commit_index1].rd;

       OUT_commit[1].sqN <= rob[commit_index2].SqN;
       OUT_commit[1].comTag <= rob[commit_index2].tag;
       OUT_commit[1].archTag <= rob[commit_index2].rd;
       
       count <= count - 2;
       tail <= tail;
       head <= head + 2;
    
       OUT_commit[0].valid <= (rob[commit_index1].ready && commit1);
       OUT_commit[1].valid <= (rob[commit_index2].ready && commit2);
     end
  
     else if ((write_en1 && !write_en2) && (commit1 && commit2))  // 13 case
     begin 
       rob[alloc_index1].SqN <= rename_rob[0].sqN;
       rob[alloc_index1].tag <= rename_rob[0].rd_tag;
       rob[alloc_index1].rd <= rename_rob[0].archTag;
  
       OUT_commit[0].sqN <= rob[commit_index1].SqN;
       OUT_commit[0].comTag <= rob[commit_index1].tag;
       OUT_commit[0].archTag <= rob[commit_index1].rd;
     
       OUT_commit[1].sqN <= rob[commit_index2].SqN;
       OUT_commit[1].comTag <= rob[commit_index2].tag;
       OUT_commit[1].archTag <= rob[commit_index2].rd;
       
       count <= count-1;
       tail <= tail+1;
       head <= head+2;
  
       OUT_commit[0].valid <= (rob[commit_index1].ready && commit1);
       OUT_commit[1].valid <= (rob[commit_index2].ready && commit2);
     end
  
     else if ((!write_en1 && write_en2) && (commit1 && commit2))  // 14 case
     begin 
       rob[alloc_index1].SqN <= rename_rob[1].sqN;
       rob[alloc_index1].tag <= rename_rob[1].rd_tag;
       rob[alloc_index1].rd <= rename_rob[1].archTag;

       OUT_commit[0].sqN <= rob[commit_index1].SqN;
       OUT_commit[0].comTag <= rob[commit_index1].tag;
       OUT_commit[0].archTag <= rob[commit_index1].rd;
     
       OUT_commit[1].sqN <= rob[commit_index2].SqN;
       OUT_commit[1].comTag <= rob[commit_index2].tag;
       OUT_commit[1].archTag <= rob[commit_index2].rd;
       
       count <= count-1;
       tail <= tail+1;
       head <= head+2;
   
       OUT_commit[0].valid <= (rob[commit_index1].ready && commit1);
       OUT_commit[1].valid <= (rob[commit_index2].ready && commit2);
     end
  
     else if ((write_en1 && write_en2) && (commit1 && commit2))  // 15 case
     begin 
       rob[alloc_index1].SqN <= rename_rob[0].sqN;
       rob[alloc_index1].tag <= rename_rob[0].rd_tag;
       rob[alloc_index1].rd <= rename_rob[0].archTag;
  
       rob[alloc_index2].SqN <= rename_rob[1].sqN;
       rob[alloc_index2].tag <= rename_rob[1].rd_tag;
       rob[alloc_index2].rd <= rename_rob[1].archTag;
  
       OUT_commit[0].sqN <= rob[commit_index1].SqN;
       OUT_commit[0].comTag <= rob[commit_index1].tag;
       OUT_commit[0].archTag <= rob[commit_index1].rd;
     
       OUT_commit[1].sqN <= rob[commit_index2].SqN;
       OUT_commit[1].comTag <= rob[commit_index2].tag;
       OUT_commit[1].archTag <= rob[commit_index2].rd;
       
       count <= count;
       tail <= tail+2;
       head <= head+2;
  
       OUT_commit[0].valid <= (rob[commit_index1].ready && commit1);
       OUT_commit[1].valid <= (rob[commit_index2].ready && commit2);
     end

    end
end

endmodule
