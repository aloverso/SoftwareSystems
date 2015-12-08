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
    int i;
    int j;
    char *ret;
    ret = malloc(sizeof(char)*(n+1));
    int start = (n-strlen(s))/2; // floored
    int end = (n-strlen(s))-start;

    for (i=0; i<start; i++)
    {
        ret[j] = fillchar;
        j++;
    }
    for (i=0; i<strlen(s); i++)
    {
        ret[j] = s[i];
        j++;
    }
    for (i=0; i<end; i++)
    {
        ret[j] = fillchar;
        j++;
    }
    ret[j] = '\0';

    return ret;
}

// works: 5,6

int main (int argc, char *argv[])
{
    char *s0 = center("The", 29, ',');
    printf("%s\n", s0);

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
