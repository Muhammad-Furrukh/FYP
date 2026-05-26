$date
	Tue May 26 14:06:11 2026
$end
$version
	QuestaSim Version 2024.1
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
$var wire 1 F! addr [9] $end
$var wire 1 G! addr [8] $end
$var wire 1 H! addr [7] $end
$var wire 1 I! addr [6] $end
$var wire 1 J! addr [5] $end
$var wire 1 K! addr [4] $end
$var wire 1 L! addr [3] $end
$var wire 1 M! addr [2] $end
$var wire 1 N! addr [1] $end
$var wire 1 O! addr [0] $end
$var reg 10 P! block_idx [9:0] $end
$var reg 10 Q! base_word [9:0] $end
$upscope $end

$scope module aligner $end
$var parameter 32 R! INSN_BYTES $end
$var parameter 32 S! BLOCK_SIZE_BYTES $end
$var parameter 32 T! ALIGN_BITS $end
$var wire 1 U! in_pc [31] $end
$var wire 1 V! in_pc [30] $end
$var wire 1 W! in_pc [29] $end
$var wire 1 X! in_pc [28] $end
$var wire 1 Y! in_pc [27] $end
$var wire 1 Z! in_pc [26] $end
$var wire 1 [! in_pc [25] $end
$var wire 1 \! in_pc [24] $end
$var wire 1 ]! in_pc [23] $end
$var wire 1 ^! in_pc [22] $end
$var wire 1 _! in_pc [21] $end
$var wire 1 `! in_pc [20] $end
$var wire 1 a! in_pc [19] $end
$var wire 1 b! in_pc [18] $end
$var wire 1 c! in_pc [17] $end
$var wire 1 d! in_pc [16] $end
$var wire 1 e! in_pc [15] $end
$var wire 1 f! in_pc [14] $end
$var wire 1 g! in_pc [13] $end
$var wire 1 h! in_pc [12] $end
$var wire 1 i! in_pc [11] $end
$var wire 1 j! in_pc [10] $end
$var wire 1 k! in_pc [9] $end
$var wire 1 l! in_pc [8] $end
$var wire 1 m! in_pc [7] $end
$var wire 1 n! in_pc [6] $end
$var wire 1 o! in_pc [5] $end
$var wire 1 p! in_pc [4] $end
$var wire 1 q! in_pc [3] $end
$var wire 1 r! in_pc [2] $end
$var wire 1 s! in_pc [1] $end
$var wire 1 t! in_pc [0] $end
$var reg 2 u! consumed [1:0] $end
$var reg 1 v! is_aligned $end
$var reg 32 w! aligned_base_pc [31:0] $end
$upscope $end
$upscope $end

$scope module fetch $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 x! IN_busy $end
$var wire 1 y! flush $end
$var reg 1 z! OUT_busy $end
$var reg 1 {! jump1 $end
$var reg 32 |! jta1 [31:0] $end

$scope module JTA1 $end
$var reg 1 }! jump1 $end
$var reg 32 ~! jta1 [31:0] $end
$var reg 1 !" jump_valid $end
$var reg 1 "" jump_index [0:0] $end
$upscope $end

$scope module FB $end
$var parameter 32 #" PTR_W $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 x! IN_busy $end
$var wire 1 y! flush $end
$var reg 1 $" OUT_busy $end
$var reg 4 %" head [3:0] $end
$var reg 4 &" tail [3:0] $end
$var reg 5 '" count [4:0] $end
$var reg 5 (" out_count [4:0] $end
$var reg 1 )" can_write $end
$var reg 1 *" can_read $end
$upscope $end
$upscope $end

$scope module decode $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 +" IN_busy $end
$var wire 1 ," flush $end
$var reg 7 -" next_sqN [6:0] $end
$var reg 3 ." valid_count [2:0] $end

$scope module Decoder $end

$scope module IG $end
$var reg 3 /" funct3 [2:0] $end
$var reg 7 0" opcode [6:0] $end
$var reg 12 1" imm12 [11:0] $end
$var reg 13 2" imm13 [12:0] $end
$var reg 21 3" imm21 [20:0] $end
$var reg 32 4" iw [31:0] $end
$upscope $end
$upscope $end
$upscope $end

$scope module rename $end
$var parameter 32 5" NUM_REG $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 6" ROB_busy $end
$var wire 1 7" dispatch_busy $end
$var wire 1 8" flush $end
$var wire 1 9" chkpt_busy $end
$var reg 1 :" OUT_busy $end
$var reg 64 ;" ftb [63:0] $end
$var reg 2 <" req_valid [1:0] $end
$var reg 1 =" chkpt_need $end
$var reg 1 >" stall $end

$scope begin gen_freeCom[1] $end
$var parameter 32 ?" i $end
$upscope $end

$scope begin gen_freeCom[0] $end
$var parameter 32 @" i $end
$upscope $end

$scope function onehot_to_bin $end
$upscope $end

$scope begin <genblk#126634037#317#0> $end
$upscope $end
$upscope $end

$scope module dispatch $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 A" LSU_busy $end
$var wire 1 B" flush $end
$var wire 1 C" flush_sqN [6] $end
$var wire 1 D" flush_sqN [5] $end
$var wire 1 E" flush_sqN [4] $end
$var wire 1 F" flush_sqN [3] $end
$var wire 1 G" flush_sqN [2] $end
$var wire 1 H" flush_sqN [1] $end
$var wire 1 I" flush_sqN [0] $end
$var reg 1 J" d_unit_busy $end
$var reg 1 K" check_busy $end

$scope module DU $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 B" flush $end
$var wire 1 A" LSU_busy $end
$var reg 1 L" OUT_busy $end
$var reg 1 M" packet_done $end

$scope begin g_slot_class[1] $end
$var parameter 32 N" i $end
$upscope $end

$scope begin g_slot_class[0] $end
$var parameter 32 O" i $end
$upscope $end

$scope begin genblk3[0] $end
$var parameter 32 P" i $end
$upscope $end

$scope begin genblk2[0] $end
$var parameter 32 Q" i $end
$upscope $end

$scope begin genblk1[1] $end
$var parameter 32 R" i $end
$upscope $end

$scope begin genblk1[0] $end
$var parameter 32 S" i $end
$upscope $end

$scope begin <genblk#49081796#77#0> $end
$upscope $end

$scope begin <genblk#49081796#78#2> $end
$upscope $end

$scope begin <genblk#49081796#79#4> $end
$upscope $end

$scope begin <genblk#49081796#95#6> $end
$upscope $end
$upscope $end

$scope module BC $end
$var parameter 32 T" NUM_REG $end
$var parameter 32 U" NUM_CHKPT $end
$var parameter 32 V" CHKPT_BITS $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 B" flush $end
$var wire 1 C" flush_sqN [6] $end
$var wire 1 D" flush_sqN [5] $end
$var wire 1 E" flush_sqN [4] $end
$var wire 1 F" flush_sqN [3] $end
$var wire 1 G" flush_sqN [2] $end
$var wire 1 H" flush_sqN [1] $end
$var wire 1 I" flush_sqN [0] $end
$var wire 1 W" disp_busy $end
$var reg 1 X" check_busy $end
$var reg 5 Y" used_count [4:0] $end
$var reg 1 Z" slot_collision $end
$upscope $end
$upscope $end

$scope module issue $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 [" flush $end
$var wire 1 \" flush_sqN [6] $end
$var wire 1 ]" flush_sqN [5] $end
$var wire 1 ^" flush_sqN [4] $end
$var wire 1 _" flush_sqN [3] $end
$var wire 1 `" flush_sqN [2] $end
$var wire 1 a" flush_sqN [1] $end
$var wire 1 b" flush_sqN [0] $end
$var reg 32 c" jta2 [31:0] $end
$var reg 1 d" jump2 $end

$scope begin gen_agu_buffer[0] $end
$var parameter 32 e" i $end

$scope module lsu_issue_buffer_i $end
$var parameter 32 f" DEPTH $end
$var parameter 32 g" TAIL_W $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var reg 65 h" IN_instr [64:0] $end
$var wire 1 [" flush $end
$var wire 1 \" flush_sqN [6] $end
$var wire 1 ]" flush_sqN [5] $end
$var wire 1 ^" flush_sqN [4] $end
$var wire 1 _" flush_sqN [3] $end
$var wire 1 `" flush_sqN [2] $end
$var wire 1 a" flush_sqN [1] $end
$var wire 1 b" flush_sqN [0] $end
$var reg 114 i" OUT_instr [113:0] $end
$var reg 1 j" OUT_busy $end
$var reg 3 k" tail [2:0] $end
$var reg 8 l" ready_mask [7:0] $end
$var reg 3 m" issue_idx [2:0] $end
$var reg 1 n" issue_found $end
$var reg 4 o" next_tail [3:0] $end
$var reg 114 p" next_issue_instr [113:0] $end
$var reg 114 q" registered_out_instr [113:0] $end

$scope module pe $end
$var parameter 32 r" WIDTH $end
$var wire 1 s" req [7] $end
$var wire 1 t" req [6] $end
$var wire 1 u" req [5] $end
$var wire 1 v" req [4] $end
$var wire 1 w" req [3] $end
$var wire 1 x" req [2] $end
$var wire 1 y" req [1] $end
$var wire 1 z" req [0] $end
$var reg 3 {" grant_idx [2:0] $end
$var reg 1 |" grant_valid $end
$upscope $end
$upscope $end
$upscope $end

$scope begin gen_mul_div_buffer[0] $end
$var parameter 32 }" i $end

$scope module mul_div_issue_buffer_i $end
$var parameter 32 ~" DEPTH $end
$var parameter 32 !# TAIL_W $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var reg 32 "# IN_instr [31:0] $end
$var wire 1 [" flush $end
$var wire 1 \" flush_sqN [6] $end
$var wire 1 ]" flush_sqN [5] $end
$var wire 1 ^" flush_sqN [4] $end
$var wire 1 _" flush_sqN [3] $end
$var wire 1 `" flush_sqN [2] $end
$var wire 1 a" flush_sqN [1] $end
$var wire 1 b" flush_sqN [0] $end
$var wire 1 ## IN_busy $end
$var reg 82 $# OUT_instr [81:0] $end
$var reg 1 %# OUT_busy $end
$var reg 3 &# tail [2:0] $end
$var reg 8 '# ready_mask [7:0] $end
$var reg 3 (# issue_idx [2:0] $end
$var reg 1 )# issue_found $end
$var reg 32 *# rs1_data [31:0] $end
$var reg 32 +# rs2_data [31:0] $end
$var reg 4 ,# next_tail [3:0] $end
$var reg 82 -# next_issue_instr [81:0] $end
$var reg 82 .# registered_out_instr [81:0] $end

$scope module pe $end
$var parameter 32 /# WIDTH $end
$var wire 1 0# req [7] $end
$var wire 1 1# req [6] $end
$var wire 1 2# req [5] $end
$var wire 1 3# req [4] $end
$var wire 1 4# req [3] $end
$var wire 1 5# req [2] $end
$var wire 1 6# req [1] $end
$var wire 1 7# req [0] $end
$var reg 3 8# grant_idx [2:0] $end
$var reg 1 9# grant_valid $end
$upscope $end
$upscope $end
$upscope $end

$scope begin gen_alu_buffer[1] $end
$var parameter 32 :# i $end

$scope module alu_issue_buffer_i $end
$var parameter 32 ;# DEPTH $end
$var parameter 32 <# TAIL_W $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var reg 105 =# IN_instr [104:0] $end
$var wire 1 [" flush $end
$var wire 1 \" flush_sqN [6] $end
$var wire 1 ]" flush_sqN [5] $end
$var wire 1 ^" flush_sqN [4] $end
$var wire 1 _" flush_sqN [3] $end
$var wire 1 `" flush_sqN [2] $end
$var wire 1 a" flush_sqN [1] $end
$var wire 1 b" flush_sqN [0] $end
$var reg 82 ># OUT_instr [81:0] $end
$var reg 1 ?# OUT_br_taken $end
$var reg 2 @# OUT_jump_type [1:0] $end
$var reg 32 A# OUT_pc [31:0] $end
$var reg 32 B# rs1_result [31:0] $end
$var reg 32 C# imm [31:0] $end
$var reg 1 D# OUT_busy $end
$var reg 3 E# tail [2:0] $end
$var reg 8 F# ready_mask [7:0] $end
$var reg 3 G# issue_idx [2:0] $end
$var reg 1 H# issue_found $end
$var reg 32 I# op1 [31:0] $end
$var reg 32 J# op2 [31:0] $end
$var reg 1 K# sel1 $end
$var reg 2 L# sel2 [1:0] $end
$var reg 1 M# sel_ready2 $end
$var reg 1 N# br_taken $end
$var reg 4 O# next_tail [3:0] $end
$var reg 82 P# next_issue_instr [81:0] $end
$var reg 32 Q# next_pc [31:0] $end
$var reg 2 R# next_jump_type [1:0] $end
$var reg 32 S# next_rs1_result [31:0] $end
$var reg 32 T# next_imm [31:0] $end
$var reg 1 U# next_br_taken $end
$var reg 82 V# registered_out_instr [81:0] $end
$var reg 32 W# registered_pc [31:0] $end
$var reg 32 X# registered_rs1_result [31:0] $end
$var reg 32 Y# registered_imm [31:0] $end
$var reg 1 Z# registered_br_taken $end
$var reg 2 [# registered_jump_type [1:0] $end

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
$var reg 105 Q$ IN_instr [104:0] $end
$var wire 1 [" flush $end
$var wire 1 \" flush_sqN [6] $end
$var wire 1 ]" flush_sqN [5] $end
$var wire 1 ^" flush_sqN [4] $end
$var wire 1 _" flush_sqN [3] $end
$var wire 1 `" flush_sqN [2] $end
$var wire 1 a" flush_sqN [1] $end
$var wire 1 b" flush_sqN [0] $end
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
$var reg 32 ]$ op1 [31:0] $end
$var reg 32 ^$ op2 [31:0] $end
$var reg 1 _$ sel1 $end
$var reg 2 `$ sel2 [1:0] $end
$var reg 1 a$ sel_ready2 $end
$var reg 1 b$ br_taken $end
$var reg 4 c$ next_tail [3:0] $end
$var reg 82 d$ next_issue_instr [81:0] $end
$var reg 32 e$ next_pc [31:0] $end
$var reg 2 f$ next_jump_type [1:0] $end
$var reg 32 g$ next_rs1_result [31:0] $end
$var reg 32 h$ next_imm [31:0] $end
$var reg 1 i$ next_br_taken $end
$var reg 82 j$ registered_out_instr [81:0] $end
$var reg 32 k$ registered_pc [31:0] $end
$var reg 32 l$ registered_rs1_result [31:0] $end
$var reg 32 m$ registered_imm [31:0] $end
$var reg 1 n$ registered_br_taken $end
$var reg 2 o$ registered_jump_type [1:0] $end

$scope module pe $end
$var parameter 32 p$ WIDTH $end
$var wire 1 q$ req [7] $end
$var wire 1 r$ req [6] $end
$var wire 1 s$ req [5] $end
$var wire 1 t$ req [4] $end
$var wire 1 u$ req [3] $end
$var wire 1 v$ req [2] $end
$var wire 1 w$ req [1] $end
$var wire 1 x$ req [0] $end
$var reg 3 y$ grant_idx [2:0] $end
$var reg 1 z$ grant_valid $end
$upscope $end

$scope module bc $end
$var wire 1 {$ rs1_data [31] $end
$var wire 1 |$ rs1_data [30] $end
$var wire 1 }$ rs1_data [29] $end
$var wire 1 ~$ rs1_data [28] $end
$var wire 1 !% rs1_data [27] $end
$var wire 1 "% rs1_data [26] $end
$var wire 1 #% rs1_data [25] $end
$var wire 1 $% rs1_data [24] $end
$var wire 1 %% rs1_data [23] $end
$var wire 1 &% rs1_data [22] $end
$var wire 1 '% rs1_data [21] $end
$var wire 1 (% rs1_data [20] $end
$var wire 1 )% rs1_data [19] $end
$var wire 1 *% rs1_data [18] $end
$var wire 1 +% rs1_data [17] $end
$var wire 1 ,% rs1_data [16] $end
$var wire 1 -% rs1_data [15] $end
$var wire 1 .% rs1_data [14] $end
$var wire 1 /% rs1_data [13] $end
$var wire 1 0% rs1_data [12] $end
$var wire 1 1% rs1_data [11] $end
$var wire 1 2% rs1_data [10] $end
$var wire 1 3% rs1_data [9] $end
$var wire 1 4% rs1_data [8] $end
$var wire 1 5% rs1_data [7] $end
$var wire 1 6% rs1_data [6] $end
$var wire 1 7% rs1_data [5] $end
$var wire 1 8% rs1_data [4] $end
$var wire 1 9% rs1_data [3] $end
$var wire 1 :% rs1_data [2] $end
$var wire 1 ;% rs1_data [1] $end
$var wire 1 <% rs1_data [0] $end
$var wire 1 =% rs2_data [31] $end
$var wire 1 >% rs2_data [30] $end
$var wire 1 ?% rs2_data [29] $end
$var wire 1 @% rs2_data [28] $end
$var wire 1 A% rs2_data [27] $end
$var wire 1 B% rs2_data [26] $end
$var wire 1 C% rs2_data [25] $end
$var wire 1 D% rs2_data [24] $end
$var wire 1 E% rs2_data [23] $end
$var wire 1 F% rs2_data [22] $end
$var wire 1 G% rs2_data [21] $end
$var wire 1 H% rs2_data [20] $end
$var wire 1 I% rs2_data [19] $end
$var wire 1 J% rs2_data [18] $end
$var wire 1 K% rs2_data [17] $end
$var wire 1 L% rs2_data [16] $end
$var wire 1 M% rs2_data [15] $end
$var wire 1 N% rs2_data [14] $end
$var wire 1 O% rs2_data [13] $end
$var wire 1 P% rs2_data [12] $end
$var wire 1 Q% rs2_data [11] $end
$var wire 1 R% rs2_data [10] $end
$var wire 1 S% rs2_data [9] $end
$var wire 1 T% rs2_data [8] $end
$var wire 1 U% rs2_data [7] $end
$var wire 1 V% rs2_data [6] $end
$var wire 1 W% rs2_data [5] $end
$var wire 1 X% rs2_data [4] $end
$var wire 1 Y% rs2_data [3] $end
$var wire 1 Z% rs2_data [2] $end
$var wire 1 [% rs2_data [1] $end
$var wire 1 \% rs2_data [0] $end
$var wire 1 ]% br_type [3] $end
$var wire 1 ^% br_type [2] $end
$var wire 1 _% br_type [1] $end
$var wire 1 `% br_type [0] $end
$var reg 1 a% br_taken $end
$upscope $end
$upscope $end
$upscope $end

