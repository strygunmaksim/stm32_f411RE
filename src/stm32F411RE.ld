MEMORY
{
    FLASH (RX) : ORIGIN = 0x08000000, LENGTH = 0x80000
    SRAM  (RW) : ORIGIN = 0x02000000, LENGTH = 0x20000
}

SECTIONS
{
    .text :
    {
        KEEP(*(.vectors))
        *(.text*)
        *(.rodata*)
    } > FLASH

    .data :
    {
        _start_data = .;
        *(data*)
        _end_data = .;
    } > SRAM AT > FLASH

    _start_idata = LOADADDR(.data);

    .bss :
    {
        _start_bss = .;
        *(bss*)
        _end_bss = .;
    } > SRAM

    _end_stack = ORIGIN(SRAM) + LENGTH(SRAM);
}