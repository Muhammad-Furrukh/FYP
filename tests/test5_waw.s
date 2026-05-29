# ============================================================
# test5_waw.s — WAW Hazard (Write After Write) 
# ============================================================
.text
.globl _start
_start:
    # Basic WAW
    addi x1, x0, 5
    addi x1, x0, 9         # WAW
    addi x2, x0, 9
    bne  x1, x2, fail

    # WAW then RAW
    addi x6, x0, 50
    addi x6, x0, 75        # WAW
    addi x7, x6, 25        # RAW on latest x6 :100
    addi x8, x0, 100
    bne  x7, x8, fail

    # Triple WAW
    addi x9,  x0, 11
    addi x9,  x0, 22       # WAW
    addi x9,  x0, 33       # WAW
    addi x10, x0, 33
    bne  x9, x10, fail


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
