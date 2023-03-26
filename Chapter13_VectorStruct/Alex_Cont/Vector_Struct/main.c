#include "Vector.h"
#include <stdio.h>
#include <stdlib.h>


//### DEFINES ###

//### END DEF ###

//### Declarations ###

//### END DEC ###

//### MAIN ###
int main()
{
    //### Variables ###

    //float* array = createArray(50,3);
    Vector* vec = createVector(5,9);
    vec->data[0]=40;
    vec->data[1]=4;
    vec->data[2]=-10;
    vec->data[3]=1;
    vec->data[4]=50;


    //### END Variables ###

    //### TEST AREA ###
    {
    //#################
        for(unsigned int i = 0; i < vec->length; i ++)
        {
            printf("%f\n",vec->data[i]);
        }

        printf("Mean: %f\n",meanVector(vec));
        printf("Min: %f\n",minVector(vec));
        printf("Max: %f\n",maxVector(vec));

        freeVector(vec);
    //#################
    }
    //### END TEST ###


    return 0;
}
//### END MAIN ###

//### DEFINITIONS ###
float *createArray(const unsigned int length, const float value)//TEST ->> PASS
{
    float * array = (float*)malloc(sizeof(float)*length);
    if(array == NULL)//if malloc failed arry is == NULL
    {
        return NULL;
    }
    //initialise all elements in array with value
    for(unsigned int i = 0; i < length; i ++)
    {
        array[i]=value;
    }
    return array;
}

float *freeArray(float *array) //TEST ->> PASS
{
    free(array);
    array=NULL;
    return array;
}

Vector *createVector(const unsigned int length, const float value)//TEST ->> PASS
{
    Vector * vec = (Vector*)malloc(sizeof(float)*length + sizeof(unsigned int));//allocate memory for the lenght of float data + the unsigned int in Vector
    if(vec == NULL)
    {
        return NULL;
    }

    //create array in Vector
    vec->data=createArray(length,value);
    //initialise every float *data element with value
    for(unsigned int i = 0; i < length; i ++)
    {
    vec->data[i]=value;
    }
    vec->length = length;
    return vec;
}

Vector *freeVector(Vector *vector)//TEST ->> PASS
{
    free(vector->data);
    freeArray(vector->data);
    free(vector);
    vector=NULL;

    return vector;
}

float meanVector(const Vector *vector)//TEST ->> PASS
{
    float mean = 0;
    for(uint32_t i = 0; i < vector->length; i ++)
    {
    mean+=vector->data[i];
    }
    return mean/(float)vector->length;
}

float minVector(const Vector *vector)//TEST ->> PASS
{
    float temp = vector->data[0];
for(unsigned int i = 1; i < vector->length;i++)
{
if(temp > vector->data[i])
{
    temp = vector->data[i];
}
}
return temp;
}

float maxVector(const Vector *vector)//TEST ->> PASS
{
     float temp = vector->data[0];
for(unsigned int i = 1; i < vector->length;i++)
{
if(temp < vector->data[i])
{
    temp = vector->data[i];
}
}
return temp;
}

int readInVectorData(Vector *vec, const char *filepath);

int writeOutVectorData(Vector *vec, const char *filepath);

void printVector(const Vector *vector);
