`ifndef INCLUDE_PKG
`define INCLUDE_PKG

package include_pkg;

//------------------------------------------------------------------
// Parameters
//------------------------------------------------------------------
parameter int unsigned XLEN             = 32;
parameter int unsigned FETCH_WIDTH      = 2;
parameter int unsigned DECODE_WIDTH     = 2;
parameter int unsigned RENAME_WIDTH     = 2;
parameter int unsigned ISSUE_WIDTH      = 4;
parameter int unsigned COMMIT_WIDTH     = 2;
parameter int unsigned REG_ADDR_WIDTH   = 6;
parameter int unsigned DMEM_ADDR_WIDTH  = 10;
parameter int unsigned IMEM_ADDR_WIDTH  = 8;
parameter int unsigned ROB_SIZE         = 64;
parameter int unsigned FETCHB_SIZE      = 16;
parameter int unsigned ISSUEB_SIZE      = 8;
parameter int unsigned STOREB_SIZE      = 16;
parameter int unsigned LOADB_SIZE       = 16;
parameter int unsigned NUM_CDB_LINES    = 4;

//------------------------------------------------------------------
// Simple typedefs
//------------------------------------------------------------------
typedef logic [$clog2(ROB_SIZE):0]      sqN_t;
typedef logic [XLEN - 1:0]              pc_t;
typedef logic [REG_ADDR_WIDTH - 1:0]    tag_t;
typedef logic [XLEN - 1:0]              imm_t;
typedef logic [XLEN - 1:0]              prefetch_instr_t;

//------------------------------------------------------------------
// Enums
//------------------------------------------------------------------
typedef enum logic [1:0] {
    ALU,
    MUL_DIV,
    LSU
} f_unit_t;

typedef enum logic [3:0] {
    ADD,
    SUB,
    SLL,
    SLT,
    SLTU,
    XOR,
    SRL,
    SRA,
    OR,
    AND,
    // For LUI
    COPY
} alu_oper_t;

typedef enum logic [3:0] {
    MUL,
    MULH,
    MULHSU,
    MULHU,
    DIV,
    DIVU,
    REM,
    REMU
} mul_div_oper_t;

typedef enum logic [3:0] {
    LOAD_BYTE,
    LOAD_HALF,
    LOAD_WORD,
    LOAD_BYTEU,
    LOAD_HALFU,
    STORE_BYTE,
    STORE_HALF,
    STORE_WORD
} lsu_oper_t;

typedef enum logic [3:0] {
    NOT_BRANCH,
    BEQ,
    BNE,
    BLT,
    BGE,
    BLTU,
    BGEU
} br_type_t;

typedef enum logic [1:0] {
    NOT_JUMP,
    JAL,
    JALR
} jump_type_t;

typedef enum logic [1:0] {
    NOT_U,
    AUIPC,
    LUI
} u_type_t;

//------------------------------------------------------------------
// Unions
//------------------------------------------------------------------
typedef union packed {
    alu_oper_t          alu_oper;
    mul_div_oper_t      mul_div_oper;
    lsu_oper_t          lsu_oper;
} oper_t;

//------------------------------------------------------------------
// Structs
//------------------------------------------------------------------
typedef struct packed {
    logic               valid;
    pc_t                pc;
    prefetch_instr_t    instr;
} aligner_instr_t;

typedef struct packed{ 
    logic               valid;
    sqN_t               sqN;
    pc_t                pc;
    prefetch_instr_t    instr;
} fetch_instr_t;

typedef struct packed {
    logic               valid;
    sqN_t               sqN;
    pc_t                pc;
    f_unit_t            f_unit;
    oper_t              oper;
    logic [4:0]         rs1;
    logic [4:0]         rs2;
    logic [4:0]         rd;
    imm_t               imm;
    logic               is_imm;
    jump_type_t         jump_type;
    br_type_t           br_type;
    u_type_t            u_type;
} decode_instr_t;

typedef struct packed {
    logic               valid;
    sqN_t               sqN;
    pc_t                pc;
    f_unit_t            f_unit;
    oper_t              oper;
    tag_t               rs1_tag;
    tag_t               rs2_tag;
    tag_t               rd_tag;
    imm_t               imm;
    logic               is_imm;
    jump_type_t         jump_type;
    br_type_t           br_type;
    u_type_t            u_type;
} rename_instr_t;

typedef struct packed {
    logic               valid;
    sqN_t               sqN;
    pc_t                pc;
    f_unit_t            f_unit;
    oper_t              oper;
    tag_t               rs1_tag;
    tag_t               rs2_tag;
    tag_t               rd_tag;
    imm_t               imm;
    logic               is_imm;
    jump_type_t         jump_type;
    br_type_t           br_type;
    u_type_t            u_type;
} alu_dispatch_instr_t;

typedef struct packed {
    logic               valid;
    sqN_t               sqN;
    pc_t                pc;
    f_unit_t            f_unit;
    oper_t              oper;
    tag_t               rs1_tag;
    tag_t               rs2_tag;
    tag_t               rd_tag;
} mul_div_dispatch_instr_t;

typedef struct packed {
    logic               valid;
    sqN_t               sqN;
    pc_t                pc;
    f_unit_t            f_unit;
    oper_t              oper;
    tag_t               rs1_tag;
    tag_t               rs2_tag;
    tag_t               rd_tag;
    imm_t               imm;
    logic               is_imm;
} lsu_dispatch_instr_t;

typedef struct packed {
    logic               valid;
    sqN_t               sqN;
    logic [XLEN - 1:0]  operand1;
    logic [XLEN - 1:0]  operand2;
    oper_t              oper;
    tag_t               rd_tag;
} issue_instr_t;

typedef struct packed {
    logic               valid;
    sqN_t               sqN;
    logic [XLEN - 1:0]  operand1;
    logic [XLEN - 1:0]  operand2;
    logic [XLEN - 1:0]  data;
    oper_t              oper;
    tag_t               rd_tag;
} lsu_issue_instr_t;

typedef struct packed {
    logic               valid;
    sqN_t               sqN;
    tag_t               tag;
    logic [XLEN - 1:0]  result;
} CDB_line_t;

CDB_line_t CDB [NUM_CDB_LINES];

typedef struct packed {
    logic               valid;
    sqN_t               sqN;
    logic  [4:0]        archTag;
    tag_t               comTag;
} commit_packet_t;

typedef struct packed {
    logic               valid;
    sqN_t               sqN;
    logic  [4:0]        archTag;
    tag_t               rd_tag;
} dispatch_rob_t;

endpackage : include_pkg
`endif  
