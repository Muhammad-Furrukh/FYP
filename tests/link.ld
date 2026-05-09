OUTPUT_ARCH(riscv)
ENTRY(_start)

MEMORY
{
    IMEM (rx)  : ORIGIN = 0x00000000, LENGTH = 16K
    DMEM (rw)  : ORIGIN = 0x00001000, LENGTH = 16K
}

SECTIONS
{
    .text : {
        *(.text)
        *(.text.*)
    } > IMEM
    
    .data : {
        *(.data)
        *(.data.*)
    } > DMEM
    
    .bss : {
        *(.bss)
        *(.bss.*)
    } > DMEM
}
