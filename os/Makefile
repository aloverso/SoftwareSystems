CC=arm-none-eabi-gcc
CFLAGS=-mcpu=arm1176jzf-s -fpic -ffreestanding -std=gnu99
INCLUDE=-I./include
IDIR=./include
ODIR=./obj

EFLAGS=$(INCLUDE) -O2 -Wall -Wextra
#PREFIX?=$(PWD)
#INCLUDEDIR?=$(PREFIX)/include

_DEPS=test.h led.h tools.h gpio.h calc.h strutil.h
DEPS=$(patsubst %, $(IDIR)/%,$(_DEPS))

_OBJ = strutil.o gpio.o calc.o tools.o strutil.o kernel.o
OBJ=$(patsubst %, $(ODIR)/%,$(_OBJ))

PREFIX:=$(HOME)/opt/cross
PATH:=$(PREFIX)/bin:$(PATH)

all: 
	# export $(PREFIX)
	# export $(PATH)
	$(ODIR)/boot.o
	strutil
	gpio
	calc
	tools
	kernel
	# $(ODIR)/*.o 
	# myos.elf

#DEPS=test.h led.h tools.h gpio.h calc.h strutil.h

%: $(IDIR)/%.c $(DEPS)
	$(CC) $(CFLAGS) -c $< $(EFLAGS) -o $(ODIR)/$@.o

$(ODIR)/boot.o: boot.S
	$(CC) $(CFLAGS) -c $< -o $@

myos.elf: $(OBJ) $(ODIR)/boot.o
	$(CC) -T linker.ld -o $@ -ffreestanding -O2 -nostdlib $(ODIR)/*.o -L~/opt/cross/lib/gcc/arm-none-eabi/4.8.4 -lgcc

.PHONY: clean

clean:
	rm -f $(ODIR)