$date
	Sun May 10 02:25:02 2026
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
$var reg 2 } instr_consumed [1:0] $end

$scope module PC $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 ~ IN_pc [31] $end
$var wire 1 !! IN_pc [30] $end
$var wire 1 "! IN_pc [29] $end
$var wire 1 #! IN_pc [28] $end
$var wire 1 $! IN_pc [27] $end
$var wire 1 %! IN_pc [26] $end
$var wire 1 &! IN_pc [25] $end
$var wire 1 '! IN_pc [24] $end
$var wire 1 (! IN_pc [23] $end
$var wire 1 )! IN_pc [22] $end
$var wire 1 *! IN_pc [21] $end
$var wire 1 +! IN_pc [20] $end
$var wire 1 ,! IN_pc [19] $end
$var wire 1 -! IN_pc [18] $end
$var wire 1 .! IN_pc [17] $end
$var wire 1 /! IN_pc [16] $end
$var wire 1 0! IN_pc [15] $end
$var wire 1 1! IN_pc [14] $end
$var wire 1 2! IN_pc [13] $end
$var wire 1 3! IN_pc [12] $end
$var wire 1 4! IN_pc [11] $end
$var wire 1 5! IN_pc [10] $end
$var wire 1 6! IN_pc [9] $end
$var wire 1 7! IN_pc [8] $end
$var wire 1 8! IN_pc [7] $end
$var wire 1 9! IN_pc [6] $end
$var wire 1 :! IN_pc [5] $end
$var wire 1 ;! IN_pc [4] $end
$var wire 1 <! IN_pc [3] $end
$var wire 1 =! IN_pc [2] $end
$var wire 1 >! IN_pc [1] $end
$var wire 1 ?! IN_pc [0] $end
$var wire 1 @! wr_en $end
$var reg 32 A! OUT_pc [31:0] $end
$var reg 32 B! pc_reg [31:0] $end
$upscope $end

$scope module IMEM $end
$var parameter 32 C! WORD_ADDR_BITS $end
$var parameter 32 D! MEM_WORDS $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 7 IN_busy $end
$var wire 1 E! addr [7] $end
$var wire 1 F! addr [6] $end
$var wire 1 G! addr [5] $end
$var wire 1 H! addr [4] $end
$var wire 1 I! addr [3] $end
$var wire 1 J! addr [2] $end
$var wire 1 K! addr [1] $end
$var wire 1 L! addr [0] $end
$var reg 8 M! block_idx [7:0] $end
$var reg 8 N! base_word [7:0] $end
$upscope $end

$scope module aligner $end
$var parameter 32 O! INSN_BYTES $end
$var parameter 32 P! BLOCK_SIZE_BYTES $end
$var parameter 32 Q! ALIGN_BITS $end
$var wire 1 R! in_pc [31] $end
$var wire 1 S! in_pc [30] $end
$var wire 1 T! in_pc [29] $end
$var wire 1 U! in_pc [28] $end
$var wire 1 V! in_pc [27] $end
$var wire 1 W! in_pc [26] $end
$var wire 1 X! in_pc [25] $end
$var wire 1 Y! in_pc [24] $end
$var wire 1 Z! in_pc [23] $end
$var wire 1 [! in_pc [22] $end
$var wire 1 \! in_pc [21] $end
$var wire 1 ]! in_pc [20] $end
$var wire 1 ^! in_pc [19] $end
$var wire 1 _! in_pc [18] $end
$var wire 1 `! in_pc [17] $end
$var wire 1 a! in_pc [16] $end
$var wire 1 b! in_pc [15] $end
$var wire 1 c! in_pc [14] $end
$var wire 1 d! in_pc [13] $end
$var wire 1 e! in_pc [12] $end
$var wire 1 f! in_pc [11] $end
$var wire 1 g! in_pc [10] $end
$var wire 1 h! in_pc [9] $end
$var wire 1 i! in_pc [8] $end
$var wire 1 j! in_pc [7] $end
$var wire 1 k! in_pc [6] $end
$var wire 1 l! in_pc [5] $end
$var wire 1 m! in_pc [4] $end
$var wire 1 n! in_pc [3] $end
$var wire 1 o! in_pc [2] $end
$var wire 1 p! in_pc [1] $end
$var wire 1 q! in_pc [0] $end
$var reg 2 r! consumed [1:0] $end
$var reg 1 s! is_aligned $end
$var reg 32 t! aligned_base_pc [31:0] $end
$upscope $end
$upscope $end

$scope module fetch $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 u! IN_busy $end
$var wire 1 v! flush $end
$var reg 1 w! OUT_busy $end
$var reg 1 x! jump1 $end
$var reg 32 y! jta1 [31:0] $end
$var reg 32 z! jal_instr_pc [31:0] $end
$var reg 1 {! delayed_jump1 $end
$var reg 32 |! delayed_jal_pc [31:0] $end

$scope module JTA1 $end
$var wire 1 }! IN_busy $end
$var reg 1 ~! jump1 $end
$var reg 32 !" OUT_pc [31:0] $end
$var reg 32 "" jta1 [31:0] $end
$var reg 1 #" jump_valid $end
$var reg 1 $" jump_index [0:0] $end
$upscope $end

$scope module FB $end
$var parameter 32 %" PTR_W $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 u! IN_busy $end
$var wire 1 v! flush $end
$var wire 1 &" jump1 $end
$var wire 1 '" jal_pc [31] $end
$var wire 1 (" jal_pc [30] $end
$var wire 1 )" jal_pc [29] $end
$var wire 1 *" jal_pc [28] $end
$var wire 1 +" jal_pc [27] $end
$var wire 1 ," jal_pc [26] $end
$var wire 1 -" jal_pc [25] $end
$var wire 1 ." jal_pc [24] $end
$var wire 1 /" jal_pc [23] $end
$var wire 1 0" jal_pc [22] $end
$var wire 1 1" jal_pc [21] $end
$var wire 1 2" jal_pc [20] $end
$var wire 1 3" jal_pc [19] $end
$var wire 1 4" jal_pc [18] $end
$var wire 1 5" jal_pc [17] $end
$var wire 1 6" jal_pc [16] $end
$var wire 1 7" jal_pc [15] $end
$var wire 1 8" jal_pc [14] $end
$var wire 1 9" jal_pc [13] $end
$var wire 1 :" jal_pc [12] $end
$var wire 1 ;" jal_pc [11] $end
$var wire 1 <" jal_pc [10] $end
$var wire 1 =" jal_pc [9] $end
$var wire 1 >" jal_pc [8] $end
$var wire 1 ?" jal_pc [7] $end
$var wire 1 @" jal_pc [6] $end
$var wire 1 A" jal_pc [5] $end
$var wire 1 B" jal_pc [4] $end
$var wire 1 C" jal_pc [3] $end
$var wire 1 D" jal_pc [2] $end
$var wire 1 E" jal_pc [1] $end
$var wire 1 F" jal_pc [0] $end
$var reg 1 G" OUT_busy $end
$var reg 4 H" head [3:0] $end
$var reg 4 I" tail [3:0] $end
$var reg 5 J" count [4:0] $end
$var reg 5 K" out_count [4:0] $end
$var reg 1 L" can_write $end
$var reg 1 M" can_read $end
$var reg 4 N" jal_idx [3:0] $end
$var reg 4 O" post_jump_instrs [3:0] $end
$upscope $end
$upscope $end

$scope module decode $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 P" IN_busy $end
$var wire 1 Q" flush $end
$var reg 7 R" next_sqN [6:0] $end
$var reg 3 S" valid_count [2:0] $end

$scope module Decoder $end

$scope module IG $end
$var reg 3 T" funct3 [2:0] $end
$var reg 7 U" opcode [6:0] $end
$var reg 12 V" imm12 [11:0] $end
$var reg 13 W" imm13 [12:0] $end
$var reg 21 X" imm21 [20:0] $end
$var reg 32 Y" iw [31:0] $end
$upscope $end
$upscope $end
$upscope $end

$scope module rename $end
$var parameter 32 Z" NUM_REG $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 [" ROB_busy $end
$var wire 1 \" dispatch_busy $end
$var wire 1 ]" flush $end
$var wire 1 ^" chkpt_busy $end
$var reg 1 _" OUT_busy $end
$var reg 64 `" ftb [63:0] $end
$var reg 2 a" req_valid [1:0] $end
$var reg 1 b" chkpt_need $end
$var reg 1 c" stall $end

