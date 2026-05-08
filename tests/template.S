# tests/template.S
.section .text
.globl _start

_start:
    # Your test program here
    li x1, 5           # Example: load immediate
    li x2, 10
    add x3, x1, x2     # x3 = 15
    
    # Check result
    li x30, 15
    beq x3, x30, pass
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
    j end               # Loop forever
