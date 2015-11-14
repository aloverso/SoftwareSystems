# Set up basic variables:
CC = gcc
CFLAGS = -c -Wall
LDFLAGS =
 
# List of sources:
SOURCES = sophie_glib.c
OBJECTS = $(SOURCES:.c=.o)
 
# Name of executable target:
EXECUTABLE = s
 
# MRPT specific flags:
# Here we invoke "pkg-config" passing it as argument the list of the
# MRPT libraries needed by our program (see available libs
# with "pkg-config --list-all | grep mrpt").
#
CFLAGS += `pkg-config --cflags glib-2.0`
LDFLAGS += `pkg-config --libs glib-2.0`
 
all: $(SOURCES) $(EXECUTABLE)
 
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ $(LDFLAGS)
 
.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
 
clean:
	rm $(OBJECTS) $(EXECUTABLE)
