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
    dynamic_array_t *dynarray = createDynamicArray();
    //### END Variables ###

    for(uint32_t i = 0 ; i < 20; i++)
    {
    pushValue(dynarray,2);
    }
    for(uint32_t i = 0 ; i < 20; i++)
    {
    printf("%f\n",popValue(dynarray));
    }
    freeDynamicArray(dynarray);
    return 0;
}

//### FUNC DEFINES ###
dynamic_array_t * createDynamicArray()//FIRST Check ->> PASS
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

void * freeDynamicArray(dynamic_array_t *array )//FIRST Check ->> PASS
{
    array->data=NULL;
    free(array->data);
    array=NULL;
    free(array);

    return NULL;
}

void expandDynamicArray(dynamic_array_t *array)//FIRST Check ->>PASS
{
    array->capacity *= GROWTH_FACTOR;
    if(realloc(array->data,array->capacity * sizeof(float))==NULL)
    {
        freeDynamicArray(array);
    }
}

void shrinkDynamicArray(dynamic_array_t *array)//FIRST Check ->>PASS
{
    array->capacity /= SHRINK_FACTOR;
    if(realloc(array->data,array->capacity * sizeof(float))==NULL)
    {
        freeDynamicArray(array);
    }
}

void pushValue(dynamic_array_t *array, const float value)//FIRST Check ->>PASS
{

    if(array->length + 1 <= array->capacity)
    {   array->length++;
        array->data[array->length-1]=value;
    }
    else
    {
        expandDynamicArray(array);
        array->length++;
    }
    array->data[array->length-1]=value;
}

float popValue(dynamic_array_t *array)
{
    if(array->length - 1 <= array->capacity/SHRINK_FACTOR)
    {   array->length--;
        shrinkDynamicArray(array);
        return array->data[array->length-1];
    }
    else
    {
        array->length--;
       return array->data[array->length-1];
    }
}

void cleanDynamicArray(dynamic_array_t *array);

void printDynamicArray(const dynamic_array_t *array);
