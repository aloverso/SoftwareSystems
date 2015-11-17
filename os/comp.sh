make gpio.o
make tools.o
make led.o
make kernel.o
make myos.elf
arm-none-eabi-objcopy myos.elf -O binary myos.bin
