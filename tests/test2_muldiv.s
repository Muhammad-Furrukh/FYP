.section .text
.globl _start
_start:
	# ================================================================
	# TEST 5: MUL/DIV (M extension)
	# ================================================================
    li   x1, 13
    li   x2, 7
    mul  x3, x1, x2          # x3 = 91
    li   x28, 91
    bne  x3, x28, fail

    li   x1, 100
    li   x2, 7
    div  x3, x1, x2          # x3 = 14
    li   x28, 14
    bne  x3, x28, fail

    rem  x4, x1, x2          # x4 = 2
    li   x28, 2
    bne  x4, x28, fail

    # mulh: signed upper 32 bits of 64-bit product
    li   x1, 0x7FFFFFFF      # MAX_INT
    li   x2, 2
    mulh x3, x1, x2          # upper 32 bits of (MAX_INT * 2) = 0x00000000_FFFFFFFE → upper = 0
    li   x28, 0
    bne  x3, x28, fail

    # Negative division
    li   x1, -13
    li   x2, 3
    div  x3, x1, x2          # x3 = -4 (truncates toward zero)
    li   x28, -4
    bne  x3, x28, fail

    rem  x4, x1, x2          # x4 = -1
    li   x28, -1
    bne  x4, x28, fail
    
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

