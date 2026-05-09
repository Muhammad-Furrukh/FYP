.section .text
.globl _start
_start:
    # Test ADD, SUB, AND, OR, XOR
    li x1, 100
    li x2, 50
    add x3, x1, x2      # 150
    sub x4, x1, x2      # 50
    and x5, x1, x2      # test bitwise
    or  x6, x1, x2
    xor x7, x1, x2
    
    # Verify results
    li x28, 150
    bne x3, x28, fail
    li x28, 50
    bne x4, x28, fail
    
    j pass
    
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
