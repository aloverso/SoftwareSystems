#if !defined(__cplusplus)
#include <stdbool.h>
#endif

#include <stddef.h>
#include <stdint.h>

/** GPIO Register set */
volatile unsigned int* gpio;

/** Simple loop variable */
volatile unsigned int tim;

#define BAREMETAL 0

extern void PUT32 ( unsigned int, unsigned int );
extern unsigned int GET32 ( unsigned int );
extern void dummy ( unsigned int );

#if BAREMETAL
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
#else
	#define GPIO_BASE 0x20200000
	// Controls actuation of pull up/down to ALL GPIO pins.
	#define GPPUD (GPIO_BASE + 0x94)

	// Controls actuation of pull up/down for specific GPIO pin.
	#define GPPUDCLK0 (GPIO_BASE + 0x98)

	// The base address for #define UAR
	#define UART0_BASE 0x20201000

	// The offsets for reach register for the UART.
	#define UART0_DR     (UART0_BASE + 0x00)
	#define UART0_RSRECR (UART0_BASE + 0x04)
	#define UART0_FR     (UART0_BASE + 0x18)
	#define UART0_ILPR   (UART0_BASE + 0x20)
	#define UART0_IBRD   (UART0_BASE + 0x24)
	#define UART0_FBRD   (UART0_BASE + 0x28)
	#define UART0_LCRH   (UART0_BASE + 0x2C)
	#define UART0_CR     (UART0_BASE + 0x30)
	#define UART0_IFLS   (UART0_BASE + 0x34)
	#define UART0_IMSC   (UART0_BASE + 0x38)
	#define UART0_RIS    (UART0_BASE + 0x3C)
	#define UART0_MIS    (UART0_BASE + 0x40)
	#define UART0_ICR    (UART0_BASE + 0x44)
	#define UART0_DMACR  (UART0_BASE + 0x48)
	#define UART0_ITCR   (UART0_BASE + 0x80)
	#define UART0_ITIP   (UART0_BASE + 0x84)
	#define UART0_ITOP   (UART0_BASE + 0x88)
	#define UART0_TDR    (UART0_BASE + 0x8C)
#endif

#if !BAREMETAL
	static inline void mmio_write(uint32_t reg, uint32_t data);
	static inline uint32_t mmio_read(uint32_t reg);
#endif

void uart_init();

void uart_putc(unsigned char byte);

unsigned char uart_getc();
 
void uart_write(const unsigned char* buffer, size_t size);
 
void uart_puts(const char* str);