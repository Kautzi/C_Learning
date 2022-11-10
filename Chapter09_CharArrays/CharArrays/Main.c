#include <stdio.h>  //für printf etc
#include <stdlib.h> // für malloc, calloc etc
#include <string.h> //für strcpy etc


/* An example for selfimplementing the strlenth() function
whitch returns the length of a string not inlcuding the "\n"*/


/****FUNC DECLARATION****/
size_t stringlength(char *string);
/****END DECLARATION****/


/****MAIN FUNCTION****/

int main()
{
    char string[] = {"blabli BLUBLA"};

    printf("%lu", stringlength(string));

    return 0;
}
/****END MAIN****/

/*+++++++++++++++++++++*/
/****FUNC DEFINITION****/
size_t stringlength(char *string)
{

    size_t count = 0;

    if (*string == '\0')
    {
        return '\0';
    }


    while (*string != '\0')
    {
        string++;
        count++;
    }
    return count;
}
/****END DEFINITION*****/
/*+++++++++++++++++++++*/
