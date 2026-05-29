.text
.globl _start
_start:
    # BEQ taken: 5 == 5
    addi x1, x0, 5
    addi x2, x0, 5
    beq  x1, x2, beq_ok
    j    fail
beq_ok:

    # BNE taken: 3 != 7
    addi x3, x0, 3
    addi x4, x0, 7
    bne  x3, x4, bne_ok
    j    fail
bne_ok:

    # BLT taken: 3 < 7
    addi x5, x0, 3
    addi x6, x0, 7
    blt  x5, x6, blt_ok
    j    fail
blt_ok:

    # BGE taken: 7 >= 3
    addi x7, x0, 7
    addi x8, x0, 3
    bge  x7, x8, bge_ok
    j    fail
bge_ok:

    # BLTU taken: 3 < 7 unsigned
    addi x9,  x0, 3
    addi x10, x0, 7
    bltu x9, x10, bltu_ok
    j    fail
bltu_ok:

    # BGEU taken: 7 >= 3 unsigned
    addi x11, x0, 7
    addi x12, x0, 3
    bgeu x11, x12, bgeu_ok
    j    fail
bgeu_ok:

    # BEQ not taken: 3 != 7
    addi x13, x0, 3
    addi x14, x0, 7
    beq  x13, x14, fail

    # BNE not taken: 5 == 5
    addi x15, x0, 5
    addi x16, x0, 5
    bne  x15, x16, fail

    # BLT not taken: 7 >= 3
    addi x17, x0, 7
    addi x18, x0, 3
    blt  x17, x18, fail

    # BGE not taken: 3 < 7
    addi x19, x0, 3
    addi x20, x0, 7
    bge  x19, x20, fail

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
    j    done
