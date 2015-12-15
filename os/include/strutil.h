#ifndef STDDEF_H
#define STDDEF_H
#include <stddef.h>
#endif

#ifndef STDINT_H
#define STDINT_H
#include <stdint.h>
#endif

size_t strlen(const char*);
void reset_string(char instr[], int array_size);
void* memset(void*, int, size_t);
void* memmove(void*, const void*, size_t);
void* memcpy(void* __restrict, const void* __restrict, size_t);
int memcmp(const void*, const void*, size_t);
