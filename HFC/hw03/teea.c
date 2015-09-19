// Anne's implementation of the tee command
// Head First C - chapter 3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char input[80];
	FILE *out_file;

	// if it includes a file to write to, write to file
	// like the tee function, a filename of - writes to stdout
	if (argv[1] && strcmp(argv[1], "-") != 0)
	{
		out_file = fopen(argv[1], "w");
	}
	else
	{
		out_file = NULL;
	}

	// print each line coming from stdin
	while (scanf("%s\n", input) == 1)
	{
		if (out_file)
		{
			fprintf(out_file, "%s\n", input);
			fprintf(stdout, "%s\n", input);

		}
		else
		{
			fprintf(stdout, "%s\n", input);
		}
	}

	if (out_file)
	{
		fclose(out_file);
	}

	return 0;
}