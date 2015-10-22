CC=gcc
CFLAGS=-I.
DEPS=testlibrary.h
OBJ=testlibrary.o testmain.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

tester: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)