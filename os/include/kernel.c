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

#if defined(__cplusplus)
extern "C" /* Use C linkage for kernel_main. */
#endif

#define IRQ_BASIC 0x3F00B200
#define IRQ_PEND1 0x3F00B204
#define IRQ_PEND2 0x3F00B208
#define IRQ_FIQ_CONTROL 0x3F00B210
#define IRQ_ENABLE1 0x3F00B210
#define IRQ_ENABLE2 0x3F00B214
#define IRQ_ENABLE_BASIC 0x3F00B218
#define IRQ_DISABLE1 0x3F00B21C
#define IRQ_DISABLE2 0x3F00B220
#define IRQ_DISABLE_BASIC 0x3F00B224

volatile unsigned int rxhead;
volatile unsigned int rxtail;
#define RXBUFMASK 0xFFF
volatile unsigned char rxbuffer[RXBUFMASK+1];

#define str_len 80
char stringin[str_len];
//stringin[79] = '\0';
volatile unsigned int index;

volatile unsigned int CALC_ON;

extern void enable_irq ( void );
extern void enable_fiq ( void );

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

void parse_input (char *input)
{
	//uart_puts(stringin);
	//uart_puts("\r\n");
	if (CALC_ON)
	{
		if (memcmp(input, "stop", sizeof("stop")) == 0) {
			uart_puts("CALC STOP!\r\n");
			CALC_ON = 0;
		}
		else{
			uart_puts(stringin);
			uart_puts("\r\n");
		}
	}
	else
	{
		if (memcmp(input, "calc", sizeof("calc")) == 0) {
			uart_puts("CALC RECOGNIZED!\r\n");
			CALC_ON = 1;
			//calc_init();
			//*calc = 1;
		}
		if (memcmp(input, "blink", sizeof("blink")) == 0) {
			uart_puts("LEDDDDDD!\r\n");
			//led_blink(gpio, 1);
		}
		if (memcmp(input, "stop", sizeof("stop")) == 0) {
			uart_puts("LEDDDDDD STOP!\r\n");
			//led_blink(gpio, 0);
		}
		else{
			uart_puts(stringin);
			uart_puts("\r\n");
			// char str[16];
			// int c = -146;
			// uart_puts(itos(c, str));
		}
	}
}

void reset_string(char instr[], int array_size){
	int j = 0;
	while (j < array_size){
		instr[j] = 0x00;
		j++;
	}
}

void c_irq_handler ( void )
{
    unsigned int rb,rc;

    //an interrupt has occurred, find out why
    while(1) //resolve all interrupts to uart
    {
        rb=GET32(AUX_MU_IIR_REG);
        if((rb&1)==1) break; //no more interrupts
        if((rb&6)==4)
        {
            //receiver holds a valid byte
            rc=GET32(AUX_MU_IO_REG); //read byte from rx fifo
            rxbuffer[rxhead]=rc&0xFF;
            rxhead=(rxhead+1)&RXBUFMASK;
            char x = rxbuffer[rxtail];
            //uart_putc(x);

            if (x != 0)
            {

            	if (index > str_len - 1)
            	{
            		uart_puts(stringin);
					reset_string(stringin, index);
				
					uart_puts("Max string len reached\r\n");
					index = 0;
            	}
            	// if enter is pressed
				else if (x == '\r')
				{
					uart_puts("\r\n");
					parse_input(stringin);

					reset_string(stringin, index);
					uart_puts("> ");
					index = 0;
				}
				else{
					stringin[index] = x;
					uart_putc(stringin[index]);
					index++;
				}

	   //          stringin[index] = x;
				// // if (x == 0) {
				// // 	uart_puts("x is null");
				// // }
				// //stringin[0] = x;
				// if (stringin[0] == 0) {
				// 	uart_puts("stringin[0] is null");
				// }
				// uart_puts(stringin);
				// uart_puts("\r\n");
				// index++;

				// char str[16];
				
				// //uart_puts(itoa(index, str));
			}

            rxtail=(rxtail+1)&RXBUFMASK;
        }
    }

}

