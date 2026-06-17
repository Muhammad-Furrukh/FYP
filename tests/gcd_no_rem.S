.section .text
.globl _start

_start:
    # Load test values
    li      a0, 48          # a0 = 48 (first number)
    li      a1, 18          # a1 = 18 (second number)
    
    # Call GCD function
    jal     ra, gcd
    
    # Infinite loop with result in a0
    j       _start

gcd:

gcd_loop:
    # Check if a1 (b) == 0 → done
    beq     a1, zero, gcd_done
    
    # Check if a0 < a1 → swap needed
    blt     a0, a1, gcd_swap
    
    # a0 >= a1: subtract
    # a0 = a0 - a1, then loop
    sub     a0, a0, a1
    j       gcd_loop

gcd_swap:
    # a0 < a1: swap using t0 as temp
    add     t0, a0, zero    # t0 = a0
    add     a0, a1, zero    # a0 = a1
    add     a1, t0, zero    # a1 = t0
    j       gcd_loop

gcd_done:
    # Result in a0, return to caller
    ret