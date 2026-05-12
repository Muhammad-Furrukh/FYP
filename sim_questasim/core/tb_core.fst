$date
	Wed May 13 01:14:01 2026
$end
$version
	QuestaSim Version 2021.2_1
$end
$timescale
	1ns
$end

$scope module tb_core $end
$var reg 1 ! clk $end
$var reg 1 " clk_m $end
$var reg 1 # rst $end
$var reg 1 $ rst_m $end
$var integer 32 % tests_run $end
$var integer 32 & tests_fail $end

$scope task tick $end
$upscope $end

$scope task tick_n $end
$upscope $end

$scope module dut $end
$var wire 1 ' clk $end
$var wire 1 ( clk_m $end
$var wire 1 ) rst $end
$var wire 1 * rst_m $end
$var reg 1 + fb_busy $end
$var reg 1 , jump1 $end
$var reg 1 - jump2 $end
$var reg 32 . jta1 [31:0] $end
$var reg 32 / jta2 [31:0] $end
$var reg 1 0 rename_busy $end
$var reg 1 1 flush $end
$var reg 1 2 ROB_busy $end
$var reg 1 3 chkpt_busy $end
$var reg 1 4 dispatch_unit_busy $end
$var reg 1 5 lsu_busy $end
$var reg 7 6 flush_sqN [6:0] $end

$scope module prefetch $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 7 IN_busy $end
$var wire 1 8 jta1 [31] $end
$var wire 1 9 jta1 [30] $end
$var wire 1 : jta1 [29] $end
$var wire 1 ; jta1 [28] $end
$var wire 1 < jta1 [27] $end
$var wire 1 = jta1 [26] $end
$var wire 1 > jta1 [25] $end
$var wire 1 ? jta1 [24] $end
$var wire 1 @ jta1 [23] $end
$var wire 1 A jta1 [22] $end
$var wire 1 B jta1 [21] $end
$var wire 1 C jta1 [20] $end
$var wire 1 D jta1 [19] $end
$var wire 1 E jta1 [18] $end
$var wire 1 F jta1 [17] $end
$var wire 1 G jta1 [16] $end
$var wire 1 H jta1 [15] $end
$var wire 1 I jta1 [14] $end
$var wire 1 J jta1 [13] $end
$var wire 1 K jta1 [12] $end
$var wire 1 L jta1 [11] $end
$var wire 1 M jta1 [10] $end
$var wire 1 N jta1 [9] $end
$var wire 1 O jta1 [8] $end
$var wire 1 P jta1 [7] $end
$var wire 1 Q jta1 [6] $end
$var wire 1 R jta1 [5] $end
$var wire 1 S jta1 [4] $end
$var wire 1 T jta1 [3] $end
$var wire 1 U jta1 [2] $end
$var wire 1 V jta1 [1] $end
$var wire 1 W jta1 [0] $end
$var wire 1 X jta2 [31] $end
$var wire 1 Y jta2 [30] $end
$var wire 1 Z jta2 [29] $end
$var wire 1 [ jta2 [28] $end
$var wire 1 \ jta2 [27] $end
$var wire 1 ] jta2 [26] $end
$var wire 1 ^ jta2 [25] $end
$var wire 1 _ jta2 [24] $end
$var wire 1 ` jta2 [23] $end
$var wire 1 a jta2 [22] $end
$var wire 1 b jta2 [21] $end
$var wire 1 c jta2 [20] $end
$var wire 1 d jta2 [19] $end
$var wire 1 e jta2 [18] $end
$var wire 1 f jta2 [17] $end
$var wire 1 g jta2 [16] $end
$var wire 1 h jta2 [15] $end
$var wire 1 i jta2 [14] $end
$var wire 1 j jta2 [13] $end
$var wire 1 k jta2 [12] $end
$var wire 1 l jta2 [11] $end
$var wire 1 m jta2 [10] $end
$var wire 1 n jta2 [9] $end
$var wire 1 o jta2 [8] $end
$var wire 1 p jta2 [7] $end
$var wire 1 q jta2 [6] $end
$var wire 1 r jta2 [5] $end
$var wire 1 s jta2 [4] $end
$var wire 1 t jta2 [3] $end
$var wire 1 u jta2 [2] $end
$var wire 1 v jta2 [1] $end
$var wire 1 w jta2 [0] $end
$var wire 1 x jump1 $end
$var wire 1 y jump2 $end
$var reg 32 z fetch_base [31:0] $end
$var reg 32 { next_pc [31:0] $end
$var reg 32 | current_pc [31:0] $end
$var reg 32 } actual_pc [31:0] $end
$var reg 2 ~ instr_consumed [1:0] $end

$scope module PC $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 !! IN_pc [31] $end
$var wire 1 "! IN_pc [30] $end
$var wire 1 #! IN_pc [29] $end
$var wire 1 $! IN_pc [28] $end
$var wire 1 %! IN_pc [27] $end
$var wire 1 &! IN_pc [26] $end
$var wire 1 '! IN_pc [25] $end
$var wire 1 (! IN_pc [24] $end
$var wire 1 )! IN_pc [23] $end
$var wire 1 *! IN_pc [22] $end
$var wire 1 +! IN_pc [21] $end
$var wire 1 ,! IN_pc [20] $end
$var wire 1 -! IN_pc [19] $end
$var wire 1 .! IN_pc [18] $end
$var wire 1 /! IN_pc [17] $end
$var wire 1 0! IN_pc [16] $end
$var wire 1 1! IN_pc [15] $end
$var wire 1 2! IN_pc [14] $end
$var wire 1 3! IN_pc [13] $end
$var wire 1 4! IN_pc [12] $end
$var wire 1 5! IN_pc [11] $end
$var wire 1 6! IN_pc [10] $end
$var wire 1 7! IN_pc [9] $end
$var wire 1 8! IN_pc [8] $end
$var wire 1 9! IN_pc [7] $end
$var wire 1 :! IN_pc [6] $end
$var wire 1 ;! IN_pc [5] $end
$var wire 1 <! IN_pc [4] $end
$var wire 1 =! IN_pc [3] $end
$var wire 1 >! IN_pc [2] $end
$var wire 1 ?! IN_pc [1] $end
$var wire 1 @! IN_pc [0] $end
$var wire 1 A! wr_en $end
$var reg 32 B! OUT_pc [31:0] $end
$var reg 32 C! pc_reg [31:0] $end
$upscope $end

$scope module IMEM $end
$var parameter 32 D! WORD_ADDR_BITS $end
$var parameter 32 E! MEM_WORDS $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 7 IN_busy $end
$var wire 1 F! addr [7] $end
$var wire 1 G! addr [6] $end
$var wire 1 H! addr [5] $end
$var wire 1 I! addr [4] $end
$var wire 1 J! addr [3] $end
$var wire 1 K! addr [2] $end
$var wire 1 L! addr [1] $end
$var wire 1 M! addr [0] $end
$var reg 8 N! block_idx [7:0] $end
$var reg 8 O! base_word [7:0] $end
$upscope $end

$scope module aligner $end
$var parameter 32 P! INSN_BYTES $end
$var parameter 32 Q! BLOCK_SIZE_BYTES $end
$var parameter 32 R! ALIGN_BITS $end
$var wire 1 S! in_pc [31] $end
$var wire 1 T! in_pc [30] $end
$var wire 1 U! in_pc [29] $end
$var wire 1 V! in_pc [28] $end
$var wire 1 W! in_pc [27] $end
$var wire 1 X! in_pc [26] $end
$var wire 1 Y! in_pc [25] $end
$var wire 1 Z! in_pc [24] $end
$var wire 1 [! in_pc [23] $end
$var wire 1 \! in_pc [22] $end
$var wire 1 ]! in_pc [21] $end
$var wire 1 ^! in_pc [20] $end
$var wire 1 _! in_pc [19] $end
$var wire 1 `! in_pc [18] $end
$var wire 1 a! in_pc [17] $end
$var wire 1 b! in_pc [16] $end
$var wire 1 c! in_pc [15] $end
$var wire 1 d! in_pc [14] $end
$var wire 1 e! in_pc [13] $end
$var wire 1 f! in_pc [12] $end
$var wire 1 g! in_pc [11] $end
$var wire 1 h! in_pc [10] $end
$var wire 1 i! in_pc [9] $end
$var wire 1 j! in_pc [8] $end
$var wire 1 k! in_pc [7] $end
$var wire 1 l! in_pc [6] $end
$var wire 1 m! in_pc [5] $end
$var wire 1 n! in_pc [4] $end
$var wire 1 o! in_pc [3] $end
$var wire 1 p! in_pc [2] $end
$var wire 1 q! in_pc [1] $end
$var wire 1 r! in_pc [0] $end
$var reg 2 s! consumed [1:0] $end
$var reg 1 t! is_aligned $end
$var reg 32 u! aligned_base_pc [31:0] $end
$upscope $end
$upscope $end

