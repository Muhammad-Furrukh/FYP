.section .text
.globl _start
_start:
# ================================================================
# TEST 6: Load/Store Ordering
# Stores must be visible to subsequent loads at the same address.
# ================================================================
    li   x20, 0x00003000     # base address for memory tests

    li   x1, 0xABCD1234
    sw   x1, 0(x20)
    lw   x2, 0(x20)          # must see 0xABCD1234
    li   x28, 0xABCD1234
    bne  x2, x28, fail

    # Back-to-back store then load — same address
    li   x1, 0x11111111
    sw   x1, 4(x20)
    li   x1, 0x22222222
    sw   x1, 4(x20)          # second store must win
    lw   x2, 4(x20)
    li   x28, 0x22222222
    bne  x2, x28, fail

    # Store-to-load forwarding: store then immediate load
    li   x1, 0xDEAD0000
    sw   x1, 8(x20)
    lw   x3, 8(x20)          # should forward from store buffer
    li   x28, 0xDEAD0000
    bne  x3, x28, fail

    # Byte and halfword stores
    li   x1, 0x000000FF
    sb   x1, 12(x20)
    lbu  x2, 12(x20)
    li   x28, 0xFF
    bne  x2, x28, fail

    li   x1, 0x00001234
    sh   x1, 14(x20)
    lhu  x2, 14(x20)
    li   x28, 0x1234
    bne  x2, x28, fail
    
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
