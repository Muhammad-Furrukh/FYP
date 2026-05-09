RISCV_PREFIX ?= riscv64-unknown-elf-
CC = $(RISCV_PREFIX)gcc
OBJCOPY = $(RISCV_PREFIX)objcopy
OBJDUMP = $(RISCV_PREFIX)objdump
CFLAGS = -march=rv32im -mabi=ilp32 -nostdlib -nostartfiles -ffreestanding -O2
LDFLAGS = -T link.ld

TESTS = template add_test branch_test mul_test

.PHONY: all clean

all: $(addsuffix .hex, $(TESTS))

%.elf: %.S link.ld
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $<

%.hex: %.elf
	$(OBJCOPY) -O binary $< $@.bin
	hexdump -v -e '1/4 "%08x\n"' $@.bin > $@
	rm $@.bin
	$(OBJDUMP) -D $< > $(basename $@).dis

clean:
	rm -f *.elf *.hex *.dis *.bin
	