$scope module fetch $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 v! IN_busy $end
$var wire 1 w! flush $end
$var reg 1 x! OUT_busy $end
$var reg 1 y! jump1 $end
$var reg 32 z! jta1 [31:0] $end

$scope module JTA1 $end
$var reg 1 {! jump1 $end
$var reg 32 |! jta1 [31:0] $end
$var reg 1 }! jump_valid $end
$var reg 1 ~! jump_index [0:0] $end
$upscope $end

$scope module FB $end
$var parameter 32 !" PTR_W $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 v! IN_busy $end
$var wire 1 w! flush $end
$var reg 1 "" OUT_busy $end
$var reg 4 #" head [3:0] $end
$var reg 4 $" tail [3:0] $end
$var reg 5 %" count [4:0] $end
$var reg 5 &" out_count [4:0] $end
$var reg 1 '" can_write $end
$var reg 1 (" can_read $end
$upscope $end
$upscope $end

$scope module decode $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 )" IN_busy $end
$var wire 1 *" flush $end
$var reg 7 +" next_sqN [6:0] $end
$var reg 3 ," valid_count [2:0] $end

$scope module Decoder $end

$scope module IG $end
$var reg 3 -" funct3 [2:0] $end
$var reg 7 ." opcode [6:0] $end
$var reg 12 /" imm12 [11:0] $end
$var reg 13 0" imm13 [12:0] $end
$var reg 21 1" imm21 [20:0] $end
$var reg 32 2" iw [31:0] $end
$upscope $end
$upscope $end
$upscope $end

$scope module rename $end
$var parameter 32 3" NUM_REG $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 4" ROB_busy $end
$var wire 1 5" dispatch_busy $end
$var wire 1 6" flush $end
$var wire 1 7" chkpt_busy $end
$var reg 1 8" OUT_busy $end
$var reg 64 9" ftb [63:0] $end
$var reg 2 :" req_valid [1:0] $end
$var reg 1 ;" chkpt_need $end
$var reg 1 <" stall $end

$scope begin gen_freeCom[1] $end
$var parameter 32 =" i $end
$upscope $end

$scope begin gen_freeCom[0] $end
$var parameter 32 >" i $end
$upscope $end

$scope begin gen_reg_ready[3] $end
$var parameter 32 ?" i $end
$upscope $end

$scope begin gen_reg_ready[2] $end
$var parameter 32 @" i $end
$upscope $end

$scope begin gen_reg_ready[1] $end
$var parameter 32 A" i $end
$upscope $end

$scope begin gen_reg_ready[0] $end
$var parameter 32 B" i $end
$upscope $end

$scope function onehot_to_bin $end
$upscope $end

$scope begin <genblk#126634037#185#0> $end
$upscope $end

$scope begin <genblk#126634037#270#2> $end
$upscope $end
$upscope $end

$scope module dispatch $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 C" LSU_busy $end
$var wire 1 D" flush $end
$var wire 1 E" flush_sqN [6] $end
$var wire 1 F" flush_sqN [5] $end
$var wire 1 G" flush_sqN [4] $end
$var wire 1 H" flush_sqN [3] $end
$var wire 1 I" flush_sqN [2] $end
$var wire 1 J" flush_sqN [1] $end
$var wire 1 K" flush_sqN [0] $end
$var reg 1 L" d_unit_busy $end
$var reg 1 M" check_busy $end

$scope module DU $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 D" flush $end
$var wire 1 C" LSU_busy $end
$var reg 1 N" OUT_busy $end
$var reg 1 O" packet_done $end

$scope begin g_slot_class[1] $end
$var parameter 32 P" i $end
$upscope $end

$scope begin g_slot_class[0] $end
$var parameter 32 Q" i $end
$upscope $end

$scope begin genblk3[0] $end
$var parameter 32 R" i $end
$upscope $end

$scope begin genblk2[0] $end
$var parameter 32 S" i $end
$upscope $end

$scope begin genblk1[1] $end
$var parameter 32 T" i $end
$upscope $end

$scope begin genblk1[0] $end
$var parameter 32 U" i $end
$upscope $end

$scope begin <genblk#49081796#35#0> $end
$upscope $end

$scope begin <genblk#49081796#36#2> $end
$upscope $end

$scope begin <genblk#49081796#37#4> $end
$upscope $end

$scope begin <genblk#49081796#53#6> $end
$upscope $end
$upscope $end

$scope module BC $end
$var parameter 32 V" NUM_REG $end
$var parameter 32 W" NUM_CHKPT $end
$var parameter 32 X" CHKPT_BITS $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 D" flush $end
$var wire 1 E" flush_sqN [6] $end
$var wire 1 F" flush_sqN [5] $end
$var wire 1 G" flush_sqN [4] $end
$var wire 1 H" flush_sqN [3] $end
$var wire 1 I" flush_sqN [2] $end
$var wire 1 J" flush_sqN [1] $end
$var wire 1 K" flush_sqN [0] $end
$var wire 1 Y" disp_busy $end
$var reg 1 Z" check_busy $end
$var reg 5 [" used_count [4:0] $end
$var reg 1 \" slot_collision $end
$upscope $end
$upscope $end

$scope module issue $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 ]" flush $end
$var wire 1 ^" flush_sqN [6] $end
$var wire 1 _" flush_sqN [5] $end
$var wire 1 `" flush_sqN [4] $end
$var wire 1 a" flush_sqN [3] $end
$var wire 1 b" flush_sqN [2] $end
$var wire 1 c" flush_sqN [1] $end
$var wire 1 d" flush_sqN [0] $end
$var reg 32 e" jta2 [31:0] $end
$var reg 1 f" jump2 $end

$scope begin gen_agu_buffer[0] $end
$var parameter 32 g" i $end

$scope module lsu_issue_buffer_i $end
$var parameter 32 h" DEPTH $end
$var parameter 32 i" TAIL_W $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var reg 63 j" IN_instr [62:0] $end
$var wire 1 ]" flush $end
$var wire 1 ^" flush_sqN [6] $end
$var wire 1 _" flush_sqN [5] $end
$var wire 1 `" flush_sqN [4] $end
$var wire 1 a" flush_sqN [3] $end
$var wire 1 b" flush_sqN [2] $end
$var wire 1 c" flush_sqN [1] $end
$var wire 1 d" flush_sqN [0] $end
$var reg 114 k" OUT_instr [113:0] $end
$var reg 1 l" OUT_busy $end
$var reg 3 m" tail [2:0] $end
$var reg 8 n" ready_mask [7:0] $end
$var reg 3 o" issue_idx [2:0] $end
$var reg 1 p" issue_found $end
$var reg 32 q" rs1_data [31:0] $end
$var reg 32 r" rs2_data [31:0] $end
$var reg 1 s" dispatch_cdb_match_1 $end
$var reg 1 t" dispatch_cdb_match_2 $end
$var reg 1 u" dispatch_ready_1 $end
$var reg 1 v" dispatch_ready_2 $end

$scope module pe $end
$var parameter 32 w" WIDTH $end
$var wire 1 x" req [7] $end
$var wire 1 y" req [6] $end
$var wire 1 z" req [5] $end
$var wire 1 {" req [4] $end
$var wire 1 |" req [3] $end
$var wire 1 }" req [2] $end
$var wire 1 ~" req [1] $end
$var wire 1 !# req [0] $end
$var reg 3 "# grant_idx [2:0] $end
$var reg 1 ## grant_valid $end
$upscope $end
$upscope $end
$upscope $end

$scope begin gen_mul_div_buffer[0] $end
$var parameter 32 $# i $end

