#include <stdint.h>
#include <stdio.h>

//### Func Declaration ###
float mid_value(float *arr_1, uint32_t len_1, float *arr_2, uint32_t len_2);
//### END Declaration ###

int main()
{
    float arr_1[11] = {2, 5, 9, 12, 1, -5, -10, -4, 34.6, 4};
    float arr_2[11] = {3, 6, 1, 1, 1, 21, 77, 2, 1, 1, 66};

    printf("Mittelwert von den Werten aus arr_1 und arr_2 ist %f\n", mid_value(arr_1, 11, arr_2, 11));
    return 0;
}

//### Func Definition ###


float mid_value(float *arr_1, uint32_t len_1, float *arr_2, uint32_t len_2)
{
    float mid_value = 0.0f;

    if (arr_1 == NULL || arr_2 == NULL || len_1 == 0 || len_2 == 0)
    {
        return 1;
    }

    for (uint32_t i = 0; i < len_1; i++)
    {

        mid_value = arr_1[i] + arr_2[i];
    }

    return mid_value / (float)len_1;
}
//### END Definition ###
