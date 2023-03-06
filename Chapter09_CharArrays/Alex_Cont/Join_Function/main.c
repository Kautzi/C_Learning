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
    char* string_1 = "Mein Name ist Alex";
    char* delimiter = "==>";
    char* string_2 = "Kautz";

    char* new_string =join_strings(string_1,delimiter,string_2);

    printf("%s",new_string);

    return 0;
}

//### Function Definition ###

char *join_strings(char *string_1, char *delimiter, char *string_2)
{
    char * new_string = (char*)calloc(strlen(string_1)+strlen(delimiter)+strlen(string_2),sizeof(char));
    size_t reset =(strlen(string_1)+strlen(delimiter)+strlen(string_2));
    if(string_1 == NULL || string_2 == NULL || delimiter == NULL)
    {
    return NULL;
    }

    //first iterate string_1 till the end '\0'
    while(*string_1 != '\0')
    {
    *new_string = *string_1;
    new_string++;
    string_1 ++;
    }

    //now concatenate the delimitter to string_1
    while(*delimiter != '\0')
    {
    *new_string = *delimiter;
    new_string++;
    delimiter ++;
    }
    //at last concatenate string_2 to new string
    while(*string_2 != '\0')
    {
    *new_string = *string_2;
    new_string++;
    string_2 ++;
    }

    //to terminate new_string set the last character to'\0'
    //*new_string='\0';
    
    new_string -=reset ;


    return new_string;
}
