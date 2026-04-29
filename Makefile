VERILATOR     = verilator
TOP           = core
TB_CPP        = tb/tb_core.cpp
RTL_DIR       = rtl
INC_DIR       = include
SIM_DIR       = sim_verilator
VERILATOR_DIR = $(SIM_DIR)/V$(TOP)

# Package must be first — all other files import it
PKG_FILE  = $(INC_DIR)/include_pkg.sv
RTL_FILES = $(filter-out $(PKG_FILE), \
              $(shell find $(RTL_DIR) -name "*.sv" -o -name "*.v"))
ALL_RTL   = $(PKG_FILE) $(RTL_FILES)

VFLAGS  = --cc
VFLAGS += --exe
VFLAGS += --build
VFLAGS += --trace-fst
VFLAGS += --top-module $(TOP)
VFLAGS += --Mdir $(VERILATOR_DIR)
VFLAGS += -Wall
VFLAGS += -Wno-UNUSED
VFLAGS += -Wno-UNDRIVEN
VFLAGS += -Wno-DECLFILENAME
VFLAGS += +incdir+$(RTL_DIR)
VFLAGS += +incdir+$(INC_DIR)       # ← tell Verilator to search here too

.PHONY: all sim clean waves

all: sim

sim:
	mkdir -p $(SIM_DIR)
	$(VERILATOR) $(VFLAGS) $(ALL_RTL) $(TB_CPP) -o $(TOP)_sim 2>&1 | tee $(SIM_DIR)/verilator.log
	$(VERILATOR_DIR)/$(TOP)_sim
waves:
	gtkwave $(SIM_DIR)/tb_core.fst &

clean:
	rm -rf $(SIM_DIR)
