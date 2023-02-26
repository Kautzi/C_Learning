#include <stdio.h>
#include <stdlib.h>

/*Description:
The programm generates a matrix with n rows and n cols.
after creating this matrix and outputting the content
the rows and cols will be skipped
*/

//### DEFINES ###

#define NUM_ROW 2
#define NUM_COL 3
#define INIT_VALUE 22
#define POSITIV 1
#define NEGATIVE 0

//### END DEFINES ###

//### Func Declaration ###
int * create_array(uint32_t length, int init_value);
void print_array(int * array, uint32_t length);
int* free_array(int * array);
int ** create_2D_array(uint32_t num_row, uint32_t num_col,int init_value);
void print_2D_array(int ** array_2D,uint32_t num_row, uint32_t num_col);
void write_2D_Array(int ** array_2D,uint32_t num_row, uint32_t num_col,int start_value, int pos_neg);
int ** expose_2D_array(int ** array_2D,uint32_t num_row, uint32_t num_col);
//### END Declaration ###

//### MAIN ###

int main()
{
    int ** array_2D = create_2D_array(NUM_ROW,NUM_COL,INIT_VALUE);
    write_2D_Array(array_2D,NUM_ROW,NUM_COL,INIT_VALUE,POSITIV);
    int **exposed_2D_array = expose_2D_array(array_2D,NUM_ROW,NUM_COL);
    print_2D_array(array_2D,NUM_ROW,NUM_COL);
    printf("\n\n");
    print_2D_array(exposed_2D_array,NUM_COL,NUM_ROW);
    return 0;
}

//### END MAIN ###

//### Func Definition ###

int *create_array(uint32_t length, int init_value)
{
    if(length == 0)                             //If no length is given than return NULL
    {
        return NULL;
    }

    int * array = (int*)malloc(sizeof(int) * length); //allocate memory for an array of int with the length determined by lentgh

    for(uint32_t i = 0; i < length; i++)
    {
        array[i]=init_value;                        //every member of array will be initialised by init_value
    }

    return array;                                      //return the first adress of array
}

/*The print_array Func gets an array and its length and print all of its members*/
void print_array(int *array, uint32_t length)
{
    if(array == NULL || length == 0){
        return;
    }
    for(uint32_t i = 0; i < length; i++)
    {
        printf("%d, ",array[i]);
    }
}

//the free_array func will free the memory alocated by func creat array
int* free_array(int *array)
{
    if(array == NULL)
    {
        return NULL;
    }

    free(array);

    return NULL;
}

int **create_2D_array(uint32_t num_row, uint32_t num_col, int init_value)
{
    int ** array_2D = (int**)malloc(sizeof(int*)*num_row); //first allocate the rows needed for the 2D array

    for(uint32_t i = 0; i < num_row; i++) //then iterate through all rows and allocate each col with func crate_array
    {

        array_2D[i]=create_array(num_col,init_value);


    }

    return array_2D;
}
//The print_2D_array takes an int** array and prints all it rows and cols
void print_2D_array(int **array_2D, uint32_t num_row, uint32_t num_col)
{
    for(uint32_t i = 0; i < num_row; i++) //then iterate through all rows and allocate each col with func crate_array
    {

        print_array(array_2D[i],num_col);
        printf("\n");

    }
}
/*The write_2D_Array function takes a 2D array with its rows and cols and starts to write the first member with the start value
in the direktion of pos_neg where the value 1 is in positiv direktion and 0 the negativ direktion*/
void write_2D_Array(int **array_2D, uint32_t num_row, uint32_t num_col, int start_value, int pos_neg)
{

    if(array_2D == NULL)
    {
        return;
    }
    for(uint32_t i = 0; i < num_row; i++)
    {
        for(uint32_t j = 0; j < num_col; j++)
        {
            array_2D[i][j] = start_value;
        if(pos_neg == 1)
        {
            start_value++;
        }
        else{
        start_value--;
        }
        }
    }
}

int **expose_2D_array(int **array_2D, uint32_t num_row, uint32_t num_col)
{
    int ** exposed_2D_array = create_2D_array(num_col, num_row,0);

    for(uint32_t i = 0; i < num_col; i ++)
    {
        for(uint32_t j = 0; j < num_row; j++)
        {
            exposed_2D_array[i][j]= array_2D[j][i];
        }
    }

    return exposed_2D_array;
}
