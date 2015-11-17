#if !defined(__cplusplus)
#include <stdbool.h>
#endif
#include <stddef.h>
#include <stdint.h>

#include "test.h"
#include "led.h"
#include "tools.h"
#include "strutil.h"

size_t terminal_row;
size_t terminal_column;
uint8_t terminal_color;
uint16_t* terminal_buffer;
 

static inline void mmio_write(uint32_t reg, uint32_t data)
{
	*(volatile uint32_t *)reg = data;
}
 
static inline uint32_t mmio_read(uint32_t reg)
{
	return *(volatile uint32_t *)reg;
} 

enum
{
    // The GPIO registers base address.
    //GPIO_BASE = 0x20200000,
 
    // The offsets for reach register.
 
    // Controls actuation of pull up/down to ALL GPIO pins.
    GPPUD = (GPIO_BASE + 0x94),
 
    // Controls actuation of pull up/down for specific GPIO pin.
    GPPUDCLK0 = (GPIO_BASE + 0x98),
 
    // The base address for UART.
    UART0_BASE = 0x20201000,
 
    // The offsets for reach register for the UART.
    UART0_DR     = (UART0_BASE + 0x00),
    UART0_RSRECR = (UART0_BASE + 0x04),
    UART0_FR     = (UART0_BASE + 0x18),
    UART0_ILPR   = (UART0_BASE + 0x20),
    UART0_IBRD   = (UART0_BASE + 0x24),
    UART0_FBRD   = (UART0_BASE + 0x28),
    UART0_LCRH   = (UART0_BASE + 0x2C),
    UART0_CR     = (UART0_BASE + 0x30),
    UART0_IFLS   = (UART0_BASE + 0x34),
    UART0_IMSC   = (UART0_BASE + 0x38),
    UART0_RIS    = (UART0_BASE + 0x3C),
    UART0_MIS    = (UART0_BASE + 0x40),
    UART0_ICR    = (UART0_BASE + 0x44),
    UART0_DMACR  = (UART0_BASE + 0x48),
    UART0_ITCR   = (UART0_BASE + 0x80),
    UART0_ITIP   = (UART0_BASE + 0x84),
    UART0_ITOP   = (UART0_BASE + 0x88),
    UART0_TDR    = (UART0_BASE + 0x8C),
};
 
void uart_init()
{
	// Disable UART0.
	mmio_write(UART0_CR, 0x00000000);
	// Setup the GPIO pin 14 && 15.
 
	// Disable pull up/down for all GPIO pins & delay for 150 cycles.
	//mmio_write(GPPUD, 0x00000000);
	//delay(150);
 
	// Disable pull up/down for pin 14,15 & delay for 150 cycles.
	//mmio_write(GPPUDCLK0, (1 << 14) | (1 << 15));
	//delay(150);
 
	// Write 0 to GPPUDCLK0 to make it take effect.
	mmio_write(GPPUDCLK0, 0x00000000);
 
	// Clear pending interrupts.
	mmio_write(UART0_ICR, 0x7FF);
 
	// Set integer & fractional part of baud rate.
	// Divider = UART_CLOCK/(16 * Baud)
	// Fraction part register = (Fractional part * 64) + 0.5
	// UART_CLOCK = 3000000; Baud = 115200.
 
	// Divider = 3000000 / (16 * 115200) = 1.627 = ~1.
	// Fractional part register = (.627 * 64) + 0.5 = 40.6 = ~40.
	mmio_write(UART0_IBRD, 1);
	mmio_write(UART0_FBRD, 40);
 
	// Enable FIFO & 8 bit data transmissio (1 stop bit, no parity).
	mmio_write(UART0_LCRH, (1 << 4) | (1 << 5) | (1 << 6));
 
	// Mask all interrupts.
	mmio_write(UART0_IMSC, (1 << 1) | (1 << 4) | (1 << 5) | (1 << 6) |
	                       (1 << 7) | (1 << 8) | (1 << 9) | (1 << 10));
 
	// Enable UART0, receive & transfer part of UART.
	mmio_write(UART0_CR, (1 << 0) | (1 << 8) | (1 << 9));
}
 
void uart_putc(unsigned char byte)
{
	// Wait for UART to become ready to transmit.
	while ( mmio_read(UART0_FR) & (1 << 5) ) { }
	mmio_write(UART0_DR, byte);
	//mmio_write(UART0_DR, byte);
}

unsigned char uart_getc()
{
    // Wait for UART to have recieved something.
    while ( mmio_read(UART0_FR) & (1 << 4) ) { }
    return mmio_read(UART0_DR);
}
 
void uart_write(const unsigned char* buffer, size_t size)
{
	for ( size_t i = 0; i < size; i++ )
		uart_putc(buffer[i]);
}
 
void uart_puts(const char* str)
{
	uart_write((const unsigned char*) str, strlen(str));
}

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

	//terminal_initialize();
}

void reset_string(char instr[], int array_size){
	int j = 0;
	while (j < array_size){
		instr[j] = 0x00;
		j++;
	}
}

void parse_input(char *cmd)
{
	if (memcmp(cmd, "calc", sizeof(cmd)) == 0)
	{
		uart_puts("CALCCCCCC\r\n");
	}
}

void kernel_main(uint32_t r0, uint32_t r1, uint32_t atags)
{

	(void) r0;
	(void) r1;
	(void) atags;
 
	uart_init();
	//uart_puts("Hello, in kernel_init\r\n");

	// int x = get_n();
	// x++;
	// char str[15];
	// char *s = itoa(x, str);
	// uart_puts(s);
	// x++;

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
	uart_puts("> Hello, kernel World!\r\n");

	int str_len = 80;
	char stringin[str_len];
	int i=0;
	uart_puts("> ");

	while (true){
		//art_puts("hello");
		//led_blink(gpio, .25);
		char x = uart_getc();
		//Checks if current str is being written outside size allotment
		if (i > str_len-1){
			uart_puts(stringin);
			reset_string(stringin, i);
			uart_puts("Max string\r\n");
			i = 0;
		}
		else if (x == '\r'){
			uart_puts("\r\n");
			stringin[i] = '\r';
			stringin[i+1] = '\n';
			uart_puts(stringin);

			//parse_input(stringin);

			reset_string(stringin, i);
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
	// volatile unsigned int *gpio = (unsigned int*)GPIO_BASE;
	// gpio[4] |= (1 << 21);
 	
 // 	int x = get_n();
 // 	x++;
 // 	char str[15];
	// char *s = itoa(x, str);
	// uart_puts(s);
	// x++;

}