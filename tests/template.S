# tests/template.S
.section .text
.globl _start

_start:
    # Your test program here
    li x1, 5           # Example: load immediate
    li x2, 10
    add x3, x1, x2     # x3 = 15
    
    # Test pass/fail mechanism
    li x28, 0x00001000  # PASS address
    li x29, 0x00002000  # FAIL address
    
    # Check result
    li x30, 15
    beq x3, x30, pass
    j fail

pass:
    sw x0, 0(x28)      # Write to PASS address
    j end

fail:
    sw x0, 0(x29)      # Write to FAIL address
    
end:
    j end               # Loop forever
