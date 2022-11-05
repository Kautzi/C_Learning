#include "lib.h"
#include <stdio.h>

//****FUNC DEFINE****


//****FUNC Input_pos_int()*****
//Input is an array of int length
//returns the actual lenght for later calculations
int Input_pos_int(int *array, int length)
{

    int input_num = 0;

    int actual_array_length = 0; //actual_array_lenth is the real length of the array to calculate the min and max later

    for (int i = 0; i < length; i++)
    {
        printf("Bitte geben sie eine pos Zahl ein:\n");
        scanf("%d", &input_num);
        if (input_num >= 0)
        {
            array[i] = input_num;
            actual_array_length++;
        }
        else
        {
            return actual_array_length;
        }
    }
    return actual_array_length;
}
//**** END OF FUNC Input_pos_int()****


//****FUNC MIN()****
//the function gives the smalest number within the array back
int MIN(int *array, int length)
{

    int num = array[0];

    for (int i = 1; i < length; i++)
    {

        if (array[i] < num)
        {
            num = array[i];
        }
    }
    return num;
}
//****END FUNC MIN()****


//****FUNC MAX****
//the function gives the gratest number back
int MAX(int *array, int length)
{

    int num = array[0];

    for (int i = 1; i < length; i++)
    {

        if (array[i] > num)
        {
            num = array[i];
        }
    }
    return num;
}
//****END FUNC MAX()****

//****END DEFINE****