$scope module mul_div_issue_buffer_i $end
$var parameter 32 %# DEPTH $end
$var parameter 32 &# TAIL_W $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var reg 30 '# IN_instr [29:0] $end
$var wire 1 ]" flush $end
$var wire 1 ^" flush_sqN [6] $end
$var wire 1 _" flush_sqN [5] $end
$var wire 1 `" flush_sqN [4] $end
$var wire 1 a" flush_sqN [3] $end
$var wire 1 b" flush_sqN [2] $end
$var wire 1 c" flush_sqN [1] $end
$var wire 1 d" flush_sqN [0] $end
$var wire 1 (# IN_busy $end
$var reg 82 )# OUT_instr [81:0] $end
$var reg 1 *# OUT_busy $end
$var reg 3 +# tail [2:0] $end
$var reg 8 ,# ready_mask [7:0] $end
$var reg 3 -# issue_idx [2:0] $end
$var reg 1 .# issue_found $end
$var reg 32 /# rs1_data [31:0] $end
$var reg 32 0# rs2_data [31:0] $end
$var reg 1 1# dispatch_cdb_match_1 $end
$var reg 1 2# dispatch_cdb_match_2 $end
$var reg 1 3# dispatch_ready_1 $end
$var reg 1 4# dispatch_ready_2 $end

$scope module pe $end
$var parameter 32 5# WIDTH $end
$var wire 1 6# req [7] $end
$var wire 1 7# req [6] $end
$var wire 1 8# req [5] $end
$var wire 1 9# req [4] $end
$var wire 1 :# req [3] $end
$var wire 1 ;# req [2] $end
$var wire 1 <# req [1] $end
$var wire 1 =# req [0] $end
$var reg 3 ># grant_idx [2:0] $end
$var reg 1 ?# grant_valid $end
$upscope $end
$upscope $end
$upscope $end

$scope begin gen_alu_buffer[1] $end
$var parameter 32 @# i $end

$scope module alu_issue_buffer_i $end
$var parameter 32 A# DEPTH $end
$var parameter 32 B# TAIL_W $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var reg 103 C# IN_instr [102:0] $end
$var wire 1 ]" flush $end
$var wire 1 ^" flush_sqN [6] $end
$var wire 1 _" flush_sqN [5] $end
$var wire 1 `" flush_sqN [4] $end
$var wire 1 a" flush_sqN [3] $end
$var wire 1 b" flush_sqN [2] $end
$var wire 1 c" flush_sqN [1] $end
$var wire 1 d" flush_sqN [0] $end
$var reg 82 D# OUT_instr [81:0] $end
$var reg 1 E# OUT_br_taken $end
$var reg 2 F# OUT_jump_type [1:0] $end
$var reg 32 G# OUT_pc [31:0] $end
$var reg 32 H# rs1_result [31:0] $end
$var reg 32 I# imm [31:0] $end
$var reg 1 J# OUT_busy $end
$var reg 3 K# tail [2:0] $end
$var reg 8 L# ready_mask [7:0] $end
$var reg 3 M# issue_idx [2:0] $end
$var reg 1 N# issue_found $end
$var reg 32 O# rs1_data [31:0] $end
$var reg 32 P# rs2_data [31:0] $end
$var reg 32 Q# op1 [31:0] $end
$var reg 32 R# op2 [31:0] $end
$var reg 1 S# sel1 $end
$var reg 2 T# sel2 [1:0] $end
$var reg 1 U# is_jump $end
$var reg 1 V# sel_ready2 $end
$var reg 1 W# dispatch_ready_1 $end
$var reg 1 X# dispatch_ready_2 $end
$var reg 1 Y# dispatch_cdb_match_1 $end
$var reg 1 Z# dispatch_cdb_match_2 $end
$var reg 1 [# br_taken $end

$scope module pe $end
$var parameter 32 \# WIDTH $end
$var wire 1 ]# req [7] $end
$var wire 1 ^# req [6] $end
$var wire 1 _# req [5] $end
$var wire 1 `# req [4] $end
$var wire 1 a# req [3] $end
$var wire 1 b# req [2] $end
$var wire 1 c# req [1] $end
$var wire 1 d# req [0] $end
$var reg 3 e# grant_idx [2:0] $end
$var reg 1 f# grant_valid $end
$upscope $end

$scope module bc $end
$var wire 1 g# rs1_data [31] $end
$var wire 1 h# rs1_data [30] $end
$var wire 1 i# rs1_data [29] $end
$var wire 1 j# rs1_data [28] $end
$var wire 1 k# rs1_data [27] $end
$var wire 1 l# rs1_data [26] $end
$var wire 1 m# rs1_data [25] $end
$var wire 1 n# rs1_data [24] $end
$var wire 1 o# rs1_data [23] $end
$var wire 1 p# rs1_data [22] $end
$var wire 1 q# rs1_data [21] $end
$var wire 1 r# rs1_data [20] $end
$var wire 1 s# rs1_data [19] $end
$var wire 1 t# rs1_data [18] $end
$var wire 1 u# rs1_data [17] $end
$var wire 1 v# rs1_data [16] $end
$var wire 1 w# rs1_data [15] $end
$var wire 1 x# rs1_data [14] $end
$var wire 1 y# rs1_data [13] $end
$var wire 1 z# rs1_data [12] $end
$var wire 1 {# rs1_data [11] $end
$var wire 1 |# rs1_data [10] $end
$var wire 1 }# rs1_data [9] $end
$var wire 1 ~# rs1_data [8] $end
$var wire 1 !$ rs1_data [7] $end
$var wire 1 "$ rs1_data [6] $end
$var wire 1 #$ rs1_data [5] $end
$var wire 1 $$ rs1_data [4] $end
$var wire 1 %$ rs1_data [3] $end
$var wire 1 &$ rs1_data [2] $end
$var wire 1 '$ rs1_data [1] $end
$var wire 1 ($ rs1_data [0] $end
$var wire 1 )$ rs2_data [31] $end
$var wire 1 *$ rs2_data [30] $end
$var wire 1 +$ rs2_data [29] $end
$var wire 1 ,$ rs2_data [28] $end
$var wire 1 -$ rs2_data [27] $end
$var wire 1 .$ rs2_data [26] $end
$var wire 1 /$ rs2_data [25] $end
$var wire 1 0$ rs2_data [24] $end
$var wire 1 1$ rs2_data [23] $end
$var wire 1 2$ rs2_data [22] $end
$var wire 1 3$ rs2_data [21] $end
$var wire 1 4$ rs2_data [20] $end
$var wire 1 5$ rs2_data [19] $end
$var wire 1 6$ rs2_data [18] $end
$var wire 1 7$ rs2_data [17] $end
$var wire 1 8$ rs2_data [16] $end
$var wire 1 9$ rs2_data [15] $end
$var wire 1 :$ rs2_data [14] $end
$var wire 1 ;$ rs2_data [13] $end
$var wire 1 <$ rs2_data [12] $end
$var wire 1 =$ rs2_data [11] $end
$var wire 1 >$ rs2_data [10] $end
$var wire 1 ?$ rs2_data [9] $end
$var wire 1 @$ rs2_data [8] $end
$var wire 1 A$ rs2_data [7] $end
$var wire 1 B$ rs2_data [6] $end
$var wire 1 C$ rs2_data [5] $end
$var wire 1 D$ rs2_data [4] $end
$var wire 1 E$ rs2_data [3] $end
$var wire 1 F$ rs2_data [2] $end
$var wire 1 G$ rs2_data [1] $end
$var wire 1 H$ rs2_data [0] $end
$var wire 1 I$ br_type [3] $end
$var wire 1 J$ br_type [2] $end
$var wire 1 K$ br_type [1] $end
$var wire 1 L$ br_type [0] $end
$var reg 1 M$ br_taken $end
$upscope $end
$upscope $end
$upscope $end

$scope begin gen_alu_buffer[0] $end
$var parameter 32 N$ i $end

$scope module alu_issue_buffer_i $end
$var parameter 32 O$ DEPTH $end
$var parameter 32 P$ TAIL_W $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var reg 103 Q$ IN_instr [102:0] $end
$var wire 1 ]" flush $end
$var wire 1 ^" flush_sqN [6] $end
$var wire 1 _" flush_sqN [5] $end
$var wire 1 `" flush_sqN [4] $end
$var wire 1 a" flush_sqN [3] $end
$var wire 1 b" flush_sqN [2] $end
$var wire 1 c" flush_sqN [1] $end
$var wire 1 d" flush_sqN [0] $end
$var reg 82 R$ OUT_instr [81:0] $end
$var reg 1 S$ OUT_br_taken $end
$var reg 2 T$ OUT_jump_type [1:0] $end
$var reg 32 U$ OUT_pc [31:0] $end
$var reg 32 V$ rs1_result [31:0] $end
$var reg 32 W$ imm [31:0] $end
$var reg 1 X$ OUT_busy $end
$var reg 3 Y$ tail [2:0] $end
$var reg 8 Z$ ready_mask [7:0] $end
$var reg 3 [$ issue_idx [2:0] $end
$var reg 1 \$ issue_found $end
$var reg 32 ]$ rs1_data [31:0] $end
$var reg 32 ^$ rs2_data [31:0] $end
$var reg 32 _$ op1 [31:0] $end
$var reg 32 `$ op2 [31:0] $end
$var reg 1 a$ sel1 $end
$var reg 2 b$ sel2 [1:0] $end
$var reg 1 c$ is_jump $end
$var reg 1 d$ sel_ready2 $end
$var reg 1 e$ dispatch_ready_1 $end
$var reg 1 f$ dispatch_ready_2 $end
$var reg 1 g$ dispatch_cdb_match_1 $end
$var reg 1 h$ dispatch_cdb_match_2 $end
$var reg 1 i$ br_taken $end

$scope module pe $end
$var parameter 32 j$ WIDTH $end
$var wire 1 k$ req [7] $end
$var wire 1 l$ req [6] $end
$var wire 1 m$ req [5] $end
$var wire 1 n$ req [4] $end
$var wire 1 o$ req [3] $end
$var wire 1 p$ req [2] $end
$var wire 1 q$ req [1] $end
$var wire 1 r$ req [0] $end
$var reg 3 s$ grant_idx [2:0] $end
$var reg 1 t$ grant_valid $end
$upscope $end

$scope module bc $end
$var wire 1 u$ rs1_data [31] $end
$var wire 1 v$ rs1_data [30] $end
$var wire 1 w$ rs1_data [29] $end
$var wire 1 x$ rs1_data [28] $end
$var wire 1 y$ rs1_data [27] $end
$var wire 1 z$ rs1_data [26] $end
$var wire 1 {$ rs1_data [25] $end
$var wire 1 |$ rs1_data [24] $end
$var wire 1 }$ rs1_data [23] $end
$var wire 1 ~$ rs1_data [22] $end
$var wire 1 !% rs1_data [21] $end
$var wire 1 "% rs1_data [20] $end
$var wire 1 #% rs1_data [19] $end
$var wire 1 $% rs1_data [18] $end
$var wire 1 %% rs1_data [17] $end
$var wire 1 &% rs1_data [16] $end
$var wire 1 '% rs1_data [15] $end
$var wire 1 (% rs1_data [14] $end
$var wire 1 )% rs1_data [13] $end
$var wire 1 *% rs1_data [12] $end
$var wire 1 +% rs1_data [11] $end
$var wire 1 ,% rs1_data [10] $end
$var wire 1 -% rs1_data [9] $end
$var wire 1 .% rs1_data [8] $end
$var wire 1 /% rs1_data [7] $end
$var wire 1 0% rs1_data [6] $end
$var wire 1 1% rs1_data [5] $end
$var wire 1 2% rs1_data [4] $end
$var wire 1 3% rs1_data [3] $end
$var wire 1 4% rs1_data [2] $end
$var wire 1 5% rs1_data [1] $end
$var wire 1 6% rs1_data [0] $end
$var wire 1 7% rs2_data [31] $end
$var wire 1 8% rs2_data [30] $end
$var wire 1 9% rs2_data [29] $end
$var wire 1 :% rs2_data [28] $end
$var wire 1 ;% rs2_data [27] $end
$var wire 1 <% rs2_data [26] $end
$var wire 1 =% rs2_data [25] $end
$var wire 1 >% rs2_data [24] $end
$var wire 1 ?% rs2_data [23] $end
$var wire 1 @% rs2_data [22] $end
$var wire 1 A% rs2_data [21] $end
$var wire 1 B% rs2_data [20] $end
$var wire 1 C% rs2_data [19] $end
$var wire 1 D% rs2_data [18] $end
$var wire 1 E% rs2_data [17] $end
$var wire 1 F% rs2_data [16] $end
$var wire 1 G% rs2_data [15] $end
$var wire 1 H% rs2_data [14] $end
$var wire 1 I% rs2_data [13] $end
$var wire 1 J% rs2_data [12] $end
$var wire 1 K% rs2_data [11] $end
$var wire 1 L% rs2_data [10] $end
$var wire 1 M% rs2_data [9] $end
$var wire 1 N% rs2_data [8] $end
$var wire 1 O% rs2_data [7] $end
$var wire 1 P% rs2_data [6] $end
$var wire 1 Q% rs2_data [5] $end
$var wire 1 R% rs2_data [4] $end
$var wire 1 S% rs2_data [3] $end
$var wire 1 T% rs2_data [2] $end
$var wire 1 U% rs2_data [1] $end
$var wire 1 V% rs2_data [0] $end
$var wire 1 W% br_type [3] $end
$var wire 1 X% br_type [2] $end
$var wire 1 Y% br_type [1] $end
$var wire 1 Z% br_type [0] $end
$var reg 1 [% br_taken $end
$upscope $end
$upscope $end
$upscope $end

$scope begin <genblk#7383733#34#0> $end
$upscope $end

$scope begin <genblk#7383733#65#2> $end
$upscope $end

$scope begin <genblk#7383733#85#4> $end
$upscope $end

$scope module ta_gen2 $end
$var reg 32 \% jta2 [31:0] $end
$var reg 1 ]% jump2 $end
$var reg 1 ^% oldest_idx [0:0] $end
$var reg 7 _% oldest_sqN [6:0] $end
$upscope $end
$upscope $end

$scope module flush_controller $end
$var parameter 32 `% NUM_PORTS $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var reg 1 a% flush $end
$var reg 7 b% flush_sqN [6:0] $end
$upscope $end

