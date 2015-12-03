#include "calc.h"
#include "gpio.h"

int do_math(unsigned char instr[], int array_size)
{
	int i = 0;
	int j = 0;
	char nums[10];
	int l;

	uart_puts("\r\n");
	while(i < (array_size)){
		l = instr[i];
		if (l == 32){
			uart_puts("space\r\n");
			j ++;
		}
		else if ((l = '0') > 0 && (l - '0') < 9){
			uart_putc(instr[i]);
			nums[j] += instr[i];
		}
		else{
			uart_puts("NaN\r\n");
			return 0;
		}
		i ++;
		uart_puts(nums[0]);
	}
	return 0;
}

int calc_init(){
	int res = 0;
	int calc_on = 1;
	int i;
	uart_puts(">>Welcome to the calculator application.\r\n");
	uart_puts("> ");
	
	while(calc_on){
		int str_len = 80;
		char stringin[str_len];

		char x = uart_getc();
		//Checks if current str is being written outside size allotment
		if (i > str_len-1){
			uart_puts(stringin);
			reset_string(stringin, i);
		
			uart_puts("Max string len reached\r\n");
			i = 0;
		}
		// if enter is pressed
		else if (x == '\r')
		{
			if (stringin[0] == 113){
				calc_on = 0;
				uart_puts("\r\n");
				uart_puts(">>Exiting calculator.\r\n");
				return 1;
			}
			res = do_math(stringin, i);
			uart_puts(res);
			reset_string(stringin, i);
			uart_puts("> ");
			i = 0;
		}
		else if (x == 127 || x == 8) // backspace character
		{
			if (i>0)
			{
				uart_putc('\b'); // move cursor back
				uart_putc(' '); // insert space in terminal
				uart_putc('\b'); // move cursor back before space
				stringin[i-1] = 0x00; // replace last char with empty
				i--; // decrement length
			}
		}
		else{
			stringin[i] = x;
			uart_putc(stringin[i]);
			i++;
		}
	}
	return 1;
}