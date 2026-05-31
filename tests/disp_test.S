.section .text
.globl _start
_start:
	# ================================================================
	# TEST 4: Superscalar Dispatch — independent instruction pairs
	# These should dispatch and execute in parallel each cycle.
	# ================================================================
    li   x1, 10
    li   x2, 20              # independent of x1 — parallel dispatch
    li   x3, 30
    li   x4, 40              # independent — parallel dispatch
    add  x5, x1, x2          # x5 = 30
    add  x6, x3, x4          # x6 = 70  — parallel dispatch with above
    add  x7, x5, x6          # x7 = 100

    li   x28, 100
    bne  x7, x28, fail
    
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
