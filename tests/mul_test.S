.section .text
.globl _start
_start:
    # Test MUL instructions
    li x1, 10
    li x2, 20
    mul x3, x1, x2      # 200
    mulh x4, x1, x2     # high bits (should be 0)
    mulhu x5, x1, x2    # unsigned high
    
    li x28, 200
    bne x3, x28, fail
    beq x4, x0, pass    # high bits should be 0
    
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

