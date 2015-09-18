#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int arg, char **argv){

	printf("Starting\n");
	char info[100];
	
	FILE *out_file = fopen(argv[1], "w");
	
	while (scanf("%s\n", info) == 1){
		fprintf(out_file, "%s\n", info);
	}

	fclose(out_file);
	return 0;
}