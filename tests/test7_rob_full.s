# ============================================================
# test7_rob_full.s — ROB Full Stall Test
# ROB size = 8
# ============================================================
.section .text
.globl _start
_start:
    addi x1, x0, 2         # x1 = 0x00000002
    addi x2, x0, 3         # x2 = 0x00000003

    # 6 dependent MULs — will fill ROB and cause stall
    mul  x3, x1, x2        # x3 = 2*3     = 6    = 0x00000006
    mul  x4, x3, x2        # x4 = 6*3     = 18   = 0x00000012
    mul  x5, x4, x2        # x5 = 18*3    = 54   = 0x00000036
    mul  x6, x5, x2        # x6 = 54*3    = 162  = 0x000000A2
    mul  x7, x6, x2        # x7 = 162*3   = 486  = 0x000001E6
    mul  x8, x7, x2        # x8 = 486*3   = 1458 = 0x000005B2

    # ROB drain — independent instructions after stall
    addi x15, x0, 10       # x15 = 0x0000000A
    addi x16, x0, 20       # x16 = 0x00000014
    add  x17, x15, x16     # x17 = 30 = 0x0000001E

    # Verify independent result
    addi x18, x0, 30       # x18 = 0x0000001E
    bne  x17, x18, fail    # x17 must be 0x1E

    # Verify MUL chain result
    li   x19, 1458         # x19 = 0x000005B2
    bne  x8, x19, fail     # x8 must be 0x5B2

pass:
    li   x29, 0x00001000
    li   x30, 0xDEADBEEF
    sw   x30, 0(x29)
    j    done

fail:
    li   x29, 0x00002000
    li   x30, 0xBAADC0DE
    sw   x30, 0(x29)

done:
    j done
