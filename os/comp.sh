make strutil
make gpio
make calc
make tools
make kernel
make obj/boot.o
make myos.elf
arm-none-eabi-objcopy myos.elf -O binary myos.bin
