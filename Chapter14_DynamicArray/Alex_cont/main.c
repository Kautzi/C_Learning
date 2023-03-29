#include "Dynamic_Array.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

//### DEFINES ###
//...
//### END DEFINES ###

//### FUNC_DECLARE ###
//...
//### END DECLARE ###

//### MAIN ###
int main()
{
    //### Variables ###
    //...
    //### END Variables ###
    //...
    return 0;
}

//### FUNC DEFINES ###
dynamic_array_t * createDynamicArray()
{

    //allocate memory for initial Array
    dynamic_array_t *array = (dynamic_array_t*)malloc(sizeof(dynamic_array_t));
    if(array == NULL)
    {
    return NULL;
    }
    array->length = 0U;
    array->capacity=INIT_CAPACITY;
    array->data = (float*)calloc(array->capacity,sizeof(float));

    if(array->data == NULL)
    {
     free(array);
     return NULL;
    }

    return array;
}

void * freeDynamicArray(dynamic_array_t *array );

void expandDynamicArray(dynamic_array_t *array);

void shrinkDynamicArray(dynamic_array_t *array);

void pushValue(dynamic_array_t *array, const float value);

float popValue(dynamic_array_t *array);

void cleanDynamicArray(dynamic_array_t *array);

void printDynamicArray(const dynamic_array_t *array);
