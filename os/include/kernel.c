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

#ifndef LED_H
#define LED_H
#include "led.h"
#endif

#ifndef CALC_H
#define CALC_H
#include "calc.h"
#endif

#if defined(__cplusplus)
extern "C" /* Use C linkage for kernel_main. */
#endif

// define the register addresses for interrupts
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

// these variables keep track of the buffer state for interrupts
volatile unsigned int rxhead;
volatile unsigned int rxtail;
#define RXBUFMASK 0xFFF
volatile unsigned char rxbuffer[RXBUFMASK+1];

// for the led
volatile unsigned int freq; // keep track of counts for led
#define counts 550000 // approx one second frequency

// for the uart command line parsing
#define str_len 80
char stringin[str_len];
volatile unsigned int index;

volatile unsigned int CALC_ON; // if in calculator program

// declarations to enable the interrupts - defined in assembly
extern void enable_irq ( void );
extern void enable_fiq ( void );

// this function will print a help menu to tell what commands it will recognize
void help_menu ()
{
	uart_puts ("help - show this help menu\r\n");
	uart_puts ("calc - start calculator program\r\n");
	uart_puts ("stop - if in calculator, quit program\r\n");
	uart_puts ("blink x - blink led at x hertz; x is 2 chars max\r\n");
}

// the function is called if enter is pressed
// it will parse the input in the global stringin variable
// then do all necessary actions
void parse_input ()
{
	// if help, display help menu
	if (memcmp(stringin, "help", sizeof("help")) == 0) 
	{
		help_menu ();
	}

	// if calc is on, all we can do is run calculator or stop
	else if (CALC_ON)
	{
		if (memcmp(stringin, "stop", sizeof("stop")) == 0) {
			uart_puts("Quit Calculator\r\n");
			CALC_ON = 0;
		}
		else{
			do_math(stringin, index);
		}
	}

	// if not in calc, can do other commands
	else
	{
		// this gets the first 5 characters of the input
		// in order to test if they match "blink"
		char firstfive[6];
		int a;
		for (a=0; a<5; a++)
		{
			firstfive[a] = stringin[a];
		}
		firstfive[5] = '\0';

		if (memcmp(stringin, "calc", sizeof("calc")) == 0) {
			uart_puts("Start Calculator Program!\r\n");
			CALC_ON = 1;
		}

		else if (memcmp(firstfive, "blink", sizeof("blink")) == 0) {
			char requested_freq[2]; // no 100+ hz frequencies
			reset_string(requested_freq, 2);
			int b;
			int is_decimal = 0;

			// gets the two characters after the space, for frequency
			for (b=0; b<2; b++)
			{
				char digit = stringin[6+b];
				if (digit >= 48 && digit <= 57) // is a number
				{
					requested_freq[b] = digit;
				}
				else if (digit == 0) 
				{
					requested_freq[b] = '\0';
				}
				else if (b==0 && digit == 46) // is a decimal point
				{
					is_decimal = 1;
				}
				else
				{
					uart_puts("Not valid frequency\r\n");
					return;
				}
			}
			uart_puts ("Blinking LED at ");
			if (is_decimal)
			{ 
				uart_puts (".");
				uart_putc (requested_freq[1]);
			}
			else { uart_puts (requested_freq); }
			uart_puts(" Hertz\r\n");
			float freq_int;
			if (is_decimal)
			{
				// first is decimal, only convert second num
				char single_digit[1];
				single_digit[0] = requested_freq[1];
				freq_int = (float) convert_to_int(single_digit);
				freq_int = freq_int / 10.0; // account for decimal
			}
			else
			{
				freq_int = (float) convert_to_int(requested_freq);
			}
			if (freq_int == 0)
			{
				freq = (float) 1000000000; // basically infinity
			}
			else
			{
				// update led frequency
				freq = counts / freq_int;
			}
		}

		// if not recognized, just echo command
		else {
			uart_puts(stringin);
			uart_puts("\r\n");
		}
	}
}

// this is the interrupt handler function
// gets called by the interrupt in assembly
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

            // only do stuff if it's a valid character
            if (x != 0)
            {
            	// if string array too long, reset
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
					parse_input();

					reset_string(stringin, index);
					uart_puts("> ");
					index = 0;
				}
				else if (x == 127 || x == 8) // backspace character
				{
					if (index>0)
					{
						uart_putc('\b'); // move cursor back
						uart_putc(' '); // insert space in terminal
						uart_putc('\b'); // move cursor back before space
						stringin[index-1] = 0x00; // replace last char with empty
						index--; // decrement length
					}
				}
				// if nothing else, just add character
				else
				{
					stringin[index] = x;
					uart_putc(stringin[index]);
					index++;
				}
			}
			// keep track of which interrupt we processed
            rxtail=(rxtail+1)&RXBUFMASK;
        }
    }
}

// THE MAIN!
int kernel_main(unsigned int earlypc)
{
	// this initializes interrupts and uart
	PUT32(IRQ_DISABLE1,1<<29);

    uart_init();

    PUT32(IRQ_ENABLE1,1<<29);
 
    enable_irq();

    // start off the CLI
	uart_puts("> Hello, World!\r\n");
	uart_puts("> ");

    volatile unsigned int *gpio = led_init();

    // initialize
    index = 0;
    CALC_ON = 0;
    reset_string(stringin, 80);
    freq = counts;

    // main loop
    // gets interrupted by uart
    while(1)
    {
    	// just blinks led at the given frequency
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
}
