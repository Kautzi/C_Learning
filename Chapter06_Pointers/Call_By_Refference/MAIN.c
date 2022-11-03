#include <stdio.h>

//***START DEC********

void add(float *add_value);
void sub(float *sub_value);

//****END DEC*********

int main()
{

    float my_value = 1;


    printf("\nValue of "
           "my_value"
           " %0.1f",
           my_value);
    add(&my_value);
    printf("\nValue of "
           "my_value"
           " after ADD %0.1f",
           my_value);
    sub(&my_value);
    printf("\nValue of "
           "my_value"
           " after SUB %0.1f",
           my_value);
    return 0;
}


//** START DEFINE*****************


//*** function to add 1 by reference
void add(float *add_value)
{

    *add_value = *add_value + 1.0f;
}
//*******END FUNC********************


// FUNC to sub 1 by reference******
void sub(float *sub_value)
{
    *sub_value = *sub_value - 1.0f;
}
//****END FUNC***********************


//********END DEFINE****************
