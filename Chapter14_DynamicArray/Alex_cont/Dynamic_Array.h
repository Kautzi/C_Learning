#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

//### DEFINES ###

#define INIT_CAPACITY (unsigned int) (10U) //Initial Capacity far function call createDynamicArray
#define GROWTH_FACTOR (unsigned int) (2U)
#define SHRINK_FACTOR (unsigned int) (2U)

typedef struct dynamic_array{
    float * data;
    unsigned int length;
    unsigned int capacity; // >= length
}dynamic_array_t;

//### Function Declaration ###
dynamic_array_t * createDynamicArray();

void * freeDynamicArray(dynamic_array_t *array );

void expandDynamicArray(dynamic_array_t *array);

void shrinkDynamicArray(dynamic_array_t *array);

void pushValue(dynamic_array_t *array, const float value);

float popValue(dynamic_array_t *array);

void cleanDynamicArray(dynamic_array_t *array);

void printDynamicArray(const dynamic_array_t *array);

#endif /* DYNAMIC_ARRAY.H */