$scope begin gen_freeCom[1] $end
$var parameter 32 d" i $end
$upscope $end

$scope begin gen_freeCom[0] $end
$var parameter 32 e" i $end
$upscope $end

$scope begin gen_reg_ready[3] $end
$var parameter 32 f" i $end
$upscope $end

$scope begin gen_reg_ready[2] $end
$var parameter 32 g" i $end
$upscope $end

$scope begin gen_reg_ready[1] $end
$var parameter 32 h" i $end
$upscope $end

$scope begin gen_reg_ready[0] $end
$var parameter 32 i" i $end
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
$var wire 1 j" LSU_busy $end
$var wire 1 k" flush $end
$var wire 1 l" flush_sqN [6] $end
$var wire 1 m" flush_sqN [5] $end
$var wire 1 n" flush_sqN [4] $end
$var wire 1 o" flush_sqN [3] $end
$var wire 1 p" flush_sqN [2] $end
$var wire 1 q" flush_sqN [1] $end
$var wire 1 r" flush_sqN [0] $end
$var reg 1 s" d_unit_busy $end
$var reg 1 t" check_busy $end

$scope module DU $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 k" flush $end
$var wire 1 j" LSU_busy $end
$var reg 1 u" OUT_busy $end
$var reg 1 v" packet_done $end

$scope begin g_slot_class[1] $end
$var parameter 32 w" i $end
$upscope $end

$scope begin g_slot_class[0] $end
$var parameter 32 x" i $end
$upscope $end

$scope begin genblk3[0] $end
$var parameter 32 y" i $end
$upscope $end

$scope begin genblk2[0] $end
$var parameter 32 z" i $end
$upscope $end

$scope begin genblk1[1] $end
$var parameter 32 {" i $end
$upscope $end

$scope begin genblk1[0] $end
$var parameter 32 |" i $end
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
$var parameter 32 }" NUM_REG $end
$var parameter 32 ~" NUM_CHKPT $end
$var parameter 32 !# CHKPT_BITS $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 k" flush $end
$var wire 1 l" flush_sqN [6] $end
$var wire 1 m" flush_sqN [5] $end
$var wire 1 n" flush_sqN [4] $end
$var wire 1 o" flush_sqN [3] $end
$var wire 1 p" flush_sqN [2] $end
$var wire 1 q" flush_sqN [1] $end
$var wire 1 r" flush_sqN [0] $end
$var wire 1 "# disp_busy $end
$var reg 1 ## check_busy $end
$var reg 5 $# used_count [4:0] $end
$var reg 1 %# slot_collision $end
$upscope $end
$upscope $end

$scope module issue $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 &# flush $end
$var wire 1 '# flush_sqN [6] $end
$var wire 1 (# flush_sqN [5] $end
$var wire 1 )# flush_sqN [4] $end
$var wire 1 *# flush_sqN [3] $end
$var wire 1 +# flush_sqN [2] $end
$var wire 1 ,# flush_sqN [1] $end
$var wire 1 -# flush_sqN [0] $end
$var reg 32 .# jta2 [31:0] $end
$var reg 1 /# jump2 $end

$scope begin gen_agu_buffer[0] $end
$var parameter 32 0# i $end

$scope module lsu_issue_buffer_i $end
$var parameter 32 1# DEPTH $end
$var parameter 32 2# TAIL_W $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var reg 63 3# IN_instr [62:0] $end
$var wire 1 &# flush $end
$var wire 1 '# flush_sqN [6] $end
$var wire 1 (# flush_sqN [5] $end
$var wire 1 )# flush_sqN [4] $end
$var wire 1 *# flush_sqN [3] $end
$var wire 1 +# flush_sqN [2] $end
$var wire 1 ,# flush_sqN [1] $end
$var wire 1 -# flush_sqN [0] $end
$var reg 114 4# OUT_instr [113:0] $end
$var reg 1 5# OUT_busy $end
$var reg 3 6# tail [2:0] $end
$var reg 8 7# ready_mask [7:0] $end
$var reg 3 8# issue_idx [2:0] $end
$var reg 1 9# issue_found $end
$var reg 32 :# rs1_data [31:0] $end
$var reg 32 ;# rs2_data [31:0] $end
$var reg 1 <# dispatch_cdb_match_1 $end
$var reg 1 =# dispatch_cdb_match_2 $end
$var reg 1 ># dispatch_ready_1 $end
$var reg 1 ?# dispatch_ready_2 $end

$scope module pe $end
$var parameter 32 @# WIDTH $end
$var wire 1 A# req [7] $end
$var wire 1 B# req [6] $end
$var wire 1 C# req [5] $end
$var wire 1 D# req [4] $end
$var wire 1 E# req [3] $end
$var wire 1 F# req [2] $end
$var wire 1 G# req [1] $end
$var wire 1 H# req [0] $end
$var reg 3 I# grant_idx [2:0] $end
$var reg 1 J# grant_valid $end
$upscope $end
$upscope $end
$upscope $end

$scope begin gen_mul_div_buffer[0] $end
$var parameter 32 K# i $end