$scope begin <genblk#7383733#32#0> $end
$upscope $end

$scope begin <genblk#7383733#61#2> $end
$upscope $end

$scope begin <genblk#7383733#79#4> $end
$upscope $end

$scope module ta_gen2 $end
$var reg 32 b% jta2 [31:0] $end
$var reg 1 c% jump2 $end
$var reg 1 d% oldest_idx [0:0] $end
$var reg 7 e% oldest_sqN [6:0] $end
$upscope $end
$upscope $end

$scope module flush_controller $end
$var parameter 32 f% NUM_PORTS $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var reg 1 g% flush $end
$var reg 7 h% flush_sqN [6:0] $end
$upscope $end

$scope module execute $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 i% flush $end
$var wire 1 j% flush_sqN [6] $end
$var wire 1 k% flush_sqN [5] $end
$var wire 1 l% flush_sqN [4] $end
$var wire 1 m% flush_sqN [3] $end
$var wire 1 n% flush_sqN [2] $end
$var wire 1 o% flush_sqN [1] $end
$var wire 1 p% flush_sqN [0] $end

$scope begin gen_output_assign_agu[0] $end
$var parameter 32 q% i $end
$upscope $end

$scope begin gen_output_assign_int[2] $end
$var parameter 32 r% i $end
$upscope $end

$scope begin gen_output_assign_int[1] $end
$var parameter 32 s% i $end
$upscope $end

$scope begin gen_output_assign_int[0] $end
$var parameter 32 t% i $end
$upscope $end

$scope begin gen_agu_fu[0] $end
$var parameter 32 u% i $end

$scope module AGU_i $end
$var reg 114 v% IN_instr [113:0] $end
$var reg 77 w% OUT [76:0] $end
$var reg 1 x% is_load $end
$var reg 1 y% is_store $end
$var reg 2 z% data_size [1:0] $end
$var reg 1 {% is_unsigned $end
$var reg 32 |% target_addr [31:0] $end
$upscope $end
$upscope $end

$scope begin gen_mul_div_fu[0] $end
$var parameter 32 }% i $end

$scope module MUL_DIV_i $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 i% flush $end
$var wire 1 j% flush_sqN [6] $end
$var wire 1 k% flush_sqN [5] $end
$var wire 1 l% flush_sqN [4] $end
$var wire 1 m% flush_sqN [3] $end
$var wire 1 n% flush_sqN [2] $end
$var wire 1 o% flush_sqN [1] $end
$var wire 1 p% flush_sqN [0] $end
$var reg 82 ~% IN_instr [81:0] $end
$var reg 1 !& OUT_busy $end
$var reg 46 "& OUT_cdb [45:0] $end
$var reg 1 #& mul_stall $end
$var reg 1 $& mul_cdb_valid $end
$var reg 7 %& mul_cdb_sqN [6:0] $end
$var reg 6 && mul_cdb_tag [5:0] $end
$var reg 32 '& mul_cdb_result [31:0] $end
$var reg 2 (& div_state [1:0] $end
$var reg 82 )& div_instr_r [81:0] $end
$var reg 64 *& div_partial [63:0] $end
$var reg 32 +& div_divisor [31:0] $end
$var reg 6 ,& div_count [5:0] $end
$var reg 1 -& div_quot_sign $end
$var reg 1 .& div_rem_sign $end
$var reg 1 /& div_by_zero $end
$var reg 1 0& div_cdb_valid $end
$var reg 7 1& div_cdb_sqN [6:0] $end
$var reg 6 2& div_cdb_tag [5:0] $end
$var reg 32 3& div_cdb_result [31:0] $end
$var reg 32 4& mul_stage1_result [31:0] $end
$var reg 32 5& mul_stage2_result [31:0] $end

$scope function abs32 $end
$upscope $end

$scope function is_squashed $end
$upscope $end
$upscope $end
$upscope $end

$scope begin gen_alu_fu[1] $end
$var parameter 32 6& i $end

$scope module ALU_i $end
$var reg 82 7& IN_instr [81:0] $end
$var reg 46 8& OUT [45:0] $end
$var reg 32 9& alu_result [31:0] $end
$upscope $end
$upscope $end

$scope begin gen_alu_fu[0] $end
$var parameter 32 :& i $end

$scope module ALU_i $end
$var reg 82 ;& IN_instr [81:0] $end
$var reg 46 <& OUT [45:0] $end
$var reg 32 =& alu_result [31:0] $end
$upscope $end
$upscope $end

$scope begin <genblk#216771781#17#0> $end
$upscope $end

$scope begin <genblk#216771781#25#2> $end
$upscope $end

$scope begin <genblk#216771781#36#4> $end
$upscope $end

$scope begin <genblk#216771781#75#6> $end
$upscope $end

$scope begin <genblk#216771781#79#8> $end
$upscope $end
$upscope $end

$scope module lsu $end
$var wire 1 ' clk $end
$var wire 1 ( clk_m $end
$var wire 1 ) rst $end
$var wire 1 * rst_m $end
$var wire 1 >& flush $end
$var wire 1 ?& flush_sqN [6] $end
$var wire 1 @& flush_sqN [5] $end
$var wire 1 A& flush_sqN [4] $end
$var wire 1 B& flush_sqN [3] $end
$var wire 1 C& flush_sqN [2] $end
$var wire 1 D& flush_sqN [1] $end
$var wire 1 E& flush_sqN [0] $end
$var reg 1 F& OUT_busy $end
$var reg 1 G& store_disp_idx [0:0] $end
$var reg 1 H& load_disp_idx [0:0] $end
$var reg 1 I& has_store_disp $end
$var reg 1 J& has_load_disp $end
$var reg 1 K& store_agu_idx [0:0] $end
$var reg 1 L& load_agu_idx [0:0] $end
$var reg 1 M& has_store_agu $end
$var reg 1 N& has_load_agu $end
$var reg 1 O& str_busy $end
$var reg 8 P& stb_alloc [7:0] $end
$var reg 74 Q& stb_wb [73:0] $end
$var reg 1 R& ld_busy $end
$var reg 14 S& ldb_alloc [13:0] $end
$var reg 43 T& ldb_addr_wb [42:0] $end
$var reg 46 U& ldb_cdb_out [45:0] $end

