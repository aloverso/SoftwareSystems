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

_OBJ = test.o led.o tools.o gpio.o calc.o strutil.o
OBJ=$(patsubst %, $(ODIR)/%,$(_OBJ))

PREFIX:=$(HOME)/opt/cross
PATH:=$(PREFIX)/bin:$(PATH)

all: 
	# export $(PREFIX)
	# export $(PATH)
	$(ODIR)/boot.o
	# $(ODIR)/*.o 
	# myos.elf

#DEPS=test.h led.h tools.h gpio.h calc.h strutil.h

%: $(IDIR)/%.c $(DEPS)
	$(CC) $(CFLAGS) -c $< $(EFLAGS) -o $(ODIR)/$@.o

$(ODIR)/boot.o: boot.S
	$(CC) $(CFLAGS) -c $< -o $@

myos.elf: $(ODIR)/*.o
	$(CC) -T linker.ld -o $@ -ffreestanding -O2 -nostdlib *.o -L~/opt/cross/lib/gcc/arm-none-eabi/4.8.4 -lgcc

.PHONY: clean

clean:
	rm -f $(ODIR)