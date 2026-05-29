# ============================================================
# test7_rob_full.s — ROB Full Stall Test
# ROB size = 4 (for this test :) )  
# ============================================================
.text
.globl _start
_start:
    addi x1, x0, 2
    addi x2, x0, 3

    # 6 dependent MULs — ROB (size=4)
    # slots 1-4: ROB full
    # slots 5-6: dispatch stall 
    # after drain : resume

    mul  x3, x1, x2        # slot 1
    mul  x4, x3, x2        # slot 2 — RAW on x3
    mul  x5, x4, x2        # slot 3 — RAW on x4
    mul  x6, x5, x2


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
