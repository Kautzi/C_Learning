#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


/*### Description: ###
The programm implements the join() function whitch takes two strings and
a delimiter "->" or ; or ==> or something else to seperate the strings
and concatenates the first string, the delimiter and the second string
and returns them in a new string
### END Description ###*/

//### Function Declaration ###
char * join_strings(char* string_1, char* delimiter, char * string_2);
//### END Declaration ###

//### MAIN ###

int main()
{

    return 0;
}

//### Function Definition ###

char *join_strings(char *string_1, char *delimiter, char *string_2)
{
    char * new_string = (char*)calloc(sizeof(char),strlen(string_1)+strlen(delimiter)+strlen(string_2));
    return new_string;
}
