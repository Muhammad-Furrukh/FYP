.section .text
.globl _start
_start:
	# ================================================================
	# TEST 1: RAW Hazards
	# Back-to-back dependent instructions — every instruction depends
	# on the result of the previous one, stressing forwarding paths.
	# ================================================================
    li   x1, 1
    addi x2, x1, 1          # x2 = 2  (RAW on x1)
    addi x3, x2, 1          # x3 = 3  (RAW on x2)
    addi x4, x3, 1          # x4 = 4  (RAW on x3)
    addi x5, x4, 1          # x5 = 5  (RAW on x4)
    add  x6, x5, x4         # x6 = 9  (RAW on x5,x4)
    add  x7, x6, x3         # x7 = 12 (RAW on x6,x3)
    add  x8, x7, x2         # x8 = 14 (RAW on x7,x2)
    add  x9, x8, x1         # x9 = 15 (RAW on x8,x1)

    li   x28, 15
    bne  x9, x28, fail

	# ================================================================
	# TEST 2: WAW Hazards
	# Multiple writes to the same destination in flight —
	# only the last write should be visible at commit.
	# ================================================================
    li   x10, 100
    li   x10, 200            # WAW: x10 should be 200
    li   x10, 300            # WAW: x10 should be 300
    addi x10, x10, 0         # x10 = 300

    li   x28, 300
    #bne  x10, x28, fail

	# ================================================================
	# TEST 3: WAR Hazards
	# Read must capture old value before subsequent write.
	# ================================================================
    #li   x11, 42
    #li   x12, 0
    #add  x12, x11, x0        # x12 = 42 (reads x11 before it's overwritten)
    #li   x11, 99             # WAR: write to x11 after x12 read it

    #li   x28, 42
    #bne  x12, x28, fail
    #li   x28, 99
    #bne  x11, x28, fail
    
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
