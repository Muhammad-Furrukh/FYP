.section .text
.globl _start
_start:
    # TEST 13: OOO Pattern — 1 Stall then 2 OOO Issue

    li   x10, 3
    li   x11, 4
    mul  x1, x10, x11        # x1 = 12 (long latency)


    addi x3, x0, 100         # independent — should issue OOO
    addi x4, x0, 200         # independent — should issue OOO

    li   x28, 100
    bne  x3, x28, fail

    li   x28, 200
    bne  x4, x28, fail
 

pass:
    li   x29, 0x00001000
    li   x30, 0xDEADBEEF
    sw   x30, 0(x29)
    j    end

fail:
    li   x29, 0x00002000
    li   x30, 0xBAADC0DE
    sw   x30, 0(x29)

end:
    j end
