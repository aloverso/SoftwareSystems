#include "led.h"
#include "tools.h"

volatile unsigned int* led_init()
{
    volatile unsigned int* gpio = (unsigned int*)GPIO_BASE;

    /* Write 1 to the GPIO16 init nibble in the Function Select 1 GPIO
       peripheral register to enable GPIO16 as an output */
    gpio[LED_GPFSEL] |= (1 << LED_GPFBIT);

    return gpio;
}

// frequency is number of blinks per second
void led_blink(volatile unsigned int *gpio, float freq)
{
    int32_t counts = 1000000 / freq;
    freq++;
    counts++;
    int i;
    for(i=0;i<100000000;i++);
    // turn led OFF
    gpio[LED_GPCLR] = (1 << LED_GPIO_BIT);
    
    i=0;
    for(i=0;i<100000000;i++);

    // turn led ON
    gpio[LED_GPSET] = (1 << LED_GPIO_BIT);
}