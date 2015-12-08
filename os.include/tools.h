#ifndef STDINT_H
#define STDINT_H
#include <stdint.h>
#endif

/* Loop <delay> times in a way that the compiler won't optimize away. */
void delay(int32_t count);

char* itos(int n, char ret[]);
