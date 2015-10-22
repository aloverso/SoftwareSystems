#include <stdio.h>
#include "testlibrary.h"

int main()
{
	int n = get_number();
	int y = add_4(n);
	printf("%i\n", y);
	print_four();
}