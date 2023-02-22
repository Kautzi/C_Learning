#include <stdint.h>
#include <stdio.h>

/*Description:
The program has two functions 1. ret_min
takes an array and givse the smallest num back
2. ret_max takes an array and gives the bigsest num bag
###############################*/

#define LENGTH 10

//### Func Declaration ###
float ret_min(float *array, uint32_t length);
float ret_max(float *array, uint32_t length);
//### END Func Declaration ###

int main()
{

    float array[LENGTH] = {1, 5, 99, 44, -12, 5, -53, -23, 6, 9};

    printf("Der kleinster Wert in "
           "array"
           " ist => %f.\n",
           ret_min(array, LENGTH));
    printf("Der groesste Wert in "
           "array"
           " ist => %f.\n",
           ret_max(array, LENGTH));

    return 0;
}

//### Func Definition ###

float ret_min(float *array, uint32_t length)
{
    float min = 0;
    if (array == NULL || length == 0)
    {
        return 1;
    }
    min = array[0];
    for (uint32_t i = 1; i < length; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    return min;
}

float ret_max(float *array, uint32_t length)
{
    float max = 0;
    if (array == NULL || length == 0)
    {
        return 1;
    }
    max = array[0];
    for (uint32_t i = 1; i < length; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    return max;
}
