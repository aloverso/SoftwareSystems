#include "tools.h"

/* Loop <delay> times in a way that the compiler won't optimize away. */
void delay(int32_t count)
{
	asm volatile("__delay_%=: subs %[count], %[count], #1; bne __delay_%=\n"
		 : : [count]"r"(count) : "cc");
}