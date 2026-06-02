# ════════════════════════════════════════════════════
# Directories
# ════════════════════════════════════════════════════
RTL_DIR       = rtl
INC_DIR       = include
TB_DIR        = tb
UNIT_DIR      = $(TB_DIR)/modules
TEST_DIR      = tests
SIM_DIR       = sim_verilator
WORK_LIB      = work

# ════════════════════════════════════════════════════
# ModelSim (with LD_LIBRARY_PATH fix)
# ════════════════════════════════════════════════════
MODELSIM_DIR  = $(HOME)/intelFPGA/18.1/modelsim_ase
MS_ENV        = LD_LIBRARY_PATH=$(MODELSIM_DIR)/lib:$(MODELSIM_DIR)/linux

VLIB  = $(MS_ENV) $(MODELSIM_DIR)/linux/vlib
VMAP  = $(MS_ENV) $(MODELSIM_DIR)/linux/vmap
VLOG  = $(MS_ENV) $(MODELSIM_DIR)/linux/vlog
VSIM  = $(MS_ENV) $(MODELSIM_DIR)/linux/vsim

# ════════════════════════════════════════════════════
# Verilator
# ════════════════════════════════════════════════════
VERILATOR     = verilator

# ════════════════════════════════════════════════════
# RTL Sources
# ════════════════════════════════════════════════════
PKG_FILE      = $(INC_DIR)/include_pkg.sv
RTL_FILES     = $(filter-out $(PKG_FILE), \
                  $(shell find $(RTL_DIR) -name "*.sv" -o -name "*.v"))

# ════════════════════════════════════════════════════
# RISC-V Toolchain
# ════════════════════════════════════════════════════
RISCV_PREFIX  = riscv32-unknown-elf
RV_AS         = $(RISCV_PREFIX)-as
RV_LD         = $(RISCV_PREFIX)-ld
RV_OBJCOPY    = $(RISCV_PREFIX)-objcopy
RV_ASFLAGS    = -march=rv32im -mabi=ilp32

# ════════════════════════════════════════════════════
# Hex Files
# ════════════════════════════════════════════════════
TESTS         = test1_alu test2_muldiv test3_branch test4_raw test5_waw
HEX_FILES     = $(addprefix $(TEST_DIR)/, $(addsuffix .hex, $(TESTS)))

# ════════════════════════════════════════════════════
# ModelSim flags
# ════════════════════════════════════════════════════
VLOG_FLAGS    = -sv
VLOG_FLAGS   += +incdir+$(RTL_DIR) +incdir+$(INC_DIR) +incdir+$(TB_DIR)
VSIM_FLAGS    =

# ════════════════════════════════════════════════════
# Verilator flags
# ════════════════════════════════════════════════════
UNIT_VFLAGS   = --cc --exe --build --trace-fst --trace --timing --main
UNIT_VFLAGS  += -Wall -Wno-fatal
UNIT_VFLAGS  += -Wno-UNUSED -Wno-UNDRIVEN -Wno-DECLFILENAME
UNIT_VFLAGS  += -Wno-IMPORTSTAR -Wno-ENUMVALUE
UNIT_VFLAGS  += +incdir+$(RTL_DIR) +incdir+$(INC_DIR)
UNIT_VFLAGS  += --trace-structs

# ════════════════════════════════════════════════════
# Phony targets
# ════════════════════════════════════════════════════
.PHONY: all clean work hex \
        test_core_modelsim test_core \
        test_mul_div test_rename test_dispatch_unit \
        test_branch_checkpoint test_lsu test_all

all: test_core_modelsim

# ════════════════════════════════════════════════════
# Work library (ModelSim)
# ════════════════════════════════════════════════════
work:
	rm -rf $(WORK_LIB)
	$(VLIB) $(WORK_LIB)
	$(VMAP) $(WORK_LIB) $(WORK_LIB)

# ════════════════════════════════════════════════════
# Hex generation
# ════════════════════════════════════════════════════
hex: $(HEX_FILES)
	@echo "All hex files ready"

$(TEST_DIR)/%.hex: $(TEST_DIR)/%.s
	$(RV_AS)      $(RV_ASFLAGS) $< -o $(TEST_DIR)/$(notdir $(basename $<)).o
	$(RV_LD)      -m elf32lriscv --section-start=.text=0x0 \
	              $(TEST_DIR)/$(notdir $(basename $<)).o \
	              -o $(TEST_DIR)/$(notdir $(basename $<)).elf
	$(RV_OBJCOPY) -O verilog --verilog-data-width=4 \
	              $(TEST_DIR)/$(notdir $(basename $<)).elf $@
	@echo "Built: $@"

