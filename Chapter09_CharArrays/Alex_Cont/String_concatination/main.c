#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>


/*### Description: ###
The programm implements the concatination func called strncat() from the string.h
it will get three inputs 1. a destination string, 2. a string to add to the destination string
and the number of extr elements to write to the destination String
### END Description ###*/


//### Function Declaration ###
char * string_concat(char * destination, char * string, size_t num);
//### END Declaration ###


//### MAIN ###

int main()
{
char * destination = (char*)calloc(9 , sizeof(char));
strncpy(destination,"Ich bin ",9);
char * string ="Alex Kautz";

destination = string_concat(destination,string,strlen(string));

printf("%s",destination);

    return 0;
}

//### END MAIN ###

//### Function Definition ###

char *string_concat(char *destination, char *string, size_t num)
{

    if(destination == NULL || string == NULL || num == 0)
    {
        printf("Error Zeile 43");
        return NULL;
    }
    size_t d_num = 0;
    //count the elements of destination and save in d_num
    while(*destination != '\0')
    {

        d_num ++;
        destination++;
    }
    size_t new_size = d_num + num;
    //reset destination pointer
    destination -=d_num;
   destination = (char*)realloc(destination, new_size*sizeof(char));

    //check again for NULL if the reallocation was missed
    if(destination == NULL)
    {
        printf("Error Zeile 60");
        return NULL;
    }

    destination = &destination[0];

    while(*string != '\0')
    {
        while(*destination != '\0' )
        {
            destination++;
        }
        *destination = *string;
        destination++;
        string++;
    }

    //reset destination pointer
    destination -=new_size;

    return destination;
}
