#include <stdio.h>
//****Function adds by value***
float add(float add_value)
{
    printf("\nMemory Adress of "
           "add_value"
           " is %p.",
           &add_value);
    return ++add_value;
}
//******END Function***********

//***Function subs by value***
float sub(float sub_value)
{
    printf("\nMemory Adress of "
           "sub_value"
           " is %p.",
           &sub_value);
    return --sub_value;
}
//*****END Function************


int main()
{
    float my_value = 1;

    printf("\nValue of "
           "my_value"
           "is %0.1f",
           my_value);
    printf("\nMemory address of "
           "my_value"
           " is %p",
           &my_value);
    printf("\nValue of function "
           "add"
           " is %0.1f",
           add(my_value));
    printf("\nValue of function "
           "sub"
           " is %0.1f",
           sub(my_value));


    return 0;
}
