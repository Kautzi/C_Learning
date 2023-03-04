#include <stdio.h>
#include <stdint.h>
#include <string.h>

/*### Description:
In this program a function will be defined to compare to strings
for equality it will return 1 if the two strings are equal
and 0 if not*/


//### Function Declaration ###
int string_compare(char * string_1, char * string_2);
//### END Declaration ###

//### MAIN ###

int main()
{

char * string_1 = " Hallo ich bin Alex";
char * string_2 = " Hallo ich bin Alex";

printf("%d",string_compare(string_1,string_2));

    return 0;
}

//### Function Definition ###

int string_compare(char * string_1, char * string_2)
{

    if(string_1 == NULL || string_2 == NULL)
    {
    return 0;
    }

    if(strlen(string_1) != strlen(string_2))
    {
    return 0;
    }

    int compare = 0;
    while(*string_1 != '\0' && *string_1 == *string_2)
    {
        compare = 1;
        string_1 ++;
        string_2 ++;
        if (*string_1 != *string_2)
        {
        compare = 0;
        }
    }


    return compare;
}
