/* Example code for Software Systems at Olin College.

Copyright 2014 Allen Downey
License: Creative Commons Attribution-ShareAlike 3.0

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <regex.h>

#define NUM_TRACKS 5

char tracks[][80] = {
    "So What",
    "Freddie Freeloader",
    "Blue in Green",
    "All Blues",
    "Flamenco Sketches"
};


//Finds all tracks that contain the given string.

//Prints track number and title.
void find_track(char search_for[])
{
    int i;
    int found_one = 0;
    for (i=0; i<NUM_TRACKS; i++) 
    {
    	if (strstr(tracks[i], search_for)) 
        {
    	    printf("Track %i: '%s'\n", i, tracks[i]);
            found_one = 1;
    	}
    }

    if (!found_one)
    {
        printf("No track found\n");
    }
}

// Finds all tracks that match the given pattern.
//
// Prints track number and title.
void find_track_regex(char pattern[])
{
    int i;
    int found_one = 0;
    for (i=0; i<NUM_TRACKS; i++) 
    {
        regex_t re;
        int ret;

        if (regcomp(&re, pattern, REG_EXTENDED) != 0)
        {
            printf("Not a valid regular expression\n");
        }

        ret = regexec(&re, tracks[i], (size_t) 0, NULL, 0);
        regfree(&re);

        // returns 0 if a match is found
        if (ret == 0)
        {
            printf("Track %i: '%s'\n", i, tracks[i]);
            found_one = 1;
        }
    }

    if (!found_one)
    {
        printf("No track found\n");
    }
}

// Truncates the string at the first newline, if there is one.
void rstrip(char s[])
{
    char *ptr = strchr(s, '\n');
    if (ptr) 
    {
        *ptr = '\0';
    }
}

int main (int argc, char *argv[])
{
    char search_for[80];

    /* take input from the user and search */
    printf("Search for: ");
    fgets(search_for, 80, stdin);
    rstrip(search_for);

    //find_track(search_for);
    find_track_regex(search_for);

    return 0;
}