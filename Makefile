VERILATOR     = verilator
RTL_DIR       = rtl
INC_DIR       = include
TB_DIR        = tb
UNIT_DIR      = $(TB_DIR)/modules
SIM_DIR       = sim_verilator

# Package must be first
PKG_FILE  = $(INC_DIR)/include_pkg.sv
RTL_FILES = $(filter-out $(PKG_FILE), \
              $(shell find $(RTL_DIR) -name "*.sv" -o -name "*.v"))

# ════════════════════════════════════════════════════
# Common Verilator flags (for unit tests)
# ════════════════════════════════════════════════════
UNIT_VFLAGS  = --cc --exe --build --trace-fst --trace --timing --main
UNIT_VFLAGS += -Wall -Wno-fatal
UNIT_VFLAGS += -Wno-UNUSED -Wno-UNDRIVEN -Wno-DECLFILENAME
UNIT_VFLAGS += +incdir+$(RTL_DIR) +incdir+$(INC_DIR)

# ════════════════════════════════════════════════════
# Phony targets
# ════════════════════════════════════════════════════
.PHONY: all clean test_mul_div test_rename test_dispatch_unit \
        test_branch_checkpoint test_core test_all

all: test_core

# ════════════════════════════════════════════════════
# MUL_DIV unit test
# ════════════════════════════════════════════════════
MUL_DIV_DIR = $(SIM_DIR)/Vtb_mul_div

test_mul_div:
	mkdir -p $(SIM_DIR)
	$(VERILATOR) $(UNIT_VFLAGS) \
		--top-module tb_mul_div \
		--Mdir $(MUL_DIV_DIR) \
		$(PKG_FILE) rtl/mul_div.sv $(UNIT_DIR)/tb_mul_div.sv \
		-o tb_mul_div_sim
	cd $(MUL_DIV_DIR) && ./tb_mul_div_sim

# ════════════════════════════════════════════════════
# RENAME unit test
# ════════════════════════════════════════════════════
RENAME_DIR = $(SIM_DIR)/Vtb_rename

test_rename:
	mkdir -p $(SIM_DIR)
	$(VERILATOR) $(UNIT_VFLAGS) \
		--top-module tb_rename \
		--Mdir $(RENAME_DIR) \
		$(PKG_FILE) rtl/rename.sv $(UNIT_DIR)/tb_rename.sv \
		-o tb_rename_sim
	cd $(RENAME_DIR) && ./tb_rename_sim

# ════════════════════════════════════════════════════
# DISPATCH_UNIT test
# ════════════════════════════════════════════════════
DISPATCH_UNIT_DIR = $(SIM_DIR)/Vtb_dispatch_unit

test_dispatch_unit:
	mkdir -p $(SIM_DIR)
	$(VERILATOR) $(UNIT_VFLAGS) \
		--top-module tb_dispatch_unit \
		--Mdir $(DISPATCH_UNIT_DIR) \
		$(PKG_FILE) rtl/dispatch_unit.sv $(UNIT_DIR)/tb_dispatch_unit.sv \
		-o tb_dispatch_unit_sim
	cd $(DISPATCH_UNIT_DIR) && ./tb_dispatch_unit_sim

# ════════════════════════════════════════════════════
# BRANCH_CHECKPOINT test
# ════════════════════════════════════════════════════
BRCHKPT_DIR = $(SIM_DIR)/Vtb_branch_checkpoint

test_branch_checkpoint:
	mkdir -p $(SIM_DIR)
	$(VERILATOR) $(UNIT_VFLAGS) \
		--top-module tb_branch_checkpoint \
		--Mdir $(BRCHKPT_DIR) \
		$(PKG_FILE) rtl/branch_checkpoint.sv $(UNIT_DIR)/tb_branch_checkpoint.sv \
		-o tb_branch_checkpoint_sim
	cd $(BRCHKPT_DIR) && ./tb_branch_checkpoint_sim

# ════════════════════════════════════════════════════
# FULL CORE test
# ════════════════════════════════════════════════════
CORE_DIR = $(SIM_DIR)/Vtb_core

test_core:
	mkdir -p $(SIM_DIR)
	$(VERILATOR) $(UNIT_VFLAGS) \
		--public-depth 0 --public-flat-rw \
		--top-module tb_core \
		--Mdir $(CORE_DIR) \
		$(PKG_FILE) $(RTL_FILES) $(TB_DIR)/tb_core.sv \
		-o tb_core_sim
	cd $(CORE_DIR) && ./tb_core_sim

# ════════════════════════════════════════════════════
# All unit tests
# ════════════════════════════════════════════════════
test_all: test_mul_div test_rename test_dispatch_unit test_branch_checkpoint test_core
	@echo ""
	@echo "=== All unit tests complete ==="

# ════════════════════════════════════════════════════
clean:
	rm -rf $(SIM_DIR)
