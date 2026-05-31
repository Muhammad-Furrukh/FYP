# ============================================================
# test5_waw.s — WAW Hazard
# Testbench: in-order commit check
# ============================================================
.text
.globl _start
_start:
    # Basic WAW
    addi x1, x0, 5
    addi x1, x0, 9
    addi x2, x0, 9
    bne  x1, x2, fail

    # WAW with consumer
    addi x3, x0, 100
    addi x3, x0, 200
    addi x4, x3, 0
    addi x5, x0, 200
    bne  x4, x5, fail

  

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