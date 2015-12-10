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

#define GPFSEL1 0x3F200004
#define GPSET0  0x3F20001C
#define GPCLR0  0x3F200028
#define GPPUD       0x3F200094
#define GPPUDCLK0   0x3F200098

#define AUX_ENABLES     0x3F215004
#define AUX_MU_IO_REG   0x3F215040
#define AUX_MU_IER_REG  0x3F215044
#define AUX_MU_IIR_REG  0x3F215048
#define AUX_MU_LCR_REG  0x3F21504C
#define AUX_MU_MCR_REG  0x3F215050
#define AUX_MU_LSR_REG  0x3F215054
#define AUX_MU_MSR_REG  0x3F215058
#define AUX_MU_SCRATCH  0x3F21505C
#define AUX_MU_CNTL_REG 0x3F215060
#define AUX_MU_STAT_REG 0x3F215064
#define AUX_MU_BAUD_REG 0x3F215068

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

extern void enable_irq ( void );
void hexstrings ( unsigned int d )
{
    //unsigned int ra;
    unsigned int rb;
    unsigned int rc;

    rb=32;
    while(1)
    {
        rb-=4;
        rc=(d>>rb)&0xF;
        if(rc>9) rc+=0x37; else rc+=0x30;
        uart_putc(rc);
        if(rb==0) break;
    }
    uart_putc(0x20);
}
void hexstring ( unsigned int d )
{
    hexstrings(d);
    uart_putc(0x0D);
    uart_putc(0x0A);
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
            uart_putc(rxbuffer[rxtail]);
            rxtail=(rxtail+1)&RXBUFMASK;
        }
    }

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
	// (void) r0;
	// (void) r1;
	// (void) atags;
 
	PUT32(IRQ_DISABLE1,1<<29);

    uart_init();

    hexstring(0x12345678);


    PUT32(IRQ_ENABLE1,1<<29);
 
    enable_irq();

    while(1)
    {
        // while(rxtail!=rxhead)
        // {
        //     uart_putc(rxbuffer[rxtail]);
        //     rxtail=(rxtail+1)&RXBUFMASK;
        //     rx++;
        // }
    }

	// /** GPIO Register set */
	// volatile unsigned int *gpio = led_init();

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
