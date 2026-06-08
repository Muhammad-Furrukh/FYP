.section .text
.globl _start
_start:	
	li x1, 1
	li x28, 200
	jal ra, loop
	
	j pass
    
loop:
	beq x28, zero, done
	
	addi x2, x1, 1          # x2 = 2  (RAW on x1)
    addi x3, x2, 1          # x3 = 3  (RAW on x2)
    addi x4, x3, 1          # x4 = 4  (RAW on x3)
    addi x5, x4, 1          # x5 = 5  (RAW on x4)
    add  x6, x5, x4         # x6 = 9  (RAW on x5,x4)
    add  x7, x6, x3         # x7 = 12 (RAW on x6,x3)
    add  x8, x7, x2         # x8 = 14 (RAW on x7,x2)
    add  x9, x8, x1         # x9 = 15 (RAW on x8,x1)
    
    addi x28, x28, -1
	j loop
done:
	ret

pass:
    li x29, 0x00001000
    li x30, 0xDEADBEEF    # PASS signature
    sw x30, 0(x29)
    j end

end:
    j end
