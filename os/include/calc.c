#include "calc.h"
#include "gpio.h"

int calc_init(){
	uart_puts("hello in calc\r\n");
	return 1;
}

char* calc_parse(char *cmd)
{
	
}