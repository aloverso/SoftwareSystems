#include <stdint.h>

/* Loop <delay> times in a way that the compiler won't optimize away. */
void delay(int32_t count);