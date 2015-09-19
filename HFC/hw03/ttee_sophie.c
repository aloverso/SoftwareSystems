// Takes input piped from previous operation, and writes it to file
// Uses user specified file name, if not then will write to output.txt 
// by default

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int arg, char **argv){

	printf("Starting\n");
	char info[100];
	
	FILE *out_file;

	if (argv[1] == NULL){
		out_file = fopen("output.txt", "w");
	}
	else{
		out_file = fopen(argv[1], "w");
	}

	while (scanf("%s\n", info) == 1){
		fprintf(out_file, "%s\n", info);
	}

	fclose(out_file);
	return 0;
}