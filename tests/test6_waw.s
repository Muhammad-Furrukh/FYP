# ============================================================
# test6_war.s — WAR Hazard (Write After Read)
# Reader must use OLD physical tag before writer updates RAT
# ============================================================
.text
.globl _start
_start:

    # Basic WAR
    addi x1, x0, 10        # x1 : px = 10
    addi x2, x1, 5         # reader: rs1=px : x2 = 15
    addi x1, x0, 99        # writer: x1 : px = 99  (WAR!)
    addi x3, x0, 15
    bne  x2, x3, fail      # x2 must be 15, not 104

    # WAR with MUL
    addi x4, x0, 7
    mul  x5, x4, x4        # reader: rs1=rs2=p_old : 49
    addi x4, x0, 100       # writer: x4 : new tag (WAR)
    addi x6, x0, 49
    bne  x5, x6, fail      # x5 must be 49

    # WAR chain
    addi x7, x0, 3
    addi x8, x7, 2         # reader1: x8 = 5
    addi x9, x7, 4         # reader2: x9 = 7
    addi x7, x0, 50        # writer: WAR
    addi x10, x0, 5
    bne  x8, x10, fail
    addi x10, x0, 7
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
