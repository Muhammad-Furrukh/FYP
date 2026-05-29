RISCV_PREFIX ?= riscv64-unknown-elf-
CC      = $(RISCV_PREFIX)gcc
OBJCOPY = $(RISCV_PREFIX)objcopy
OBJDUMP = $(RISCV_PREFIX)objdump
CFLAGS  = -march=rv32im -mabi=ilp32 -nostdlib -nostartfiles -ffreestanding -O2
LDFLAGS = -T link.ld
SRCS  = $(wildcard *.S) $(wildcard *.s)
TESTS = $(patsubst %.S,%.hex,$(filter %.S,$(SRCS))) \
        $(patsubst %.s,%.hex,$(filter %.s,$(SRCS)))
.PHONY: all clean
all: $(TESTS)
%.elf: %.S link.ld
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $<
%.elf: %.s link.ld
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $<
%.hex: %.elf
	$(OBJCOPY) -O binary $< $@.bin
	hexdump -v -e '1/4 "%08x\n"' $@.bin > $@
	rm $@.bin
	$(OBJDUMP) -D $< > $(basename $@).dis
clean:
	rm -f *.elf *.hex *.dis *.bin *.o