make kernel.o
make test.o
arm-none-eabi-gcc -T linker.ld -o myos.elf -ffreestanding -O2 -nostdlib boot.o kernel.o test.o
arm-none-eabi-objcopy myos.elf -O binary myos.bin