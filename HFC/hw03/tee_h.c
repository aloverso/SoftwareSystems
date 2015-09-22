#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
	char info[80];
	FILE *output_file;

	if (argv[1] == NULL)
	{
		output_file = fopen("output_file.txt", "w");
	}
	else
	{
		output_file = fopen(argv[1], "w");
	}

	while (scanf("%s\n", info) == 1)
	{
		fprintf(output_file, "%s\n", info);
	}

	fclose(output_file);
	return 0;	
}
