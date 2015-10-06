#include <stdint.h>
#include <stdio.h>

main() {
char word[] = "hello";
char space[] = " ";
int i;
int ascii;
int ascii_new;
int ascii_space;


for (i = 0; i<sizeof(word); i++){
	ascii = (int)word[i];
	ascii_space = (int)space[0];
	ascii_new = ascii ^ ascii_space;
	printf("%c", ascii_new);	
}


}