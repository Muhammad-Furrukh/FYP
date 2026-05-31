# ============================================================
# test4_raw.s — RAW Hazard (Read After Write)
# ============================================================
.text
.globl _start
_start:
    # Simple RAW
    addi x1, x0, 10
    addi x2, x1, 5         # RAW on x1 → 15
    addi x3, x0, 15
    bne  x2, x3, fail

    # Chain RAW
    addi x1, x0, 1
    addi x2, x1, 1         # 2
    addi x3, x2, 1         # 3
    addi x4, x3, 1         # 4
    addi x5, x0, 4
    bne  x4, x5, fail

    # MUL RAW (long latency)
    addi x1, x0, 6
    addi x2, x0, 7
    mul  x3, x1, x2
    addi x4, x3, 8         # RAW on MUL → 50
    addi x5, x0, 50
    bne  x4, x5, fail

    # ADD then MUL RAW
    addi x1, x0, 5
    addi x2, x1, 3         # 8
    mul  x3, x2, x2        # RAW → 64
    addi x4, x0, 64
    bne  x3, x4, fail

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
