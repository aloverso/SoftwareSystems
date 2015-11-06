test.o: test.h test.c
	arm-none-eabi-gcc -mcpu=arm1176jzf-s -fpic -ffreestanding -std=gnu99 -c test.c -O2 -Wall -Wextra
kernel.o: kernel.c test.h
	arm-none-eabi-gcc -mcpu=arm1176jzf-s -fpic -ffreestanding -std=gnu99 -c kernel.c -O2 -Wall -Wextra