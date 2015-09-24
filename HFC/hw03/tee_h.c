/*
 *  Haley's Tee Implementation
 *  Head First C - Chapter 3
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
	// Piped info.
	char info[80];

	// Output file.
	FILE *output_file;

	// If file name not given, create output file with default name.
	if (argv[1] == NULL)
	{
		output_file = fopen("output_file.txt", "w");
	}
	// Otherwise, create output file with given name.
	else
	{
		output_file = fopen(argv[1], "w");
	}

	// Read in the piped info.
	while (scanf("%s\n", info) == 1)
	{
		// Print it to the output file.
		fprintf(output_file, "%s\n", info);

		// Print it to the command line.
		printf("%s\n", info);
	}

	// Close the output file.
	fclose(output_file);
	
	return 0;	
}
