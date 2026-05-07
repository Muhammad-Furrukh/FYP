VERILATOR     = verilator
RTL_DIR       = rtl
INC_DIR       = include
TB_DIR        = tb
UNIT_DIR      = $(TB_DIR)/modules
SIM_DIR       = sim_verilator

# Package must be first — all other files import it
PKG_FILE  = $(INC_DIR)/include_pkg.sv
RTL_FILES = $(filter-out $(PKG_FILE), \
              $(shell find $(RTL_DIR) -name "*.sv" -o -name "*.v"))

# ════════════════════════════════════════════════════
# Common Verilator flags
# ════════════════════════════════════════════════════
COMMON_VFLAGS  = --cc --exe --build --trace-fst
COMMON_VFLAGS += --timing
COMMON_VFLAGS += -Wall -Wno-fatal
COMMON_VFLAGS += -Wno-UNUSED -Wno-UNDRIVEN -Wno-DECLFILENAME
COMMON_VFLAGS += +incdir+$(RTL_DIR) +incdir+$(INC_DIR)

# ════════════════════════════════════════════════════
# Full core simulation
# ════════════════════════════════════════════════════
TOP           = core
TB_CPP        = $(TB_DIR)/tb_core.cpp
ALL_RTL       = $(PKG_FILE) $(RTL_FILES)
CORE_DIR      = $(SIM_DIR)/V$(TOP)

VFLAGS  = $(COMMON_VFLAGS)
VFLAGS += --public-depth 0
VFLAGS += --public-flat-rw
VFLAGS += --top-module $(TOP)
VFLAGS += --Mdir $(CORE_DIR)

# ════════════════════════════════════════════════════
# Targets
# ════════════════════════════════════════════════════
.PHONY: all sim waves clean test_mul_div test_all

all: sim

sim:
	mkdir -p $(SIM_DIR)
	$(VERILATOR) $(VFLAGS) $(ALL_RTL) $(TB_CPP) -o $(TOP)_sim 2>&1 | tee $(SIM_DIR)/verilator.log
	$(CORE_DIR)/$(TOP)_sim

# ════════════════════════════════════════════════════
# MUL_DIV unit test
# ════════════════════════════════════════════════════
MUL_DIV_TOP = MUL_DIV
MUL_DIV_SRC = rtl/mul_div.sv $(UNIT_DIR)/tb_mul_div.cpp
MUL_DIV_DIR = $(SIM_DIR)/V$(MUL_DIV_TOP)

test_mul_div:
	mkdir -p $(SIM_DIR)
	$(VERILATOR) --cc --exe --build --trace-fst --trace --timing --main \
		-Wall -Wno-fatal -Wno-UNUSED -Wno-UNDRIVEN -Wno-DECLFILENAME \
		+incdir+$(RTL_DIR) +incdir+$(INC_DIR) \
		--top-module tb_mul_div \
		--Mdir $(SIM_DIR)/Vtb_mul_div \
		$(PKG_FILE) rtl/mul_div.sv $(UNIT_DIR)/tb_mul_div.sv \
		-o tb_mul_div_sim
	cd $(SIM_DIR)/Vtb_mul_div && ./tb_mul_div_sim

# ════════════════════════════════════════════════════
# RENAME unit test
# ════════════════════════════════════════════════════
RENAME_TOP = rename
RENAME_SRC = rtl/rename.sv $(UNIT_DIR)/tb_rename.sv
RENAME_DIR = $(SIM_DIR)/V$(RENAME_TOP)

test_rename:
	mkdir -p $(SIM_DIR)
	$(VERILATOR) --cc --exe --build --trace-fst --trace --timing --main \
		-Wall -Wno-fatal -Wno-UNUSED -Wno-UNDRIVEN -Wno-DECLFILENAME \
		+incdir+$(RTL_DIR) +incdir+$(INC_DIR) \
		--top-module tb_rename \
		--Mdir $(RENAME_DIR) \
		$(PKG_FILE) $(RENAME_SRC) \
		-o tb_rename_sim
	cd $(RENAME_DIR) && ./tb_rename_sim


DISPATCH_UNIT_TOP = dispatch_unit
DISPATCH_UNIT_SRC = rtl/dispatch_unit.sv $(UNIT_DIR)/tb_dispatch_unit.sv
DISPATCH_UNIT_DIR = $(SIM_DIR)/V$(DISPATCH_UNIT_TOP)

test_dispatch_unit:
	mkdir -p $(SIM_DIR)
	$(VERILATOR) --cc --exe --build --trace-fst --trace --timing --main \
		-Wall -Wno-fatal -Wno-UNUSED -Wno-UNDRIVEN -Wno-DECLFILENAME \
		+incdir+$(RTL_DIR) +incdir+$(INC_DIR) \
		--top-module tb_dispatch_unit \
		--Mdir $(DISPATCH_UNIT_DIR) \
		$(PKG_FILE) $(DISPATCH_UNIT_SRC) \
		-o tb_dispatch_unit_sim
	cd $(DISPATCH_UNIT_DIR) && ./tb_dispatch_unit_sim

BRCHKPT_TOP = branch_checkpoint
BRCHKPT_SRC = rtl/branch_checkpoint.sv $(UNIT_DIR)/tb_branch_checkpoint.sv
BRCHKPT_DIR = $(SIM_DIR)/V$(BRCHKPT_TOP)

test_branch_checkpoint:
	mkdir -p $(SIM_DIR)
	$(VERILATOR) --cc --exe --build --trace-fst --trace --timing --main \
		-Wall -Wno-fatal -Wno-UNUSED -Wno-UNDRIVEN -Wno-DECLFILENAME \
		+incdir+$(RTL_DIR) +incdir+$(INC_DIR) \
		--top-module tb_branch_checkpoint \
		--Mdir $(BRCHKPT_DIR) \
		$(PKG_FILE) $(BRCHKPT_SRC) \
		-o tb_branch_checkpoint_sim
	cd $(BRCHKPT_DIR) && ./tb_branch_checkpoint_sim

test_all: test_mul_div test_rename test_dispatch_unit test_branch_checkpoint

clean:
	rm -rf $(SIM_DIR)