$scope module mul_div_issue_buffer_i $end
$var parameter 32 L# DEPTH $end
$var parameter 32 M# TAIL_W $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var reg 30 N# IN_instr [29:0] $end
$var wire 1 &# flush $end
$var wire 1 '# flush_sqN [6] $end
$var wire 1 (# flush_sqN [5] $end
$var wire 1 )# flush_sqN [4] $end
$var wire 1 *# flush_sqN [3] $end
$var wire 1 +# flush_sqN [2] $end
$var wire 1 ,# flush_sqN [1] $end
$var wire 1 -# flush_sqN [0] $end
$var wire 1 O# IN_busy $end
$var reg 82 P# OUT_instr [81:0] $end
$var reg 1 Q# OUT_busy $end
$var reg 3 R# tail [2:0] $end
$var reg 8 S# ready_mask [7:0] $end
$var reg 3 T# issue_idx [2:0] $end
$var reg 1 U# issue_found $end
$var reg 32 V# rs1_data [31:0] $end
$var reg 32 W# rs2_data [31:0] $end
$var reg 1 X# dispatch_cdb_match_1 $end
$var reg 1 Y# dispatch_cdb_match_2 $end
$var reg 1 Z# dispatch_ready_1 $end
$var reg 1 [# dispatch_ready_2 $end

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
$upscope $end
$upscope $end

$scope begin gen_alu_buffer[1] $end
$var parameter 32 g# i $end

$scope module alu_issue_buffer_i $end
$var parameter 32 h# DEPTH $end
$var parameter 32 i# TAIL_W $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var reg 103 j# IN_instr [102:0] $end
$var wire 1 &# flush $end
$var wire 1 '# flush_sqN [6] $end
$var wire 1 (# flush_sqN [5] $end
$var wire 1 )# flush_sqN [4] $end
$var wire 1 *# flush_sqN [3] $end
$var wire 1 +# flush_sqN [2] $end
$var wire 1 ,# flush_sqN [1] $end
$var wire 1 -# flush_sqN [0] $end
$var reg 82 k# OUT_instr [81:0] $end
$var reg 1 l# OUT_br_taken $end
$var reg 2 m# OUT_jump_type [1:0] $end
$var reg 32 n# OUT_pc [31:0] $end
$var reg 32 o# rs1_result [31:0] $end
$var reg 32 p# imm [31:0] $end
$var reg 1 q# OUT_busy $end
$var reg 3 r# tail [2:0] $end
$var reg 8 s# ready_mask [7:0] $end
$var reg 3 t# issue_idx [2:0] $end
$var reg 1 u# issue_found $end
$var reg 32 v# rs1_data [31:0] $end
$var reg 32 w# rs2_data [31:0] $end
$var reg 32 x# op1 [31:0] $end
$var reg 32 y# op2 [31:0] $end
$var reg 1 z# sel1 $end
$var reg 2 {# sel2 [1:0] $end
$var reg 1 |# is_jump $end
$var reg 1 }# sel_ready2 $end
$var reg 1 ~# dispatch_ready_1 $end
$var reg 1 !$ dispatch_ready_2 $end
$var reg 1 "$ dispatch_cdb_match_1 $end
$var reg 1 #$ dispatch_cdb_match_2 $end
$var reg 1 $$ br_taken $end

$scope module pe $end
$var parameter 32 %$ WIDTH $end
$var wire 1 &$ req [7] $end
$var wire 1 '$ req [6] $end
$var wire 1 ($ req [5] $end
$var wire 1 )$ req [4] $end
$var wire 1 *$ req [3] $end
$var wire 1 +$ req [2] $end
$var wire 1 ,$ req [1] $end
$var wire 1 -$ req [0] $end
$var reg 3 .$ grant_idx [2:0] $end
$var reg 1 /$ grant_valid $end
$upscope $end

$scope module bc $end
$var wire 1 0$ rs1_data [31] $end
$var wire 1 1$ rs1_data [30] $end
$var wire 1 2$ rs1_data [29] $end
$var wire 1 3$ rs1_data [28] $end
$var wire 1 4$ rs1_data [27] $end
$var wire 1 5$ rs1_data [26] $end
$var wire 1 6$ rs1_data [25] $end
$var wire 1 7$ rs1_data [24] $end
$var wire 1 8$ rs1_data [23] $end
$var wire 1 9$ rs1_data [22] $end
$var wire 1 :$ rs1_data [21] $end
$var wire 1 ;$ rs1_data [20] $end
$var wire 1 <$ rs1_data [19] $end
$var wire 1 =$ rs1_data [18] $end
$var wire 1 >$ rs1_data [17] $end
$var wire 1 ?$ rs1_data [16] $end
$var wire 1 @$ rs1_data [15] $end
$var wire 1 A$ rs1_data [14] $end
$var wire 1 B$ rs1_data [13] $end
$var wire 1 C$ rs1_data [12] $end
$var wire 1 D$ rs1_data [11] $end
$var wire 1 E$ rs1_data [10] $end
$var wire 1 F$ rs1_data [9] $end
$var wire 1 G$ rs1_data [8] $end
$var wire 1 H$ rs1_data [7] $end
$var wire 1 I$ rs1_data [6] $end
$var wire 1 J$ rs1_data [5] $end
$var wire 1 K$ rs1_data [4] $end
$var wire 1 L$ rs1_data [3] $end
$var wire 1 M$ rs1_data [2] $end
$var wire 1 N$ rs1_data [1] $end
$var wire 1 O$ rs1_data [0] $end
$var wire 1 P$ rs2_data [31] $end
$var wire 1 Q$ rs2_data [30] $end
$var wire 1 R$ rs2_data [29] $end
$var wire 1 S$ rs2_data [28] $end
$var wire 1 T$ rs2_data [27] $end
$var wire 1 U$ rs2_data [26] $end
$var wire 1 V$ rs2_data [25] $end
$var wire 1 W$ rs2_data [24] $end
$var wire 1 X$ rs2_data [23] $end
$var wire 1 Y$ rs2_data [22] $end
$var wire 1 Z$ rs2_data [21] $end
$var wire 1 [$ rs2_data [20] $end
$var wire 1 \$ rs2_data [19] $end
$var wire 1 ]$ rs2_data [18] $end
$var wire 1 ^$ rs2_data [17] $end
$var wire 1 _$ rs2_data [16] $end
$var wire 1 `$ rs2_data [15] $end
$var wire 1 a$ rs2_data [14] $end
$var wire 1 b$ rs2_data [13] $end
$var wire 1 c$ rs2_data [12] $end
$var wire 1 d$ rs2_data [11] $end
$var wire 1 e$ rs2_data [10] $end
$var wire 1 f$ rs2_data [9] $end
$var wire 1 g$ rs2_data [8] $end
$var wire 1 h$ rs2_data [7] $end
$var wire 1 i$ rs2_data [6] $end
$var wire 1 j$ rs2_data [5] $end
$var wire 1 k$ rs2_data [4] $end
$var wire 1 l$ rs2_data [3] $end
$var wire 1 m$ rs2_data [2] $end
$var wire 1 n$ rs2_data [1] $end
$var wire 1 o$ rs2_data [0] $end
$var wire 1 p$ br_type [3] $end
$var wire 1 q$ br_type [2] $end
$var wire 1 r$ br_type [1] $end
$var wire 1 s$ br_type [0] $end
$var reg 1 t$ br_taken $end
$upscope $end
$upscope $end
$upscope $end

$scope begin gen_alu_buffer[0] $end
$var parameter 32 u$ i $end

$scope module alu_issue_buffer_i $end
$var parameter 32 v$ DEPTH $end
$var parameter 32 w$ TAIL_W $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var reg 103 x$ IN_instr [102:0] $end
$var wire 1 &# flush $end
$var wire 1 '# flush_sqN [6] $end
$var wire 1 (# flush_sqN [5] $end
$var wire 1 )# flush_sqN [4] $end
$var wire 1 *# flush_sqN [3] $end
$var wire 1 +# flush_sqN [2] $end
$var wire 1 ,# flush_sqN [1] $end
$var wire 1 -# flush_sqN [0] $end
$var reg 82 y$ OUT_instr [81:0] $end
$var reg 1 z$ OUT_br_taken $end
$var reg 2 {$ OUT_jump_type [1:0] $end
$var reg 32 |$ OUT_pc [31:0] $end
$var reg 32 }$ rs1_result [31:0] $end
$var reg 32 ~$ imm [31:0] $end
$var reg 1 !% OUT_busy $end
$var reg 3 "% tail [2:0] $end
$var reg 8 #% ready_mask [7:0] $end
$var reg 3 $% issue_idx [2:0] $end
$var reg 1 %% issue_found $end
$var reg 32 &% rs1_data [31:0] $end
$var reg 32 '% rs2_data [31:0] $end
$var reg 32 (% op1 [31:0] $end
$var reg 32 )% op2 [31:0] $end
$var reg 1 *% sel1 $end
$var reg 2 +% sel2 [1:0] $end
$var reg 1 ,% is_jump $end
$var reg 1 -% sel_ready2 $end
$var reg 1 .% dispatch_ready_1 $end
$var reg 1 /% dispatch_ready_2 $end
$var reg 1 0% dispatch_cdb_match_1 $end
$var reg 1 1% dispatch_cdb_match_2 $end
$var reg 1 2% br_taken $end

$scope module pe $end
$var parameter 32 3% WIDTH $end
$var wire 1 4% req [7] $end
$var wire 1 5% req [6] $end
$var wire 1 6% req [5] $end
$var wire 1 7% req [4] $end
$var wire 1 8% req [3] $end
$var wire 1 9% req [2] $end
$var wire 1 :% req [1] $end
$var wire 1 ;% req [0] $end
$var reg 3 <% grant_idx [2:0] $end
$var reg 1 =% grant_valid $end
$upscope $end

$scope module bc $end
$var wire 1 >% rs1_data [31] $end
$var wire 1 ?% rs1_data [30] $end
$var wire 1 @% rs1_data [29] $end
$var wire 1 A% rs1_data [28] $end
$var wire 1 B% rs1_data [27] $end
$var wire 1 C% rs1_data [26] $end
$var wire 1 D% rs1_data [25] $end
$var wire 1 E% rs1_data [24] $end
$var wire 1 F% rs1_data [23] $end
$var wire 1 G% rs1_data [22] $end
$var wire 1 H% rs1_data [21] $end
$var wire 1 I% rs1_data [20] $end
$var wire 1 J% rs1_data [19] $end
$var wire 1 K% rs1_data [18] $end
$var wire 1 L% rs1_data [17] $end
$var wire 1 M% rs1_data [16] $end
$var wire 1 N% rs1_data [15] $end
$var wire 1 O% rs1_data [14] $end
$var wire 1 P% rs1_data [13] $end
$var wire 1 Q% rs1_data [12] $end
$var wire 1 R% rs1_data [11] $end
$var wire 1 S% rs1_data [10] $end
$var wire 1 T% rs1_data [9] $end
$var wire 1 U% rs1_data [8] $end
$var wire 1 V% rs1_data [7] $end
$var wire 1 W% rs1_data [6] $end
$var wire 1 X% rs1_data [5] $end
$var wire 1 Y% rs1_data [4] $end
$var wire 1 Z% rs1_data [3] $end
$var wire 1 [% rs1_data [2] $end
$var wire 1 \% rs1_data [1] $end
$var wire 1 ]% rs1_data [0] $end
$var wire 1 ^% rs2_data [31] $end
$var wire 1 _% rs2_data [30] $end
$var wire 1 `% rs2_data [29] $end
$var wire 1 a% rs2_data [28] $end
$var wire 1 b% rs2_data [27] $end
$var wire 1 c% rs2_data [26] $end
$var wire 1 d% rs2_data [25] $end
$var wire 1 e% rs2_data [24] $end
$var wire 1 f% rs2_data [23] $end
$var wire 1 g% rs2_data [22] $end
$var wire 1 h% rs2_data [21] $end
$var wire 1 i% rs2_data [20] $end
$var wire 1 j% rs2_data [19] $end
$var wire 1 k% rs2_data [18] $end
$var wire 1 l% rs2_data [17] $end
$var wire 1 m% rs2_data [16] $end
$var wire 1 n% rs2_data [15] $end
$var wire 1 o% rs2_data [14] $end
$var wire 1 p% rs2_data [13] $end
$var wire 1 q% rs2_data [12] $end
$var wire 1 r% rs2_data [11] $end
$var wire 1 s% rs2_data [10] $end
$var wire 1 t% rs2_data [9] $end
$var wire 1 u% rs2_data [8] $end
$var wire 1 v% rs2_data [7] $end
$var wire 1 w% rs2_data [6] $end
$var wire 1 x% rs2_data [5] $end
$var wire 1 y% rs2_data [4] $end
$var wire 1 z% rs2_data [3] $end
$var wire 1 {% rs2_data [2] $end
$var wire 1 |% rs2_data [1] $end
$var wire 1 }% rs2_data [0] $end
$var wire 1 ~% br_type [3] $end
$var wire 1 !& br_type [2] $end
$var wire 1 "& br_type [1] $end
$var wire 1 #& br_type [0] $end
$var reg 1 $& br_taken $end
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
$var reg 32 %& jta2 [31:0] $end
$var reg 1 && jump2 $end
$var reg 1 '& oldest_idx [0:0] $end
$var reg 7 (& oldest_sqN [6:0] $end
$upscope $end
$upscope $end

$scope module flush_controller $end
$var parameter 32 )& NUM_PORTS $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var reg 1 *& flush $end
$var reg 7 +& flush_sqN [6:0] $end
$upscope $end

$scope module execute $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 ,& flush $end
$var wire 1 -& flush_sqN [6] $end
$var wire 1 .& flush_sqN [5] $end
$var wire 1 /& flush_sqN [4] $end
$var wire 1 0& flush_sqN [3] $end
$var wire 1 1& flush_sqN [2] $end
$var wire 1 2& flush_sqN [1] $end
$var wire 1 3& flush_sqN [0] $end

$scope begin gen_agu_fu[0] $end
$var parameter 32 4& i $end

$scope module AGU_i $end
$var reg 114 5& IN_instr [113:0] $end
$var reg 77 6& OUT [76:0] $end
$var reg 1 7& is_load $end
$var reg 1 8& is_store $end
$var reg 2 9& data_size [1:0] $end
$var reg 1 :& is_unsigned $end
$var reg 32 ;& target_addr [31:0] $end
$upscope $end
$upscope $end

$scope begin gen_mul_div_fu[0] $end
$var parameter 32 <& i $end

$scope module MUL_DIV_i $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 ,& flush $end
$var wire 1 -& flush_sqN [6] $end
$var wire 1 .& flush_sqN [5] $end
$var wire 1 /& flush_sqN [4] $end
$var wire 1 0& flush_sqN [3] $end
$var wire 1 1& flush_sqN [2] $end
$var wire 1 2& flush_sqN [1] $end
$var wire 1 3& flush_sqN [0] $end
$var reg 82 =& IN_instr [81:0] $end
$var reg 1 >& OUT_busy $end
$var reg 46 ?& OUT_cdb [45:0] $end
$var reg 1 @& mul_stall $end
$var reg 1 A& mul_cdb_valid $end
$var reg 7 B& mul_cdb_sqN [6:0] $end
$var reg 6 C& mul_cdb_tag [5:0] $end
$var reg 32 D& mul_cdb_result [31:0] $end
$var reg 2 E& div_state [1:0] $end
$var reg 82 F& div_instr_r [81:0] $end
$var reg 64 G& div_partial [63:0] $end
$var reg 32 H& div_divisor [31:0] $end
$var reg 6 I& div_count [5:0] $end
$var reg 1 J& div_quot_sign $end
$var reg 1 K& div_rem_sign $end
$var reg 1 L& div_by_zero $end
$var reg 1 M& div_cdb_valid $end
$var reg 7 N& div_cdb_sqN [6:0] $end
$var reg 6 O& div_cdb_tag [5:0] $end
$var reg 32 P& div_cdb_result [31:0] $end
$var reg 32 Q& mul_stage1_result [31:0] $end
$var reg 32 R& mul_stage2_result [31:0] $end

$scope function abs32 $end
$upscope $end

$scope function is_squashed $end
$upscope $end
$upscope $end
$upscope $end

$scope begin gen_alu_fu[1] $end
$var parameter 32 S& i $end

$scope module ALU_i $end
$var reg 82 T& IN_instr [81:0] $end
$var reg 46 U& OUT [45:0] $end
$var reg 32 V& alu_result [31:0] $end
$upscope $end
$upscope $end

$scope begin gen_alu_fu[0] $end
$var parameter 32 W& i $end

$scope module ALU_i $end
$var reg 82 X& IN_instr [81:0] $end
$var reg 46 Y& OUT [45:0] $end
$var reg 32 Z& alu_result [31:0] $end
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
$var wire 1 [& flush $end
$var wire 1 \& flush_sqN [6] $end
$var wire 1 ]& flush_sqN [5] $end
$var wire 1 ^& flush_sqN [4] $end
$var wire 1 _& flush_sqN [3] $end
$var wire 1 `& flush_sqN [2] $end
$var wire 1 a& flush_sqN [1] $end
$var wire 1 b& flush_sqN [0] $end
$var reg 1 c& OUT_busy $end
$var reg 1 d& store_disp_idx [0:0] $end
$var reg 1 e& load_disp_idx [0:0] $end
$var reg 1 f& has_store_disp $end
$var reg 1 g& has_load_disp $end
$var reg 1 h& store_agu_idx [0:0] $end
$var reg 1 i& load_agu_idx [0:0] $end
$var reg 1 j& has_store_agu $end
$var reg 1 k& has_load_agu $end
$var reg 1 l& str_busy $end
$var reg 8 m& stb_alloc [7:0] $end
$var reg 74 n& stb_wb [73:0] $end
$var reg 1 o& ld_busy $end
$var reg 14 p& ldb_alloc [13:0] $end
$var reg 43 q& ldb_addr_wb [42:0] $end
$var reg 46 r& ldb_cdb_out [45:0] $end

$scope module u_stb $end
$var parameter 32 s& PTR_W $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var reg 8 t& alloc [7:0] $end
$var reg 74 u& wb [73:0] $end
$var wire 1 [& flush $end
$var wire 1 \& flush_sqN [6] $end
$var wire 1 ]& flush_sqN [5] $end
$var wire 1 ^& flush_sqN [4] $end
$var wire 1 _& flush_sqN [3] $end
$var wire 1 `& flush_sqN [2] $end
$var wire 1 a& flush_sqN [1] $end
$var wire 1 b& flush_sqN [0] $end
$var reg 1 v& str_busy $end
$var reg 4 w& alloc_idx [3:0] $end
$var reg 4 x& wb_idx [3:0] $end
$var reg 5 y& used_count [4:0] $end
$upscope $end

$scope module u_ldb $end
$var parameter 32 z& PTR_W $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var reg 14 {& alloc [13:0] $end
$var reg 43 |& addr_wb [42:0] $end
$var wire 1 [& flush $end
$var wire 1 \& flush_sqN [6] $end
$var wire 1 ]& flush_sqN [5] $end
$var wire 1 ^& flush_sqN [4] $end
$var wire 1 _& flush_sqN [3] $end
$var wire 1 `& flush_sqN [2] $end
$var wire 1 a& flush_sqN [1] $end
$var wire 1 b& flush_sqN [0] $end
$var reg 46 }& cdb_out [45:0] $end
$var reg 1 ~& ld_busy $end
$var reg 4 !' alloc_idx [3:0] $end
$var reg 4 "' ta_wb_idx [3:0] $end
$var reg 4 #' broadcast_idx [3:0] $end
$var reg 1 $' broadcast_valid $end
$var reg 5 %' used_count [4:0] $end

$scope function byte_lanes $end
$upscope $end

$scope function extract_bytes $end
$upscope $end

$scope function extend_data $end
$upscope $end
$upscope $end

$scope module u_dmem $end
$var parameter 32 &' DEPTH $end
$var parameter 32 '' BANK_DEPTH $end
$var parameter 32 (' BANK_AW $end
$var wire 1 ' clk_cpu $end
$var wire 1 ) rst_cpu $end
$var wire 1 ( clk_mem $end
$var wire 1 * rst_mem $end

$scope begin g_ack_sync[1] $end
$var parameter 32 )' i $end

$scope module u_wr_ack $end
$var parameter 32 *' W $end
$var wire 1 ' clk_dst $end
$var wire 1 ) rst_dst $end
$var wire 1 +' d [0] $end
$var reg 1 ,' q [0:0] $end
$var reg 1 -' ff1 [0:0] $end
$var reg 1 .' ff2 [0:0] $end
$upscope $end

$scope module u_rd_ack $end
$var parameter 32 /' W $end
$var wire 1 ' clk_dst $end
$var wire 1 ) rst_dst $end
$var wire 1 0' d [0] $end
$var reg 1 1' q [0:0] $end
$var reg 1 2' ff1 [0:0] $end
$var reg 1 3' ff2 [0:0] $end
$upscope $end
$upscope $end

$scope begin g_ack_sync[0] $end
$var parameter 32 4' i $end

$scope module u_wr_ack $end
$var parameter 32 5' W $end
$var wire 1 ' clk_dst $end
$var wire 1 ) rst_dst $end
$var wire 1 6' d [0] $end
$var reg 1 7' q [0:0] $end
$var reg 1 8' ff1 [0:0] $end
$var reg 1 9' ff2 [0:0] $end
$upscope $end

$scope module u_rd_ack $end
$var parameter 32 :' W $end
$var wire 1 ' clk_dst $end
$var wire 1 ) rst_dst $end
$var wire 1 ;' d [0] $end
$var reg 1 <' q [0:0] $end
$var reg 1 =' ff1 [0:0] $end
$var reg 1 >' ff2 [0:0] $end
$upscope $end
$upscope $end

$scope begin g_req_sync[1] $end
$var parameter 32 ?' i $end

$scope module u_wr_sync $end
$var parameter 32 @' W $end
$var wire 1 ( clk_dst $end
$var wire 1 * rst_dst $end
$var wire 1 A' d [0] $end
$var reg 1 B' q [0:0] $end
$var reg 1 C' ff1 [0:0] $end
$var reg 1 D' ff2 [0:0] $end
$upscope $end

$scope module u_rd_sync $end
$var parameter 32 E' W $end
$var wire 1 ( clk_dst $end
$var wire 1 * rst_dst $end
$var wire 1 F' d [0] $end
$var reg 1 G' q [0:0] $end
$var reg 1 H' ff1 [0:0] $end
$var reg 1 I' ff2 [0:0] $end
$upscope $end
$upscope $end

$scope begin g_req_sync[0] $end
$var parameter 32 J' i $end

$scope module u_wr_sync $end
$var parameter 32 K' W $end
$var wire 1 ( clk_dst $end
$var wire 1 * rst_dst $end
$var wire 1 L' d [0] $end
$var reg 1 M' q [0:0] $end
$var reg 1 N' ff1 [0:0] $end
$var reg 1 O' ff2 [0:0] $end
$upscope $end

$scope module u_rd_sync $end
$var parameter 32 P' W $end
$var wire 1 ( clk_dst $end
$var wire 1 * rst_dst $end
$var wire 1 Q' d [0] $end
$var reg 1 R' q [0:0] $end
$var reg 1 S' ff1 [0:0] $end
$var reg 1 T' ff2 [0:0] $end
$upscope $end
$upscope $end

$scope begin genblk1[1] $end
$var parameter 32 U' i $end
$upscope $end

$scope begin genblk1[0] $end
$var parameter 32 V' i $end
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
$var integer 32 W' i $end
$upscope $end

$scope module ROB $end
$var wire 1 ' clk $end
$var wire 1 ) rst $end
$var wire 1 X' flush $end
$var wire 1 Y' flush_sqN [6] $end
$var wire 1 Z' flush_sqN [5] $end
$var wire 1 [' flush_sqN [4] $end
$var wire 1 \' flush_sqN [3] $end
$var wire 1 ]' flush_sqN [2] $end
$var wire 1 ^' flush_sqN [1] $end
$var wire 1 _' flush_sqN [0] $end
$var reg 1 `' OUT_busy $end
$var reg 2 a' commit [1:0] $end
$var reg 2 b' dataout_valid [1:0] $end
$var reg 2 c' write_en [1:0] $end
$var reg 7 d' count [6:0] $end
$var reg 7 e' next_count [6:0] $end
$var reg 6 f' head [5:0] $end
$var reg 6 g' tail [5:0] $end
$var reg 6 h' next_head [5:0] $end
$var reg 6 i' next_tail [5:0] $end
$var reg 2 j' num_wr [1:0] $end
$var reg 2 k' num_commit [1:0] $end
$var reg 1 l' full $end
$var reg 1 m' empty $end
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
b10 }
b0 A!
b0 B!
b0 M!
b0 N!
b10 r!
1s!
b0 t!
00
01
0w!
0x!
b0 y!
b0 z!
0~!
b0 !"
b0 ""
0#"
b0 $"
0{!
b0 |!
0G"
b0 H"
b0 I"
b0 J"
b0 K"
1L"
0M"
b1110 N"
b1 O"
b0 R"
b0 S"
b0 T"
b0 U"
b0 V"
b0 W"
b0 X"
b0 Y"
02
03
04
0_"
b1111111111111111111111111111111111111111111111111111111111111110 `"
b0 a"
0b"
0c"
05
b0 6
0s"
0t"
0u"
1v"
0##
b0 $#
0%#
b0 .#
0/#
b0 x$
b0 y$
0z$
b0 {$
b0 |$
b0 }$
b0 ~$
0!%
b0 "%
b0 #%
b0 $%
0%%
b0 &%
b0 '%
b0 (%
b0 )%
0*%
b0 +%
0,%
0-%
1.%
1/%
00%
01%
b0 <%
0=%
02%
0$&
b0 j#
b0 k#
0l#
b0 m#
b0 n#
b0 o#
b0 p#
0q#
b0 r#
b0 s#
b0 t#
0u#
b0 v#
b0 w#
b0 x#
b0 y#
0z#
b0 {#
0|#
0}#
1~#
1!$
0"$
0#$
b0 .$
0/$
0$$
0t$
b0 N#
b0 P#
0Q#
b0 R#
b0 S#
b0 T#
0U#
b0 V#
b0 W#
0X#
0Y#
1Z#
1[#
b0 e#
0f#
b0 3#
b0 4#
05#
b0 6#
b0 7#
b0 8#
09#
b0 :#
b0 ;#
0<#
0=#
1>#
1?#
b0 I#
0J#
b0 %&
0&&
b0 '&
b1111111 (&
0*&
b0 +&
b0 X&
b0 Y&
b0 Z&
b0 T&
b0 U&
b0 V&
b0 =&
0>&
b0 ?&
0@&
0A&
b0 B&
b0 C&
b0 D&
b0 E&
b0 F&
b0 G&
b0 H&
b0 I&
0J&
0K&
0L&
0M&
b0 N&
b0 O&
b0 P&
b0 Q&
b0 R&
b0 5&
b1110 6&
07&
08&
b11 9&
0:&
b0 ;&
0c&
b0 d&
b0 e&
0f&
0g&
b0 h&
b0 i&
0j&
0k&
0l&
b0 m&
b0 n&
0o&
b0 p&
b0 q&
b0 t&
b0 u&
0v&
b0 w&
b0 x&
b0 y&
b0 r&
b0 {&
b0 |&
b0 }&
0~&
b0 !'
b0 "'
b0 #'
0$'
b0 %'
b0 M'
b0 N'
b0 O'
b0 R'
b0 S'
b0 T'
b0 B'
b0 C'
b0 D'
b0 G'
b0 H'
b0 I'
b0 7'
b0 8'
b0 9'
b0 <'
b0 ='
b0 >'
b0 ,'
b0 -'
b0 .'
b0 1'
b0 2'
b0 3'
0`'
b0 a'
b0 b'
b0 c'
b0 d'
b0 e'
b0 f'
b0 g'
b0 h'
b0 i'
bx j'
bx k'
0l'
1m'
b110 C!
b1000000 D!
b100 O!
b1000 P!
b11 Q!
b100 %"
b1000000 Z"
b0 i"
b1 h"
b10 g"
b11 f"
b0 e"
b1 d"
b0 |"
b1 {"
b0 z"
b0 y"
b0 x"
b1 w"
b1000000 }"
b10000 ~"
b100 !#
b0 u$
b1000 v$
b11 w$
b1000 3%
b1 g#
b1000 h#
b11 i#
b1000 %$
b0 K#
b1000 L#
b11 M#
b1000 \#
b0 0#
b1000 1#
b11 2#
b1000 @#
b10 )&
b0 W&
b1 S&
b0 <&
b0 4&
b100 s&
b100 z&
b100000000 &'
b10000000 ''
b111 ('
b0 V'
b1 U'
b0 J'
b1 K'
b1 P'
b1 ?'
b1 @'
b1 E'
b0 4'
b1 5'
b1 :'
b1 )'
b1 *'
b1 /'
b100 W'
b0 %
b0 &
0U$
0T$
0S$
0R$
0Q$
0P$
0O$
0N$
0M$
0L$
0K$
0J$
0I$
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
0-$
0,$
0+$
0*$
0)$
0($
0'$
0&$
0s$
0r$
0q$
0p$
0d#
0c#
0b#
0a#
0`#
0_#
0^#
0]#
0H#
0G#
0F#
0E#
0D#
0C#
0B#
0A#
0Q'
0L'
0F'
0A'
0;'
06'
00'
0+'
1*
1)
0(
0'
0_'
0^'
0]'
0\'
0['
0Z'
0Y'
0X'
0b&
0a&
0`&
0_&
0^&
0]&
0\&
0[&
03&
02&
01&
00&
0/&
0.&
0-&
0,&
0-#
0,#
0+#
0*#
0)#
0(#
0'#
0&#
0r"
0q"
0p"
0o"
0n"
0m"
0l"
0k"
0j"
0^"
0]"
0\"
0["
0Q"
0P"
0v!
0u!
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
0R!
0L!
0K!
0J!
0I!
0H!
0G!
0F!
0E!
1@!
0?!
0>!
0=!
1<!
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
0~
0F"
0E"
0D"
0C"
0B"
0A"
0@"
0?"
0>"
0="
0<"
0;"
0:"
09"
08"
07"
06"
05"
04"
03"
02"
01"
00"
0/"
0."
0-"
0,"
0+"
0*"
0)"
0("
0'"
0&"
0}!
0"#
0O#
0}%
0|%
0{%
0z%
0y%
0x%
0w%
0v%
0u%
0t%
0s%
0r%
0q%
0p%
0o%
0n%
0m%
0l%
0k%
0j%
0i%
0h%
0g%
0f%
0e%
0d%
0c%
0b%
0a%
0`%
0_%
0^%
0]%
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
0;%
0:%
09%
08%
07%
06%
05%
04%
0#&
0"&
0!&
0~%
0o$
0n$
0m$
0l$
0k$
0j$
0i$
0h$
0g$
0f$
0e$
0d$
0c$
0b$
0a$
0`$
0_$
0^$
0]$
0\$
0[$
0Z$
0Y$
0X$
0W$
0V$
$end
#5
1!
1'
b0 W'
b1 W'
b10 W'
b11 W'
b100 W'
b101 W'
b110 W'
b111 W'
b1000 W'
b1001 W'
b1010 W'
b1011 W'
b1100 W'
b1101 W'
b1110 W'
b1111 W'
b10000 W'
b10001 W'
b10010 W'
b10011 W'
b10100 W'
b10101 W'
b10110 W'
b10111 W'
b11000 W'
b11001 W'
b11010 W'
b11011 W'
b11100 W'
b11101 W'
b11110 W'
b11111 W'
b100000 W'
b100001 W'
b100010 W'
b100011 W'
b100100 W'
b100101 W'
b100110 W'
b100111 W'
b101000 W'
b101001 W'
b101010 W'
b101011 W'
b101100 W'
b101101 W'
b101110 W'
b101111 W'
b110000 W'
b110001 W'
b110010 W'
b110011 W'
b110100 W'
b110101 W'
b110110 W'
b110111 W'
b111000 W'
b111001 W'
b111010 W'
b111011 W'
b111100 W'
b111101 W'
b111110 W'
b111111 W'
b1000000 W'
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
b0 W'
b1 W'
b10 W'
b11 W'
b100 W'
b1000 B!
b1000 A!
b1000 |
b11 n&
b110 q&
b110 |&
b11 u&
1n!
b1000 t!
b10000 {
b1000 z
1I!
0<!
1;!
b1 M!
b10 N!
#110
0!
0'
#115
1!
1'
b10 I"
b10 J"
b10000 B!
b10000 A!
1M"
b10000 |
0n!
1m!
b10000 t!
b1000 !"
b11000 {
b10000 z
b10 K"
b1 N"
b0 N"
b1000 z!
0I!
1H!
1<!
b10 M!
b100 N!
b110010000000000000010010011 Y"
b10011 U"
b1100001 V"
b100001100000 W"
b1100100 X"
b11001000000000000100010011 Y"
b100010 V"
b100010 W"
b110010 X"
b1 S"
b10 S"
b0 S"
b1 S"
b10 S"
#120
0"
0!
0(
0'
#125
1!
1'
b10 R"
b1000 |!
b11000 B!
b100 I"
b10 H"
b11000 A!
b11000 |
1n!
1C"
b11000 t!
b10000 !"
b100000 {
b11000 z
b1 a"
b11 a"
b11 N"
b10 N"
b0 S"
b1 S"
b10 S"
b10000 z!
1I!
0<!
0;!
1:!
b11 M!
b110 N!
b1000001000000110110011 Y"
b110011 U"
b11 V"
b100000000010 W"
b1000000000000010 X"
b1000000001000001000001000110011 Y"
b10000000100 V"
b10000000100 W"
b1000010000000010 X"
b0 S"
b1 S"
b10 S"
#130
0!
0'
#135
1!
1'
b110 I"
b100 H"
b100000 B!
b10000 |!
b100 R"
b100000 A!
b100000 |
0n!
0m!
1l!
0C"
1B"
b100000 t!
b11000 !"
b101000 {
b100000 z
b0 S"
b1 S"
b10 S"
b101 N"
b100 N"
b1111111111111111111111111111111111111111111111111111111111111100 `"
b1111111111111111111111111111111111111111111111111111111111111000 `"
b11000 z!
0I!
0H!
1G!
1<!
b100 M!
b1000 N!
b1000001111001010110011 Y"
b111 T"
b101 V"
b100000000100 W"
b1111000000000010 X"
b1000001110001100110011 Y"
b110 T"
b110 V"
b110 W"
b1110000000000010 X"
b1 c'
b11 c'
b1 i'
b10 i'
b10 e'
b0 S"
b1 S"
b10 S"
#140
1"
0!
1(
0'
#145
1!
1'
b10 d'
b10 g'
b110 R"
b11000 |!
b101000 B!
b1000 I"
b110 H"
b101000 A!
b101000 |
1n!
1C"
b101000 t!
b100000 !"
b110000 {
b101000 z
0v"
b1111111111111111111111111111111111111111111111111111111111110000 `"
b1111111111111111111111111111111111111111111111111111111111100000 `"
b111 N"
b110 N"
b0 S"
b1 S"
b10 S"
0m'
b11 i'
b100 i'
b100 e'
1u"
b100000 z!
1I!
0<!
1;!
b101 M!
1s"
14
b1010 N!
1"#
b1000000000000000000000000000000000000000000100000000000000000100000000000000000000000001100100100000000 x$
b1xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx j#
1\"
1c"
x}#
x|#
1-%
1_"
10
1u!
1P"
0M"
x~#
x!$
b0 K"
b1000001100001110110011 Y"
b100 T"
b111 V"
b100000000110 W"
b1100000000000010 X"
b1001011000000000111000010011 Y"
b10011 U"
b0 T"
b10011100 V"
b10011100 W"
b10010110 X"
b10 i'
b11 i'
b100 i'
b0 S"
b1 S"
b10 S"
b0 Y"
b0 U"
b0 V"
b0 W"
b0 X"
b0 S"
b1 S"
b10 S"
b0 S"
#150
0!
0'
#155
1!
1'
b1 r#
b1 "%
b1010 I"
b100 J"
b110000 B!
b100000 |!
b100 d'
b100 g'
b110000 A!
b110000 |
0n!
1m!
0C"
0B"
1A"
b110000 t!
b101000 !"
b111000 {
b110000 z
1v"
0v"
b101 i'
b110 i'
b110 e'
b1001 N"
b1000 N"
b1 #%
b1 +%
b0x s#
xz#
b0x {#
bx {#
bx y#
bx x#
b1100100 )%
b101000 z!
0I!
1H!
1<!
b110 M!
b1100 N!
x-$
1;%
1=%
b0 W'
b1 W'
b10 W'
b11 W'
b100 W'
1#"
b1 $"
1~!
b110000 ""
b101100 !"
b101100 z!
b110000 y!
1x!
1%%
1,
b110000 .
b1xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx x$
b0 j#
0|#
x-%
x,%
0}#
1~#
1!$
x.%
x/%
1x
1S
1R
b110000 {
0<!
bx v#
bx w#
xo$
xn$
xm$
xl$
xk$
xj$
xi$
xh$
xg$
xf$
xe$
xd$
xc$
xb$
xa$
x`$
x_$
x^$
x]$
x\$
x[$
xZ$
xY$
xX$
xW$
xV$
xU$
xT$
xS$
xR$
xQ$
xP$
xO$
xN$
xM$
xL$
xK$
xJ$
xI$
xH$
xG$
xF$
xE$
xD$
xC$
xB$
xA$
x@$
x?$
x>$
x=$
x<$
x;$
x:$
x9$
x8$
x7$
x6$
x5$
x4$
x3$
x2$
x1$
x0$
#160
0"
0!
0(
0'
#165
1!
1'
b110 d'
b110 g'
1{!
b101100 |!
b1100 I"
b110 J"
b1000000000000000000000000000000000000000000000000000000000000000000000000000000000 y$
b1000000000000000000000000000000000000000000000000000000000000000011001000000000000 y$
b1000000000000000000000000000000000000000000000000000000000000000011001000001000000 y$
b1000000000000000000000000000000000000000000000000000000000000000011001000001000001 y$
b1100100 ~$
bx )%
b1000000000000000000000000000000000000000000000000000000000000000011001000001000001 X&
b1000000000000000000000000000000000000000000000 Y&
b1000000000000100000000000000000000000000000000 Y&
1&"
x#&
x"&
x!&
x~%
1D"
1C"
0L"
1G"
1w!
1+
1}!
17
0@!
b1100100 Z&
0#"
b0 $"
1#"
b1 $"
b111000 ""
b110100 !"
b0x #%
b0 +%
x*%
b0x +%
bx +%
b1011 N"
b0 O"
b111 i'
b1000 i'
b1000 e'
bx (%
b110100 z!
b111000 y!
b1000000000000100000000000000000000000001100100 Y&
b111000 .
1T
x;%
0=%
b111000 {
0#"
b0 $"
0~!
b0 ""
b110000 !"
b0 W'
b1 W'
b10 W'
b11 W'
b100 W'
b110000 z!
b0 y!
0x!
0%%
1<!
0,
b0 .
0x
0T
0S
0R
0#&
0"&
0!&
0~%
bx &%
bx '%
x}%
x|%
x{%
xz%
xy%
xx%
xw%
xv%
xu%
xt%
xs%
xr%
xq%
xp%
xo%
xn%
xm%
xl%
xk%
xj%
xi%
xh%
xg%
xf%
xe%
xd%
xc%
xb%
xa%
x`%
x_%
x^%
x]%
x\%
x[%
xZ%
xY%
xX%
xW%
xV%
xU%
xT%
xS%
xR%
xQ%
xP%
xO%
xN%
xM%
xL%
xK%
xJ%
xI%
xH%
xG%
xF%
xE%
xD%
xC%
xB%
xA%
x@%
x?%
x>%
#170
0!
0'
#175
1!
1'
b11001000001000001 y$
b10 "%
0{!
b110000 |!
b1000 d'
b1000 g'
b11001000001000001 X&
b1000000