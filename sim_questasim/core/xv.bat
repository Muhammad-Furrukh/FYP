@echo off
del wlf* 2>nul
rmdir /s /q work 2>nul

vlog -work work +acc -sv -stats=none "./../../include/include_pkg.sv"

vlog -work work +acc -sv -stats=none "./../../rtl/AGU.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/ALU.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/alu_issue_buffer.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/branch_checkpoint.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/branch_comparator.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/data_memory.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/decode.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/decoder.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/dispatch.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/dispatch_unit.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/execute.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/fetch.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/fetch_buffer.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/flush_controller.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/IMEM.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/immediate_gen.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/instr_aligner.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/issue.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/load_buffer.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/lsu.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/lsu_issue_buffer.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/mul_div.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/mul_div_issue_buffer.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/PC.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/prefetch.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/priority_encoder.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/register_file.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/rename.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/ROB.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/store_buffer.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/sync_2ff.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/ta_gen1.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/ta_gen2.sv"
vlog -work work +acc -sv -stats=none "./../../rtl/core.sv"

vlog -work work +acc -sv -stats=none "core_tb.sv"

pause
