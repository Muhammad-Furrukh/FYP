.section .text
.globl _start
_start:
	# ================================================================
	# TEST 7: Branch Misprediction + Flush
	# Force a mispredicted branch: speculatively execute wrong path,
	# then flush and verify correct path result is used.
	# ================================================================

    # Case 1: branch predicted not-taken, actually taken
    li   x1, 5
    li   x2, 5
    li   x3, 0               # will be set to 1 on correct path
    beq  x1, x2, .Ltaken1    # should be taken
    li   x3, 99              # wrong path — must be flushed

	.Ltaken1:
		addi x3, x3, 1           # correct path: x3 = 1
		li   x28, 1
		bne  x3, x28, fail

    # Case 2: nested dependent computation after flush
    li   x1, 10
    li   x2, 20
    li   x4, 0
    blt  x1, x2, .Ltaken2    # taken: x1 < x2
    li   x4, 99              # wrong path

	.Ltaken2:
		add  x4, x1, x2          # x4 = 30
		li   x28, 30
		bne  x4, x28, fail

    # Case 3: not-taken branch (fall through)
    li   x1, 20
    li   x2, 10
    li   x5, 0
    blt  x1, x2, .Ltaken3    # not taken: x1 > x2
    li   x5, 7               # fall-through — should execute
    j    .Lafter3
	
	.Ltaken3:
		li   x5, 99              # wrong path — must not execute
		
	.Lafter3:
		li   x28, 7
		bne  x5, x28, fail

    # Case 4: loop — exercises repeated flush + refill of ROB
    li   x1, 0
    li   x2, 8
	
	.Lloop:
		addi x1, x1, 1
		blt  x1, x2, .Lloop     # loops 7 times
		li   x28, 8
		bne  x1, x28, fail

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

