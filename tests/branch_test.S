.section .text
.globl _start
_start:
    # Test all branch types
    li x1, 10
    li x2, 20
    
    # BEQ (should not take)
    beq x1, x2, fail
    
    # BNE (should take)
    bne x1, x2, test_blt
    j fail

test_blt:
    # BLT (should take: 10 < 20)
    blt x1, x2, test_bge
    j fail

test_bge:
    # BGE (should not take: 10 < 20)
    bge x1, x2, fail
    
    # BGEU (should take: unsigned equality)
    bgeu x2, x1, test_bltu
    j fail

test_bltu:
    # BLTU (should take: 10 < 20 unsigned)
    bltu x1, x2, pass
    j fail

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
    j end

