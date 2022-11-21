#include <stdio.h>
#include <stdlib.h> //für speicherallocation Bsp. malloc()

/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
/****DESCRIPTION OF PROGRAMM****/
/*
This program implements the concatination
of two strings string_1 and string_2

The goal is to write a function namend
char * concate(char *string_1, char *string_2)
that returns the first address of string_1
and concatinates string_2 behind string_1

!!Additional the concate function should allocate
!!as much memory for the strin_1 function as needed
!!so realloc of stdlib.h is needed
*/
/***END DESCRIPTION OF PROGRAMM*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/


/***FUNC DECLARATION****/
char *concate(char *string_1, size_t length_1, char *string_2);
/****END FUNC DECLARATION****/


/****MAIN FUNCTION****/
int main()
{

    char *string_1 = (char *)calloc(sizeof(char), 10); //string_1 gets at first only 10 chars later
                                                       //  func concat should dynaically allocates new chars
    char *string_2 = (char *)calloc(sizeof(char), 3);


    string_1 = "Hallo";
    string_2 = "du";
    string_1 = concate(string_1, 10, string_2);
    printf("%s", string_1);

    return 0;
}
/***END MAIN****/


/****FUNC DEFINITION****/
/*the function gets two strings and the
!!max length count of string_1 -1
and returns the first adress of string_1*/
char *concate(char *string_1, size_t length_1, char *string_2)
{
    //create two counter variables to hold the actual content of string_1 and 2
    size_t string_1_count = 0;
    size_t string_2_count = 0;

    //first check if string_1 or string_2 are NULL
    if ((string_1 == NULL) || (string_2 == NULL))
    {
        return NULL;
    }
    //then check if there is any content inside string_1 and string_2
    //and init the count variables with "1"
    if (*string_1 != '\0' && *string_2 != '\0') //works only if the strings where initialised by calloc
    {
        string_1_count = 1;
        string_2_count = 1;
    }
    else
    {
        return NULL;
    }
    //after initialisation check if string_1 is big enough for string_2
    //so check at first the actual content till '\0' appears with the
    //actual length of string_1 shwon in lenth_1 the diff between this
    //two values should be grater or equal to the size of string_2
    while (*string_1 != '\0')
    {
        string_1_count++;
        string_1++;
    }
    //then check the length of string_2
    while (*string_2 != '\0')
    {
        string_2_count++;
        string_2++;
    }
    //now check if the difference of the actual length of
    //string_1 and the content of string_1 is grater or equal to the content of string_2
    if ((length_1 - string_1_count) >= string_2_count)
    {
        //if string_1 is greate enough start concatination
        for (long unsigned int i = 0; i < string_2_count; i++)
            string_1[string_1_count++] = string_2[i];
    }
    else
    {
        //if string_1 isn't greate enough first reallocate string_1 so that string_2 fits inside
    }

    return string_1; //returns the first address of string_1
}
/****END FUNC DEFINITION*/
