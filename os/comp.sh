export PREFIX="$HOME/opt/cross"
export PATH="$PREFIX/bin:$PATH"

make gpio.o
make calc.o
make tools.o
make led.o
make kernel.o
make myos.elf
arm-none-eabi-objcopy myos.elf -O binary myos.bin
