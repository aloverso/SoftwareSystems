#if !defined(__cplusplus)
#include <stdbool.h>
#endif

#include <stddef.h>
#include <stdint.h>

/** GPIO Register set */
volatile unsigned int* gpio;

/** Simple loop variable */
volatile unsigned int tim;

extern void PUT32 ( unsigned int, unsigned int );
extern unsigned int GET32 ( unsigned int );
extern void dummy ( unsigned int );

#define GPIO_BASE       0x3F200000

// FROM UART01.c 
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

void uart_init();

void uart_putc(unsigned char byte);

unsigned char uart_getc();
 
void uart_write(const unsigned char* buffer, size_t size);
 
void uart_puts(const char* str);