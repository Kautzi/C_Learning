#include <stdio.h>
#include <stdlib.h> // needed to use malloc to allocate dynamic memory in heap dataspace

/* Description:
The Programm should have functions to
1. craete dynamically a 1d Array
2. create a function to free the dynamc array and to indice it as free =NULL
3. create a 2d array*/
//****FUNC DECLARATION****

int *createArray(unsigned int length, int value);
void freeArray(int *array);
int **createMultiDimArray(unsigned int rows, unsigned int colls, int value);
void freeMultiDimArray(int **array, unsigned int rows, unsigned int colls);
void printArray(int *array, unsigned int length);
void printMultiDimArray(int **array, unsigned int rows, unsigned int colls);

//****END DECLARATION****


int main()
{
    unsigned int length = 0;
    int value = 13;

    int *array = createArray(length, value); //allocates memory of "length and inits with the value of "value"

    printArray(array, length);

    int **matrix = createMultiDimArray(2, 3, 277);

    printMultiDimArray(matrix, 2, 3);
    freeMultiDimArray(matrix, 2, 3);

    return 0;
}


//****FUNC DEFINITION****

/*++++++++++++++++++++++++++*/
//****FUNC createArray()****
int *createArray(unsigned int length, int value)
{

    int *array = (int *)malloc(length * sizeof(int)); //with malloc allocates length * datatype of int colls

    for (unsigned int i = 0; i < length; i++)
    {

        array[i] = value; //inits all colls of array with value of "value"
    }
    return array; //returns the first address of array
}

//****END FUNC createArray()****
/*+++++++++++++++++++++++++++*/

/*+++++++++++++++++++++++++++*/
//****FUNC freeArray()****
void freeArray(int *array)
{
    //printf("\nAddress of Array before free() 0x%x", array[0]);
    free(array);
    //printf("\nAddress of Array after free() 0x%x", array[0]);
    array = NULL;
    //printf("\nAddress of Array after NULL 0x%x", array[0]);
}
//****END FUNC freeArray****
/*+++++++++++++++++++++++++++*/

/*+++++++++++++++++++++++++++*/
//****FUNC createMultiDimArray()****
int **createMultiDimArray(unsigned int rows, unsigned int colls, int value)
{
    int **matrix = (int **)malloc(rows * sizeof(int *));

    for (unsigned int i = 0; i < rows; i++)
    {
        matrix[i] = createArray(colls, value);
    }
    return matrix;
}
//****END FUNC createMultiDimArray()****
/*+++++++++++++++++++++++++++*/

/*+++++++++++++++++++++++++++*/
//****FUNC printArray()****
void printArray(int *array, unsigned int length)
{
    //the next rows outputts the ininialised rowes of "array"
    for (unsigned int i = 0; i < length; i++)
    {

        printf("\n%d", array[i]);
    }

    freeArray(array);
}
//****END printArray****
/*+++++++++++++++++++++++++++*/

/*+++++++++++++++++++++++++++*/
//****FUNC printMultiDimArray()****
void printMultiDimArray(int **array, unsigned int rows, unsigned int colls)
{
    for (unsigned int j = 0; j < rows; j++)
    {
        for (unsigned int i = 0; i < colls; i++)
        {
            printf("\n%d", array[j][i]);
        }
    }
}
//****END FUNC printMultiDimArray()****

/*++++++++++++++++++++++++++*/
//****FUNC freeMultiDimArray()****
void freeMultiDimArray(int **array, unsigned int rows, unsigned int colls)
{
    for (unsigned int i = 0; i < rows; i++)
    {
        for (unsigned int j = 0; j < colls; j++)
        {
            free(array[i][j]);
        }
    }
}

//****END DEFINE****
