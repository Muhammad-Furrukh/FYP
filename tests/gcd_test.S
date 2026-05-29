# ════════════════════════════════════════════════════
# Bare Metal RISC-V GCD Calculator (RV32I)
#
# Computes GCD of two numbers using Euclidean algorithm
# Input:  a0 = first number, a1 = second number
# Output: a0 = GCD result
# ════════════════════════════════════════════════════

.section .text
.globl _start

_start:
    # Initialize test values
    li      a0, 48          # a0 = 48
    li      a1, 18          # a1 = 18
    
    # Expected GCD = 6
    li      t0, 6           # t0 = expected result
    
    # Call gcd(a0, a1)
    jal     ra, gcd
    
    # Check result
    beq     a0, t0, test_pass
    
test_fail:
    # Write FAIL to address 0x2000
    li      t1, 0x00002000
    sw      a0, 0(t1)       # Store actual result at fail address
    j       _start

test_pass:
    # Write PASS to address 0x1000
    li      t1, 0x00001000
    sw      a0, 0(t1)       # Store result at pass address
    j       _start

# ────────────────────────────────────────────────────
# gcd(a0, a1) - Euclidean Algorithm
#
# While b ≠ 0:
#     temp = b
#     b = a mod b
#     a = temp
# Return a
# ────────────────────────────────────────────────────
gcd:
    # a0 = a (first number)
    # a1 = b (second number)
    
    # While loop condition: if b == 0, we're done
gcd_loop:
    beq     a1, zero, gcd_done
    
    # t0 = a mod b (remainder)
    rem     t0, a0, a1      # t0 = a0 % a1
    
    # a = b
    mv      a0, a1
    
    # b = a mod b
    mv      a1, t0
    
    # Branch back to loop condition
    j       gcd_loop
    
gcd_done:
    # a0 already contains the GCD result
    ret
