#include "Vcore.h"
#include "verilated.h"
#include "verilated_fst_c.h"   // FST trace (faster than VCD)
#include <iostream>
#include <iomanip>
#include <cstdint>
#include <cassert>

// ════════════════════════════════════════════════════
// Simulation parameters
// ════════════════════════════════════════════════════

static const int RESET_CYCLES   = 10;
static const int TIMEOUT_CYCLES = 200;

// ADDI x1, x0, 5 → 32'h00500093
static const uint32_t ADDI_X1_X0_5  = 0x00500093;
static const uint32_t NOP            = 0x00000013;
static const uint32_t EXPECTED_RESULT = 5;
static const uint8_t  EXPECTED_TAG    = 1;   // identity mapping at reset: x1 → tag 1


// ════════════════════════════════════════════════════
// Clock helpers
// ════════════════════════════════════════════════════

static Vcore*           dut;
static VerilatedFstC*   tfp;
static vluint64_t       sim_time = 0;

// CPU clock: period 10 (toggle every 5 time units)
// Mem clock: period 40 (toggle every 20 time units)
static int cpu_half  = 5;
static int mem_half  = 20;
static int next_cpu  = 5;
static int next_mem  = 20;

void advance_time(int delta) {
    sim_time += delta;

    // Toggle CPU clock
    if ((int)sim_time >= next_cpu) {
        dut->clk = !dut->clk;
        next_cpu += cpu_half;
    }

    // Toggle mem clock
    if ((int)sim_time >= next_mem) {
        dut->clk_m = !dut->clk_m;
        next_mem += mem_half;
    }

    dut->eval();
    if (tfp) tfp->dump(sim_time);
}

// Step to the next CPU posedge
void cpu_posedge() {
    // Step until clk goes 0→1
    while (true) {
        bool was_high = dut->clk;
        advance_time(1);
        if (!was_high && dut->clk) break;
    }
}


// ════════════════════════════════════════════════════
// Instruction memory model
//
// If your prefetch has an external imem port, drive it
// here. Adjust signal names to match your RTL.
// This assumes prefetch exposes:
//   imem_addr  (output from DUT — byte address)
//   imem_rdata (input  to   DUT — instruction word)
// ════════════════════════════════════════════════════

uint32_t imem[256] = {0};   // 256-word instruction memory

void init_imem() {
    imem[0] = ADDI_X1_X0_5;
    for (int i = 1; i < 256; i++) imem[i] = NOP;
}

void drive_imem() {
    // Adjust signal name to match your prefetch port
    // Example: dut->imem_rdata = imem[dut->imem_addr >> 2];
    // If prefetch has multiple fetch ports:
    // for (int i = 0; i < FETCH_WIDTH; i++)
    //     dut->imem_rdata[i] = imem[(dut->imem_addr >> 2) + i];
}


// ════════════════════════════════════════════════════
// CDB monitor
// ════════════════════════════════════════════════════

// Verilator exposes packed arrays as flat C types.
// CDB is declared as CDB_line_t CDB [NUM_CDB_LINES] in RTL.
// Verilator flattens this — access depends on your package.
// Adjust field access to match generated Vcore.h names.

bool check_cdb(int cycle) {
    // Verilator generates signals like:
    //   dut->core__DOT__CDB_valid   (array)
    //   dut->core__DOT__CDB_tag     (array)
    //   dut->core__DOT__CDB_result  (array)
    // NUM_CDB_LINES = 4 from your package

    for (int i = 0; i < 4 /*NUM_CDB_LINES*/; i++) {
        // Adjust indexing to match Verilator's flattened names
        bool   valid  = (dut->core__DOT__CDB_valid[i])  & 1;
        uint8_t tag   =  dut->core__DOT__CDB_tag[i]     & 0x3F;
        uint32_t res  =  dut->core__DOT__CDB_result[i];

        if (valid) {
            std::cout << "  CDB[" << i << "] valid"
                      << " tag="    << (int)tag
                      << " result=0x" << std::hex << res << std::dec
                      << " (cycle " << cycle << ")\n";

            if (tag == EXPECTED_TAG && res == EXPECTED_RESULT) {
                std::cout << "\n=== PASS: ADDI x1,x0,5 → result="
                          << res << " tag=" << (int)tag
                          << " at cycle " << cycle << " ===\n";
                return true;   // test passed
            }
        }
    }
    return false;
}


// ════════════════════════════════════════════════════
// Pipeline trace (first 50 cycles)
// ════════════════════════════════════════════════════

void trace_pipeline(int cycle) {
    if (cycle >= 50) return;

    std::cout << "--- cycle " << cycle << " ---\n";

    // Busy signals
    std::cout << "  ROB_busy="      << (int)dut->core__DOT__ROB_busy
              << " dispatch_busy="  << (int)dut->core__DOT__dispatch_busy
              << " chkpt_busy="     << (int)dut->core__DOT__chkpt_busy
              << " flush="          << (int)dut->core__DOT__flush
              << "\n";

    // Rename output — DECODE_WIDTH=2
    for (int i = 0; i < 2; i++) {
        // Verilator flattens arrays of structs — field names
        // depend on your struct layout. Typical pattern:
        // dut->core__DOT__rename_instr_valid[i]
        // Adjust to match your generated header.
        std::cout << "  RENAME[" << i << "]:"
                  << " valid=" << (int)(dut->core__DOT__rename_instr[i] >> 0 & 1)
                  << "\n";
    }

    // Commit
    for (int i = 0; i < 2 /*COMMIT_WIDTH*/; i++) {
        std::cout << "  COMMIT[" << i << "]:"
                  << " valid=" << (int)(dut->core__DOT__commit_packet[i] >> 0 & 1)
                  << "\n";
    }
}


// ════════════════════════════════════════════════════
// Main
// ════════════════════════════════════════════════════

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    dut = new Vcore;
    tfp = new VerilatedFstC;
    dut->trace(tfp, 99 /*trace depth*/);
    tfp->open("sim/tb_core.fst");

    init_imem();

    // ── Reset ────────────────────────────────────────
    dut->clk   = 0;
    dut->clk_m = 0;
    dut->rst   = 1;
    dut->rst_m = 1;
    dut->eval();

    for (int i = 0; i < RESET_CYCLES; i++) cpu_posedge();

    dut->rst   = 0;
    dut->rst_m = 0;

    // ── Run ──────────────────────────────────────────
    bool passed = false;
    for (int cycle = 0; cycle < TIMEOUT_CYCLES; cycle++) {
        cpu_posedge();
        drive_imem();
        dut->eval();

        trace_pipeline(cycle);

        if (check_cdb(cycle)) {
            passed = true;
            break;
        }
    }

    if (!passed) {
        std::cerr << "\n=== FAIL: result not seen after "
                  << TIMEOUT_CYCLES << " cycles ===\n";
    }

    // ── Cleanup ──────────────────────────────────────
    tfp->close();
    dut->final();
    delete tfp;
    delete dut;

    return passed ? 0 : 1;
}