$scope module execute $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 c% flush $end
$var wire 1 d% flush_sqN [6] $end
$var wire 1 e% flush_sqN [5] $end
$var wire 1 f% flush_sqN [4] $end
$var wire 1 g% flush_sqN [3] $end
$var wire 1 h% flush_sqN [2] $end
$var wire 1 i% flush_sqN [1] $end
$var wire 1 j% flush_sqN [0] $end

$scope begin gen_agu_fu[0] $end
$var parameter 32 k% i $end

$scope module AGU_i $end
$var reg 114 l% IN_instr [113:0] $end
$var reg 77 m% OUT [76:0] $end
$var reg 1 n% is_load $end
$var reg 1 o% is_store $end
$var reg 2 p% data_size [1:0] $end
$var reg 1 q% is_unsigned $end
$var reg 32 r% target_addr [31:0] $end
$upscope $end
$upscope $end

$scope begin gen_mul_div_fu[0] $end
$var parameter 32 s% i $end

$scope module MUL_DIV_i $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 c% flush $end
$var wire 1 d% flush_sqN [6] $end
$var wire 1 e% flush_sqN [5] $end
$var wire 1 f% flush_sqN [4] $end
$var wire 1 g% flush_sqN [3] $end
$var wire 1 h% flush_sqN [2] $end
$var wire 1 i% flush_sqN [1] $end
$var wire 1 j% flush_sqN [0] $end
$var reg 82 t% IN_instr [81:0] $end
$var reg 1 u% OUT_busy $end
$var reg 46 v% OUT_cdb [45:0] $end
$var reg 1 w% mul_stall $end
$var reg 1 x% mul_cdb_valid $end
$var reg 7 y% mul_cdb_sqN [6:0] $end
$var reg 6 z% mul_cdb_tag [5:0] $end
$var reg 32 {% mul_cdb_result [31:0] $end
$var reg 2 |% div_state [1:0] $end
$var reg 82 }% div_instr_r [81:0] $end
$var reg 64 ~% div_partial [63:0] $end
$var reg 32 !& div_divisor [31:0] $end
$var reg 6 "& div_count [5:0] $end
$var reg 1 #& div_quot_sign $end
$var reg 1 $& div_rem_sign $end
$var reg 1 %& div_by_zero $end
$var reg 1 && div_cdb_valid $end
$var reg 7 '& div_cdb_sqN [6:0] $end
$var reg 6 (& div_cdb_tag [5:0] $end
$var reg 32 )& div_cdb_result [31:0] $end
$var reg 32 *& mul_stage1_result [31:0] $end
$var reg 32 +& mul_stage2_result [31:0] $end

