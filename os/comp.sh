make kernel.o
make test.o
make tty.o

arm-none-eabi-gcc -mcpu=arm1176jzf-s -fpic -ffreestanding -c boot.S -o boot.o
arm-none-eabi-gcc -T linker.ld -o myos.elf -ffreestanding -O2 -nostdlib boot.o kernel.o test.o tty.o
arm-none-eabi-objcopy myos.elf -O binary myos.bin
