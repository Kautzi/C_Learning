#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/*### Description:

The Program gets a selfimplemented version of the int strlength(char * string) function,
where the paramenter char * string will be counted and than the count til the '\0'
will be returned*/



//### Function Declararation ###
int strlenth(char* string);
//### END Declaration ###

//### MAIN ###
int main()
{
char * string = "Ich bin 23 Zeichen lang";

int letters = strlenth(string);

printf("Die Zeichenkette in string ist %d lang.",letters);


    return 0;
}
//### END MAIN ###

//### Function Definition ###

int strlenth(char *string)
{
    if(string == NULL)
    {
        return 0;
    }
    int count = 0;
    while(*string != '\0'){
    count ++;
    string ++;
    }
    return count;
}
