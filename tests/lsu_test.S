.section .text
.globl _start
_start: 
    # Setup base address for memory operations (SAFE ADDRESS)
    li x10, 0x4000              
    li x11, 1
    
    # Initialize the memory locations to avoid loading uninitialized garbage
    sw x11, 0(x10)
    sw x11, 4(x10)
    sw x11, 8(x10)
    sw x11, 12(x10)
    
    li x28, 44                  # 44 iterations * 11 instrs/loop = 484 instrs
    jal ra, loop
    
    j pass
    
loop:
    beq x28, zero, done
    
    # Dependency Chain: Stresses LSQ Store-to-Load Forwarding
    lw  x12, 0(x10)             # Load A
    sw  x12, 4(x10)             # Store B 
    
    lw  x13, 4(x10)             # Load B (Must forward from STB)
    sw  x13, 8(x10)             # Store C 
    
    lw  x14, 8(x10)             # Load C (Must forward from STB)
    sw  x14, 12(x10)            # Store D 
    
    lw  x15, 12(x10)            # Load D (Must forward from STB)
    sw  x15, 0(x10)             # Store A (Circles back to top of loop)
    
    addi x28, x28, -1
    j loop
done:
    ret

pass:
    li x29, 0x00001000
    li x30, 0xDEADBEEF          # PASS signature
    sw x30, 0(x29)              # Triggers the tb pass condition
    j end

end:
    j end
