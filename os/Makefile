CC=arm-none-eabi-gcc
CFLAGS=-mcpu=arm1176jzf-s -fpic -ffreestanding -std=gnu99
EFLAGS=-I. -O2 -Wall -Wextra
DEPS=test.h

test.o: test.h test.c
	$(CC) $(CFLAGS) -c test.c $(EFLAGS)
kernel.o: kernel.c test.h
	$(CC) $(CFLAGS) -c kernel.c $(EFLAGS)

