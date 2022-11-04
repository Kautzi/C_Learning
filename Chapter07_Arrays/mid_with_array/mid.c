#include <stdio.h>

//****FUNC DECLARATION*****

double mid(int *array, int size);

//****END DEC**************

int main()
{

    int array[] = {1, 4, 10, 3, 5, 8, 9};
    int size = sizeof(array) / sizeof(array[0]);
    printf("Der Mittelwert aller Zahlen in "
           "array"
           " is %0.2lf",
           mid(array, size));

    return 0;
}

//****FUNC DEFINITION****

//Description of FUNC "mid()"";
//to input 1. an Array of int
//2.size of the array
//returns the mid of elements in array


double mid(int *array, int size)
{
    double mid = 0;

    for (int i = 0; i < size; i++)
    {
        mid = mid + array[i];
    }

    return mid / size;
}

//****END DEFINE*********
