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
    // Allocate space for string
    char *center = (char*) malloc(n+1*sizeof(char));

    // Fill the string with the fillchar
    int i;
    for (i=0; i<n; i++)
    {
        center[i] = fillchar;
    }

    // Put the null char at the end of the string
    center[n] = '\0';

    // Calculate where the word should go in the string
    int len_s = strlen(s);
    int str_start = (n/2) - (len_s/2);
    int str_end = str_start + len_s;

    // Put the word in the center of the string
    int count = 0;
    for (i=str_start; i<str_end; i++)
    {
        center[i] = s[count];
        count++;
    }

    return center;
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
