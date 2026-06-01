.section .text
.globl _start
_start:

    li   x11, 42
    li   x12, 0
    add  x12, x11, x0        # x12 = 42 (reads x11 before it's overwritten)
    li   x11, 99             # WAR: write to x11 after x12 read it

    li   x28, 42
    bne  x12, x28, fail
    li   x28, 99
    bne  x11, x28, fail

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
