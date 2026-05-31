.text
.globl _start
_start:
    # ADD
    addi x1, x0, 10
    addi x2, x0, 5
    add  x3, x1, x2
    addi x4, x0, 15
    bne  x3, x4, fail

    # SUB
    sub  x5, x1, x2
    bne  x5, x2, fail

    # AND
    addi x6, x0, 255
    addi x7, x0, 15
    and  x8, x6, x7
    bne  x8, x7, fail

    # OR
    addi x9,  x0, 15
    addi x10, x0, 112
    or   x11, x9, x10
    addi x12, x0, 127
    bne  x11, x12, fail

  

    # SLT true
    addi x16, x0, 3
    addi x17, x0, 7
    slt  x18, x16, x17
    addi x19, x0, 1
    bne  x18, x19, fail
    
    # XOR
    addi x13, x0, 255
    addi x14, x0, 255
    xor  x15, x13, x14
    bne  x15, x0, fail


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