void kernel_init(void){
	uart_init();
	uart_puts("Hello, in kernel_init\r\n");
}



int kernel_main(unsigned int earlypc)
{
	// (void) r0;
	// (void) r1;
	// (void) atags;

	PUT32(IRQ_DISABLE1,1<<29);

    uart_init();

    PUT32(IRQ_ENABLE1,1<<29);
 
    enable_irq();

	uart_puts("> Hello, World!\r\n");
	uart_puts("> ");

    volatile unsigned int *gpio = led_init();

    int freq = 200000;
    index = 0;
    CALC_ON = 0;
    reset_string(stringin, 80);


    while(1)
    {
    	int i;
	    for(i=0;i<freq;i++) { dummy(i); };
	    // turn led OFF
	    gpio[LED_GPCLR] = (1 << LED_GPIO_BIT);
	    
	    i=0;
	    for(i=0;i<freq;i++) { dummy(i); };

	    // turn led ON
	    gpio[LED_GPSET] = (1 << LED_GPIO_BIT);
    }
    return(0);

	// /** GPIO Register set */

	// /* Assign the address of the GPIO peripheral (Using ARM Physical Address) */
 //    //gpio = (unsigned int*)GPIO_BASE;

 //    /* Write 1 to the GPIO16 init nibble in the Function Select 1 GPIO
 //       peripheral register to enable GPIO16 as an output */
 //    //gpio[LED_GPFSEL] |= (1 << LED_GPFBIT);

	// (void) r0;
	// (void) r1;
	// (void) atags;
 
	// uart_init();
	// uart_puts("> Hello, World!\r\n");

	// int str_len = 80;
	// char stringin[str_len];
	// int i=0;
	// uart_puts("> ");

	// int x = 0;
	// int *calc = &x;

	// while (true){
	// 	//art_puts("hello");
	// 	//led_blink(gpio, .25);
	// 	char x = uart_getc();
	// 	//Checks if current str is being written outside size allotment
	// 	if (i > str_len-1){
	// 		uart_puts(stringin);
	// 		reset_string(stringin, i);
		
	// 		uart_puts("Max string len reached\r\n");
	// 		i = 0;
	// 	}
	// 	// if enter is pressed
	// 	else if (x == '\r')
	// 	{
	// 		uart_puts("\r\n");

	// 		if (memcmp(stringin, "calc", sizeof("calc")) == 0) {
	// 			uart_puts("CALC RECOGNIZED!\r\n");
	// 			calc_init();
	// 			*calc = 1;
	// 		}
	// 		if (memcmp(stringin, "blink", sizeof("blink")) == 0) {
	// 			uart_puts("LEDDDDDD!\r\n");
	// 			led_blink(gpio, 1);
	// 		}
	// 		if (memcmp(stringin, "stop", sizeof("stop")) == 0) {
	// 			uart_puts("LEDDDDDD STOP!\r\n");
	// 			led_blink(gpio, 0);
	// 		}
	// 		else{
	// 			uart_puts(stringin);
	// 			uart_puts("\n");
	// 			// char str[16];
	// 			// int c = -146;
	// 			// uart_puts(itos(c, str));
	// 		}
			
	// 		reset_string(stringin, i);
	// 		uart_puts("> ");
	// 		i = 0;
	// 	}
	// 	else if (x == 127 || x == 8) // backspace character
	// 	{
	// 		if (i>0)
	// 		{
	// 			uart_putc('\b'); // move cursor back
	// 			uart_putc(' '); // insert space in terminal
	// 			uart_putc('\b'); // move cursor back before space
	// 			stringin[i-1] = 0x00; // replace last char with empty
	// 			i--; // decrement length
	// 		}
	// 	}
	// 	else{
	// 		stringin[i] = x;
	// 		uart_putc(stringin[i]);
	// 		i++;
	// 	}

	// }

}
