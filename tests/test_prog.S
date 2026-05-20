# ooo_test.S
# Superscalar OoO RV32IM core test
# Tests: RAW/WAW/WAR hazards, load/store ordering,
#        branch misprediction+flush, MUL/DIV, superscalar dispatch/commit
#
# Pass: writes 0xDEADBEEF to 0x00001000
# Fail: writes 0xBAADC0DE to 0x00002000

.section .text
.globl _start

_start:

# ================================================================
# TEST 1: RAW Hazards
# Back-to-back dependent instructions — every instruction depends
# on the result of the previous one, stressing forwarding paths.
# ================================================================
    li   x1, 1
    addi x2, x1, 1          # x2 = 2  (RAW on x1)
    addi x3, x2, 1          # x3 = 3  (RAW on x2)
    addi x4, x3, 1          # x4 = 4  (RAW on x3)
    addi x5, x4, 1          # x5 = 5  (RAW on x4)
    add  x6, x5, x4         # x6 = 9  (RAW on x5,x4)
    add  x7, x6, x3         # x7 = 12 (RAW on x6,x3)
    add  x8, x7, x2         # x8 = 14 (RAW on x7,x2)
    add  x9, x8, x1         # x9 = 15 (RAW on x8,x1)

    li   x28, 15
    bne  x9, x28, fail

# ================================================================
# TEST 2: WAW Hazards
# Multiple writes to the same destination in flight —
# only the last write should be visible at commit.
# ================================================================
    li   x10, 100
    li   x10, 200            # WAW: x10 should be 200
    li   x10, 300            # WAW: x10 should be 300
    addi x10, x10, 0         # x10 = 300

    li   x28, 300
    bne  x10, x28, fail

# ================================================================
# TEST 3: WAR Hazards
# Read must capture old value before subsequent write.
# ================================================================
    li   x11, 42
    li   x12, 0
    add  x12, x11, x0        # x12 = 42 (reads x11 before it's overwritten)
    li   x11, 99             # WAR: write to x11 after x12 read it

    li   x28, 42
    bne  x12, x28, fail
    li   x28, 99
    bne  x11, x28, fail

# ================================================================
# TEST 4: Superscalar Dispatch — independent instruction pairs
# These should dispatch and execute in parallel each cycle.
# ================================================================
    li   x1, 10
    li   x2, 20              # independent of x1 — parallel dispatch
    li   x3, 30
    li   x4, 40              # independent — parallel dispatch
    add  x5, x1, x2          # x5 = 30
    add  x6, x3, x4          # x6 = 70  — parallel dispatch with above
    add  x7, x5, x6          # x7 = 100

    li   x28, 100
    bne  x7, x28, fail

# ================================================================
# TEST 5: MUL/DIV (M extension)
# ================================================================
    li   x1, 13
    li   x2, 7
    mul  x3, x1, x2          # x3 = 91
    li   x28, 91
    bne  x3, x28, fail

    li   x1, 100
    li   x2, 7
    div  x3, x1, x2          # x3 = 14
    li   x28, 14
    bne  x3, x28, fail

    rem  x4, x1, x2          # x4 = 2
    li   x28, 2
    bne  x4, x28, fail

    # mulh: signed upper 32 bits of 64-bit product
    li   x1, 0x7FFFFFFF      # MAX_INT
    li   x2, 2
    mulh x3, x1, x2          # upper 32 bits of (MAX_INT * 2) = 0x00000000_FFFFFFFE → upper = 0
    li   x28, 0
    bne  x3, x28, fail

    # Negative division
    li   x1, -13
    li   x2, 3
    div  x3, x1, x2          # x3 = -4 (truncates toward zero)
    li   x28, -4
    bne  x3, x28, fail

    rem  x4, x1, x2          # x4 = -1
    li   x28, -1
    bne  x4, x28, fail

