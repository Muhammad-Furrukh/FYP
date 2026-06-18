.section .text
.globl _start

_start:
    li      t0, 0          # statistics counter
    li      t1, 5          # outer loop count

    jal     ra, outer_loop

outer_loop:
    li      t2, 0          # inner loop counter
    li      t4, 13         # loop limit

inner_loop:
    addi    t2, t2, 1

    # Taken when t2 == 6
    li      t3, 6
    beq     t2, t3, taken_branch

    # Taken when t2 == 12
    li      t3, 12
    beq     t2, t3, taken_branch

continue:
    blt     t2, t4, inner_loop

    addi    t1, t1, -1
    bnez    t1, outer_loop

    j       done

taken_branch:
    addi    t0, t0, 1
    j       continue

done:
    li      x29, 0x1000
    li      x30, 0xDEADBEEF
    sw      x30, 0(x29)
    j       end

end:
    j       end