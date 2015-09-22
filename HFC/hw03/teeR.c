/* This code takes in some input piped through the command
line and writes that input to a file with the specified file name.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main (int argc, char *argv[])
{
    
    char info[80]; //This is the info piped through
    
    FILE *out = fopen(argv[1], "w"); //open a file with the given name to write
    printf("%s\n", argv[1]);
    
    while (scanf("%s\n", info) == 1) {
        fprintf(out, "%s\n", info); //write to the file
        fprintf(stdout, "%s\n", info); //write to stdout for additional pipes
    }

    fclose(out); 

    return 0;
}