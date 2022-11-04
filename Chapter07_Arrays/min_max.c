#include <stdio.h>

//****FUNC DECLARATION*****

int min(int *array, int size);

int max(int *array, int size);

//****END DEC**************

int main()
{

    int array[] = {78, 5, 2, 5, 7, 8, 5, 3, 29, 7, 34};
    int size = sizeof(array) / sizeof(array[0]);

    printf("\nDie kleinste Zahl im Array ist %d", min(array, size));
    printf("\nDie groeßte Zahl im Array ist %d\n", max(array, size));

    return 0;
}

//****FUNC DEFINITION******


//****FUNC min()************
int min(int *array, int size)
{

    int min = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] < min)
        {

            min = array[i];
        }
    }

    return min;
}
//****END FUNC min()********


//****FUNC max()************
int max(int *array, int size)
{

    int max = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
        {

            max = array[i];
        }
    }
    return max;
}
//****END FUNC max()*******


//****END DEFINE***********
