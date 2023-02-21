#include <stdint.h>
#include <stdio.h>

/*### Description:
The program defines a function that takes an array
and an threshold. Iterates every element in that array and gives the amount of
Values according of either over or under this Treshold back
### END Description ###*/


//### Func Declaraion ###
void count_threshold_elements(float *array, uint32_t length, float threshold, uint32_t *num_below, uint32_t *num_above);
//### END Declaration ###

int main()
{
    //### Variable Declaration ###

    float arr_1[11] = {2, 5, 9, 12, 1, -5, -10, -4, 34.6, 5001.6};
    uint32_t len;
    uint32_t num_below = 0;
    uint32_t num_above = 0;
    float thres = 5;

    //### END Declaration ###
    len = sizeof(arr_1) / sizeof(arr_1[0]);
    count_threshold_elements(arr_1, len, thres, &num_below, &num_above);

    printf("%d Werte sind über dem Threshold von %f\n", num_above, thres);
    printf("%d Werte sind unter dem Threshold von %f\n", num_below, thres);
    return 0;
}

//### Func Definition ###

void count_threshold_elements(float *array, uint32_t length, float threshold, uint32_t *num_below, uint32_t *num_above)
{
    //Überprüfe erst ob im array etwas steht oder die länge 0 ist
    if (NULL == array || length == 0)
    {
        return;
    }


    for (uint32_t i = 0; i < length; i++)
    {
        if (array[i] < threshold)
        {
            (*num_below)++;
        }

        else if (array[i] > threshold)
        {

            (*num_above)++;
        }
    }
}
//### END Definition ###