$scope module u_stb $end
$var parameter 32 V& PTR_W $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var reg 8 W& alloc [7:0] $end
$var reg 74 X& wb [73:0] $end
$var wire 1 >& flush $end
$var wire 1 ?& flush_sqN [6] $end
$var wire 1 @& flush_sqN [5] $end
$var wire 1 A& flush_sqN [4] $end
$var wire 1 B& flush_sqN [3] $end
$var wire 1 C& flush_sqN [2] $end
$var wire 1 D& flush_sqN [1] $end
$var wire 1 E& flush_sqN [0] $end
$var reg 1 Y& str_busy $end
$var reg 4 Z& alloc_idx [3:0] $end
$var reg 4 [& wb_idx [3:0] $end
$var reg 5 \& used_count [4:0] $end
$upscope $end

$scope module u_ldb $end
$var parameter 32 ]& PTR_W $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var reg 14 ^& alloc [13:0] $end
$var reg 43 _& addr_wb [42:0] $end
$var wire 1 >& flush $end
$var wire 1 ?& flush_sqN [6] $end
$var wire 1 @& flush_sqN [5] $end
$var wire 1 A& flush_sqN [4] $end
$var wire 1 B& flush_sqN [3] $end
$var wire 1 C& flush_sqN [2] $end
$var wire 1 D& flush_sqN [1] $end
$var wire 1 E& flush_sqN [0] $end
$var reg 46 `& cdb_out [45:0] $end
$var reg 1 a& ld_busy $end
$var reg 4 b& alloc_idx [3:0] $end
$var reg 4 c& ta_wb_idx [3:0] $end
$var reg 4 d& broadcast_idx [3:0] $end
$var reg 1 e& broadcast_valid $end
$var reg 5 f& used_count [4:0] $end

$scope function byte_lanes $end
$upscope $end

$scope function extract_bytes $end
$upscope $end

$scope function extend_data $end
$upscope $end
$upscope $end

$scope module u_dmem $end
$var parameter 32 g& DEPTH $end
$var parameter 32 h& BANK_DEPTH $end
$var parameter 32 i& BANK_AW $end
$var wire 1 ' clk_cpu $end
$var wire 1 ) rst_cpu $end
$var wire 1 ( clk_mem $end
$var wire 1 * rst_mem $end

$scope begin g_ack_sync[1] $end
$var parameter 32 j& i $end

$scope module u_wr_ack $end
$var parameter 32 k& W $end
$var wire 1 ' clk_dst $end
$var wire 1 ) rst_dst $end
$var wire 1 l& d [0] $end
$var reg 1 m& q [0:0] $end
$var reg 1 n& ff1 [0:0] $end
$var reg 1 o& ff2 [0:0] $end
$upscope $end

$scope module u_rd_ack $end
$var parameter 32 p& W $end
$var wire 1 ' clk_dst $end
$var wire 1 ) rst_dst $end
$var wire 1 q& d [0] $end
$var reg 1 r& q [0:0] $end
$var reg 1 s& ff1 [0:0] $end
$var reg 1 t& ff2 [0:0] $end
$upscope $end
$upscope $end

$scope begin g_ack_sync[0] $end
$var parameter 32 u& i $end

$scope module u_wr_ack $end
$var parameter 32 v& W $end
$var wire 1 ' clk_dst $end
$var wire 1 ) rst_dst $end
$var wire 1 w& d [0] $end
$var reg 1 x& q [0:0] $end
$var reg 1 y& ff1 [0:0] $end
$var reg 1 z& ff2 [0:0] $end
$upscope $end

$scope module u_rd_ack $end
$var parameter 32 {& W $end
$var wire 1 ' clk_dst $end
$var wire 1 ) rst_dst $end
$var wire 1 |& d [0] $end
$var reg 1 }& q [0:0] $end
$var reg 1 ~& ff1 [0:0] $end
$var reg 1 !' ff2 [0:0] $end
$upscope $end
$upscope $end

$scope begin g_req_sync[1] $end
$var parameter 32 "' i $end

$scope module u_wr_sync $end
$var parameter 32 #' W $end
$var wire 1 ( clk_dst $end
$var wire 1 * rst_dst $end
$var wire 1 $' d [0] $end
$var reg 1 %' q [0:0] $end
$var reg 1 &' ff1 [0:0] $end
$var reg 1 '' ff2 [0:0] $end
$upscope $end

$scope module u_rd_sync $end
$var parameter 32 (' W $end
$var wire 1 ( clk_dst $end
$var wire 1 * rst_dst $end
$var wire 1 )' d [0] $end
$var reg 1 *' q [0:0] $end
$var reg 1 +' ff1 [0:0] $end
$var reg 1 ,' ff2 [0:0] $end
$upscope $end
$upscope $end

$scope begin g_req_sync[0] $end
$var parameter 32 -' i $end

$scope module u_wr_sync $end
$var parameter 32 .' W $end
$var wire 1 ( clk_dst $end
$var wire 1 * rst_dst $end
$var wire 1 /' d [0] $end
$var reg 1 0' q [0:0] $end
$var reg 1 1' ff1 [0:0] $end
$var reg 1 2' ff2 [0:0] $end
$upscope $end

$scope module u_rd_sync $end
$var parameter 32 3' W $end
$var wire 1 ( clk_dst $end
$var wire 1 * rst_dst $end
$var wire 1 4' d [0] $end
$var reg 1 5' q [0:0] $end
$var reg 1 6' ff1 [0:0] $end
$var reg 1 7' ff2 [0:0] $end
$upscope $end
$upscope $end

$scope begin genblk1[1] $end
$var parameter 32 8' i $end
$upscope $end

$scope begin genblk1[0] $end
$var parameter 32 9' i $end
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
$var integer 32 :' i $end
$upscope $end

$scope module ROB $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 ;' flush $end
$var wire 1 <' flush_sqN [6] $end
$var wire 1 =' flush_sqN [5] $end
$var wire 1 >' flush_sqN [4] $end
$var wire 1 ?' flush_sqN [3] $end
$var wire 1 @' flush_sqN [2] $end
$var wire 1 A' flush_sqN [1] $end
$var wire 1 B' flush_sqN [0] $end
$var reg 1 C' OUT_busy $end
$var reg 7 D' count [6:0] $end
$var reg 6 E' head [5:0] $end
$var reg 6 F' tail [5:0] $end
$var reg 1 G' full $end
$var reg 1 H' empty $end
$var reg 2 I' num_write [1:0] $end
$var reg 2 J' num_commit [1:0] $end
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
b0 P!
b0 Q!
b10 u!
1v!
b0 w!
00
01
0z!
0{!
b0 |!
0}!
b0 ~!
0!"
b0 ""
0$"
b0 %"
b0 &"
b0 '"
b0 ("
1)"
0*"
b0 -"
b0 ."
b0 /"
b0 0"
b0 1"
b0 2"
b0 3"
b0 4"
02
03
04
0:"
b1111111111111111111111111111111100000000000000000000000000000000 ;"
b0 <"
0="
0>"
05
b0 6
0J"
0K"
0L"
1M"
0X"
b0 Y"
0Z"
b0 c"
0d"
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
0_$
b0 `$
xa$
b0 y$
0z$
0b$
0a%
b0 c$
b0 d$
bx e$
bx f$
bx g$
bx h$
xi$
b0 j$
b0 k$
b0 l$
b0 m$
0n$
b0 o$
b0 =#
b0 >#
0?#
b0 @#
b0 A#
b0 B#
b0 C#
0D#
b0 E#
b0 F#
b0 G#
0H#
b0 I#
b0 J#
0K#
b0 L#
xM#
b0 e#
0f#
0N#
0M$
b0 O#
b0 P#
bx Q#
bx R#
bx S#
bx T#
xU#
b0 V#
b0 W#
b0 X#
b0 Y#
0Z#
b0 [#
b0 "#
b0 $#
0%#
b0 &#
b0 '#
b0 (#
0)#
bx *#
bx +#
b0 8#
09#
b0 ,#
b0 -#
b0 .#
b0 h"
b0 i"
0j"
b0 k"
b0 l"
b0 m"
0n"
b0 {"
0|"
b0 o"
b0 p"
b0 q"
b0 b%
0c%
b0 d%
b1111111 e%
0g%
b0 h%
b0 ;&
b0 <&
b0 =&
b0 7&
b0 8&
b0 9&
b0 ~%
0!&
b0 "&
0#&
0$&
b0 %&
b0 &&
b0 '&
b0 (&
b0 )&
b0 *&
b0 +&
b0 ,&
0-&
0.&
0/&
00&
b0 1&
b0 2&
b0 3&
b0 4&
b0 5&
b0 v%
b1110 w%
0x%
0y%
b11 z%
0{%
b0 |%
0F&
b0 G&
b0 H&
0I&
0J&
b0 K&
b0 L&
0M&
0N&
0O&
b0 P&
b0 Q&
0R&
b0 S&
b0 T&
b0 W&
b0 X&
0Y&
b0 Z&
b0 [&
b0 \&
b0 U&
b0 ^&
b0 _&
b0 `&
0a&
b0 b&
b0 c&
b0 d&
0e&
b0 f&
b0 0'
b0 1'
b0 2'
b0 5'
b0 6'
b0 7'
b0 %'
b0 &'
b0 ''
b0 *'
b0 +'
b0 ,'
b0 x&
b0 y&
b0 z&
b0 }&
b0 ~&
b0 !'
b0 m&
b0 n&
b0 o&
b0 r&
b0 s&
b0 t&
0C'
b0 D'
b0 E'
b0 F'
0G'
1H'
b0 I'
b0 J'
b1000 D!
b100000000 E!
b100 R!
b1000 S!
b11 T!
b100 #"
b1000000 5"
b0 @"
b1 ?"
b0 S"
b1 R"
b0 Q"
b0 P"
b0 O"
b1 N"
b1000000 T"
b10000 U"
b100 V"
b0 N$
b1000 O$
b11 P$
b1000 p$
b1 :#
b1000 ;#
b11 <#
b1000 \#
b0 }"
b1000 ~"
b11 !#
b1000 /#
b0 e"
b1000 f"
b11 g"
b1000 r"
b10 f%
b0 :&
b1 6&
b0 }%
b0 u%
b0 t%
b1 s%
b10 r%
b0 q%
b100 V&
b100 ]&
b100000000 g&
b10000000 h&
b111 i&
b0 9'
b1 8'
b0 -'
b1 .'
b1 3'
b1 "'
b1 #'
b1 ('
b0 u&
b1 v&
b1 {&
b1 j&
b1 k&
b1 p&
b100 :'
b0 %
b0 &
04'
0/'
0)'
0$'
0|&
0w&
0q&
0l&
1*
1)
0(
0'
0B'
0A'
0@'
0?'
0>'
0='
0<'
0;'
0E&
0D&
0C&
0B&
0A&
0@&
0?&
0>&
0p%
0o%
0n%
0m%
0l%
0k%
0j%
0i%
0b"
0a"
0`"
0_"
0^"
0]"
0\"
0["
0I"
0H"
0G"
0F"
0E"
0D"
0C"
0B"
0A"
09"
08"
07"
06"
0,"
0+"
0y!
0x!
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
0t!
0s!
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
0O!
0N!
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
0W"
0##
0\%
0[%
0Z%
0Y%
0X%
0W%
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
0x$
0w$
0v$
0u$
0t$
0s$
0r$
0q$
0`%
0_%
0^%
0]%
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
07#
06#
05#
04#
03#
02#
01#
00#
0z"
0y"
0x"
0w"
0v"
0u"
0t"
0s"
$end
#5
1!
1'
#10
0!
0'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b101 :'
b110 :'
b111 :'
b1000 :'
b1001 :'
b1010 :'
b1011 :'
b1100 :'
b1101 :'
b1110 :'
b1111 :'
b10000 :'
b10001 :'
b10010 :'
b10011 :'
b10100 :'
b10101 :'
b10110 :'
b10111 :'
b11000 :'
b11001 :'
b11010 :'
b11011 :'
b11100 :'
b11101 :'
b11110 :'
b11111 :'
b100000 :'
b100001 :'
b100010 :'
b100011 :'
b100100 :'
b100101 :'
b100110 :'
b100111 :'
b101000 :'
b101001 :'
b101010 :'
b101011 :'
b101100 :'
b101101 :'
b101110 :'
b101111 :'
b110000 :'
b110001 :'
b110010 :'
b110011 :'
b110100 :'
b110101 :'
b110110 :'
b110111 :'
b111000 :'
b111001 :'
b111010 :'
b111011 :'
b111100 :'
b111101 :'
b111110 :'
b111111 :'
b1000000 :'
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
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
#105
1!
1'
b1000 C!
b1000 B!
b1000 |
b11 Q&
b110 T&
b110 _&
b11 X&
b1000 }
b1000 z
b10000 {
0=!
1<!
1L!
b1 P!
b10 Q!
1q!
b1000 w!
#110
0!
0'
#115
1!
1'
b10 &"
b10 '"
b10000 C!
b10000 B!
1*"
b10000 |
b10000 }
b10000 z
b11000 {
b10 ("
1=!
0L!
1K!
b10 P!
b100 Q!
0q!
1p!
b10000 w!
b101000000000000010010011 4"
b10011 0"
b1 1"
b100000000000 2"
b1010 3"
b1010000000000000100010011 4"
b10 1"
b10 2"
b10100 3"
b1 ."
b10 ."
b0 ."
b1 ."
b10 ."
#120
0"
0!
0(
0'
#125
1!
1'
b10 -"
b11000 C!
b100 &"
b10 %"
b11000 B!
b11000 |
1!"
1}!
b1000100 ~!
b11000 }
b11000 z
b100000 {
b1 <"
b11 <"
b0 ."
b1 ."
b10 ."
b1000100 |!
1{!
0=!
0<!
1;!
1L!
b11 P!
1,
b1000100 .
b110 Q!
1x
1U
1Q
1q!
b11000 w!
b1000100 }
b1000000 z
b1001100 {
b10001000001000111001100011 4"
b1100011 0"
b111100 1"
b111100 2"
b1000000000100010 3"
b1000001001010001100011 4"
b1 /"
b1000 1"
b1000 2"
b1001000000000010 3"
1>!
1=!
0;!
1:!
0L!
0K!
1I!
b1000 P!
b10000 Q!
1r!
0q!
0p!
1n!
b1000000 w!
0v!
b1 u!
b0 ."
b1 ."
b10 ."
b1 ~
b1001000 {
b0 ."
b1 ."
b10 ."
0>!
#130
0!
0'
#135
1!
1'
b101 &"
b100 %"
b1 '"
b1001000 C!
b100 -"
b1001000 B!
b1001000 |
0!"
0}!
b0 ~!
b10 <"
b0 <"
1="
b0 ."
b1 ."
b10 ."
b1 ("
b1111111111111111111111111111111000000000000000000000000000000000 ;"
b1111111111111111111111111111110000000000000000000000000000000000 ;"
b0 |!
0{!
0,
b0 .
0x
0U
0Q
b1001000 }
b1001000 z
b1001100 {
b11010000000000000001101111 4"
b1101111 0"
b0 /"
b100000 1"
b100000 2"
b110100 3"
b0 4"
b0 0"
b0 1"
b0 2"
b0 3"
b1 I'
b10 I'
0="
1="
1>!
1L!
b1001 P!
b10010 Q!
0r!
1q!
b1001000 w!
1v!
b10 u!
b0 ."
b1 ."
b10 ~
b1010000 {
b0 ."
b1 ."
0>!
0=!
1<!
#140
1"
0!
1(
0'
#145
1!
1'
b10 D'
b10 F'
b101 -"
b1010000 C!
b110 &"
b101 %"
b1010000 B!
0H'
b1010000 |
b1010000 }
b1010000 z
b1011000 {
0="
0M"
b0 ."
b1 ."
b0 I'
b1 I'
b10 I'
1L"
1=!
0L!
1K!
b1010 P!
1J"
14
b10100 Q!
1W"
b100000000000000000000000000000000000000000010000001000000110000000000000000000000000000000001010100000000 Q$
b100000010000000000000000000000000000010000010000001000000110000100000000000000000000000000010100100000000 =#
17"
1>"
1:"
10
1x!
1+"
0*"
0q!
1p!
b1010000 w!
b0 ("
b10111010110111 4"
b110111 0"
b10 /"
b11101 1"
b100000011100 2"
b10000000000000 3"
b0 4"
b0 0"
b0 /"
b0 1"
b0 2"
b0 3"
b1 O#
b1 c$
b0 I'
b1 I'
b10 I'
b0 ."
b1 ."
1M"
0L"
0J"
04
0W"
07"
0>"
0:"
00
0x!
0+"
1*"
b1 ("
b0 ."
b1 ."
b0 ."
b10111010110111 4"
b110111 0"
b10 /"
b11101 1"
b100000011100 2"
b10000000000000 3"
b0 4"
b0 0"
b0 /"
b0 1"
b0 2"
b0 3"
b1 ."
b0 ."
b1 ."
#150
0!
0'
#155
1!
1'
b1 Y$
b1 E#
b1000 &"
b110 %"
b10 '"
b1011000 C!
b110 -"
b100 D'
b100 F'
b1011000 B!
b1011000 |
1!"
b1 ""
1}!
b1010100 ~!
b1 <"
b1011000 }
b1011000 z
b1100000 {
b0 I'
b1 I'
b10 I'
b0 ."
b1 ."
b10 ("
b1 Y"
b10 Y"
b1 F#
b1 L#
b10 O#
b1 Z$
b1 `$
b10 c$
b1010 ^$
b10100 J#
b1010100 |!
1{!
0=!
0<!
1;!
1L!
b1011 P!
1,
b1010100 .
b10110 Q!
b100000100000000000000000000000000000100010111000000100001000000000000000000000000000000000111100100000100 Q$
b100000110000000000000000000000000000110010111000000100001000000000000000000000000000000000001000100001000 =#
1x
1U
1S
1Q
1x$
1d#
1q!
b1011000 w!
1f#
1z$
b1010100 }
b1010000 z
b1011100 {
b10111010101011011100111100110111 4"
b110111 0"
b100 /"
b101110111110 1"
b1001110111110 2"
b111011100001110101010 3"
b1101111011110000111100010011 4"
b10011 0"
b0 /"
b11011110 1"
b11011110 2"
b11110000000011011110 3"
b0 I'
b1 I'
b1 O#
b10 O#
b1 c$
b10 c$
1\$
1H#
1>!
1=!
1<!
0;!
0L!
b1010 P!
b10100 Q!
1r!
0q!
b1010000 w!
0v!
b1 u!
b1 O#
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1000000100000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1000000100000000000000000000000000000000000000000000000000000000000101000000000000 P#
b1000000100000000000000000000000000000000000000000000000000000000000101000001000000 P#
b1000000100000000000000000000000000000000000000000000000000000000000101000001100001 P#
b100 Q#
b0 R#
b0 S#
b10100 T#
0U#
b0 O#
b1 O#
b1 c$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000000000000000000000000000000000000000000000000000000000000000000010100000000000 d$
b1000000000000000000000000000000000000000000000000000000000000000000010100001000000 d$
b1000000000000000000000000000000000000000000000000000000000000000000010100001100000 d$
b0 e$
b0 f$
b0 g$
b1010 h$
0i$
b0 c$
b1 c$
b0 ."
b1 ."
b10 ."
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b1 ~
b1011000 {
b0 ."
b1 ."
b10 ."
0>!
#160
0"
0!
0(
0'
#165
1!
1'
b1000000100000000000000000000000000000000000000000000000000000000000101000001100001 V#
b100 W#
b10100 Y#
b1000000000000000000000000000000000000000000000000000000000000000000010100001100000 j$
b1010 m$
b101 D'
b101 F'
b1000 -"
b1010 &"
b1000 %"
b111100 ^$
b1000 J#
b1010 W$
b1000000000000000000000000000000000000000000000000000000000000000000010100001100000 R$
b10100 C#
b100 A#
b1000000100000000000000000000000000000000000000000000000000000000000101000001100001 >#
b1000000000000000000000000000000000000000000000000000000000000000000010100001100000 ;&
b1000000100000000000000000000000000000000000000000000000000000000000101000001100001 7&
b1000000000000000000000000000000000000000000000 8&
b1000000100000000000000000000000000000000000000 8&
b1000000110000100000000000000000000000000000000 8&
b1000000000000000000000000000000000000000000000 <&
b1000000010000000000000000000000000000000000000 <&
1K$
1`%
1a%
b10100 9&
b1010 =&
0!"
b0 ""
1!"
b1 ""
b11 <"
b0 Z$
b0 `$
b1 `$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000001000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000001000000000000000000000000000000000000000000000000000000000001111000000000000 d$
b1000001000000000000000000000000000000000000000000000000000000000001111001011000000 d$
b1000 e$
b111100 h$
b0 c$
b1 c$
b0 F#
b0 L#
b1 L#
b0 P#
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1000001100000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1000001100000000000000000000000000000000000000000000000000000000000010000000000000 P#
b1000001100000000000000000000000000000000000000000000000000000000000010001011000000 P#
b1100 Q#
b1000 T#
b0 O#
b1 O#
b0 ."
b1 ."
b10 ."
b0 I'
b1 I'
b1111111111111111111111111111100000000000000000000000000000000000 ;"
b1000000010000000000000000000000000000000001010 <&
b1000000110000100000000000000000000000000010100 8&
1b$
b100001000000000000000000000000000001000000010000001000000100000000000000000000000000000000110100101000000 Q$
b0 =#
0d#
0x$
0z$
0f#
b1111011101010000000100011 4"
b100011 0"
b10 /"
b0 1"
b0 2"
b11101010000000011110 3"
b1101111 4"
b1101111 0"
b0 /"
b0 3"
b0 P#
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1000001100000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1000001100000000000000000000000000000000000000000000000000000000000010000000000000 P#
b1000001100000000000000000000000000000000000000000000000000000000000010001011000000 P#
b0 O#
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000001000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000001000000000000000000000000000000000000000000000000000000000001111000000000000 d$
b1000001000000000000000000000000000000000000000000000000000000000001111001011000000 d$
1i$
b0 c$
b1 c$
b0 I'
b1 I'
0H#
0\$
0K$
0`%
0a%
b0 d$
b10 c$
b1 O#
b0 P#
b0 ."
b1 ."
b10 ."
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
0b$
b1 c$
b10 c$
b0 ."
b1 ."
b10 ."
#170
0!
0'
#175
1!
1'
b10 Y$
b1011 &"
b1010 %"
b1 '"
b1010 -"
b110 D'
b110 F'
b0 j$
b0 m$
b0 V#
b0 W#
b0 Y#
b0 C#
b0 A#
b0 >#
b0 W$
b0 R$
b0 ;&
b0 7&
b110000100000000000000000000000000010100 8&
b10000100000000000000000000000000010100 8&
b10100 8&
b10000000000000000000000000000000001010 <&
b1010 <&
b0 9&
b0 =&
b10 <"
b0 <"
b1111111111111111111111111111000000000000000000000000000000000000 ;"
b1111111111111111111111111110000000000000000000000000000000000000 ;"
b0 I'
b1 I'
b0 ."
b1 ."
b10 ."
b1 ("
b10 Z$
b0 `$
b1 `$
b11 c$
b0 <&
b0 8&
b100001010000000000000000000000000100010010110000001000000110001000000000000000000010000000000000100000010 Q$
1w$
b1 y$
1z$
b0 4"
b0 0"
b10 c$
b11 c$
b0 I'
b1 I'
b10 I'
1\$
b1 [$
b110100 ^$
b1 F#
b11 Z$
b0 `$
1_$
b1 `$
b11 `$
b10 c$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000010000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000010000000000000000000000000000000000000000000000000000000000001101000000000000 d$
b1000010000000000000000000000000000000000000000000000000000000000001101000001000000 d$
b10000 e$
b1 f$
b110100 h$
0i$
b1 c$
b10 c$
b0 ."
b1 ."
b100 ^$
b10000 ]$
b1010 I#
1x$
1d#
1F$
1D$
1'$
1%$
1f#
b0 y$
0z$
b1 y$
1z$
b0 y$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000010000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000010000000000000000000000000000010000000000000000000000000000000000000000000000 d$
b1000010000000000000000000000000000010000000000000000000000000000000001000000000000 d$
b1000010000000000000000000000000000010000000000000000000000000000000001000001000000 d$
b1 c$
b10 c$
b0 [$
1H#
b1000 ]$
1`%
1K$
1Z%
1X%
1;%
19%
1M$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1000001100000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1000001100000000000000000000000000001010000000000000000000000000000000000000000000 P#
b1000001100000000000000000000000000001010000000000000000000000000000010000000000000 P#
b1000001100000000000000000000000000001010000000000000000000000000000010001011000000 P#
b1010 S#
b0 O#
0_$
b0 `$
b1 `$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000001000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000001000000000000000000000000000001000000000000000000000000000000000000000000000 d$
b1000001000000000000000000000000000001000000000000000000000000000000001000000000000 d$
b1000001000000000000000000000000000001000000000000000000000000000000001001011000000 d$
b1000 e$
b0 f$
b1010 g$
b111100 h$
b1 c$
b10 c$
b111100 ^$
b1010 ]$
1N#
b1 O#
b0 P#
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1000001100000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1000001100000000000000000000000000001010000000000000000000000000000000000000000000 P#
b1000001100000000000000000000000000001010000000000000000000000000000010000000000000 P#
b1000001100000000000000000000000000001010000000000000000000000000000010001011000000 P#
1U#
b0 O#
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000001000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000001000000000000000000000000000001010000000000000000000000000000000000000000000 d$
b1000001000000000000000000000000000001010000000000000000000000000001111000000000000 d$
b1000001000000000000000000000000000001010000000000000000000000000001111001011000000 d$
b1 c$
b10 c$
#180
1"
0!
1(
0'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
#185
1!
1'
b0 E#
b1000001100000000000000000000000000001010000000000000000000000000000010001011000000 V#
b1100 W#
b1010 X#
b1000 Y#
1Z#
b1000001000000000000000000000000000001010000000000000000000000000001111001011000000 j$
b1000 k$
b1010 l$
b111100 m$
b1000 D'
b1000 F'
b1011 -"
b1100 &"
b1011 %"
b110100 ^$
b111100 W$
b1010 V$
b1000 U$
b1000001000000000000000000000000000001010000000000000000000000000001111001011000000 R$
1?#
b1000 C#
b1010 B#
b1100 A#
b1000001100000000000000000000000000001010000000000000000000000000000010001011000000 >#
b0 J#
b1000001000000000000000000000000000001010000000000000000000000000001111001011000000 ;&
b1000001100000000000000000000000000001010000000000000000000000000000010001011000000 7&
b1000000000000000000000000000000000000000000000 8&
b1000001100000000000000000000000000000000000000 8&
b1000000000000000000000000000000000000000000000 <&
b1000001000000000000000000000000000000000000000 <&
0K$
0`%
0M$
b1000 9&
b111100 =&
0M"
b0 `$
1_$
b1 `$
b11 `$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000010000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000010000000000000000000000000000001010000000000000000000000000000000000000000000 d$
b1000010000000000000000000000000000001010000000000000000000000000001101000000000000 d$
b1000010000000000000000000000000000001010000000000000000000000000001101000001000000 d$
b10000 e$
b1 f$
b0 g$
b110100 h$
b1 c$
b10 c$
b0 ."
b1 ."
b0 I'
b1 I'
b10 I'
b1 J'
b10 J'
b0 F#
b0 L#
b0 P#
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1000000000000000000000000000000000001010000000000000000000000000000000000000000000 P#
b0 Q#
b0 S#
b0 T#
b0 I#
b100 ^$
b10000 ]$
1L"
b1000001000000000000000000000000000000000111100 <&
b1000001100000000000000000000000000000000001000 8&
0N#
1J"
14
1W"
b100001100000000000000000000000000100100010110000001000000110001110111010101011011100000000000000100000010 Q$
b100001110000000000000000000000000100110000011000110000000110010000000000000000000000000011011110100000000 =#
17"
1>"
1:"
10
1x!
1+"
0*"
0d#
0F$
0D$
0'$
0%$
0Z%
0X%
0;%
09%
0f#
b0 ("
b11 e%
b1 d%
1c%
b10100 b%
b0 I'
b1 I'
b10 I'
b0 J'
b1 J'
b10 J'
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000010000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000010000000000000000000000000000010000000000000000000000000000000000000000000000 d$
b1000010000000000000000000000000000010000000000000000000000000000000001000000000000 d$
b1000010000000000000000000000000000010000000000000000000000000000000001000001000000 d$
b1 c$
b10 c$
b0 P#
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 P#
0U#
b1 O#
b10100 c"
1d"
0H#
1-
b10100 /
1y
1u
1s
b10100 }
b10000 z
b11000 {
b0 O#
b0 P#
b1 O#
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
1M"
0L"
0:!
0I!
b10 P!
0J"
04
b100 Q!
0W"
07"
0>"
0:"
00
0x!
0+"
1*"
0n!
b10000 w!
b1 ("
b0 ."
b1101111 4"
b1101111 0"
b0 4"
b0 0"
b1 ."
#190
0!
0'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
#195
1!
1'
b11000 C!
1g%
b11 h%
b1101 &"
b1100 %"
b1100 -"
b1010 F'
b10 E'
b1000010000000000000000000000000000010000000000000000000000000000000001000001000000 j$
b10000 k$
b0 l$
b110100 m$
b1 o$
b0 V#
b0 W#
b0 X#
b0 Y#
0Z#
b1 E#
0?#
b0 C#
b0 B#
b0 A#
b0 >#
b1 T$
b110100 W$
b0 V$
b10000 U$
b1000010000000000000000000000000000010000000000000000000000000000000001000001000000 R$
b1000100 ]$
b11 6
11
b11000 B!
b11000 |
1B'
1A'
1E&
1D&
1p%
1o%
1,"
1i%
1>&
1;'
b1000010000000000000000000000000000010000000000000000000000000000000001000001000000 ;&
b0 7&
b1100000000000000000000000000000000001000 8&
b1000 8&
b1000010000000000000000000000000000000000111100 <&
b0 Q&
b0 T&
b0 _&
b0 X&
1b"
1a"
1I"
1H"
1y!
18"
1B"
1["
b0 R$
b0 U$
b0 W$
b0 T$
0*"
0)"
1$"
1z!
1+
b0 ;&
17
0A!
b10000000000000000000000000000000000111100 <&
b111100 <&
b0 ("
b0 9&
b0 =&
0!"
b0 ""
0}!
b0 ~!
b0 d%
b1111111 e%
0c%
b0 b%
b1 L#
b0 O#
b0 I'
b1 I'
b10 I'
b0 J'
b0 ."
b1 ."
0_$
b0 `$
b1 `$
b0 d$
b0 c$
b10000000000000 ^$
b0 ]$
b11011110 J#
b0 c"
0d"
b0 |!
0{!
b0 <&
b0 8&
0,
b0 .
0-
b0 /
b100010010000000000000000000000000101010000010000001000000100000000000000000000000000000000000000101000000 Q$
b0 =#
b1000 P&
b1000000000 S&
b10001000100010001001001000000000000000000000000000000000000000001 h"
b1000000000 ^&
b1000 W&
0x
0y
0u
0s
0U
0S
0Q
b11000 }
b11000 z
b11100 {
1I&
b0 I'
b1 I'
b1 O#
b0 O#
b10 c$
b0 c$
b10001000 P&
1>!
1L!
b11 P!
b10001000 W&
b110 Q!
0r!
1q!
b11000 w!
1v!
b10 u!
b0 ."
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b10 ~
b100000 {
0>!
0=!
0<!
1;!
#200
0"
0!
0(
0'
#205
1!
1'
b0 E#
b0 j$
b0 k$
b0 m$
b0 o$
b100 F'
b10 D'
b0 %"
b0 &"
b0 '"
b0 Y$
0g%
b0 h%
b0 6
01
b0 ^$
b0 J#
0B'
0A'
0E&
0D&
0p%
0o%
0,"
0i%
0>&
0;'
b11 Q&
b110 T&
b110 _&
b11 X&
0b"
0a"
0I"
0H"
0y!
08"
0B"
0["
1)"
0$"
0z!
0+
07
1A!
b1 o"
0I&
1I&
b10 Z$
b0 Z$
b0 `$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b0 e$
b0 f$
b0 h$
b1 c$
b0 I'
b1 I'
b0 L#
b1111111111111111111111111110010000000000000000000000000000000000 ;"
b1111111111111111111111111110110000000000000000000000000000000000 ;"
b1111111111111111111111111111110000000000000000000000000000000000 ;"
b0 Y"
b1 Y"
b0 Q$
b10000000 P&
b0 S&
b0 h"
b0 ^&
b10000000 W&
0x$
0w$
0z$
b0 o"
b0 c$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
0I&
b0 I'
b0 P&
0\$
b0 W&
b0 d$
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b1000 ^$
b1000 ]$
b1000 J#
b1000 I#
1Y%
19%
1E$
1%$
#210
0!
0'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
#215
1!
1'
b100000 C!
b1 &"
b1 '"
1*"
b100000 B!
b100000 |
1!"
1}!
b1000100 ~!
b100000 }
b100000 z
b101000 {
b1 J'
b10 J'
b1 ("
b1000100 |!
1{!
1=!
0L!
0K!
1J!
b100 P!
1,
b1000100 .
b1000 Q!
1x
1U
1Q
0q!
0p!
1o!
b100000 w!
b1000100 }
b1000000 z
b1001100 {
b1000001100010001100011 4"
b1100011 0"
b100 /"
b1000 1"
b1000 2"
b1100000000000010 3"
b0 4"
b0 0"
b0 /"
b0 1"
b0 2"
b0 3"
1>!
0;!
1:!
0J!
1I!
b1000 P!
b10000 Q!
1r!
0o!
1n!
b1000000 w!
0v!
b1 u!
b1 ."
b1 ~
b1001000 {
b0 ."
b1 ."
0>!
#220
1"
0!
1(
0'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
#225
1!
1'
b1101 -"
b0 D'
b100 E'
b10 &"
b1 %"
b1001000 C!
b1001000 B!
1H'
b1001000 |
0!"
0}!
b0 ~!
1="
b0 J'
b0 ."
b1 ."
b0 |!
0{!
0,
b0 .
0x
0U
0Q
b1001000 }
b1001000 z
b1001100 {
b10110000000000000001101111 4"
b1101111 0"
b100000 1"
b100000 2"
b101100 3"
b0 4"
b0 0"
b0 1"
b0 2"
b0 3"
1>!
1L!
b1001 P!
b10010 Q!
0r!
1q!
b1001000 w!
1v!
b10 u!
b0 ."
b1 ."
b10 ~
b1010000 {
b0 ."
b1 ."
0>!
0=!
1<!
#230
0!
0'
#235
1!
1'
b1010000 C!
b11 &"
b10 %"
b1110 -"
b1010000 B!
b1010000 |
0="
b1010000 }
b1010000 z
b1011000 {
b0 ."
b1 ."
b0 Y"
1=!
0L!
1K!
b1010 P!
b10100 Q!
0q!
1p!
b1010000 w!
b10111010110111 4"
b110111 0"
b10 /"
b11101 1"
b100000011100 2"
b10000000000000 3"
b0 4"
b0 0"
b0 /"
b0 1"
b0 2"
b0 3"
b1 I'
b0 ."
b1 ."
b0 ."
b1 ."
#240
0"
0!
0(
0'
#245
1!
1'
b1111 -"
b1 D'
b101 F'
b101 &"
b11 %"
b10 '"
b1011000 C!
b1011000 B!
0H'
b1011000 |
1!"
b1 ""
1}!
b1010100 ~!
b1011000 }
b1011000 z
b1100000 {
b1 <"
0M"
b1 Y"
b10 ("
b0 I'
b1 I'
b0 ."
b1 ."
1L"
b1010100 |!
1{!
0=!
0<!
1;!
1L!
b1011 P!
1,
b1010100 .
1J"
14
b10110 Q!
1W"
b100011000000000000000000000000000001010010111000001100001100000000000000000000000000000000001000100001100 Q$
17"
1>"
1:"
10
1x!
1+"
0*"
1x
1U
1S
1Q
1q!
b1011000 w!
b1010100 }
b1010000 z
b1011100 {
b0 ("
b10111010101011011100111100110111 4"
b110111 0"
b100 /"
b101110111110 1"
b1001110111110 2"
b111011100001110101010 3"
b1101111011110000111100010011 4"
b10011 0"
b0 /"
b11011110 1"
b11011110 2"
b11110000000011011110 3"
b1 c$
b0 I'
b1 I'
1>!
1=!
1<!
0;!
0L!
b1010 P!
b10100 Q!
1r!
0q!
b1010000 w!
0v!
b1 u!
b0 ."
b1 ."
b10 ."
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
1M"
0L"
b1 ~
0J"
04
0W"
07"
0>"
0:"
00
0x!
0+"
1*"
b10 ("
b0 4"
b0 0"
b0 1"
b0 2"
b0 3"
b1011000 {
b0 ."
b1 ."
b10 ."
0>!
b0 c$
b1 c$
b0 ."
b10111010101011011100111100110111 4"
b110111 0"
b100 /"
b101110111110 1"
b1001110111110 2"
b111011100001110101010 3"
b1101111011110000111100010011 4"
b10011 0"
b0 /"
b11011110 1"
b11011110 2"
b11110000000011011110 3"
b1 ."
b10 ."
b0 ."
b1 ."
b10 ."
#250
0!
0'
#255
1!
1'
b1 Y$
b111 &"
b101 %"
b10 D'
b110 F'
b10001 -"
0!"
b0 ""
1!"
b1 ""
b11 <"
b0 ."
b1 ."
b10 ."
b0 I'
b1 I'
b1111111111111111111111111111100000000000000000000000000000000000 ;"
b1 Z$
b1 `$
b10 c$
b1010 ]$
b100011010000000000000000000000000001100000010000001000000100000000000000000000000000000000101100101000000 Q$
1x$
1Z%
0Y%
1X%
1;%
1z$
b1111011101010000000100011 4"
b100011 0"
b10 /"
b0 1"
b0 2"
b11101010000000011110 3"
b1101111 4"
b1101111 0"
b0 /"
b0 3"
b0 I'
b1 I'
b1 c$
b10 c$
1\$
1`%
1_%
1a%
b1 c$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000110000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000110000000000000000000000000000001010000000000000000000000000000000000000000000 d$
b1000110000000000000000000000000000001010000000000000000000000000000010000000000000 d$
b1000110000000000000000000000000000001010000000000000000000000000000010001011000000 d$
b10100 e$
b1010 g$
b1000 h$
b0 c$
b1 c$
b0 ."
b1 ."
b10 ."
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
1b$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000110000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000110000000000000000000000000000001010000000000000000000000000000000000000000000 d$
b1000110000000000000000000000000000001010000000000000000000000000000010000000000000 d$
b1000110000000000000000000000000000001010000000000000000000000000000010001011000000 d$
1i$
b0 c$
b1 c$
b0 ."
b1 ."
b10 ."
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000110000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000110000000000000000000000000000001010000000000000000000000000000000000000000000 d$
b1000110000000000000000000000000000001010000000000000000000000000000010000000000000 d$
b1000110000000000000000000000000000001010000000000000000000000000000010001011000000 d$
b0 c$
b1 c$
#260
1"
0!
1(
0'
#265
1!
1'
b1000110000000000000000000000000000001010000000000000000000000000000010001011000000 j$
b10100 k$
b1010 l$
b1000 m$
1n$
b10011 -"
b11 D'
b111 F'
b1000 &"
b111 %"
b1 '"
b101100 ^$
1S$
b1000 W$
b1010 V$
b10100 U$
b1000110000000000000000000000000000001010000000000000000000000000000010001011000000 R$
b1000110000000000000000000000000000001010000000000000000000000000000010001011000000 ;&
b1000000000000000000000000000000000000000000000 <&
b1000110000000000000000000000000000000000000000 <&
0`%
0_%
0a%
b1000 =&
b10 <"
b0 <"
b0 `$
1_$
b1 `$
b11 `$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000110100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000110100000000000000000000000000001010000000000000000000000000000000000000000000 d$
b1000110100000000000000000000000000001010000000000000000000000000001011000000000000 d$
b1000110100000000000000000000000000001010000000000000000000000000001011000001000000 d$
b11000 e$
b1 f$
b1000 g$
b101100 h$
b0 c$
b1 c$
b1111111111111111111111111111000000000000000000000000000000000000 ;"
b1111111111111111111111111110000000000000000000000000000000000000 ;"
b1 ("
b0 I'
b1 I'
b0 ."
b1 ."
b10 ."
b100 ^$
b11000 ]$
b1000110000000000000000000000000000000000001000 <&
0b$
b100011100000000000000000000000000100010010110000001000000110001000000000000000000010000000000000100000010 Q$
0Z%
1Y%
0X%
0;%
b0 4"
b0 0"
b1100 e%
1c%
b11100 b%
b0 I'
b1 I'
b10 I'
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000110100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000110100000000000000000000000000011000000000000000000000000000000000000000000000 d$
b1000110100000000000000000000000000011000000000000000000000000000000001000000000000 d$
b1000110100000000000000000000000000011000000000000000000000000000000001000001000000 d$
0i$
b0 c$
b1 c$
b11100 c"
1d"
1-
b11100 /
1y
1u
1t
1s
b11100 }
b11000 z
b100000 {
b0 ."
b1 ."
0=!
0<!
1;!
0:!
1L!
0I!
b11 P!
b110 Q!
1q!
0n!
b11000 w!
#270
0!
0'
#275
1!
1'
b100000 C!
1g%
b1100 h%
b1001 &"
b1000 %"
b101 D'
b1001 F'
b10100 -"
b1000110100000000000000000000000000011000000000000000000000000000000001000001000000 j$
b11000 k$
b1000 l$
b101100 m$
0n$
b1 o$
b1 T$
0S$
b101100 W$
b1000 V$
b11000 U$
b1000110100000000000000000000000000011000000000000000000000000000000001000001000000 R$
b1000100 ]$
b1100 6
11
b100000 B!
b100000 |
1@'
1?'
1C&
1B&
1n%
1m%
1,"
1i%
1>&
1;'
b1000110100000000000000000000000000011000000000000000000000000000000001000001000000 ;&
b1000110100000000000000000000000000000000001000 <&
b0 Q&
b0 T&
b0 _&
b0 X&
1`"
1_"
1G"
1F"
1y!
18"
1B"
1["
b0 R$
b0 U$
b0 V$
b0 W$
b0 T$
0*"
0)"
1$"
1z!
1+
b0 ;&
17
0A!
b110100000000000000000000000000000000001000 <&
b1000 <&
b0 ("
b0 =&
0!"
b0 ""
0}!
b0 ~!
b1111111 e%
0c%
b0 b%
0M"
b0 ."
b1 ."
b0 I'
b1 I'
b10 I'
0_$
b0 `$
b1 `$
b0 d$
b0 c$
b10000000000000 ^$
b1000 ]$
1L"
b0 c"
0d"
b0 |!
0{!
b0 <&
0,
b0 .
0-
b0 /
1J"
14
1W"
b100011110000000000000000000000000100100010110000001000000110001110111010101011011100000000000000100000010 Q$
b100100000000000000000000000000000100110000011000110000000110010000000000000000000000000011011110100000000 =#
17"
1>"
1:"
10
1x!
1+"
0x
0y
0u
0t
0s
0U
0S
0Q
b100000 }
b100000 z
b100100 {
b0 I'
b1 I'
b10 I'
b1 c$
b0 c$
1>!
0L!
0K!
1J!
b100 P!
b1000 Q!
0r!
0q!
0p!
1o!
b100000 w!
1v!
b10 u!
b0 ."
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
1M"
0L"
b10 ~
0J"
04
0W"
07"
0>"
0:"
00
0x!
0+"
b101000 {
0>!
1=!
#280
0"
0!
0(
0'
#285
1!
1'
b0 j$
b0 k$
b0 l$
b0 m$
b0 o$
b101 F'
b1 D'
b0 %"
b0 &"
b0 '"
b0 Y$
0g%
b0 h%
b0 6
01
b0 ^$
0@'
0?'
0C&
0B&
0n%
0m%
0,"
0i%
0>&
0;'
b11 Q&
b110 T&
b110 _&
b11 X&
0`"
0_"
0G"
0F"
0y!
08"
0B"
0["
1)"
0$"
0z!
0+
07
1A!
b0 Z$
b0 `$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000000000000000000000000000000000001000000000000000000000000000000000000000000000 d$
b0 e$
b0 f$
b0 g$
b0 h$
b1 c$
b0 I'
b1 I'
b10 I'
b0 Y"
b1111111111111111111111111110010000000000000000000000000000000000 ;"
b1111111111111111111111111110110000000000000000000000000000000000 ;"
b1111111111111111111111111111110000000000000000000000000000000000 ;"
b1 O#
b0 J#
b0 I#
b0 ]$
b0 Q$
b0 =#
0E$
0%$
0x$
0Y%
09%
0z$
b0 I'
b0 c$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b0 O#
0\$
b0 d$
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b1000 ^$
b1000 ]$
b1000 J#
b1000 I#
1Y%
19%
1E$
1%$
#290
0!
0'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
#295
1!
1'
b101000 C!
b1 &"
b1 '"
1*"
b101000 B!
b101000 |
1!"
b1 ""
1}!
b1000100 ~!
b101000 }
b101000 z
b110000 {
b1 J'
b1 ("
b1000100 |!
1{!
0=!
1<!
1L!
b101 P!
1,
b1000100 .
b1010 Q!
1x
1U
1Q
1q!
b101000 w!
b1000100 }
b1000000 z
b1001100 {
b10001000001101010001100011 4"
b1100011 0"
b101 /"
b101000 1"
b101000 2"
b1101000000100010 3"
b0 4"
b0 0"
b0 /"
b0 1"
b0 2"
b0 3"
1>!
1=!
0<!
0;!
1:!
0L!
0J!
1I!
b1000 P!
b10000 Q!
1r!
0q!
0o!
1n!
b1000000 w!
0v!
b1 u!
b1 ."
b1 ~
b1001000 {
b0 ."
b1 ."
0>!
#300
1"
0!
1(
0'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
#305
1!
1'
b10101 -"
b0 D'
b101 E'
b11 &"
b1 %"
b10 '"
b1001000 C!
b1001000 B!
1H'
b1001000 |
0!"
b0 ""
0}!
b0 ~!
1="
b10 ("
b0 J'
b0 ."
b1 ."
b0 |!
0{!
0,
b0 .
0x
0U
0Q
b1001000 }
b1001000 z
b1001100 {
b100010111010001100011 4"
b1100011 0"
b111 /"
b1000 1"
b1000 2"
b10111100000000000 3"
b10000000000000000001101111 4"
b1101111 0"
b0 /"
b100000 1"
b100000 2"
b100000 3"
1>!
1L!
b1001 P!
b10010 Q!
0r!
1q!
b1001000 w!
1v!
b10 u!
b0 ."
b1 ."
b10 ."
b10 ~
b1010000 {
b0 ."
b1 ."
b10 ."
0>!
0=!
1<!
#310
0!
0'
#315
1!
1'
b1010000 C!
b100 &"
b11 %"
b1 '"
b10111 -"
b1010000 B!
b1010000 |
0="
1="
b1010000 }
b1010000 z
b1011000 {
b0 ."
b1 ."
b10 ."
b1 ("
1=!
0L!
1K!
b1010 P!
b10100 Q!
0q!
1p!
b1010000 w!
b10111010110111 4"
b110111 0"
b10 /"
b11101 1"
b100000011100 2"
b10000000000000 3"
b0 4"
b0 0"
b0 /"
b0 1"
b0 2"
b0 3"
b1 I'
b0 ."
b1 ."
b0 ."
b1 ."
#320
0"
0!
0(
0'
#325
1!
1'
b11000 -"
b1 D'
b110 F'
b110 &"
b100 %"
b10 '"
b1011000 C!
b1011000 B!
0H'
b1011000 |
1!"
b1 ""
1}!
b1010100 ~!
b1011000 }
b1011000 z
b1100000 {
b1 <"
0="
0M"
b10 ("
b0 I'
b1 I'
b0 ."
b1 ."
b1 Y"
1L"
b1010100 |!
1{!
0=!
0<!
1;!
1L!
b1011 P!
1,
b1010100 .
1J"
14
b10110 Q!
1W"
b100101000000000000000000000000000001110010111000001100001100000000000000000000000000000000101000100010000 Q$
17"
1>"
1:"
10
1x!
1+"
0*"
1x
1U
1S
1Q
1q!
b1011000 w!
b1010100 }
b1010000 z
b1011100 {
b0 ("
b10111010101011011100111100110111 4"
b110111 0"
b100 /"
b101110111110 1"
b1001110111110 2"
b111011100001110101010 3"
b1101111011110000111100010011 4"
b10011 0"
b0 /"
b11011110 1"
b11011110 2"
b11110000000011011110 3"
b1 c$
b0 I'
b1 I'
b10 I'
1>!
1=!
1<!
0;!
0L!
b1010 P!
b10100 Q!
1r!
0q!
b1010000 w!
0v!
b1 u!
b0 ."
b1 ."
b10 ."
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
1M"
0L"
b1 ~
0J"
04
0W"
07"
0>"
0:"
00
0x!
0+"
1*"
b10 ("
b0 4"
b0 0"
b0 1"
b0 2"
b0 3"
b1011000 {
b0 ."
b1 ."
b10 ."
0>!
b0 c$
b1 c$
b0 ."
b10111010101011011100111100110111 4"
b110111 0"
b100 /"
b101110111110 1"
b1001110111110 2"
b111011100001110101010 3"
b1101111011110000111100010011 4"
b10011 0"
b0 /"
b11011110 1"
b11011110 2"
b11110000000011011110 3"
b1 ."
b10 ."
b0 ."
b1 ."
b10 ."
#330
0!
0'
#335
1!
1'
b1 Y$
b1000 &"
b110 %"
b11 D'
b1000 F'
b11010 -"
0!"
b0 ""
1!"
b1 ""
b11 <"
0M"
b0 Y"
b1 Y"
b10 Y"
b0 ."
b1 ."
b10 ."
b0 I'
b1 I'
b10 I'
b1111111111111111111111111111100000000000000000000000000000000000 ;"
b1 Z$
b1 `$
b10 c$
b101000 ^$
b1010 ]$
1L"
1J"
14
1W"
b100101010000000000000000000000000010000010111000011100000100000000000000000000000000000000001000100011000 Q$
b100101100000000000000000000000000010010000010000001000000100000000000000000000000000000000100000101000000 =#
17"
1>"
1:"
10
1x!
1+"
0*"
1x$
1Z%
0Y%
1X%
1;%
1z$
b0 ("
b1111011101010000000100011 4"
b100011 0"
b10 /"
b0 1"
b0 2"
b11101010000000011110 3"
b1101111 4"
b1101111 0"
b0 /"
b0 3"
b1 O#
b0 I'
b1 I'
b1 c$
b10 c$
1\$
1^%
b1 c$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001010000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001010000000000000000000000000000001010000000000000000000000000000000000000000000 d$
b1001010000000000000000000000000000001010000000000000000000000000001010000000000000 d$
b1001010000000000000000000000000000001010000000000000000000000000001010001011000000 d$
b11100 e$
b1010 g$
b101000 h$
b0 c$
b1 c$
b0 ."
b1 ."
b10 ."
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
1M"
0L"
0J"
04
0W"
07"
0>"
0:"
00
0x!
0+"
1*"
b10 ("
b0 4"
b0 0"
b0 ."
b1 ."
b10 ."
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001010000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001010000000000000000000000000000001010000000000000000000000000000000000000000000 d$
b1001010000000000000000000000000000001010000000000000000000000000001010000000000000 d$
b1001010000000000000000000000000000001010000000000000000000000000001010001011000000 d$
b0 c$
b1 c$
b0 ."
b1111011101010000000100011 4"
b100011 0"
b10 /"
b11101010000000011110 3"
b1101111 4"
b1101111 0"
b0 /"
b0 3"
b1 ."
b10 ."
#340
1"
0!
1(
0'
#345
1!
1'
b1001010000000000000000000000000000001010000000000000000000000000001010001011000000 j$
b11100 k$
b1010 l$
b101000 m$
b1 E#
b11100 -"
b100 D'
b1001 F'
b1001 &"
b1000 %"
b1 '"
b1000 ^$
b101000 W$
b1010 V$
b11100 U$
b1001010000000000000000000000000000001010000000000000000000000000001010001011000000 R$
b1001010000000000000000000000000000001010000000000000000000000000001010001011000000 ;&
b1000000000000000000000000000000000000000000000 <&
b1001010000000000000000000000000000000000000000 <&
1_%
b101000 =&
b10 <"
b0 <"
b0 `$
b1 `$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001010100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001010100000000000000000000000000001010000000000000000000000000000000000000000000 d$
b1001010100000000000000000000000000001010000000000000000000000000000010000000000000 d$
b1001010100000000000000000000000000001010000000000000000000000000000010001011000000 d$
b100000 e$
b10100 g$
b1000 h$
b0 c$
b1 c$
b1111111111111111111111111111000000000000000000000000000000000000 ;"
b1111111111111111111111111110000000000000000000000000000000000000 ;"
b1 ("
b0 I'
b1 I'
b0 ."
b1 ."
b10 ."
b1 F#
1K#
b1 L#
b11 L#
b10 O#
b100 J#
b100100 I#
b10100 ]$
b1001010000000000000000000000000000000000101000 <&
b100101110000000000000000000000000100010010110000001000000110001000000000000000000010000000000000100000010 Q$
b0 =#
1d#
1[%
0Z%
1Y%
0X%
0;%
1:%
09%
18%
1a%
1f#
b0 I'
b1 I'
b10 I'
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001010100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001010100000000000000000000000000010100000000000000000000000000000000000000000000 d$
b1001010100000000000000000000000000010100000000000000000000000000000010000000000000 d$
b1001010100000000000000000000000000010100000000000000000000000000000010001011000000 d$
b0 c$
b1 c$
b1 O#
1H#
1b$
b0 4"
b0 0"
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001010100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001010100000000000000000000000000010100000000000000000000000000000000000000000000 d$
b1001010100000000000000000000000000010100000000000000000000000000000010000000000000 d$
b1001010100000000000000000000000000010100000000000000000000000000000010001011000000 d$
1i$
b0 c$
b1 c$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1001011000000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1001011000000000000000000000000000100100000000000000000000000000000000000000000000 P#
b1001011000000000000000000000000000100100000000000000000000000000000001000000000000 P#
b1001011000000000000000000000000000100100000000000000000000000000000001000001000000 P#
b100100 Q#
b1 R#
b1000 S#
b100000 T#
b0 O#
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b0 ."
b1 ."
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001010100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001010100000000000000000000000000010100000000000000000000000000000000000000000000 d$
b1001010100000000000000000000000000010100000000000000000000000000000010000000000000 d$
b1001010100000000000000000000000000010100000000000000000000000000000010001011000000 d$
b0 c$
b1 c$
#350
0!
0'
#355
1!
1'
b1001011000000000000000000000000000100100000000000000000000000000000001000001000000 V#
b100100 W#
b1000 X#
b100000 Y#
b1 [#
b1010 &"
b1001 %"
b110 D'
b1011 F'
b11101 -"
b0 E#
b1001010100000000000000000000000000010100000000000000000000000000000010001011000000 j$
b100000 k$
b10100 l$
b1000 m$
1n$
1S$
b1000 W$
b10100 V$
b100000 U$
b1001010100000000000000000000000000010100000000000000000000000000000010001011000000 R$
b0 I#
b10000000000000 ^$
b1 @#
b100000 C#
b1000 B#
b100100 A#
b1001011000000000000000000000000000100100000000000000000000000000000001000001000000 >#
b1001010100000000000000000000000000010100000000000000000000000000000010001011000000 ;&
b1001011000000000000000000000000000100100000000000000000000000000000001000001000000 7&
b1000000000000000000000000000000000000000000000 8&
b1001011000000000000000000000000000000000000000 8&
b1001010100000000000000000000000000000000101000 <&
0_%
0^%
0a%
b101000 9&
b1000 =&
b10100 e%
1c%
b101000 b%
0M"
b0 F#
0K#
b0 L#
b0 P#
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1000000000000000000000000000000000000000000000000000000000000000000001000000000000 P#
b0 Q#
b0 R#
b0 T#
b0 ."
b1 ."
b0 I'
b1 I'
b10 I'
b0 `$
b1 `$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001011100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001011100000000000000000000000000010100000000000000000000000000000000000000000000 d$
b1001011100000000000000000000000000010100000000000000000000100000000000000000000000 d$
b1001011100000000000000000000000000010100000000000000000000100000000000001011000000 d$
b1001011100000000000000000000000000010100000000000000000000100000000000001011100010 d$
b1000100 e$
b1000 g$
b10000000000000 h$
b0 c$
b1 c$
b1000 ]$
b1000 J#
b1000 I#
1L"
b101000 c"
1d"
b1001010100000000000000000000000000000000001000 <&
b1001011000000000000000000000000000000000101000 8&
0b$
1-
b101000 /
1J"
14
1W"
b100110000000000000000000000000000100100010110000001000000110001110111010101011011100000000000000100000010 Q$
b100110010000000000000000000000000100110000011000110000000110010000000000000000000000000011011110100000000 =#
17"
1>"
1:"
10
1x!
1+"
0*"
1y
1t
1r
0[%
0:%
19%
08%
0d#
0f#
b101000 }
b101000 z
b101100 {
b0 ("
b1111111 e%
0c%
b0 b%
b10101 e%
1c%
b101000 b%
b0 I'
b1 I'
b10 I'
b0 P#
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1000000000000000000000000000000000001000000000000000000000000000000000000000000000 P#
b1000000000000000000000000000000000001000000000000000000000000000000010000000000000 P#
b1 O#
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001011100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001011100000000000000000000000000001000000000000000000000000000000000000000000000 d$
b1001011100000000000000000000000000001000000000000000000000100000000000000000000000 d$
b1001011100000000000000000000000000001000000000000000000000100000000000001011000000 d$
b1001011100000000000000000000000000001000000000000000000000100000000000001011100010 d$
0i$
b0 c$
b1 c$
0H#
1>!
0<!
1;!
0:!
1L!
0K!
1J!
0I!
b101 P!
b1010 Q!
0r!
1q!
0p!
1o!
0n!
b101000 w!
1v!
b10 u!
b0 O#
b0 P#
b1 O#
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
1M"
0L"
b101000 ]$
b101000 J#
b101000 I#
b10 ~
0J"
04
0W"
07"
0>"
0:"
00
0x!
0+"
1*"
1W%
17%
1C$
1#$
b1 ("
b110000 {
b0 ."
b0 O#
b1 O#
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001011100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001011100000000000000000000000000101000000000000000000000000000000000000000000000 d$
b1001011100000000000000000000000000101000000000000000000000100000000000000000000000 d$
b1001011100000000000000000000000000101000000000000000000000100000000000001011000000 d$
b1001011100000000000000000000000000101000000000000000000000100000000000001011100010 d$
b101000 g$
b0 c$
b1 c$
0>!
0=!
1<!
b0 O#
b1 O#
b1101111 4"
b1101111 0"
b0 4"
b0 0"
b1 ."
#360
0"
0!
0(
0'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b0 O#
b1 O#
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001011100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001011100000000000000000000000000101000000000000000000000000000000000000000000000 d$
b1001011100000000000000000000000000101000000000000000000000100000000000000000000000 d$
b1001011100000000000000000000000000101000000000000000000000100000000000001011000000 d$
b1001011100000000000000000000000000101000000000000000000000100000000000001011100010 d$
b0 c$
b1 c$
#365
1!
1'
b110000 C!
1g%
b10101 h%
b1001011100000000000000000000000000101000000000000000000000100000000000001011100010 j$
b1000100 k$
b101000 l$
b10000000000000 m$
0n$
b1 E#
b11110 -"
b1000 D'
b1101 F'
b1011 &"
b1010 %"
b0 V#
b0 W#
b0 X#
b0 Y#
b0 [#
b0 @#
b0 C#
b0 B#
b0 A#
b0 >#
b10111010101011011100000000000000 ^$
0S$
b10000000000000 W$
b101000 V$
b1000100 U$
b1001011100000000000000000000000000101000000000000000000000100000000000001011100010 R$
b10101 6
11
b110000 B!
b110000 |
1B'
1@'
1>'
1E&
1C&
1A&
1p%
1n%
1l%
1,"
1i%
1>&
1;'
b1001011100000000000000000000000000101000000000000000000000100000000000001011100010 ;&
b0 7&
b1011000000000000000000000000000000000101000 8&
b101000 8&
b1001011100000000000000000000000000000000001000 <&
b1001011110001000000000000000000000000000001000 <&
b0 Q&
b0 T&
b0 _&
b0 X&
1b"
1`"
1^"
1I"
1G"
1E"
1y!
18"
1B"
1["
b0 R$
b0 U$
b0 V$
b0 W$
0*"
0)"
1$"
1z!
1+
b0 ;&
17
0A!
b1011110001000000000000000000000000000001000 <&
b10001000000000000000000000000000001000 <&
b1000 <&
b0 ("
b0 9&
b0 =&
0!"
b0 ""
1!"
b1 ""
b1000100 ~!
b1111111 e%
0c%
b0 b%
b0 `$
b1 `$
b0 d$
b0 c$
b0 I'
b1 I'
b10 I'
b1 J'
b0 ."
b1 ."
b1 L#
b0 O#
b11011110 J#
b0 I#
b0 c"
0d"
b1000100 |!
b0 <&
b0 8&
b1000100 .
0-
b0 /
b100110110000000000000000000000000101010000010000001000000100000000000000000000000000000000000000101000000 Q$
b0 =#
b11010 P&
b11010000000 S&
b10011010100010001001001000000000000000000000000000000000000000001 h"
b11010000000 ^&
b11010 W&
0y
0t
0r
0S
0%$
0#$
b1000100 }
b1000000 z
b1001100 {
b1 c$
b0 c$
1I&
b0 I'
b1 I'
b0 J'
b1 J'
b1 O#
b0 O#
b10011010 P&
1>!
1=!
0<!
0;!
1:!
0L!
0J!
1I!
b1000 P!
b10011010 W&
b10000 Q!
1r!
0q!
0o!
1n!
b1000000 w!
0v!
b1 u!
b0 ."
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b1 ~
b1001000 {
b1 c$
b0 c$
0>!
b1 O#
b0 O#
#370
0!
0'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
#375
1!
1'
b0 Y$
b0 %"
b0 &"
b0 '"
b111 F'
b10 D'
b0 E#
b0 j$
b0 k$
b0 l$
b0 m$
0g%
b0 h%
b0 6
01
b0 J#
b0 ^$
0B'
0@'
0>'
0E&
0C&
0A&
0p%
0n%
0l%
0,"
0i%
0>&
0;'
b11 Q&
b110 T&
b110 _&
b11 X&
0b"
0`"
0^"
0I"
0G"
0E"
0y!
08"
0B"
0["
1)"
0$"
0z!
0+
07
1A!
0I&
1I&
b1 o"
b0 L#
b0 I'
b1 I'
b0 J'
b1 J'
b0 Z$
b0 `$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000000000000000000000000000000000101000000000000000000000000000000000000000000000 d$
b0 e$
b0 g$
b0 h$
b1 c$
b0 Y"
b1 Y"
b1111111111111111111111111110010000000000000000000000000000000000 ;"
b1111111111111111111111111110110000000000000000000000000000000000 ;"
b1111111111111111111111111111110000000000000000000000000000000000 ;"
b0 ]$
b0 Q$
b10000000 P&
b0 S&
b0 h"
b0 ^&
b10000000 W&
0x$
0Y%
0W%
09%
07%
0E$
0C$
0z$
b0 o"
0I&
b0 I'
b0 J'
b1 J'
b0 c$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b0 P&
0\$
b0 W&
b0 d$
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b101000 ^$
b101000 ]$
b101000 J#
b101000 I#
1Y%
1W%
19%
17%
1E$
1C$
1%$
1#$
#380
1"
0!
1(
0'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
#385
1!
1'
b1001000 C!
b1 D'
b110 E'
b10 &"
b10 '"
1*"
b1001000 B!
b1001000 |
0!"
b0 ""
0}!
b0 ~!
b10 ("
b0 J'
b1 J'
b0 |!
0{!
0,
b0 .
0x
0U
0Q
b1001000 }
b1001000 z
b1001100 {
b1000001110010001100011 4"
b1100011 0"
b110 /"
b1000 1"
b1000 2"
b1110000000000010 3"
b1100000000000000001101111 4"
b1101111 0"
b0 /"
b0 1"
b0 2"
b11000 3"
1>!
1L!
b1001 P!
b10010 Q!
0r!
1q!
b1001000 w!
1v!
b10 u!
b1 ."
b10 ."
b10 ~
b1010000 {
b0 ."
b1 ."
b10 ."
0>!
0=!
1<!
#390
0!
0'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
#395
1!
1'
b100000 -"
b11 &"
b10 %"
b1 '"
b0 D'
b111 E'
b1010000 C!
b1010000 B!
1H'
b1010000 |
b1010000 }
b1010000 z
b1011000 {
1="
b0 J'
b1 ("
b0 Y"
b0 ."
b1 ."
b10 ."
1=!
0L!
1K!
b1010 P!
b10100 Q!
0q!
1p!
b1010000 w!
b10111010110111 4"
b110111 0"
b10 /"
b11101 1"
b100000011100 2"
b10000000000000 3"
b0 4"
b0 0"
b0 /"
b0 1"
b0 2"
b0 3"
b0 ."
b1 ."
b0 ."
b1 ."
#400
0"
0!
0(
0'
#405
1!
1'
b1011000 C!
b101 &"
b11 %"
b10 '"
b100001 -"
b1011000 B!
b1011000 |
1!"
b1 ""
1}!
b1010100 ~!
b1 <"
0="
b1011000 }
b1011000 z
b1100000 {
b0 ."
b1 ."
b10 ("
b1010100 |!
1{!
0=!
0<!
1;!
1L!
b1011 P!
1,
b1010100 .
b10110 Q!
1x
1U
1S
1Q
1q!
b1011000 w!
b1010100 }
b1010000 z
b1011100 {
b10111010101011011100111100110111 4"
b110111 0"
b100 /"
b101110111110 1"
b1001110111110 2"
b111011100001110101010 3"
b1101111011110000111100010011 4"
b10011 0"
b0 /"
b11011110 1"
b11011110 2"
b11110000000011011110 3"
b1 I'
b10 I'
1>!
1=!
1<!
0;!
0L!
b1010 P!
b10100 Q!
1r!
0q!
b1010000 w!
0v!
b1 u!
b0 ."
b1 ."
b10 ."
b1 ~
b1011000 {
b0 ."
b1 ."
b10 ."
0>!
#410
0!
0'
#415
1!
1'
b100011 -"
b111 &"
b101 %"
b10 D'
b1001 F'
0H'
0!"
b0 ""
1!"
b1 ""
b11 <"
0M"
b0 I'
b1 I'
b10 I'
b0 ."
b1 ."
b10 ."
b1111111111111111111111111111100000000000000000000000000000000000 ;"
b1 Y"
1L"
1J"
14
1W"
b100111100000000000000000000000000010100010111000001100001100000000000000000000000000000000001000100010100 Q$
b100111110000000000000000000000000010110000010000001000000100000000000000000000000000000000011000101000000 =#
17"
1>"
1:"
10
1x!
1+"
0*"
b0 ("
b1111011101010000000100011 4"
b100011 0"
b10 /"
b0 1"
b0 2"
b11101010000000011110 3"
b1101111 4"
b1101111 0"
b0 /"
b0 3"
b1 O#
b1 c$
b0 I'
b1 I'
b0 ."
b1 ."
b10 ."
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
1M"
0L"
0J"
04
0W"
07"
0>"
0:"
00
0x!
0+"
1*"
b10 ("
b0 4"
b0 0"
b0 ."
b1 ."
b10 ."
b0 c$
b1 c$
b0 ."
b1111011101010000000100011 4"
b100011 0"
b10 /"
b11101010000000011110 3"
b1101111 4"
b1101111 0"
b0 /"
b0 3"
b1 ."
b10 ."
#420
1"
0!
1(
0'
#425
1!
1'
b1 Y$
b1 E#
b11 D'
b1010 F'
b1000 &"
b111 %"
b1 '"
b100101 -"
b10 <"
b0 <"
b1111111111111111111111111111000000000000000000000000000000000000 ;"
b1111111111111111111111111110000000000000000000000000000000000000 ;"
b0 ."
b1 ."
b10 ."
b1 ("
b0 I'
b1 I'
b1 F#
1K#
b1 L#
b11 L#
b10 O#
b1 Z$
b1 `$
b10 c$
b1000 ^$
b1010 ]$
b100 J#
b101100 I#
b101000000000000000000000000000000100010010110000001000000110001000000000000000000010000000000000100000010 Q$
b0 =#
1x$
1Z%
0Y%
1X%
0W%
1;%
07%
1d#
1f#
1z$
b0 I'
b1 I'
b10 I'
b1 O#
b1 c$
b10 c$
1\$
1H#
1`%
1^%
1a%
b0 4"
b0 0"
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1001111100000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1001111100000000000000000000000000101100000000000000000000000000000000000000000000 P#
b1001111100000000000000000000000000101100000000000000000000000000000001000000000000 P#
b1001111100000000000000000000000000101100000000000000000000000000000001000001000000 P#
b101100 Q#
b1 R#
b101000 S#
b11000 T#
b0 O#
b1 c$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001111000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001111000000000000000000000000000001010000000000000000000000000000000000000000000 d$
b1001111000000000000000000000000000001010000000000000000000000000000010000000000000 d$
b1001111000000000000000000000000000001010000000000000000000000000000010001011000000 d$
b101000 e$
b1010 g$
b1000 h$
b0 c$
b1 c$
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
1b$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001111000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001111000000000000000000000000000001010000000000000000000000000000000000000000000 d$
b1001111000000000000000000000000000001010000000000000000000000000000010000000000000 d$
b1001111000000000000000000000000000001010000000000000000000000000000010001011000000 d$
1i$
b0 c$
b1 c$
b0 ."
b1 ."
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001111000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1001111000000000000000000000000000001010000000000000000000000000000000000000000000 d$
b1001111000000000000000000000000000001010000000000000000000000000000010000000000000 d$
b1001111000000000000000000000000000001010000000000000000000000000000010001011000000 d$
b0 c$
b1 c$
#430
0!
0'
#435
1!
1'
b1001111100000000000000000000000000101100000000000000000000000000000001000001000000 V#
b101100 W#
b101000 X#
b11000 Y#
b1 [#
b1001111000000000000000000000000000001010000000000000000000000000000010001011000000 j$
b101000 k$
b1010 l$
b1000 m$
1n$
b100110 -"
b1001 &"
b1000 %"
b101 D'
b1100 F'
b0 E#
b10000000000000 ^$
b0 I#
1S$
b1000 W$
b1010 V$
b101000 U$
b1001111000000000000000000000000000001010000000000000000000000000000010001011000000 R$
b1 @#
b11000 C#
b101000 B#
b101100 A#
b1001111100000000000000000000000000101100000000000000000000000000000001000001000000 >#
b1001111000000000000000000000000000001010000000000000000000000000000010001011000000 ;&
b1001111100000000000000000000000000101100000000000000000000000000000001000001000000 7&
b1000000000000000000000000000000000000000000000 8&
b1001111100000000000000000000000000000000000000 8&
b1000000000000000000000000000000000000000000000 <&
b1001111000000000000000000000000000000000000000 <&
0`%
0^%
0a%
b110000 9&
b1000 =&
0M"
b0 `$
b1 `$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010000000000000000000000000000000001010000000000000000000000000000000000000000000 d$
b1010000000000000000000000000000000001010000000000000000000100000000000000000000000 d$
b1010000000000000000000000000000000001010000000000000000000100000000000001011000000 d$
b1010000000000000000000000000000000001010000000000000000000100000000000001011100010 d$
b1000100 e$
b101000 g$
b10000000000000 h$
b0 c$
b1 c$
b0 F#
0K#
b0 L#
b0 P#
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1000000000000000000000000000000000000000000000000000000000000000000001000000000000 P#
b0 Q#
b0 R#
b0 T#
b0 I'
b1 I'
b10 I'
b0 ."
b1 ."
b101000 J#
b101000 I#
b101000 ]$
1L"
b1001111000000000000000000000000000000000001000 <&
b1001111100000000000000000000000000000000110000 8&
0b$
1J"
14
1W"
b101000010000000000000000000000000100100010110000001000000110001110111010101011011100000000000000100000010 Q$
b101000100000000000000000000000000100110000011000110000000110010000000000000000000000000011011110100000000 =#
17"
1>"
1:"
10
1x!
1+"
0*"
0d#
0Z%
1Y%
0X%
1W%
0;%
17%
0f#
b0 ("
b11110 e%
1c%
b110000 b%
b0 I'
b1 I'
b10 I'
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010000000000000000000000000000000101000000000000000000000000000000000000000000000 d$
b1010000000000000000000000000000000101000000000000000000000100000000000000000000000 d$
b1010000000000000000000000000000000101000000000000000000000100000000000001011000000 d$
b1010000000000000000000000000000000101000000000000000000000100000000000001011100010 d$
0i$
b0 c$
b1 c$
b0 P#
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1000000000000000000000000000000000101000000000000000000000000000000000000000000000 P#
b1000000000000000000000000000000000101000000000000000000000000000001010000000000000 P#
b1 O#
b110000 c"
1d"
0H#
1-
b110000 /
1y
1s
1r
b110000 }
b110000 z
b110100 {
b0 O#
b0 P#
b1 O#
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
1M"
0L"
1>!
0=!
1;!
0:!
1J!
0I!
b110 P!
0J"
04
b1100 Q!
0W"
07"
0>"
0:"
00
0x!
0+"
1*"
0r!
1o!
0n!
b110000 w!
1v!
b10 u!
b1 ("
b0 ."
b10 ~
b0 O#
b1 O#
b111000 {
0>!
1=!
b1101111 4"
b1101111 0"
b0 4"
b0 0"
b1 ."
#440
0"
0!
0(
0'
#445
1!
1'
b111000 C!
1g%
b11110 h%
b1 E#
b111 D'
b1110 F'
b1010 &"
b1001 %"
b100111 -"
b1010000000000000000000000000000000101000000000000000000000100000000000001011100010 j$
b1000100 k$
b101000 l$
b10000000000000 m$
0n$
b0 V#
b0 W#
b0 X#
b0 Y#
b0 [#
b0 @#
b0 C#
b0 B#
b0 A#
b0 >#
0S$
b10000000000000 W$
b101000 V$
b1000100 U$
b1010000000000000000000000000000000101000000000000000000000100000000000001011100010 R$
b10111010101011011100000000000000 ^$
b11110 6
11
b111000 B!
b111000 |
1A'
1@'
1?'
1>'
1D&
1C&
1B&
1A&
1o%
1n%
1m%
1l%
1,"
1i%
1>&
1;'
b1010000000000000000000000000000000101000000000000000000000100000000000001011100010 ;&
b0 7&
b1111100000000000000000000000000000000110000 8&
b110000 8&
b1010000000000000000000000000000000000000001000 <&
b1010000010001000000000000000000000000000001000 <&
b0 Q&
b0 T&
b0 _&
b0 X&
1a"
1`"
1_"
1^"
1H"
1G"
1F"
1E"
1y!
18"
1B"
1["
b0 R$
b0 U$
b0 V$
b0 W$
0*"
0)"
1$"
1z!
1+
b0 ;&
17
0A!
b10000010001000000000000000000000000000001000 <&
b10001000000000000000000000000000001000 <&
b1000 <&
b0 ("
b0 9&
b0 =&
0!"
b0 ""
0}!
b0 ~!
b1111111 e%
0c%
b0 b%
b0 ."
b1 ."
b0 I'
b1 I'
b10 I'
b1 L#
b0 O#
b0 `$
b1 `$
b0 d$
b0 c$
b11011110 J#
b0 I#
b0 c"
0d"
b0 |!
0{!
b0 <&
b0 8&
0,
b0 .
0-
b0 /
b101001000000000000000000000000000101010000010000001000000100000000000000000000000000000000000000101000000 Q$
b0 =#
b100011 P&
b100011000000 S&
b10100011100010001001001000000000000000000000000000000000000000001 h"
b100011000000 ^&
b100011 W&
0x
0y
0s
0r
0U
0S
0Q
0%$
0#$
b111000 }
b111000 z
b1000000 {
b1 c$
b0 c$
1I&
b0 I'
b1 I'
b1 O#
b0 O#
b10100011 P&
0=!
0<!
0;!
1:!
1L!
b111 P!
b10100011 W&
b1110 Q!
1q!
b111000 w!
b0 ."
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b1 O#
b0 O#
#450
0!
0'
#455
1!
1'
b0 j$
b0 k$
b0 l$
b0 m$
b0 %"
b0 &"
b0 '"
b1000 F'
b1 D'
b0 E#
b0 Y$
0g%
b0 h%
b0 6
01
b0 ^$
b0 J#
0A'
0@'
0?'
0>'
0D&
0C&
0B&
0A&
0o%
0n%
0m%
0l%
0,"
0i%
0>&
0;'
b11 Q&
b110 T&
b110 _&
b11 X&
0a"
0`"
0_"
0^"
0H"
0G"
0F"
0E"
0y!
08"
0B"
0["
1)"
0$"
0z!
0+
07
1A!
0I&
1I&
b0 Z$
b0 `$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1000000000000000000000000000000000101000000000000000000000000000000000000000000000 d$
b0 e$
b0 g$
b0 h$
b1 c$
b0 L#
b0 I'
b1 I'
b0 Y"
b1111111111111111111111111110010000000000000000000000000000000000 ;"
b1111111111111111111111111110110000000000000000000000000000000000 ;"
b1111111111111111111111111111110000000000000000000000000000000000 ;"
b1 o"
b0 ]$
b0 Q$
b10000000 P&
b0 S&
b0 h"
b0 ^&
b10000000 W&
0E$
0C$
0x$
0Y%
0W%
09%
07%
0z$
b0 o"
0I&
b0 I'
b0 c$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b0 P&
0\$
b0 W&
b0 d$
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b110000 ^$
b110000 ]$
b110000 J#
b110000 I#
1X%
1W%
18%
17%
1D$
1C$
1$$
1#$
#460
1"
0!
1(
0'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
#465
1!
1'
b1000000 C!
b10 &"
b10 '"
1*"
b1000000 B!
b1000000 |
b1000000 }
b1000000 z
b1001000 {
b10 ("
b1 J'
1=!
0L!
0K!
0J!
1I!
b1000 P!
b10000 Q!
0q!
0p!
0o!
1n!
b1000000 w!
b1111010110111 4"
b110111 0"
b1 /"
b11101 1"
b100000011100 2"
b1000000000000 3"
b11011110101011011100111100110111 4"
b100 /"
b110111111110 1"
b1010111111110 2"
b111011100010111101010 3"
b1 ."
b10 ."
b0 ."
b1 ."
b10 ."
#470
0!
0'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
#475
1!
1'
b101001 -"
b100 &"
b10 %"
b0 D'
b1000 E'
b1001000 C!
b1001000 B!
1H'
b1001000 |
1!"
1}!
b1010100 ~!
b1001000 }
b1001000 z
b1010000 {
b1 <"
b11 <"
b0 J'
b0 ."
b1 ."
b10 ."
b1010100 |!
1{!
0=!
1<!
1L!
b1001 P!
1,
b1010100 .
b10010 Q!
1x
1U
1S
1Q
1q!
b1001000 w!
b1010100 }
b1010000 z
b1011100 {
b11101110111111110000111100010011 4"
b10011 0"
b0 /"
b111011111110 1"
b1011011111110 2"
b111110000111011101110 3"
b1111011101010000000100011 4"
b100011 0"
b10 /"
b0 1"
b0 2"
b11101010000000011110 3"
1>!
1=!
0L!
1K!
b1010 P!
b10100 Q!
1r!
0q!
1p!
b1010000 w!
0v!
b1 u!
b0 ."
b1 ."
b10 ."
b1 ~
b1011000 {
b0 ."
b1 ."
b10 ."
0>!
#480
0"
0!
0(
0'
#485
1!
1'
b1011000 C!
b101 &"
b100 %"
b1 '"
b101011 -"
b1011000 B!
b1011000 |
0!"
1!"
b1 ""
b1 <"
b0 ."
b1 ."
b10 ."
b1 ("
b1111111111111111111111111111100000000000000000000000000000000000 ;"
b1111111111111111111111111111000000000000000000000000000000000000 ;"
b1010000000000000001101111 4"
b1101111 0"
b0 /"
b10100 3"
b0 4"
b0 0"
b0 3"
b1 I'
b10 I'
b0 ."
b1 ."
b0 ."
b1 ."
#490
0!
0'
#495
1!
1'
b101100 -"
b110 &"
b101 %"
b10 D'
b1010 F'
0H'
b0 <"
0M"
b1111111111111111111111111110000000000000000000000000000000000000 ;"
b0 I'
b1 I'
b10 I'
b0 ."
b1 ."
1L"
1J"
14
1W"
b101001110000000000000000000000000011000010110000001000000110001000000000000000000001000000000000100000010 Q$
b101010000000000000000000000000000011010010110000001000000110001111011110101011011100000000000000100000010 =#
17"
1>"
1:"
10
1x!
1+"
0*"
b0 ("
b1101111 4"
b1101111 0"
b0 4"
b0 0"
b1 O#
b1 c$
b0 I'
b1 I'
b10 I'
b0 ."
b1 ."
1M"
0L"
0J"
04
0W"
07"
0>"
0:"
00
0x!
0+"
1*"
b1 ("
b0 ."
b1 ."
b0 ."
b1101111 4"
b1101111 0"
b0 4"
b0 0"
b1 ."
#500
1"
0!
1(
0'
#505
1!
1'
b1 Y$
b1 E#
b100 D'
b1100 F'
b111 &"
b110 %"
b101101 -"
b0 ."
b1 ."
b0 I'
b1 I'
b10 I'
b1 F#
b1 L#
b10 O#
b1 Z$
b1 `$
b10 c$
b1000000000000 ^$
b11011110101011011100000000000000 J#
b101010010000000000000000000000000011100000011000110000000110010011111111111111111111111011101111100000000 Q$
b0 =#
b101010 P&
b101010000000 S&
b10101010100010001001001000000000000000000000000000000000000000001 h"
b101010000000 ^&
b101010 W&
1x$
1d#
1f#
1z$
b1 o"
1I&
b0 I'
b1 I'
b1 O#
b1 c$
b10 c$
b10101010 P&
1\$
1H#
b10101010 W&
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1010100000000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1010100000000000000000000000000000110000000000000000000000000000000000000000000000 P#
b1010100000000000000000000000000000110000110111101010110111000000000000000000000000 P#
b1010100000000000000000000000000000110000110111101010110111000000000000001011000000 P#
b1010100000000000000000000000000000110000110111101010110111000000000000001011100011 P#
b110100 Q#
b110000 S#
b11011110101011011100000000000000 T#
b0 O#
b1 c$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010011100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010011100000000000000000000000000110000000000000000000000000000000000000000000000 d$
b1010011100000000000000000000000000110000000000000000000000010000000000000000000000 d$
b1010011100000000000000000000000000110000000000000000000000010000000000001011000000 d$
b1010011100000000000000000000000000110000000000000000000000010000000000001011100010 d$
b110000 e$
b110000 g$
b1000000000000 h$
b0 c$
b1 c$
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b0 o"
b1 o"
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010011100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010011100000000000000000000000000110000000000000000000000000000000000000000000000 d$
b1010011100000000000000000000000000110000000000000000000000010000000000000000000000 d$
b1010011100000000000000000000000000110000000000000000000000010000000000001011000000 d$
b1010011100000000000000000000000000110000000000000000000000010000000000001011100010 d$
b0 c$
b1 c$
#510
0!
0'
#515
1!
1'
b1010100000000000000000000000000000110000110111101010110111000000000000001011100011 V#
b110100 W#
b110000 X#
b11011110101011011100000000000000 Y#
b1010011100000000000000000000000000110000000000000000000000010000000000001011100010 j$
b110000 k$
b110000 l$
b1000000000000 m$
b1 k"
b101110 -"
b1000 &"
b111 %"
b101 D'
b1101 F'
b0 E#
b11111111111111111111111011101111 ^$
b0 J#
b1000000000000 W$
b110000 V$
b110000 U$
b1010011100000000000000000000000000110000000000000000000000010000000000001011100010 R$
b11011110101011011100000000000000 C#
b110000 B#
b110100 A#
b1010100000000000000000000000000000110000110111101010110111000000000000001011100011 >#
b1010011100000000000000000000000000110000000000000000000000010000000000001011100010 ;&
b1010100000000000000000000000000000110000110111101010110111000000000000001011100011 7&
b1000000000000000000000000000000000000000000000 8&
b1010100000000000000000000000000000000000000000 8&
b1010100010001100000000000000000000000000000000 8&
b1000000000000000000000000000000000000000000000 <&
b1010011100000000000000000000000000000000000000 <&
b1010011110001000000000000000000000000000000000 <&
b11011110101011011100000000000000 9&
b1000000000000 =&
b0 Z$
b0 `$
b1 `$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010100100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010100100000000000000000000000000110000000000000000000000000000000000000000000000 d$
b1010100100000000000000000000000000110000111111111111111111111110111011110000000000 d$
b1010100100000000000000000000000000110000111111111111111111111110111011110001000000 d$
b1010100100000000000000000000000000110000111111111111111111111110111011110001100100 d$
b111000 e$
b0 g$
b11111111111111111111111011101111 h$
b0 c$
b1 c$
b0 F#
b0 L#
b0 P#
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1000000000000000000000000000000000110000000000000000000000000000000000000000000000 P#
b0 Q#
b0 T#
b0 I'
b1 I'
b0 ."
b1 ."
b1111 Z&
b1110 Z&
b1101 Z&
b1100 Z&
b1011 Z&
b1010 Z&
b1001 Z&
b1000 Z&
b111 Z&
b110 Z&
b101 Z&
b100 Z&
b11 Z&
b10 Z&
b1 Z&
b1 \&
b10 o"
b110000 J#
b0 ]$
b1010011110001000000000000000000001000000000000 <&
b1010100010001111011110101011011100000000000000 8&
b101010110000000000000000000000000100000000010000001000000100000000000000000000000000000000010100101000000 Q$
b10000000 P&
b0 S&
b0 h"
b0 ^&
b10000000 W&
0d#
0x$
08%
07%
0z$
0f#
b1 o"
0I&
b0 I'
b1 I'
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010100100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010100100000000000000000000000000000000111111111111111111111110111011110000000000 d$
b1010100100000000000000000000000000000000111111111111111111111110111011110001000000 d$
b1010100100000000000000000000000000000000111111111111111111111110111011110001100100 d$
b0 c$
b1 c$
b0 P#
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 P#
b1000000000000000000000000000000000110000000000000000000000000000000000000000000000 P#
b1000000000000000000000000000000000110000000000000000000000000000001100000000000000 P#
b0 P&
0H#
0\$
b0 W&
b0 d$
b10 c$
b0 P#
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b1 c$
b10 c$
#520
0"
0!
0(
0'
#525
1!
1'
b10 Y$
b110 D'
b1110 F'
b1001 &"
b1000 %"
b101111 -"
b0 j$
b0 k$
b0 l$
b0 m$
b0 V#
b0 W#
b0 X#
b0 Y#
b0 C#
b0 B#
b0 A#
b0 >#
b0 W$
b0 V$
b0 U$
b0 R$
b0 ;&
b0 7&
b10100010001111011110101011011100000000000000 8&
b10001111011110101011011100000000000000 8&
b11011110101011011100000000000000 8&
b10011110001000000000000000000001000000000000 <&
b10001000000000000000000001000000000000 <&
b1000000000000 <&
b0 9&
b0 =&
b0 ."
b1 ."
b0 I'
b1 I'
b10 Z$
b0 `$
b1 `$
b11 c$
b0 <&
b0 8&
b101011000000000000000000000000000101010000010000001000000100000000000000000000000000000000000000101000000 Q$
1w$
b1 y$
1z$
b10 c$
b11 c$
b0 I'
b1 I'
1\$
b1 [$
b110000 ]$
b10100 ^$
18%
17%
b11 Z$
b0 `$
1_$
b1 `$
b11 `$
b10 c$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010101100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010101100000000000000000000000000110000000000000000000000000000000000000000000000 d$
b1010101100000000000000000000000000110000000000000000000000000000000101000000000000 d$
b1010101100000000000000000000000000110000000000000000000000000000000101000001000000 d$
b1000000 e$
b1 f$
b110000 g$
b10100 h$
b1 c$
b10 c$
b100 ^$
b1000000 ]$
1x$
b0 y$
0z$
b1 y$
1z$
b0 y$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010101100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010101100000000000000000000000001000000000000000000000000000000000000000000000000 d$
b1010101100000000000000000000000001000000000000000000000000000000000001000000000000 d$
b1010101100000000000000000000000001000000000000000000000000000000000001000001000000 d$
b1 c$
b10 c$
b0 [$
b111000 ]$
08%
07%
1.%
1-%
1,%
1*%
1)%
1'%
1%%
1#%
1"%
1!%
1~$
1|$
1{$
0_$
b0 `$
b1 `$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010100100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010100100000000000000000000000000111000000000000000000000000000000000000000000000 d$
b1010100100000000000000000000000000111000000000000000000000000000000001000000000000 d$
b1010100100000000000000000000000000111000000000000000000000000000000001000001000000 d$
b1010100100000000000000000000000000111000000000000000000000000000000001000001100100 d$
b111000 e$
b0 f$
b11011110101011011100000000000000 g$
b11111111111111111111111011101111 h$
b1 c$
b10 c$
b11111111111111111111111011101111 ^$
b11011110101011011100000000000000 ]$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010100100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010100111011110101011011100000000000000000000000000000000000000000000000000000000 d$
b1010100111011110101011011100000000000000111111111111111111111110111011110000000000 d$
b1010100111011110101011011100000000000000111111111111111111111110111011110001000000 d$
b1010100111011110101011011100000000000000111111111111111111111110111011110001100100 d$
b1 c$
b10 c$
#530
0!
0'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
#535
1!
1'
b1010100111011110101011011100000000000000111111111111111111111110111011110001100100 j$
b111000 k$
b11011110101011011100000000000000 l$
b11111111111111111111111011101111 m$
b110000 -"
b1010 &"
b1001 %"
b111 D'
b1111 F'
b10100 ^$
b11111111111111111111111011101111 W$
b11011110101011011100000000000000 V$
b111000 U$
b1010100111011110101011011100000000000000111111111111111111111110111011110001100100 R$
b1010100111011110101011011100000000000000111111111111111111111110111011110001100100 ;&
b1000000000000000000000000000000000000000000000 <&
b1010100100000000000000000000000000000000000000 <&
b1010100110010000000000000000000000000000000000 <&
b11011110101011011011111011101111 =&
b0 `$
1_$
b1 `$
b11 `$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010101100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010101111011110101011011100000000000000000000000000000000000000000000000000000000 d$
b1010101111011110101011011100000000000000000000000000000000000000000101000000000000 d$
b1010101111011110101011011100000000000000000000000000000000000000000101000001000000 d$
b1000000 e$
b1 f$
b110000 g$
b10100 h$
b1 c$
b10 c$
b0 I'
b1 I'
b1 J'
b10 J'
b0 ."
b1 ."
b100 ^$
b1000000 ]$
b1010100110010011011110101011011011111011101111 <&
b101011010000000000000000000000000101010000010000001000000100000000000000000000000000000000000000101000000 Q$
18%
17%
0.%
0-%
0,%
0*%
0)%
0'%
0%%
0#%
0"%
0!%
0~$
0|$
0{$
b0 I'
b1 I'
b0 J'
b1 J'
b10 J'
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010101100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010101100000000000000000000000001000000000000000000000000000000000000000000000000 d$
b1010101100000000000000000000000001000000000000000000000000000000000001000000000000 d$
b1010101100000000000000000000000001000000000000000000000000000000000001000001000000 d$
b1 c$
b10 c$
#540
1"
0!
1(
0'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
#545
1!
1'
b110 D'
b10000 F'
b1010 E'
b1011 &"
b1010 %"
b110001 -"
b1010101100000000000000000000000001000000000000000000000000000000000001000001000000 j$
b1000000 k$
b110000 l$
b10100 m$
b1 o$
b1 T$
b10100 W$
b110000 V$
b1000000 U$
b1010101100000000000000000000000001000000000000000000000000000000000001000001000000 R$
b1010100 ]$
b1010101100000000000000000000000001000000000000000000000000000000000001000001000000 ;&
b1010101110010011011110101011011011111011101111 <&
b1010101100000011011110101011011011111011101111 <&
b1000100 =&
b0 ."
b1 ."
b0 I'
b1 I'
b0 J'
0_$
b0 `$
1_$
b1 `$
b11 `$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010110000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010110000000000000000000000000001010100000000000000000000000000000000000000000000 d$
b1010110000000000000000000000000001010100000000000000000000000000000001000000000000 d$
b1010110000000000000000000000000001010100000000000000000000000000000001000001000000 d$
b1010100 e$
b0 h$
b1 c$
b10 c$
b1010101100000000000000000000000000000001000100 <&
b101011100000000000000000000000000101010000010000001000000100000000000000000000000000000000000000101000000 Q$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010110000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010110000000000000000000000000001010100000000000000000000000000000000000000000000 d$
b1010110000000000000000000000000001010100000000000000000000000000000001000000000000 d$
b1010110000000000000000000000000001010100000000000000000000000000000001000001000000 d$
b1 c$
b10 c$
b0 I'
b1 I'
b1 l"
1z"
1|"
1n"
b100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 p"
b101010100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 p"
b101010100000000000000000000100000000000000000000000000000000000000000000000000000000000000000000000000000000000000 p"
b101010100000000000000000000100000000000000000000000000000000000000000000000000000000000000000000000000001000000000 p"
b101010100000000000000000000100000000000000000000000000000000000000000000110111101010110110111110111011111000000000 p"
b0 o"
#550
0!
0'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
#555
1!
1'
b101010100000000000000000000100000000000000000000000000000000000000000000110111101010110110111110111011111000000000 q"
b0 k"
b1010110000000000000000000000000001010100000000000000000000000000000001000001000000 j$
b1010100 k$
b0 m$
b110010 -"
b1100 &"
b1011 %"
b111 D'
b10001 F'
b0 W$
b1010100 U$
b1010110000000000000000000000000001010100000000000000000000000000000001000001000000 R$
b101010100000000000000000000100000000000000000000000000000000000000000000110111101010110110111110111011111000000000 i"
b1010110000000000000000000000000001010100000000000000000000000000000001000001000000 ;&
b101010100000000000000000000100000000000000000000000000000000000000000000110111101010110110111110111011111000000000 v%
b10000000000000000000000000000000000000000000000000000000000000000000000001110 w%
b10101010000000000000000000000000000000000000000000000000000000000000000001110 w%
b1000000000000 |%
b10101010000000000000000000000000000000001101111010101101101111101110111101110 w%
b1010110000000000000000000000000000000001000100 <&
b10101010000000000000000000010000000000001101111010101101101111101110111101110 w%
1y%
b1011000 =&
0_$
b0 `$
1_$
b1 `$
b11 `$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010110100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010110100000000000000000000000001010100000000000000000000000000000000000000000000 d$
b1010110100000000000000000000000001010100000000000000000000000000000001000000000000 d$
b1010110100000000000000000000000001010100000000000000000000000000000001000001000000 d$
b1 c$
b10 c$
b0 I'
b1 I'
b1 J'
b10 J'
b0 ."
b1 ."
b1111111111111111111111111110000000100000000000000000000000000000 ;"
b1111111111111111111111111110000001100000000000000000000000000000 ;"
b0 l"
b0 p"
b100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 p"
b100000000000000000000000000000000011000000000000000000000000000000000000000000000000000000000000000000000000000000 p"
b100000000000000000000000000000000011000000000000000000000000000000110000000000000000000000000000000000000000000000 p"
b100000000000000000000000000000000011000000000000000000000000000000110000000000000000000000000000001100000000000000 p"
b1010110000000000000000000000000000000001011000 <&
b10101010000000000000000000010000000000001101111010101101101111101110111100110 w%
b101011110000000000000000000000000101010000010000001000000100000000000000000000000000000000000000101000000 Q$
0z"
0|"
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010110100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010110100000000000000000000000001010100000000000000000000000000000000000000000000 d$
b1010110100000000000000000000000001010100000000000000000000000000000001000000000000 d$
b1010110100000000000000000000000001010100000000000000000000000000000001000001000000 d$
b1 c$
b10 c$
b0 I'
b1 I'
b0 J'
b1 J'
b10 J'
0n"
b0 p"
b1000100 J#
b1000100 I#
1Z%
0X%
0W%
1V%
1:%
08%
07%
16%
1F$
0D$
0C$
1B$
1&$
0$$
0#$
1"$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010110100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010110100000000000000000000000001010100000000000000000000000000000000000000000000 d$
b1010110100000000000000000000000001010100000000000000000000000000000001000000000000 d$
b1010110100000000000000000000000001010100000000000000000000000000000001000001000000 d$
b1000100 g$
b1 c$
b10 c$
#560
0"
0!
0(
0'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010110100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010110100000000000000000000000001010100000000000000000000000000000000000000000000 d$
b1010110100000000000000000000000001010100000000000000000000000000000001000000000000 d$
b1010110100000000000000000000000001010100000000000000000000000000000001000001000000 d$
b1 c$
b10 c$
#565
1!
1'
b110 D'
b10010 F'
b1100 E'
b1101 &"
b1100 %"
b110011 -"
b1010110100000000000000000000000001010100000000000000000000000000000001000001000000 j$
b1000100 l$
b0 q"
b0 i"
b1000100 V$
b1010110100000000000000000000000001010100000000000000000000000000000001000001000000 R$
b101010000000000000000000000000000000000000000000000000000000000000000011 Q&
b101010000000000000000000010000000000000000000000000000000000000000000011 Q&
b101010000000000000000000010000000000001101111010101101101111101110111111 Q&
b10101000000000000000000000000000000000110 T&
b10101000000000000000000001000000000000110 T&
b0 v%
b1010110100000000000000000000000001010100000000000000000000000000000001000001000000 ;&
b10101000000000000000000001000000000000110 _&
b101010000000000000000000010000000000001101111010101101101111101110111111 X&
b1010110100000000000000000000000000000001011000 <&
b101010000000000000000000010000000000001101111010101101101111101110111100110 w%
b10000000000001101111010101101101111101110111100110 w%
b0 |%
b10000000000000000000000000000000000000000000000110 w%
b110 w%
0y%
1M&
b0 ."
b1 ."
b0 I'
b1 I'
b0 J'
b1 J'
0_$
b0 `$
1_$
b1 `$
b11 `$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010111000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010111000000000000000000000000001010100000000000000000000000000000000000000000000 d$
b1010111000000000000000000000000001010100000000000000000000000000000001000000000000 d$
b1010111000000000000000000000000001010100000000000000000000000000000001000001000000 d$
b1 c$
b10 c$
b10101010000000000000000000010000000000001101111010101101101111101110111111 Q&
b1110 w%
b10101010000000000000000000010000000000001101111010101101101111101110111111 X&
b101100000000000000000000000000000101010000010000001000000100000000000000000000000000000000000000101000000 Q$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010111000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010111000000000000000000000000001010100000000000000000000000000000000000000000000 d$
b1010111000000000000000000000000001010100000000000000000000000000000001000000000000 d$
b1010111000000000000000000000000001010100000000000000000000000000000001000001000000 d$
b1 c$
b10 c$
b0 I'
b1 I'
b0 J'
b1 J'
b1011000 J#
b1011000 I#
0Z%
1Y%
1X%
0:%
19%
18%
0F$
1E$
1D$
0&$
1%$
1$$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010111000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010111000000000000000000000000001010100000000000000000000000000000000000000000000 d$
b1010111000000000000000000000000001010100000000000000000000000000000001000000000000 d$
b1010111000000000000000000000000001010100000000000000000000000000000001000001000000 d$
b1011000 g$
b1 c$
b10 c$
#570
0!
0'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010111000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010111000000000000000000000000001010100000000000000000000000000000000000000000000 d$
b1010111000000000000000000000000001010100000000000000000000000000000001000000000000 d$
b1010111000000000000000000000000001010100000000000000000000000000000001000001000000 d$
b1 c$
b10 c$
#575
1!
1'
b1010111000000000000000000000000001010100000000000000000000000000000001000001000000 j$
b1011000 l$
b110100 -"
b1110 &"
b1101 %"
b10011 F'
b1101 E'
b1011000 V$
b1010111000000000000000000000000001010100000000000000000000000000000001000001000000 R$
b10000000000000000000000000010000000000001101111010101101101111101110111111 Q&
b10000000000000000000000000000000000000001101111010101101101111101110111111 Q&
b10000000000000000000000000000000000000000000000000000000000000000000000011 Q&
b1000000000000110 T&
b110 T&
b110 _&
b10000000000000000000000000000000000000000000000000000000000000000000000011 X&
b1010111000000000000000000000000001010100000000000000000000000000000001000001000000 ;&
b1010111000000000000000000000000000000001011000 <&
0M&
0_$
b0 `$
1_$
b1 `$
b11 `$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010111100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010111100000000000000000000000001010100000000000000000000000000000000000000000000 d$
b1010111100000000000000000000000001010100000000000000000000000000000001000000000000 d$
b1010111100000000000000000000000001010100000000000000000000000000000001000001000000 d$
b1 c$
b10 c$
b0 I'
b1 I'
b0 J'
b1 J'
b0 ."
b1 ."
b1111111111111111111111111110100001100000000000000000000000000000 ;"
b0 Z&
b1111 Z&
b1110 Z&
b1101 Z&
b1100 Z&
b1011 Z&
b1010 Z&
b1001 Z&
b1000 Z&
b111 Z&
b110 Z&
b101 Z&
b100 Z&
b11 Z&
b10 Z&
b1 Z&
b0 \&
b1 \&
b11 Q&
b11 X&
b101100010000000000000000000000000101010000010000001000000100000000000000000000000000000000000000101000000 Q$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010111100000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1010111100000000000000000000000001010100000000000000000000000000000000000000000000 d$
b1010111100000000000000000000000001010100000000000000000000000000000001000000000000 d$
b1010111100000000000000000000000001010100000000000000000000000000000001000001000000 d$
b1 c$
b10 c$
b0 I'
b1 I'
b0 J'
b1 J'
#580
1"
0!
1(
0'
b0 :'
b1 :'
b10 :'
b11 :'
b100 :'
#585
1!
1'
b10100 F'
b1110 E'
b1111 &"
b1110 %"
b110101 -"
b1010111100000000000000000000000001010100000000000000000000000000000001000001000000 j$
b1010111100000000000000000000000001010100000000000000000000000000000001000001000000 R$
1/'
b1010111100000000000000000000000001010100000000000000000000000000000001000001000000 ;&
b1010111100000000000000000000000000000001011000 <&
b0 Z&
b1111 Z&
b1110 Z&
b1101 Z&
b1100 Z&
b1011 Z&
b1010 Z&
b1001 Z&
b1000 Z&
b111 Z&
b110 Z&
b101 Z&
b100 Z&
b11 Z&
b10 Z&
b1 Z&
b0 Z&
b0 \&
b0 ."
b1 ."
b0 I'
b1 I'
b0 J'
b1 J'
0_$
b0 `$
1_$
b1 `$
b11 `$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1011000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1011000000000000000000000000000001010100000000000000000000000000000000000000000000 d$
b1011000000000000000000000000000001010100000000000000000000000000000001000000000000 d$
b1011000000000000000000000000000001010100000000000000000000000000000001000001000000 d$
b1 c$
b10 c$
b101100100000000000000000000000000101010000010000001000000100000000000000000000000000000000000000101000000 Q$
b0 d$
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1011000000000000000000000000000000000000000000000000000000000000000000000000000000 d$
b1011000000000000000000000000000001010100000000000000000000000000000000000000000000 d$
b1011000000000000000000000000000001010100000000000000000000000000000001000000000000 d$
b1011000000000000000000000000000001010100000000000000000000000000000001000001000000 d$
b1 c$
b10 c$
b0 I'
b1 I'
b0 J'
b1 J'
#590
0!
0'
#595
1!
1'
