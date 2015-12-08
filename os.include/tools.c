#include "tools.h"

/* Loop <delay> times in a way that the compiler won't optimize away. */
void delay(int32_t count)
{
	asm volatile("__delay_%=: subs %[count], %[count], #1; bne __delay_%=\n"
		 : : [count]"r"(count) : "cc");
}

char* itos(int n, char ret[])
{
    char const digit[] = "0123456789";
    char* retstring = ret;
    if (n < 0) // if negative
    {
        *retstring++ = '-';
        n *= -1;
    }
    int shifter = n;
    do{ //Move to where representation ends
        ++retstring;
        shifter = shifter/10;
    } while (shifter);
    *retstring = '\0'; // add null terminator
    do { //Move back, inserting digits as u go
        *--retstring = digit[n%10]; // set value at pointer back-by-one slot to digit
        n = n/10; 
    } while(n);
    return ret;
}