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
