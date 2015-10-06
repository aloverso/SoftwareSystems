#include <stdio.h>
#include <string.h>

void lower_to_upper(char in[])
{
	int i;
	for (i = 0; i < strlen(in); i++)
	{
		printf("%c\n", in[i] ^ ' ');
	}
}

int main()
{
	lower_to_upper("anneanneanne");
}
