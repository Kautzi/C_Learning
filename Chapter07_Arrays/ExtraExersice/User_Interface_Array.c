#include "lib.h"
#include <stdio.h>

int main()
{

    int array[1000];
    int length = 0;

    //calculate lengt of array

    length = sizeof(array) / sizeof(array[0]);

    length = Input_pos_int(array, length);
    printf("\nDie kleinste Zahl aus "
           "array"
           " is %d",
           MIN(array, length));
    printf("\nDie groeßte Zahl aus "
           "array"
           " is %d",
           MAX(array, length));


    return 0;
}