# ════════════════════════════════════════════════════
# ModelSim — Full Core
# ════════════════════════════════════════════════════
test_core_modelsim: work hex
	$(VLOG) $(VLOG_FLAGS) \
		$(PKG_FILE) \
		$(RTL_FILES) \
		$(TB_DIR)/tb_core.sv
	$(VSIM) $(VSIM_FLAGS) tb_core +PROG=$(PROG)
# ════════════════════════════════════════════════════
# Verilator — Full Core
# ════════════════════════════════════════════════════
CORE_DIR = $(SIM_DIR)/Vcore

test_core:
	mkdir -p $(SIM_DIR)
	$(VERILATOR) $(UNIT_VFLAGS) \
		--public-depth 0 --public-flat-rw \
		--top-module tb_core \
		--Mdir $(CORE_DIR) \
		$(PKG_FILE) $(RTL_FILES) $(TB_DIR)/tb_core.sv \
		-o tb_core_sim
	./$(CORE_DIR)/tb_core_sim +PROG=$(PROG)

# ════════════════════════════════════════════════════
# Verilator — Unit Tests
# ════════════════════════════════════════════════════
MUL_DIV_DIR = $(SIM_DIR)/Vmul_div
test_mul_div:
	mkdir -p $(SIM_DIR)
	$(VERILATOR) $(UNIT_VFLAGS) \
		--top-module tb_mul_div --Mdir $(MUL_DIV_DIR) \
		$(PKG_FILE) rtl/mul_div.sv $(UNIT_DIR)/tb_mul_div.sv \
		-o tb_mul_div_sim
	cd $(MUL_DIV_DIR) && ./tb_mul_div_sim

RENAME_DIR = $(SIM_DIR)/Vrename
test_rename:
	mkdir -p $(SIM_DIR)
	$(VERILATOR) $(UNIT_VFLAGS) \
		--top-module tb_rename --Mdir $(RENAME_DIR) \
		$(PKG_FILE) rtl/rename.sv $(UNIT_DIR)/tb_rename.sv \
		-o tb_rename_sim
	cd $(RENAME_DIR) && ./tb_rename_sim

DISPATCH_UNIT_DIR = $(SIM_DIR)/Vdispatch_unit
test_dispatch_unit:
	mkdir -p $(SIM_DIR)
	$(VERILATOR) $(UNIT_VFLAGS) \
		--top-module tb_dispatch_unit --Mdir $(DISPATCH_UNIT_DIR) \
		$(PKG_FILE) rtl/dispatch_unit.sv $(UNIT_DIR)/tb_dispatch_unit.sv \
		-o tb_dispatch_unit_sim
	cd $(DISPATCH_UNIT_DIR) && ./tb_dispatch_unit_sim

BRCHKPT_DIR = $(SIM_DIR)/Vbranch_checkpoint
test_branch_checkpoint:
	mkdir -p $(SIM_DIR)
	$(VERILATOR) $(UNIT_VFLAGS) \
		--top-module tb_branch_checkpoint --Mdir $(BRCHKPT_DIR) \
		$(PKG_FILE) rtl/branch_checkpoint.sv $(UNIT_DIR)/tb_branch_checkpoint.sv \
		-o tb_branch_checkpoint_sim
	cd $(BRCHKPT_DIR) && ./tb_branch_checkpoint_sim

LSU_DIR = $(SIM_DIR)/Vlsu
test_lsu:
	mkdir -p $(SIM_DIR)
	$(VERILATOR) $(UNIT_VFLAGS) \
		--top-module tb_lsu --Mdir $(LSU_DIR) \
		$(PKG_FILE) rtl/sync_2ff.sv rtl/data_memory.sv \
		rtl/lsu.sv rtl/store_buffer.sv rtl/load_buffer.sv \
		$(UNIT_DIR)/tb_lsu.sv \
		-o tb_lsu_sim
	./$(LSU_DIR)/tb_lsu_sim

# ════════════════════════════════════════════════════
# All tests
# ════════════════════════════════════════════════════
test_all: test_mul_div test_rename test_dispatch_unit test_branch_checkpoint test_lsu test_core
	@echo ""
	@echo "=== All unit tests complete ==="

# ════════════════════════════════════════════════════
# Clean
# ════════════════════════════════════════════════════
clean:
	rm -rf $(SIM_DIR) $(WORK_LIB)
	rm -rf transcript vsim.wlf modelsim.ini
	rm -f $(TEST_DIR)/*.o $(TEST_DIR)/*.elf
