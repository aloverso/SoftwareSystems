#ifndef STDBOOL_H
#define STDBOOL_H
#include <stdbool.h>
#endif

#ifndef STDDEF_H
#define STDDEF_H
#include <stddef.h>
#endif

#ifndef STDINT_H
#define STDINT_H
#include <stdint.h>
#endif

#ifndef GPIO_H
#define GPIO_H
#include "gpio.h"
#endif

#ifndef STRUTIL_H
#define STRUTIL_H
#include "strutil.h"
#endif

#ifndef TOOLS_H
#define TOOLS_H
#include "tools.h"
#endif

#include "led.h"
#include "calc.h"

int add(unsigned char a, unsigned char b)
{
	int i = a - '0';
	int j = b - '0';
	return i+j;
}

char* itoa(int i, char b[]){
    char const digit[] = "0123456789";
    char* p = b;
    if(i<0){
        *p++ = '-';
        i *= -1;
    }
    int shifter = i;
    do{ //Move to where representation ends
        ++p;
        shifter = shifter/10;
    }while(shifter);
    *p = '\0';
    do{ //Move back, inserting digits as u go
        *--p = digit[i%10];
        i = i/10;
    }while(i);
    return b;
}
 
#if defined(__cplusplus)
extern "C" /* Use C linkage for kernel_main. */
#endif
int calc(void){
	return 1;
}
void kernel_init(void){
	uart_init();
	uart_puts("Hello, in kernel_init\r\n");
}

void reset_string(char instr[], int array_size){
	int j = 0;
	while (j < array_size){
		instr[j] = 0x00;
		j++;
	}
}

void kernel_main(uint32_t r0, uint32_t r1, uint32_t atags)
{

	(void) r0;
	(void) r1;
	(void) atags;
 
	uart_init();

	/** GPIO Register set */
	//volatile unsigned int *gpio = led_init();

	/* Assign the address of the GPIO peripheral (Using ARM Physical Address) */
    //gpio = (unsigned int*)GPIO_BASE;

    /* Write 1 to the GPIO16 init nibble in the Function Select 1 GPIO
       peripheral register to enable GPIO16 as an output */
    //gpio[LED_GPFSEL] |= (1 << LED_GPFBIT);

	(void) r0;
	(void) r1;
	(void) atags;
 
	uart_init();
	uart_puts("> Hello, World!\r\n");

	int str_len = 80;
	char stringin[str_len];
	int i=0;
	uart_puts("> ");
	int str_comp = 0;

	while (true){
		//art_puts("hello");
		//led_blink(gpio, .25);
		char x = uart_getc();
		//Checks if current str is being written outside size allotment
		if (i > str_len-1){
			uart_puts(stringin);
			reset_string(stringin, i);
		
			uart_puts("Max string len reached\r\n");
			i = 0;
		}
		else if (x == '\r'){
			str_comp = memcmp(stringin, "calc", sizeof("calc"));

			uart_puts("\r\n");
<<<<<<< HEAD:os/include/kernel.c
			str_comp = memcmp(stringin, "calc", sizeof(stringin));

			if (str_comp == 0){
=======

			if (str_comp == 0) {
>>>>>>> 4c4c9a61e643f1a70a5eb898914b87726cad548e:os/kernel.c
				uart_puts("CALC RECOGNIZED!\r\n");
				calc_init();
			}
			else{
				uart_puts(stringin);
				uart_puts("\r\n");
			}
			
			reset_string(stringin, i);
			uart_puts("\r\n");
			uart_puts("> ");
			i = 0;
		}
		else if (x == 127 || x == 8) // backspace character
		{
			uart_putc('\b'); // move cursor back
			uart_putc(' '); // insert space in terminal
			uart_putc('\b'); // move cursor back before space
			stringin[i-1] = 0x00; // replace last char with empty
			i--; // decrement length
		}
		else{
			stringin[i] = x;
			uart_putc(stringin[i]);
			i++;
		}

	}

}