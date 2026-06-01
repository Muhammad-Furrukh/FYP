MODELSIM_DIR  = $(HOME)/intelFPGA/18.1/modelsim_ase
VLIB          = LD_LIBRARY_PATH=$(MODELSIM_DIR)/lib:$(MODELSIM_DIR)/linux $(MODELSIM_DIR)/linux/vlib
VMAP          = LD_LIBRARY_PATH=$(MODELSIM_DIR)/lib:$(MODELSIM_DIR)/linux $(MODELSIM_DIR)/linux/vmap
VLOG          = LD_LIBRARY_PATH=$(MODELSIM_DIR)/lib:$(MODELSIM_DIR)/linux $(MODELSIM_DIR)/linux/vlog
VSIM          = LD_LIBRARY_PATH=$(MODELSIM_DIR)/lib:$(MODELSIM_DIR)/linux $(MODELSIM_DIR)/linux/vsim

RTL_DIR       = rtl
INC_DIR       = include
TB_DIR        = tb
UNIT_DIR      = $(TB_DIR)/modules
TEST_DIR      = tests
WORK_LIB      = work

# ════════════════════════════════════════════════════
# RISC-V toolchain
# ════════════════════════════════════════════════════
RISCV_PREFIX  = riscv32-unknown-elf
RV_AS         = $(RISCV_PREFIX)-as
RV_LD         = $(RISCV_PREFIX)-ld
RV_OBJCOPY    = $(RISCV_PREFIX)-objcopy
RV_ASFLAGS    = -march=rv32im -mabi=ilp32

# ════════════════════════════════════════════════════
# RTL sources
# ════════════════════════════════════════════════════
PKG_FILE      = $(INC_DIR)/include_pkg.sv
RTL_FILES     = $(filter-out $(PKG_FILE), \
                  $(shell find $(RTL_DIR) -name "*.sv" -o -name "*.v"))

# ════════════════════════════════════════════════════
# Test hex files
# ════════════════════════════════════════════════════
TESTS     = test1_alu test2_muldiv test3_branch test4_raw test5_waw
HEX_FILES = $(addprefix $(TEST_DIR)/, $(addsuffix .hex, $(TESTS)))

# ════════════════════════════════════════════════════
# vlog / vsim flags
# ════════════════════════════════════════════════════
VLOG_FLAGS    = -sv
VLOG_FLAGS   += +incdir+$(RTL_DIR) +incdir+$(INC_DIR) +incdir+$(TB_DIR)

VSIM_FLAGS =
# ════════════════════════════════════════════════════
# Phony targets
# ════════════════════════════════════════════════════
.PHONY: all clean work hex test_core test_all

all: test_core

# ════════════════════════════════════════════════════
# Create work library
# ════════════════════════════════════════════════════
work:
	$(VLIB) $(WORK_LIB)
	$(VMAP) $(WORK_LIB) $(WORK_LIB)

# ════════════════════════════════════════════════════
# Assembly → Hex (all 5 tests)
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
# FULL CORE test
# ════════════════════════════════════════════════════
test_core: work hex
	$(VLOG) $(VLOG_FLAGS) \
		$(PKG_FILE) \
		$(RTL_FILES) \
		$(TB_DIR)/tb_core.sv
	$(VSIM) $(VSIM_FLAGS) tb_core

# ════════════════════════════════════════════════════
# All unit tests
# ════════════════════════════════════════════════════
test_all: test_core
	@echo ""
	@echo "=== All unit tests complete ==="

# ════════════════════════════════════════════════════
# Clean
# ════════════════════════════════════════════════════
clean:
	rm -rf $(WORK_LIB)
	rm -rf transcript vsim.wlf modelsim.ini
	rm -f $(TEST_DIR)/*.o $(TEST_DIR)/*.elf