$scope function abs32 $end
$upscope $end

$scope function is_squashed $end
$upscope $end
$upscope $end
$upscope $end

$scope begin gen_alu_fu[1] $end
$var parameter 32 ,& i $end

$scope module ALU_i $end
$var reg 82 -& IN_instr [81:0] $end
$var reg 46 .& OUT [45:0] $end
$var reg 32 /& alu_result [31:0] $end
$upscope $end
$upscope $end

$scope begin gen_alu_fu[0] $end
$var parameter 32 0& i $end

$scope module ALU_i $end
$var reg 82 1& IN_instr [81:0] $end
$var reg 46 2& OUT [45:0] $end
$var reg 32 3& alu_result [31:0] $end
$upscope $end
$upscope $end

$scope begin <genblk#216771781#17#0> $end
$upscope $end

$scope begin <genblk#216771781#25#2> $end
$upscope $end

$scope begin <genblk#216771781#36#4> $end
$upscope $end
$upscope $end

$scope module lsu $end
$var wire 1 ' clk $end
$var wire 1 ( clk_m $end
$var wire 1 ) rst $end
$var wire 1 * rst_m $end
$var wire 1 4& flush $end
$var wire 1 5& flush_sqN [6] $end
$var wire 1 6& flush_sqN [5] $end
$var wire 1 7& flush_sqN [4] $end
$var wire 1 8& flush_sqN [3] $end
$var wire 1 9& flush_sqN [2] $end
$var wire 1 :& flush_sqN [1] $end
$var wire 1 ;& flush_sqN [0] $end
$var reg 1 <& OUT_busy $end
$var reg 1 =& store_disp_idx [0:0] $end
$var reg 1 >& load_disp_idx [0:0] $end
$var reg 1 ?& has_store_disp $end
$var reg 1 @& has_load_disp $end
$var reg 1 A& store_agu_idx [0:0] $end
$var reg 1 B& load_agu_idx [0:0] $end
$var reg 1 C& has_store_agu $end
$var reg 1 D& has_load_agu $end
$var reg 1 E& str_busy $end
$var reg 8 F& stb_alloc [7:0] $end
$var reg 74 G& stb_wb [73:0] $end
$var reg 1 H& ld_busy $end
$var reg 14 I& ldb_alloc [13:0] $end
$var reg 43 J& ldb_addr_wb [42:0] $end
$var reg 46 K& ldb_cdb_out [45:0] $end

$scope module u_stb $end
$var parameter 32 L& PTR_W $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var reg 8 M& alloc [7:0] $end
$var reg 74 N& wb [73:0] $end
$var wire 1 4& flush $end
$var wire 1 5& flush_sqN [6] $end
$var wire 1 6& flush_sqN [5] $end
$var wire 1 7& flush_sqN [4] $end
$var wire 1 8& flush_sqN [3] $end
$var wire 1 9& flush_sqN [2] $end
$var wire 1 :& flush_sqN [1] $end
$var wire 1 ;& flush_sqN [0] $end
$var reg 1 O& str_busy $end
$var reg 4 P& alloc_idx [3:0] $end
$var reg 4 Q& wb_idx [3:0] $end
$var reg 5 R& used_count [4:0] $end
$upscope $end

