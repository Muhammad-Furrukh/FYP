#include "Vcore.h"
#include "Vcore___024root.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include <iostream>
#include <iomanip>
#include <cstdint>

// ════════════════════════════════════════════════════
// Parameters
// ════════════════════════════════════════════════════
static const int     RESET_CYCLES   = 10;
static const int     TIMEOUT_CYCLES = 300;
static const int     NUM_CDB_LINES  = 4;
static const int     DECODE_WIDTH   = 2;
static const int     COMMIT_WIDTH   = 2;
static const int     IMEM_WORDS     = 64;

static const uint32_t ADDI_X1_X0_5   = 0x00500093; // ADDI x1, x0, 5
static const uint32_t NOP             = 0x00000013;
static const uint32_t EXPECTED_RESULT = 5;
static const uint8_t  EXPECTED_TAG    = 1;           // x1 → tag 1 at reset


// ════════════════════════════════════════════════════
// Globals
// ════════════════════════════════════════════════════
static Vcore*         dut;
static VerilatedFstC* tfp;
static uint64_t       sim_time = 0;
static uint64_t       next_cpu = 5;
static uint64_t       next_mem = 20;


// ════════════════════════════════════════════════════
// Clock
// ════════════════════════════════════════════════════
void tick() {
    sim_time++;
    if (sim_time == next_cpu) { dut->clk   = !dut->clk;   next_cpu += 5;  }
    if (sim_time == next_mem) { dut->clk_m = !dut->clk_m; next_mem += 20; }
    dut->eval();
    if (tfp) tfp->dump(sim_time);
}

void cpu_posedge() {
    uint8_t prev;
    do { prev = dut->clk; tick(); }
    while (!(prev == 0 && dut->clk == 1));
}


// ════════════════════════════════════════════════════
// IMEM init
// Type confirmed: VlUnpacked<IData/*31:0*/, 64>
// ════════════════════════════════════════════════════
void init_imem() {
    auto* r = dut->rootp;
    r->core__DOT__prefetch__DOT__IMEM__DOT__mem[0] = ADDI_X1_X0_5;
    for (int i = 1; i < IMEM_WORDS; i++)
        r->core__DOT__prefetch__DOT__IMEM__DOT__mem[i] = NOP;
    std::cout << "[TB] IMEM[0] = 0x" << std::hex << ADDI_X1_X0_5
              << std::dec << " (ADDI x1,x0,5)\n";
}


// ════════════════════════════════════════════════════
// CDB access
// Confirmed types:
//   VlUnpacked<CData/*0:0*/, 4>  core__DOT__CDB_valid
//   VlUnpacked<CData/*5:0*/, 4>  core__DOT__CDB_tag
//   VlUnpacked<IData/*31:0*/, 4> core__DOT__CDB_result
//   VlUnpacked<CData/*6:0*/, 4>  core__DOT__CDB_sqN
// All index directly with [i] — no unpacking needed.
// ════════════════════════════════════════════════════
struct CDBLine { bool valid; uint8_t tag; uint8_t sqN; uint32_t result; };

CDBLine get_cdb(int i) {
    auto* r = dut->rootp;
    return {
        (bool)(r->core__DOT__CDB_valid[i]  & 1),
        (uint8_t)(r->core__DOT__CDB_tag[i] & 0x3F),
        (uint8_t)(r->core__DOT__CDB_sqN[i] & 0x7F),
        (uint32_t)r->core__DOT__CDB_result[i]
    };
}

bool check_cdb(int cycle) {
    for (int i = 0; i < NUM_CDB_LINES; i++) {
        CDBLine c = get_cdb(i);
        if (!c.valid) continue;

        std::cout << "  CDB[" << i << "]"
                  << " tag="     << std::setw(2) << (int)c.tag
                  << " result=0x" << std::hex << std::setw(8)
                  << std::setfill('0') << c.result
                  << std::dec << std::setfill(' ')
                  << " sqN="    << (int)c.sqN
                  << " (cycle " << cycle << ")\n";

        if (c.tag == EXPECTED_TAG && c.result == EXPECTED_RESULT) {
            std::cout << "\n=== PASS: ADDI x1,x0,5"
                      << " result=" << c.result
                      << " tag="    << (int)c.tag
                      << " cycle="  << cycle << " ===\n";
            return true;
        }
    }
    return false;
}


// ════════════════════════════════════════════════════
// commit_packet unpacking
// Confirmed type: VlUnpacked<IData/*18:0*/, 2>
// Packed struct layout {valid(1), sqN(7), archTag(5), comTag(6)}
// MSB-first in SV packed = bit [18]=valid, [17:11]=sqN,
//                               [10:6]=archTag, [5:0]=comTag
// ════════════════════════════════════════════════════
struct CommitPacket { bool valid; uint8_t sqN; uint8_t archTag; uint8_t comTag; };

CommitPacket get_commit(int i) {
    uint32_t raw = dut->rootp->core__DOT__commit_packet[i] & 0x7FFFF;
    return {
        (bool)((raw >> 18) & 1),
        (uint8_t)((raw >> 11) & 0x7F),
        (uint8_t)((raw >>  6) & 0x1F),
        (uint8_t)( raw        & 0x3F)
    };
}


