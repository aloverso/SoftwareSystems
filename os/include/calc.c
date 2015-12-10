#include "calc.h"

#ifndef GPIO_H
#define GPIO_H
#include "gpio.h"
#endif

int convert_to_int (unsigned char instr[]){
	int i = 0;
	int res = 0;
	while (instr[i] != '\0'){
		res = res*10;
		res += instr[i] - 48;
		i++;
	}
	return res;
}

void convert_to_str(int int_in, unsigned char res[]){
	int j = 0;
	int cur_num = 0;
	int k = 0;
	char temp;
	while (int_in > 0){
		cur_num = int_in % 10;
		int_in = int_in/10;
		res[j] = cur_num + '0';
		j++;
	}
	res[j+1] = '\0';
	j--;
	while (j > k){
		temp = res[k];
		res[k] = res[j];
		res[j] = temp;
		k++;
		j--;
	}

}

int do_math(unsigned char instr[], int array_size)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int nums[10];
	int l;
	char cur_str[10];
	char strtest[10];

	while(i < array_size){
		l = (int)instr[i];
		if (l == 42 |l == 43 |l == 45 |l == 47){
			cur_str[k+1] = '\0';
			nums[j] = convert_to_int(cur_str);
			reset_string(cur_str, 10);
			nums[j+1] = l;
			k = 0;
			j += 2;
		}
		else if (l > 47 & l < 58){
			cur_str[k] = instr[i];
			k ++;
		}
		else{
			uart_puts("Not a number, please try again\r\n");
			return 0;
		}
		i ++;
	}
	cur_str[k+1] = '\0';
	nums[j] = convert_to_int(cur_str);
	reset_string(cur_str, 10);

	i = 1;
	int res = nums[0];
	uart_puts("\r\n");
	while (i < j){
		if(nums[i] == 42){
			uart_puts("Multiply");
			uart_puts("\r\n");
			res *= nums[i+1];
		}
		else if (nums[i] == 43){
			uart_puts("Adding");
			uart_puts("\r\n");
			res += nums[i+1];
		}
		else if (nums[i] == 45){
			uart_puts("Subtract");
			uart_puts("\r\n");
			res -= nums[i+1];
		}
		else if (nums[i] == 47){
			uart_puts("Divide");
			uart_puts("\r\n");
			res = res/nums[i+1];
		}
		i += 2;
	}

	uart_puts("\r\n");
	convert_to_str(res, strtest);
	uart_puts("Result is ");
	uart_puts(strtest);
	uart_puts("\r\n");

	return 1;
}

int calc_init(){
	int res = 0;
	int calc_on = 1;
	int i;
	uart_puts(">>Welcome to the calculator application.\r\n");
	uart_puts("> ");
	//do_math1();
	
	
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
			do_math(stringin, i);
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