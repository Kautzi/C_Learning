#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h> //for Variadic Functions

/*### Description ###
To implement functions like "printf" its necessary to have a variadic cont of elements
for this there are macros in the <stdarg.h> header.

The Declaration:

void func(start_value,...) the start value tells the function whts the first value like
the ... tells the function that it has variadic elements

in the definition of func you have to create a "va_list args" whitch holds the ... argument list
then you have to specify the start of the args list by calling the va_start(args,count) func.

Then with the start knowing you can iterate with v_arg() over the args list:

for(int i  = 0; i < count; i ++)
    {
        double val = va_arg(args,double);
        sum+=val;
    }

After iterating over the args list you have to specify the end by calling the
va_end(args) function:
### END Description */


//### DEFINES ###
//...
//### END DEFINES ###

//### FUNC DECLARATION ###
double average(const int count,...);
void my_printf(char * format,...);
//### END DECLARATION ###

//### MAIN ###

int main()
{
    //double avg = average(3,1.0,2.0,3.0);
    //printf("%lf\n",avg);

    my_printf("%c --- %c\n",'A','B');

    return 0;
}

//### END MAIN ###

//### FUNC DEFINES ###


double average(const int count, ...)
{
    double sum = 0.0;

    va_list args;
    va_start(args,count);


    for(int i  = 0; i < count; i ++)
    {
        double val = va_arg(args,double);
        sum+=val;
    }

    va_end(args);
    return sum/count;
}

void my_printf(char *format, ...)
{
    //example char * format is a string like "%i %d %lf %u text\n"


    va_list args;                                           //holds the list of elemtns ...
    va_start(args,format);                                  //defines the start value

    while(*format != '\0')                                  //iterate ofer the string hold in format till end'\0'
    {
        if(*format == '%')                                  //serching for the first arg hold in args
        {
            ++format;                                       //if fond % check if the next character is a 'c'
            if(*format == 'c')
            {
                char value = (char)va_arg(args,int);        //if its 'c' pop the first arg in args va_arg points on the next argument
                putchar(value);                             //print a singel character
            }
            else
            {
            putchar(*format);                               // if its not a 'c' print the character as what it is here it cold be a fourther implementation for %d for exmple
            }
        }
        else
        {
            putchar(*format);
        }

        ++format;                                           // important for the while loop to increment the format string adress for further iteration
    }


    va_end(args);
}
