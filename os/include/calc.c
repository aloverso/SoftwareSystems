#include "calc.h"

#ifndef GPIO_H
#define GPIO_H
#include "gpio.h"
#endif

int do_math(unsigned char instr[], int array_size)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int nums[10];
	int res = 0;
	int l;
	char cur_str[10];

	uart_puts("\r\n");
	uart_puts(instr);
	uart_puts("\r\n");
	while(i < array_size){
		l = (int)instr[i];
		if (l == 32){
			uart_puts(cur_str);
			nums[j] = cur_str - '0';
			reset_string(cur_str, 10);
			k = 0;
			j ++;
		}
		else if (l > 48 & l < 57){
			cur_str[k] += instr[i];
			k ++;
			//nums[j] += instr[i] - 48;
		}
		else if (l == 43){
			nums[j] = 43;
		}
		else{
			return 0;
		}
		i ++;
	}

	i = 0;
	int n1;
	int n2;
	while (i < j){
		if (nums[i+1] == 43){
			uart_puts("Adding ");
			n1 = nums[i];
			n2 = nums[i+2];

			res = n1 + n2;
			// uart_puts(res+'0');
			// uart_putc((char)(nums[i]+48));
			// uart_puts(", ");
			// uart_putc((char)(nums[i+2]+48));
			// uart_puts("\r\n");
			// res = nums[i] + nums[i+2];
		}
		i += 3;
	}
	//res += 48;
	uart_puts("Result is ");
	uart_puts(res + '0');
	uart_puts("\r\n");

	return 1;
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
				uart_puts(">>Exiting calculator. Goodbye!\r\n");
				return 1;
			}
			res = do_math(stringin, i);
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