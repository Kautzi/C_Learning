#include <stdio.h>
#include <stdlib.h>

/*Describtion:
The programm creates a function to allocate
dynamically memory for an array.
The Function createarray takes the length and the init Value
for thatarray
*/


#define LENGTH_ROW 4
#define LENGTH_COL 5
#define INIT_VALUE 23

//### Function Declaration ###
int * create_array(unsigned int length, int value);
int * freeArray(int * array);
int ** create_matrix(uint32_t row_length,uint32_t coll_length,int value);
int ** free_matrix(int **matrix, uint32_t length_row);
void printArray(int * array, uint32_t length);
void printMatrix(int **matrix,uint32_t num_row, uint32_t num_coll);
//### END Declaration ###

int main()
{
    int ** matrix = create_matrix(LENGTH_ROW,LENGTH_COL,INIT_VALUE);

    printMatrix(matrix,LENGTH_ROW,LENGTH_COL);

    matrix = free_matrix(matrix,LENGTH_ROW);

    return 0;
}

//### Func Definition ###

int *create_array(unsigned int length, int value)
{
    int * array = (int*)malloc(length * sizeof(int)); //reserve memory for the given length on heap

    if(array == NULL){
        return NULL;
    }

    for(unsigned int i = 0; i < length; i++)
    {

        array[i]=value;
    }

    return array;
}

int *freeArray(int *array)
{
    if(array != NULL){
    free(array);
    }

    return NULL;
}

int **create_matrix(uint32_t row_length, uint32_t coll_length, int value)
{
    int **matrix = (int**)malloc(row_length * sizeof(int*));

    for(uint32_t i = 0; i < row_length; i++)
    {
        matrix[i] = create_array(coll_length,value);

    }
    return matrix;
}

int **free_matrix(int **matrix, uint32_t length_row)
{

    for(uint32_t i = 0; i < length_row;i ++ )
    {

            matrix[i]= freeArray(matrix[i]);

    }
    free(matrix);
    return NULL;
}

void printArray(int *array, uint32_t length)
{
    for( uint32_t i = 0; i < length; i++)
    {
        printf("%d\n",array[i]);
    }
}

void printMatrix(int **matrix, uint32_t num_row, uint32_t num_coll)
{
    for(uint32_t i = 0; i < num_row; i++){

        printArray(matrix[i],num_coll);
    }
}
