# tests/template.S
.section .text
.globl _start

_start:
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

pass:
    li x29, 0x00001000
    li x30, 0xDEADBEEF    # PASS signature
    sw x30, 0(x29)
    j end

fail:
    li x29, 0x00002000
    li x30, 0xBAADC0DE    # FAIL signature  
    sw x30, 0(x29)
    
end:
    j end               # Loop forever
