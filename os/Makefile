CC=arm-none-eabi-gcc
CFLAGS=-mcpu=arm1176jzf-s -fpic -ffreestanding -std=gnu99
EFLAGS=-I. -O2 -Wall -Wextra
<<<<<<< Updated upstream
DEPS=test.h
#PREFIX?=$(PWD)
#INCLUDEDIR?=$(PREFIX)/include

DEPS=test.h led.h tools.h

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< $(EFLAGS)

myos.elf: *.o
	$(CC) -T linker.ld -o $@ -ffreestanding -O2 -nostdlib *.o -L~/opt/cross/lib/gcc/arm-none-eabi/4.8.4 -lgcc