// ════════════════════════════════════════════════════
// rename_instr unpacking
// Confirmed type: VlUnpacked<VlWide<4>/*104:0*/, 2>
// VlWide<4> = 4 x uint32_t words, word[0]=bits[31:0]
//
// rename_instr_t layout (MSB first, 105 bits total):
//   valid    [104]      1 bit   → word[3] bit[8]
//   sqN      [103:97]   7 bits  → word[3] bits[7:1]
//   pc       [96:65]   32 bits  → word[3][0], word[2][31:1]  (spans words)
//   f_unit   [64:63]    2 bits
//   oper     [62:59]    4 bits
//   rs1_tag  [58:53]    6 bits
//   rs2_tag  [52:47]    6 bits
//   rd_tag   [46:41]    6 bits
//   imm      [40:9]    32 bits
//   is_imm   [8]        1 bit
//   jump_type[7:6]      2 bits
//   br_type  [5:2]      4 bits
//   u_type   [1:0]      2 bits
//
// For the trace we only need valid and rd_tag.
// ════════════════════════════════════════════════════
struct RenameInstr { bool valid; uint8_t rd_tag; uint8_t rs1_tag; uint8_t rs2_tag; };

RenameInstr get_rename(int i) {
    auto* r   = dut->rootp;
    // VlWide<4>[i] accessed as r->core__DOT__rename_instr[i][word]
    uint32_t w3 = r->core__DOT__rename_instr[i][3]; // bits [104:96] in low bits
    uint32_t w1 = r->core__DOT__rename_instr[i][1]; // bits [63:32]
    uint32_t w0 = r->core__DOT__rename_instr[i][0]; // bits [31:0]

    // valid = bit [104] = word[3] bit [8]
    bool    valid   = (w3 >> 8) & 1;
    // rd_tag = bits [46:41] = sits in word[1] bits [14:9]
    uint8_t rd_tag  = (w1 >> 9) & 0x3F;
    // rs2_tag = bits [52:47] = word[1] bits [20:15]
    uint8_t rs2_tag = (w1 >> 15) & 0x3F;
    // rs1_tag = bits [58:53] = word[1] bits [26:21]
    uint8_t rs1_tag = (w1 >> 21) & 0x3F;

    return {valid, rd_tag, rs1_tag, rs2_tag};
}


// ════════════════════════════════════════════════════
// Pipeline trace
// ════════════════════════════════════════════════════
void trace_pipeline(int cycle) {
    if (cycle >= 50) return;
    auto* r = dut->rootp;

    std::cout << "--- cycle " << std::setw(3) << cycle << " ---"
              << " ROB_busy="    << (int)r->core__DOT__ROB_busy
              << " d_busy="      << (int)r->core__DOT__dispatch_busy
              << " chk_busy="    << (int)r->core__DOT__chkpt_busy
              << " flush="       << (int)r->core__DOT__flush
              << " flush_sqN="   << (int)r->core__DOT__flush_sqN
              << "\n";

    for (int i = 0; i < DECODE_WIDTH; i++) {
        RenameInstr ri = get_rename(i);
        if (ri.valid)
            std::cout << "  RENAME[" << i << "]"
                      << " rd="      << (int)ri.rd_tag
                      << " rs1="     << (int)ri.rs1_tag
                      << " rs2="     << (int)ri.rs2_tag
                      << "\n";
    }

    for (int i = 0; i < COMMIT_WIDTH; i++) {
        CommitPacket cp = get_commit(i);
        if (cp.valid)
            std::cout << "  COMMIT[" << i << "]"
                      << " sqN="     << (int)cp.sqN
                      << " arch=x"   << (int)cp.archTag
                      << " tag="     << (int)cp.comTag
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
    dut->trace(tfp, 99);
    tfp->open("sim_verilator/tb_core.fst");

    // ── Reset ────────────────────────────────────────
    dut->clk   = 0;
    dut->clk_m = 0;
    dut->rst   = 1;
    dut->rst_m = 1;
    dut->eval();
    tfp->dump(0);

    std::cout << "[TB] Holding reset for " << RESET_CYCLES << " cycles\n";
    for (int i = 0; i < RESET_CYCLES; i++) cpu_posedge();

    init_imem();
    dut->eval();

    dut->rst   = 0;
    dut->rst_m = 0;
    std::cout << "[TB] Reset released\n";

    // ── Run ──────────────────────────────────────────
    bool passed = false;
    for (int cycle = 0; cycle < TIMEOUT_CYCLES; cycle++) {
        cpu_posedge();
        dut->eval();
        trace_pipeline(cycle);
        if (check_cdb(cycle)) { passed = true; break; }
    }

    if (!passed)
        std::cerr << "\n=== FAIL: no result after "
                  << TIMEOUT_CYCLES << " cycles ===\n";

    tfp->close();
    dut->final();
    delete tfp;
    delete dut;
    return passed ? 0 : 1;
}
