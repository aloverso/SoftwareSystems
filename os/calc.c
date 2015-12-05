#include "calc.h"
#include "gpio.h"
#include "strutil.h"
#include "tools.h"

void calc_init(int *calc_on){
	uart_puts("hello in calc\r\n");
	*calc_on = 1;
}

void calc_parse(char *cmd, int *calc_on)
{
	if (memcmp(cmd, "q", sizeof("q")) == 0)
	{
		*calc_on = 0;
		return;
	}

	

	uart_puts("caaaaaaaaaaaaalc");
	uart_puts(cmd);
}