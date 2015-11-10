CC=arm-none-eabi-gcc
CFLAGS=-mcpu=arm1176jzf-s -fpic -ffreestanding -std=gnu99
EFLAGS=-I. -O2 -Wall -Wextra
DEPS=test.h

test.o: test.h test.c
<<<<<<< HEAD
	arm-none-eabi-gcc -mcpu=arm1176jzf-s -fpic -ffreestanding -std=gnu99 -c test.c -O2 -Wall -Wextra
tty.o: tty.h tty.c vga.h
	arm-none-eabi-gcc -mcpu=arm1176jzf-s -fpic -ffreestanding -std=gnu99 -c tty.c -O2 -Wall -Wextra
kernel.o: kernel.c test.h tty.h vga.h
	arm-none-eabi-gcc -mcpu=arm1176jzf-s -fpic -ffreestanding -std=gnu99 -c kernel.c -O2 -Wall -Wextra
=======
	$(CC) $(CFLAGS) -c test.c $(EFLAGS)
kernel.o: kernel.c test.h
	$(CC) $(CFLAGS) -c kernel.c $(EFLAGS)

>>>>>>> 785df730c9566b270753706ddef0b0eec7d1404d
