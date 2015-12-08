/* Example code for Software Systems at Olin College.

Copyright 2014 Allen Downey
License: Creative Commons Attribution-ShareAlike 3.0

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


// Returns a heap-allocated string with length n, with
// the given string in the middle, surrounded by fillchar.
//
// For example, if s is allen, n is 10 and fillchar is .
// the result is ..allen... 

char *center(char *s, int n, char fillchar)
{
	char res[n];
	int i;
    int s_len = strlen(s);  
    int f_right = round((n - s_len)/2);
    int f_left = n - s_len - f_right;

    for (i = 0; i < f_left; i++){
        res[i] = fillchar;
    }

    for (i = f_left; i < (f_left + s_len); i++){
        res[i] = s[i-f_left];
    }
    for (i = (f_left + s_len); i < n; i++){
        res[i] = fillchar;
    }

    return res;
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
