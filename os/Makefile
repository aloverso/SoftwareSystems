CC=arm-none-eabi-gcc
CFLAGS=-mcpu=arm1176jzf-s -fpic -ffreestanding -std=gnu99
EFLAGS=-I. -O2 -Wall -Wextra
#PREFIX?=$(PWD)
#INCLUDEDIR?=$(PREFIX)/include

DEPS=test.h led.h tools.h gpio.h calc.h strutil.h

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< $(EFLAGS)

boot.o: boot.S
	$(CC) $(CFLAGS) -c $< -o $@

myos.elf: *.o
	$(CC) -T linker.ld -o $@ -ffreestanding -O2 -nostdlib *.o -L~/opt/cross/lib/gcc/arm-none-eabi/4.8.4 -lgcc
