#include <stdio.h>
#include <stdlib.h>

/*Describtion:
The programm creates a function to allocate
dynamically memory for an array.
The Function createarray takes the length and the init Value
for that array
*/

#define LENGTH 5

//### Fnction Declaration ###
int * create_array(unsigned int length, int value);
int * freeArray(int * array);
//### END Declaration ###

int main()
{
    int * arr_1 = create_array(LENGTH,12345);

    for(unsigned int i = 0; i < LENGTH; i++){

        printf("%d\n",arr_1[i]);
    }

    arr_1 = freeArray(arr_1);

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
