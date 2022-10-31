#include <stdio.h>
#include <stdlib.h>

int *createArray(unsigned int length, int value)
{
    int *array = (int *)malloc(length * sizeof(int));

    if (array == NULL)
    {
        return NULL;
    }

    for (unsigned int i = 0; i < length; i++)
    {
        array[i] = value;
    }

    return array;
}

void printArray(int *array, unsigned int length)
{
    if (array == NULL)
    {
        return;
    }

    for (unsigned int i = 0; i < length; i++)
    {
        printf("%d\n", array[i]);
    }
}

int *freeArray(int *array)
{
    if (array != NULL)
    {
        free(array);
    }

    return NULL;
}

int **createMatrix(unsigned int num_rows, unsigned int num_cols, int value)
{
    int **matrix = (int **)malloc(num_rows * sizeof(int *));

    for (unsigned int i = 0; i < num_rows; i++)
    {
        matrix[i] = createArray(num_cols, value);
    }

    return matrix;
}

void printMatrix(int **matrix, unsigned int num_rows, unsigned int num_cols)
{
    if (matrix == NULL)
    {
        return;
    }

    for (unsigned int i = 0; i < num_rows; i++)
    {
        printArray(matrix[i], num_cols);
    }
}

int **freeMatrix(int **matrix, unsigned int num_rows)
{
    for (unsigned int i = 0; i < num_rows; i++)
    {
        matrix[i] = freeArray(matrix[i]);
    }

    free(matrix);
    return NULL;
}

int main()
{
    unsigned int num_rows = 2;
    unsigned int num_cols = 3;

    int **matrix = createMatrix(num_rows, num_cols, 1);
    for (unsigned int i = 0; i < num_rows; i++)
    {
        for (unsigned int j = 0; j < num_cols; j++)
        {
            matrix[i][j] = (i + 1) * j;
        }
    }
    printMatrix(matrix, num_rows, num_cols);
    printf("\n");

    int **matrix_transpose = transposeMatrix(matrix, num_rows, num_cols);
    printMatrix(matrix_transpose, num_cols, num_rows);

    matrix = freeMatrix(matrix, num_rows);
    matrix = freeMatrix(matrix_transpose, num_cols);

    return 0;
}
