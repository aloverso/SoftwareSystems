#include "gpio.h"
#include "strutil.h"
#include "tools.h"

#if BAREMETAL
    void uart_init()
    {
    	unsigned int ra;

        PUT32(AUX_ENABLES,1);
        PUT32(AUX_MU_IER_REG,0);
        PUT32(AUX_MU_CNTL_REG,0);
        PUT32(AUX_MU_LCR_REG,3);
        PUT32(AUX_MU_MCR_REG,0);
        PUT32(AUX_MU_IER_REG,0x5);
        PUT32(AUX_MU_IIR_REG,0xC6);
        PUT32(AUX_MU_BAUD_REG,270);

        ra=GET32(GPFSEL1);
        ra&=~(7<<12); //gpio14
        ra|=2<<12;    //alt5
        ra&=~(7<<15); //gpio15
        ra|=2<<15;    //alt5
        PUT32(GPFSEL1,ra);

        PUT32(GPPUD,0);
        for(ra=0;ra<150;ra++) dummy(ra);
        PUT32(GPPUDCLK0,(1<<14)|(1<<15));
        for(ra=0;ra<150;ra++) dummy(ra);
        PUT32(GPPUDCLK0,0);

        PUT32(AUX_MU_CNTL_REG,3);
    }
     
    void uart_putc(unsigned char byte)
    {
    	while(1)
        {
            if(GET32(AUX_MU_LSR_REG)&0x20) break;
        }
        PUT32(AUX_MU_IO_REG,byte);
    }

    unsigned char uart_getc()
    {
        while(1)
        {
            if(GET32(AUX_MU_LSR_REG)&0x01) break;
        }
        return GET32(AUX_MU_IO_REG);
    }
#else
    static inline void mmio_write(uint32_t reg, uint32_t data)
    {
        *(volatile uint32_t *)reg = data;
    }
     
    static inline uint32_t mmio_read(uint32_t reg)
    {
        return *(volatile uint32_t *)reg;
    } 
    
    void uart_init()
    {
        // Disable UART0.
        mmio_write(UART0_CR, 0x00000000);
        // Setup the GPIO pin 14 && 15.
     
        // Disable pull up/down for all GPIO pins & delay for 150 cycles.
        //mmio_write(GPPUD, 0x00000000);
        //delay(150);
     
        // Disable pull up/down for pin 14,15 & delay for 150 cycles.
        mmio_write(GPPUDCLK0, (1 << 14) | (1 << 15));
        delay(150);
     
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
#endif
 
void uart_write(const unsigned char* buffer, size_t size)
{
	for ( size_t i = 0; i < size; i++ )
		uart_putc(buffer[i]);
}
 
void uart_puts(const char* str)
{
	uart_write((const unsigned char*) str, strlen(str));
}