# ================================================================
# TEST 6: Load/Store Ordering
# Stores must be visible to subsequent loads at the same address.
# ================================================================
    li   x20, 0x00003000     # base address for memory tests

    li   x1, 0xABCD1234
    sw   x1, 0(x20)
    lw   x2, 0(x20)          # must see 0xABCD1234
    li   x28, 0xABCD1234
    bne  x2, x28, fail

    # Back-to-back store then load — same address
    li   x1, 0x11111111
    sw   x1, 4(x20)
    li   x1, 0x22222222
    sw   x1, 4(x20)          # second store must win
    lw   x2, 4(x20)
    li   x28, 0x22222222
    bne  x2, x28, fail

    # Store-to-load forwarding: store then immediate load
    li   x1, 0xDEAD0000
    sw   x1, 8(x20)
    lw   x3, 8(x20)          # should forward from store buffer
    li   x28, 0xDEAD0000
    bne  x3, x28, fail

    # Byte and halfword stores
    li   x1, 0x000000FF
    sb   x1, 12(x20)
    lbu  x2, 12(x20)
    li   x28, 0xFF
    bne  x2, x28, fail

    li   x1, 0x00001234
    sh   x1, 14(x20)
    lhu  x2, 14(x20)
    li   x28, 0x1234
    bne  x2, x28, fail

# ================================================================
# TEST 7: Branch Misprediction + Flush
# Force a mispredicted branch: speculatively execute wrong path,
# then flush and verify correct path result is used.
# ================================================================

    # Case 1: branch predicted not-taken, actually taken
    li   x1, 5
    li   x2, 5
    li   x3, 0               # will be set to 1 on correct path
    beq  x1, x2, .Ltaken1   # should be taken
    li   x3, 99              # wrong path — must be flushed
.Ltaken1:
    addi x3, x3, 1           # correct path: x3 = 1
    li   x28, 1
    bne  x3, x28, fail

    # Case 2: nested dependent computation after flush
    li   x1, 10
    li   x2, 20
    li   x4, 0
    blt  x1, x2, .Ltaken2   # taken: x1 < x2
    li   x4, 99              # wrong path
.Ltaken2:
    add  x4, x1, x2          # x4 = 30
    li   x28, 30
    bne  x4, x28, fail

    # Case 3: not-taken branch (fall through)
    li   x1, 20
    li   x2, 10
    li   x5, 0
    blt  x1, x2, .Ltaken3   # not taken: x1 > x2
    li   x5, 7               # fall-through — should execute
    j    .Lafter3
.Ltaken3:
    li   x5, 99              # wrong path — must not execute
.Lafter3:
    li   x28, 7
    bne  x5, x28, fail

    # Case 4: loop — exercises repeated flush + refill of ROB
    li   x1, 0
    li   x2, 8
.Lloop:
    addi x1, x1, 1
    blt  x1, x2, .Lloop     # loops 7 times
    li   x28, 8
    bne  x1, x28, fail

# ================================================================
# TEST 8: ROB pressure — long chain to fill ROB
# Mix of independent and dependent ops to stress superscalar
# dispatch, ROB allocation, and multi-cycle commit.
# ================================================================
    li   x1,  1
    li   x2,  2
    li   x3,  3
    li   x4,  4
    li   x5,  5
    li   x6,  6
    li   x7,  7
    li   x8,  8
    mul  x9,  x1, x2         # x9  = 2
    mul  x10, x3, x4         # x10 = 12
    mul  x11, x5, x6         # x11 = 30
    mul  x12, x7, x8         # x12 = 56
    add  x13, x9,  x10       # x13 = 14
    add  x14, x11, x12       # x14 = 86
    add  x15, x13, x14       # x15 = 100
    li   x28, 100
    bne  x15, x28, fail

# ================================================================
# ALL TESTS PASSED
# ================================================================
pass:
    li  x29, 0x00001000
    li  x30, 0xDEADBEEF
    sw  x30, 0(x29)
    j   end

fail:
    li  x29, 0x00002000
    li  x30, 0xBAADC0DE
    sw  x30, 0(x29)

end:
    j end
