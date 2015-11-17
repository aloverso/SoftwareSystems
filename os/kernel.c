#if !defined(__cplusplus)
#include <stdbool.h>
#endif
#include <stddef.h>
#include <stdint.h>

#include "test.h"
#include "tty.h"
#include "calc.h"

#include "led.h"
#include "tools.h"

 
size_t strlen(const char* str)
{
	size_t ret = 0;
	while ( str[ret] != 0 )
		ret++;
	return ret;
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

int compare_str(char str1[], char str2[]){
	size_t j = 0;
	size_t str1_size = strlen(str1);
	size_t str2_size = strlen(str2);

	while ((j < str1_size) && (j < str2_size)){
		if (str1[j] != str2[j]){
			return 0;
		}
		j ++;
	}
	return 1;
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
	volatile unsigned int *gpio = led_init();

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
	int str_comp = 0;

	while (true){
		led_blink(gpio, .25);
		stringin[i] = uart_getc();
		//Checks if current str is being written outside size allotment
		if (i > str_len-1){
			uart_puts(stringin);
			reset_string(stringin, str_len);
			uart_puts("Max string\r\n");
			i = 0;
		}
		else if (stringin[i] == '\r'){
			uart_puts("\r\n");
			stringin[i+1] = '\n';
			str_comp = compare_str(stringin, "calc");
			if (str_comp){
				uart_puts("CALC RECOGNIZED!\r\n");
			}
			else{
				uart_puts(stringin);
			}
			reset_string(stringin, str_len);
			uart_puts("> ");
			i = 0;
		}
		else{
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