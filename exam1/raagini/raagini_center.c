/* Example code for Software Systems at Olin College.

Copyright 2014 Allen Downey
License: Creative Commons Attribution-ShareAlike 3.0

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Returns a heap-allocated string with length n, with
// the given string in the middle, surrounded by fillchar.
//
// For example, if s is allen, n is 10 and fillchar is .
// the result is ..allen... 

char *center(char *s, int n, char fillchar)
{
   char word[2*n+strlen(s)];
   int i;
   
   //First n fillchars
   for (i=0;i<n;i++){
        word[i] = fillchar;
   }

   //Given center word
    for (i=n;i< n + strlen(s);i++){
        word[i] = s[i-n];
   }

   //Last set of fillchars
   for (i=n+strlen(s);i<2*n+strlen(s);i++){
        word[i] = fillchar;
   }
   
   //shove the string into heap
   char *s1 = malloc(strlen(word));
   strcpy(s1, word);
   return s1;
}

int main (int argc, char *argv[])
{
    char *s = center("Software", 30, '.');
    printf("%s\n", s);

    char *s2 = center("Systems", 31, '-');
    printf("%s\n", s2);

    char *s3 = center("Spring 2014", 32, '*');
    printf("%s\n", s3);

    char *s4 = center("Exam 1", 33, '^');
    printf("%s\n", s4);

    return 0;
}