$scope module u_ldb $end
$var parameter 32 S& PTR_W $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var reg 14 T& alloc [13:0] $end
$var reg 43 U& addr_wb [42:0] $end
$var wire 1 4& flush $end
$var wire 1 5& flush_sqN [6] $end
$var wire 1 6& flush_sqN [5] $end
$var wire 1 7& flush_sqN [4] $end
$var wire 1 8& flush_sqN [3] $end
$var wire 1 9& flush_sqN [2] $end
$var wire 1 :& flush_sqN [1] $end
$var wire 1 ;& flush_sqN [0] $end
$var reg 46 V& cdb_out [45:0] $end
$var reg 1 W& ld_busy $end
$var reg 4 X& alloc_idx [3:0] $end
$var reg 4 Y& ta_wb_idx [3:0] $end
$var reg 4 Z& broadcast_idx [3:0] $end
$var reg 1 [& broadcast_valid $end
$var reg 5 \& used_count [4:0] $end

$scope function byte_lanes $end
$upscope $end

$scope function extract_bytes $end
$upscope $end

$scope function extend_data $end
$upscope $end
$upscope $end

$scope module u_dmem $end
$var parameter 32 ]& DEPTH $end
$var parameter 32 ^& BANK_DEPTH $end
$var parameter 32 _& BANK_AW $end
$var wire 1 ' clk_cpu $end
$var wire 1 ) rst_cpu $end
$var wire 1 ( clk_mem $end
$var wire 1 * rst_mem $end

$scope begin g_ack_sync[1] $end
$var parameter 32 `& i $end

$scope module u_wr_ack $end
$var parameter 32 a& W $end
$var wire 1 ' clk_dst $end
$var wire 1 ) rst_dst $end
$var wire 1 b& d [0] $end
$var reg 1 c& q [0:0] $end
$var reg 1 d& ff1 [0:0] $end
$var reg 1 e& ff2 [0:0] $end
$upscope $end

$scope module u_rd_ack $end
$var parameter 32 f& W $end
$var wire 1 ' clk_dst $end
$var wire 1 ) rst_dst $end
$var wire 1 g& d [0] $end
$var reg 1 h& q [0:0] $end
$var reg 1 i& ff1 [0:0] $end
$var reg 1 j& ff2 [0:0] $end
$upscope $end
$upscope $end

$scope begin g_ack_sync[0] $end
$var parameter 32 k& i $end

$scope module u_wr_ack $end
$var parameter 32 l& W $end
$var wire 1 ' clk_dst $end
$var wire 1 ) rst_dst $end
$var wire 1 m& d [0] $end
$var reg 1 n& q [0:0] $end
$var reg 1 o& ff1 [0:0] $end
$var reg 1 p& ff2 [0:0] $end
$upscope $end

$scope module u_rd_ack $end
$var parameter 32 q& W $end
$var wire 1 ' clk_dst $end
$var wire 1 ) rst_dst $end
$var wire 1 r& d [0] $end
$var reg 1 s& q [0:0] $end
$var reg 1 t& ff1 [0:0] $end
$var reg 1 u& ff2 [0:0] $end
$upscope $end
$upscope $end

$scope begin g_req_sync[1] $end
$var parameter 32 v& i $end

$scope module u_wr_sync $end
$var parameter 32 w& W $end
$var wire 1 ( clk_dst $end
$var wire 1 * rst_dst $end
$var wire 1 x& d [0] $end
$var reg 1 y& q [0:0] $end
$var reg 1 z& ff1 [0:0] $end
$var reg 1 {& ff2 [0:0] $end
$upscope $end

$scope module u_rd_sync $end
$var parameter 32 |& W $end
$var wire 1 ( clk_dst $end
$var wire 1 * rst_dst $end
$var wire 1 }& d [0] $end
$var reg 1 ~& q [0:0] $end
$var reg 1 !' ff1 [0:0] $end
$var reg 1 "' ff2 [0:0] $end
$upscope $end
$upscope $end

$scope begin g_req_sync[0] $end
$var parameter 32 #' i $end

$scope module u_wr_sync $end
$var parameter 32 $' W $end
$var wire 1 ( clk_dst $end
$var wire 1 * rst_dst $end
$var wire 1 %' d [0] $end
$var reg 1 &' q [0:0] $end
$var reg 1 '' ff1 [0:0] $end
$var reg 1 (' ff2 [0:0] $end
$upscope $end

$scope module u_rd_sync $end
$var parameter 32 )' W $end
$var wire 1 ( clk_dst $end
$var wire 1 * rst_dst $end
$var wire 1 *' d [0] $end
$var reg 1 +' q [0:0] $end
$var reg 1 ,' ff1 [0:0] $end
$var reg 1 -' ff2 [0:0] $end
$upscope $end
$upscope $end

$scope begin genblk1[1] $end
$var parameter 32 .' i $end
$upscope $end

$scope begin genblk1[0] $end
$var parameter 32 /' i $end
$upscope $end

$scope function byte_en $end
$upscope $end

$scope begin <genblk#106089705#86#0> $end
$upscope $end

$scope begin <genblk#106089705#104#2> $end
$upscope $end

$scope begin <genblk#106089705#219#4> $end
$upscope $end
$upscope $end
$upscope $end

$scope module register_file $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var integer 32 0' i $end
$upscope $end

$scope module ROB $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 1' flush $end
$var wire 1 2' flush_sqN [6] $end
$var wire 1 3' flush_sqN [5] $end
$var wire 1 4' flush_sqN [4] $end
$var wire 1 5' flush_sqN [3] $end
$var wire 1 6' flush_sqN [2] $end
$var wire 1 7' flush_sqN [1] $end
$var wire 1 8' flush_sqN [0] $end
$var reg 1 9' OUT_busy $end
$var reg 2 :' commit [1:0] $end
$var reg 2 ;' dataout_valid [1:0] $end
$var reg 2 <' write_en [1:0] $end
$var reg 7 =' count [6:0] $end
$var reg 7 >' next_count [6:0] $end
$var reg 6 ?' head [5:0] $end
$var reg 6 @' tail [5:0] $end
$var reg 6 A' next_head [5:0] $end
$var reg 6 B' next_tail [5:0] $end
$var reg 2 C' num_wr [1:0] $end
$var reg 2 D' num_commit [1:0] $end
$var reg 1 E' full $end
$var reg 1 F' empty $end
$upscope $end
$upscope $end
$upscope $end
$enddefinitions $end
#0
$dumpvars
0!
0"
1#
1$
0+
0,
0-
b0 .
b0 /
b0 z
b1000 {
b0 |
b0 }
b10 ~
b0 B!
b0 C!
b0 N!
b0 O!
b10 s!
1t!
b0 u!
00
01
0x!
0y!
b0 z!
0{!
b0 |!
0}!
b0 ~!
0""
b0 #"
b0 $"
b0 %"
b0 &"
1'"
0("
b0 +"
b0 ,"
b0 -"
b0 ."
b0 /"
b0 0"
b0 1"
b0 2"
02
03
04
08"
b1111111111111111111111111111111111111111111111111111111111111110 9"
b0 :"
0;"
0<"
05
b0 6
0L"
0M"
0N"
1O"
0Z"
b0 ["
0\"
b0 e"
0f"
b0 Q$
b0 R$
0S$
b0 T$
b0 U$
b0 V$
b0 W$
0X$
b0 Y$
b0 Z$
b0 [$
0\$
b0 ]$
b0 ^$
b0 _$
b0 `$
0a$
b0 b$
0c$
0d$
1e$
1f$
0g$
0h$
b0 s$
0t$
0i$
0[%
b0 C#
b0 D#
0E#
b0 F#
b0 G#
b0 H#
b0 I#
0J#
b0 K#
b0 L#
b0 M#
0N#
b0 O#
b0 P#
b0 Q#
b0 R#
0S#
b0 T#
0U#
0V#
1W#
1X#
0Y#
0Z#
b0 e#
0f#
0[#
0M$
b0 '#
b0 )#
0*#
b0 +#
b0 ,#
b0 -#
0.#
b0 /#
b0 0#
01#
02#
13#
14#
b0 >#
0?#
b0 j"
b0 k"
0l"
b0 m"
b0 n"
b0 o"
0p"
b0 q"
b0 r"
0s"
0t"
1u"
1v"
b0 "#
0##
b0 \%
0]%
b0 ^%
b1111111 _%
0a%
b0 b%
b0 1&
b0 2&
b0 3&
b0 -&
b0 .&
b0 /&
b0 t%
0u%
b0 v%
0w%
0x%
b0 y%
b0 z%
b0 {%
b0 |%
b0 }%
b0 ~%
b0 !&
b0 "&
0#&
0$&
0%&
0&&
b0 '&
b0 (&
b0 )&
b0 *&
b0 +&
b0 l%
b1110 m%
0n%
0o%
b11 p%
0q%
b0 r%
0<&
b0 =&
b0 >&
0?&
0@&
b0 A&
b0 B&
0C&
0D&
0E&
b0 F&
b0 G&
0H&
b0 I&
b0 J&
b0 M&
b0 N&
0O&
b0 P&
b0 Q&
b0 R&
b0 K&
b0 T&
b0 U&
b0 V&
0W&
b0 X&
b0 Y&
b0 Z&
0[&
b0 \&
b0 &'
b0 ''
b0 ('
b0 +'
b0 ,'
b0 -'
b0 y&
b0 z&
b0 {&
b0 ~&
b0 !'
b0 "'
b0 n&
b0 o&
b0 p&
b0 s&
b0 t&
b0 u&
b0 c&
b0 d&
b0 e&
b0 h&
b0 i&
b0 j&
09'
b0 :'
b0 ;'
b0 <'
b0 ='
b0 >'
b0 ?'
b0 @'
b0 A'
b0 B'
bx C'
bx D'
0E'
1F'
b110 D!
b1000000 E!
b100 P!
b1000 Q!
b11 R!
b100 !"
b1000000 3"
b0 B"
b1 A"
b10 @"
b11 ?"
b0 >"
b1 ="
b0 U"
b1 T"
b0 S"
b0 R"
b0 Q"
b1 P"
b1000000 V"
b10000 W"
b100 X"
b0 N$
b1000 O$
b11 P$
b1000 j$
b1 @#
b1000 A#
b11 B#
b1000 \#
b0 $#
b1000 %#
b11 &#
b1000 5#
b0 g"
b1000 h"
b11 i"
b1000 w"
b10 `%
b0 0&
b1 ,&
b0 s%
b0 k%
b100 L&
b100 S&
b100000000 ]&
b10000000 ^&
b111 _&
b0 /'
b1 .'
b0 #'
b1 $'
b1 )'
b1 v&
b1 w&
b1 |&
b0 k&
b1 l&
b1 q&
b1 `&
b1 a&
b1 f&
b100 0'
b0 %
b0 &
1*
1)
0(
0'
08'
07'
06'
05'
04'
03'
02'
01'
0;&
0:&
09&
08&
07&
06&
05&
04&
0j%
0i%
0h%
0g%
0f%
0e%
0d%
0c%
0d"
0c"
0b"
0a"
0`"
0_"
0^"
0]"
0K"
0J"
0I"
0H"
0G"
0F"
0E"
0D"
0C"
07"
06"
05"
04"
0*"
0)"
0w!
0v!
0y
0x
0w
0v
0u
0t
0s
0r
0q
0p
0o
0n
0m
0l
0k
0j
0i
0h
0g
0f
0e
0d
0c
0b
0a
0`
0_
0^
0]
0\
0[
0Z
0Y
0X
0W
0V
0U
0T
0S
0R
0Q
0P
0O
0N
0M
0L
0K
0J
0I
0H
0G
0F
0E
0D
0C
0B
0A
0@
0?
0>
0=
0<
0;
0:
09
08
07
0r!
0q!
0p!
0o!
0n!
0m!
0l!
0k!
0j!
0i!
0h!
0g!
0f!
0e!
0d!
0c!
0b!
0a!
0`!
0_!
0^!
0]!
0\!
0[!
0Z!
0Y!
0X!
0W!
0V!
0U!
0T!
0S!
0M!
0L!
0K!
0J!
0I!
0H!
0G!
0F!
1A!
0@!
0?!
0>!
1=!
0<!
0;!
0:!
09!
08!
07!
06!
05!
04!
03!
02!
01!
00!
0/!
0.!
0-!
0,!
0+!
0*!
0)!
0(!
0'!
0&!
0%!
0$!
0#!
0"!
0!!
0Y"
0(#
0V%
0U%
0T%
0S%
0R%
0Q%
0P%
0O%
0N%
0M%
0L%
0K%
0J%
0I%
0H%
0G%
0F%
0E%
0D%
0C%
0B%
0A%
0@%
0?%
0>%
0=%
0<%
0;%
0:%
09%
08%
07%
06%
05%
04%
03%
02%
01%
00%
0/%
0.%
0-%
0,%
0+%
0*%
0)%
0(%
0'%
0&%
0%%
0$%
0#%
0"%
0!%
0~$
0}$
0|$
0{$
0z$
0y$
0x$
0w$
0v$
0u$
0r$
0q$
0p$
0o$
0n$
0m$
0l$
0k$
0Z%
0Y%
0X%
0W%
0H$
0G$
0F$
0E$
0D$
0C$
0B$
0A$
0@$
0?$
0>$
0=$
0<$
0;$
0:$
09$
08$
07$
06$
05$
04$
03$
02$
01$
00$
0/$
0.$
0-$
0,$
0+$
0*$
0)$
0($
0'$
0&$
0%$
0$$
0#$
0"$
0!$
0~#
0}#
0|#
0{#
0z#
0y#
0x#
0w#
0v#
0u#
0t#
0s#
0r#
0q#
0p#
0o#
0n#
0m#
0l#
0k#
0j#
0i#
0h#
0g#
0d#
0c#
0b#
0a#
0`#
0_#
0^#
0]#
0L$
0K$
0J$
0I$
0=#
0<#
0;#
0:#
09#
08#
07#
06#
0!#
0~"
0}"
0|"
0{"
0z"
0y"
0x"
0*'
0%'
0}&
0x&
0r&
0m&
0g&
0b&
$end
#5
1!
1'
b0 0'
b1 0'
b10 0'
b11 0'
b100 0'
b101 0'
b110 0'
b111 0'
b1000 0'
b1001 0'
b1010 0'
b1011 0'
b1100 0'
b1101 0'
b1110 0'
b1111 0'
b10000 0'
b10001 0'
b10010 0'
b10011 0'
b10100 0'
b10101 0'
b10110 0'
b10111 0'
b11000 0'
b11001 0'
b11010 0'
b11011 0'
b11100 0'
b11101 0'
b11110 0'
b11111 0'
b100000 0'
b100001 0'
b100010 0'
b100011 0'
b100100 0'
b100101 0'
b100110 0'
b100111 0'
b101000 0'
b101001 0'
b101010 0'
b101011 0'
b101100 0'
b101101 0'
b101110 0'
b101111 0'
b110000 0'
b110001 0'
b110010 0'
b110011 0'
b110100 0'
b110101 0'
b110110 0'
b110111 0'
b111000 0'
b111001 0'
b111010 0'
b111011 0'
b111100 0'
b111101 0'
b111110 0'
b111111 0'
b1000000 0'
#10
0!
0'
#15
1!
1'
#20
1"
0!
1(
0'
#25
1!
1'
#30
0!
0'
#35
1!
1'
#40
0"
0!
0(
0'
#45
1!
1'
#50
0!
0'
#55
1!
1'
#60
1"
0!
1(
0'
#65
1!
1'
#70
0!
0'
#75
1!
1'
#80
0"
0!
0(
0'
#85
1!
1'
#90
0!
0'
#95
1!
1'
#96
0#
0$
0)
0*
#100
1"
0!
1(
0'
#105
1!
1'
b0 0'
b1 0'
b10 0'
b11 0'
b100 0'
b1000 C!
b1000 B!
b1000 |
b11 G&
b110 J&
b110 U&
b11 N&
b1000 }
b1000 z
b10000 {
0=!
1<!
1J!
b1 N!
b10 O!
1o!
b1000 u!
#110
0!
0'
#115
1!
1'
b10 $"
b10 %"
b10000 C!
b10000 B!
1("
b10000 |
b10000 }
b10000 z
b11000 {
b10 &"
1=!
0J!
1I!
b10 N!
b100 O!
0o!
1n!
b10000 u!
b110010000000000000010010011 2"
b10011 ."
b1100001 /"
b100001100000 0"
b1100100 1"
b11001000000000000100010011 2"
b100010 /"
b100010 0"
b110010 1"
b1 ,"
b10 ,"
b0 ,"
b1 ,"
b10 ,"
#120
0"
0!
0(
0'
#125
1!
1'
b10 +"
b11000 C!
b100 $"
b10 #"
b11000 B!
b11000 |
b11000 }
b11000 z
b100000 {
b1 :"
b11 :"
b0 ,"
b1 ,"
b10 ,"
0=!
0<!
1;!
1J!
b11 N!
b110 O!
1o!
b11000 u!
b1000001000000110110011 2"
b110011 ."
b11 /"
b100000000010 0"
b1000000000000010 1"
b1000000001000001000001000110011 2"
b10000000100 /"
b10000000100 0"
b1000010000000010 1"
b0 ,"
b1 ,"
b10 ,"
#130
0!
0'
#135
1!
1'
b110 $"
b100 #"
b100000 C!
b100 +"
b100000 B!
b100000 |
b100000 }
b100000 z
b101000 {
b0 ,"
b1 ,"
b10 ,"
b1111111111111111111111111111111111111111111111111111111111111100 9"
b1111111111111111111111111111111111111111111111111111111111111000 9"
1=!
0J!
0I!
1H!
b100 N!
b1000 O!
0o!
0n!
1m!
b100000 u!
b1000001111001010110011 2"
b111 -"
b101 /"
b100000000100 0"
b1111000000000010 1"
b1000001110001100110011 2"
b110 -"
b110 /"
b110 0"
b1110000000000010 1"
b1 <'
b11 <'
b1 B'
b10 B'
b10 >'
b0 ,"
b1 ,"
b10 ,"
#140
1"
0!
1(
0'
#145
1!
1'
b10 ='
b10 @'
b110 +"
b101000 C!
b1000 $"
b110 #"
b101000 B!
b101000 |
b101000 }
b101000 z
b110000 {
0O"
b1111111111111111111111111111111111111111111111111111111111110000 9"
b1111111111111111111111111111111111111111111111111111111111100000 9"
b0 ,"
b1 ,"
b10 ,"
0F'
b11 B'
b100 B'
b100 >'
1N"
0=!
1<!
1J!
b101 N!
1L"
14
b1010 O!
1Y"
b1000000000000000000000000000000000000000000100000000000000000100000000000000000000000001100100100000000 Q$
b1000000100000000000000000000000000000100000100000000000000001000000000000000000000000000110010100000000 C#
15"
1<"
1V#
1d$
18"
10
1v!
1)"
0("
1o!
b101000 u!
b0 &"
b1000001100001110110011 2"
b100 -"
b111 /"
b100000000110 0"
b1100000000000010 1"
b1001011000000000111000010011 2"
b10011 ."
b0 -"
b10011100 /"
b10011100 0"
b10010110 1"
b10 B'
b11 B'
b100 B'
b0 ,"
b1 ,"
b10 ,"
1O"
0N"
0L"
04
0Y"
05"
0<"
08"
00
0v!
0)"
1("
b10 &"
b0 2"
b0 ."
b0 /"
b0 0"
b0 1"
b0 ,"
b1 ,"
b10 ,"
b0 ,"
b1000001100001110110011 2"
b110011 ."
b100 -"
b111 /"
b100000000110 0"
b1100000000000010 1"
b1001011000000000111000010011 2"
b10011 ."
b0 -"
b10011100 /"
b10011100 0"
b10010110 1"
b1 ,"
b10 ,"
b0 ,"
b1 ,"
b10 ,"
#150
0!
0'
#155
1!
1'
b1 K#
b1 Y$
b1010 $"
b1000 #"
b110000 C!
b1000 +"
b100 ='
b100 @'
b110000 B!
b110000 |
1}!
b1 ~!
1{!
b110000 |!
b110000 }
b110000 z
b111000 {
b101 B'
b110 B'
b110 >'
b0 ,"
b1 ,"
b10 ,"
b1111111111111111111111111111111111111111111111111111111111000000 9"
b1111111111111111111111111111111111111111111111111111111110000000 9"
b1 Z$
b1 b$
b1 L#
b1 T#
b110010 R#
b1100100 `$
b110000 z!
1y!
1=!
0J!
1I!
b110 N!
1,
b110000 .
b1100 O!
b1000001000000000000000000000000000001000000100000100001000001100000000000000000000000000000000000000000 Q$
b1000001100000000000000000000000000001100001000000100001000010000000000000000000000000000000000000000000 C#
0V#
0d$
0W#
0X#
0e$
0f$
1x
1S
1R
1d#
1r$
0o!
1n!
b110000 u!
1t$
1f#
b11110000011001001001100011 2"
b1100011 ."
b1 -"
b100100 /"
b100100 0"
b11001000000111100 1"
b11001000000000111000010011 2"
b10011 ."
b0 -"
b111100 /"
b111100 0"
b110010 1"
b100 B'
b101 B'
b110 B'
1N#
1\$
b0 ,"
b1 ,"
b10 ,"
b0 ,"
b1 ,"
b10 ,"
#160
0"
0!
0(
0'
#165
1!
1'
b110 ='
b110 @'
b1010 +"
b111000 C!
b1100 $"
b1010 #"
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 R$
b1000000000000000000000000000000000000000000000000000000000000000011001000000000000 R$
b1000000000000000000000000000000000000000000000000000000000000000011001000001000000 R$
b1000000000000000000000000000000000000000000000000000000000000000011001000001000001 R$
b1100100 W$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 D#
b1000000100000000000000000000000000000000000000000000000000000000000000000000000000 D#
b1000000100000000000000000000000000000000000000000000000000000000001100100000000000 D#
b1000000100000000000000000000000000000000000000000000000000000000001100100001000000 D#
b1000000100000000000000000000000000000000000000000000000000000000001100100001000010 D#
b100 G#
b110010 I#
b0 R#
b0 `$
b111000 B!
b111000 |
b1000000000000000000000000000000000000000000000000000000000000000011001000001000001 1&
b1000000100000000000000000000000000000000000000000000000000000000001100100001000010 -&
b1000000000000000000000000000000000000000000000 .&
b1000000100000000000000000000000000000000000000 .&
b1000000100001000000000000000000000000000000000 .&
b1000000000000000000000000000000000000000000000 2&
b1000000000000100000000000000000000000000000000 2&
b110010 /&
b1100100 3&
0}!
b0 ~!
0{!
b0 |!
b10 :"
1;"
b0 L#
b0 T#
b0 Z$
b0 b$
b0 ,"
b1 ,"
b10 ,"
b111 B'
b1000 B'
b1000 >'
b1111111111111111111111111111111111111111111111111111111100000000 9"
b1111111111111111111111111111111111111111111111111111111000000000 9"
b0 z!
0y!
b1000000000000100000000000000000000000001100100 2&
b1000000100001000000000000000000000000000110010 .&
0,
b0 .
b1000010000000000000000000000000000010000101000000100001000010100000000000000000000000000000000000000000 Q$
b1000010100000000000000000000000000010100100100000100001000011000000000000000000000000000000000000000000 C#
0x
0S
0R
0r$
0d#
0f#
0t$
b111000 }
b111000 z
b1000000 {
b1110000100001111001100011 2"
b1100011 ."
b1 -"
b11100 /"
b11100 0"
b100001000000011100 1"
b10000000000000001101111 2"
b1101111 ."
b0 -"
b0 /"
b0 0"
b100 1"
b0 0'
b1 0'
b10 0'
b11 0'
b100 0'
b110 B'
b111 B'
b1000 B'
0;"
1;"
0\$
0N#
0=!
0<!
0;!
1:!
1J!
b111 N!
b1110 O!
1o!
b111000 u!
b0 ,"
b1 ,"
b10 ,"
b0 ,"
b1 ,"
b10 ,"
#170
0!
0'
#175
1!
1'
b100000000000000000000000000000000000000000000000000000000001100100001000010 D#
b10 K#
b11001000001000001 R$
b10 Y$
b1110 $"
b1100 #"
b1000000 C!
b1100 +"
b1000 ='
b1000 @'
b1000000 B!
b1000000 |
b11001000001000001 1&
b100000000000000000000000000000000000000000000000000000000001100100001000010 -&
b100001000000000000000000000000000110010 .&
b100000000000000000000000001100100 2&
b0 :"
0;"
1;"
b1000000 }
b1000000 z
b1001000 {
b1001 B'
b1010 B'
b1010 >'
b0 ,"
b1 ,"
b10 ,"
b1111111111111111111111111111111111111111111111111111110000000000 9"
1=!
0J!
0I!
0H!
1G!
b1000 N!
b10000 O!
b1000011000000000000000000000000000011000011000000100001000011100000000000000000000000000000000000000000 Q$
b1000011100000000000000000000000000011100000100000000000000100000000000000000000000000010010110100000000 C#
1V#
1X#
1W#
0o!
0n!
0m!
1l!
b1000000 u!
b1111010110111 2"
b110111 ."
b1 -"
b11101 /"
b100000011100 0"
b1000000000000 1"
b11011110101011011100111100110111 2"
b100 -"
b110111111110 /"
b1010111111110 0"
b111011100010111101010 1"
b1000 B'
b1001 B'
b1010 B'
0;"
1;"
b1 L#
b11 L#
1g$
1h$
b1 Z$
b11 Z$
b0 ,"
b1 ,"
b10 ,"
1f$
1e$
1r$
1q$
1d#
1c#
b1 e#
1f#
b0 e#
b1 s$
1t$
b0 s$
b0 ,"
b1 ,"
b10 ,"
1\$
1N#
#180
1"
0!
1(
0'
#185
1!
1'
b0 0'
b1 0'
b10 0'
b11 0'
b100 0'
b1010 ='
b1010 @'
b1110 +"
b1001000 C!
b0 $"
b1110 #"
b1000000000000000000000000000000000000000000000000000000000000000011001000001000001 R$
b1000001000000000000000000000000000000000000000000000000000000000011001000001000001 R$
b1000001000000000000000000000000000000000000000000000000000000000000000000001000001 R$
b1000001000000000000000000000000000000000000000000000000000000000000000000001000011 R$
b1000 U$
b0 W$
b1000000100000000000000000000000000000000000000000000000000000000001100100001000010 D#
b1000001100000000000000000000000000000000000000000000000000000000001100100001000010 D#
b1000001100000000000000000000000000000000000000000000000000000000000000000001000010 D#
b1000001100000000000000000000000000000000000000000000000000000000000000000010000010 D#
b1000001100000000000000000000000000000000000000000000000000000000000000000010000100 D#
b1100 G#
b0 I#
b1001000 B!
b1001000 |
b1000001000000000000000000000000000000000000000000000000000000000000000000001000011 1&
b1000001100000000000000000000000000000000000000000000000000000000000000000010000100 -&
b1000000100001000000000000000000000000000110010 .&
b1000001100001000000000000000000000000000110010 .&
b1000001100010000000000000000000000000000110010 .&
b1000000000000100000000000000000000000001100100 2&
b1000001000000100000000000000000000000001100100 2&
b1000001000001100000000000000000000000001100100 2&
b0 /&
b0 3&
1}!
1{!
b1010100 |!
b1001000 }
b1001000 z
b1010000 {
b1 :"
b11 :"
0;"
b0 ,"
b1 ,"
b10 ,"
b1011 B'
b1100 B'
b1 :'
b11 :'
b1 A'
b10 A'
b1 ["
b0 0'
b1 0'
b10 0'
b11 0'
b100 0'
b1010100 z!
1y!
b1000001000001100000000000000000000000000000000 2&
b1000001100010000000000000000000000000000000000 .&
0=!
1<!
1J!
b1001 N!
1,
b1010100 .
b10010 O!
b1000100000000000000000000000000000100000101100001100100000000000000000000000000000000000100100100001000 Q$
b1000100100000000000000000000000000100100000100000000000000100100000000000000000000000000110010100000000 C#
1d$
1x
1U
1S
1Q
1o!
b1001000 u!
b1010100 }
b1010000 z
b1011100 {
b11101110111111110000111100010011 2"
b10011 ."
b0 -"
b111011111110 /"
b1011011111110 0"
b111110000111011101110 1"
b1111011101010000000100011 2"
b100011 ."
b10 -"
b0 /"
b0 0"
b11101010000000011110 1"
0g$
0h$
b1010 B'
b1011 B'
b1100 B'
b0 A'
b1 A'
b10 A'
0e$
1>!
1=!
0J!
1I!
b1010 N!
b1100100 O#
b110010 P#
b1100100 ]$
b110010 ^$
b10100 O!
b110010 `$
b1100100 _$
b110010 R#
b1100100 Q#
1U%
1R%
1Q%
14%
11%
10%
1G$
1D$
1C$
1&$
1#$
1"$
1p!
0o!
1n!
b1010000 u!
0t!
b1 s!
b0 ,"
b1 ,"
b10 ,"
b1 ~
b1011000 {
b0 ,"
b1 ,"
b10 ,"
0>!
#190
0!
0'
#195
1!
1'
b0 0'
b1 0'
b10 0'
b11 0'
b100 0'
b1000010100000000000000000000000000000000000000000000000000000000000000000010000100 D#
b1000010100000000000000000000000001100100000000000000000000000000000000000010000100 D#
b1000010100000000000000000000000001100100000000000000000000000000001100100010000100 D#
b1000010100000000000000000000000001100100000000000000000000000000001100101001000100 D#
b1000010100000000000000000000000001100100000000000000000000000000001100101001000110 D#
b10100 G#
b1100100 H#
b1000010000000000000000000000000000000000000000000000000000000000000000000001000011 R$
b1000010