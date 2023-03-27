#include "Vector.h"
#include <stdio.h>
#include <stdlib.h>

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
    array=NULL;//has to bee NULL at first
    free(array);//and then free

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

    vector=NULL;//has to bee NULL at first
    free(vector);//and then free

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

int readInVectorData(Vector *vec, const char *filepath)//TEST ->>PASS
{
    //first create a FILE pointer and open it
    FILE *f_in = fopen(filepath,"r");//open in read mode
    //now check for error
    if(f_in == NULL)
    {
        return 1; //if opening of f_in failed than return NULL
    }
    for(uint32_t i = 0; i < vec->length;i++)
    {

        fscanf(f_in,"%f",&vec->data[i]);//then read "length" elements in file and save them in "data"
    }
    fclose(f_in);
    return 0;
}

int writeOutVectorData(Vector *vec, const char *filepath)
{
    //first create a FILE pointer and open it
    FILE *f_out = fopen(filepath,"w");//open in read mode
    //now check for error
    if(f_out == NULL)
    {
        return 1; //if opening of f_in failed than return NULL
    }
    for(uint32_t i = 0; i < vec->length;i++)
    {

        fprintf(f_out,"%f\n",vec->data[i]);//then read "length" elements in file and save them in "data"
    }
    fclose(f_out);
    return 0;
}

void printVector(const Vector *vector)
{
    for(uint32_t i = 0; i < vector->length; i ++)
    {
        printf("%f\n",vector->data[i]);
    }
}

Vector *addVectors(const Vector *vec1, const Vector *vec2)//TEST ->> PASS
{

    if(vec1->length != vec2->length)
    {
        return NULL;
    }
    Vector* vec3 = createVector(vec1->length,0);
    for(uint32_t i = 0; i < vec1->length; i ++)
    {
        vec3->data[i]=vec1->data[i] + vec2->data[i];
    }
    return vec3;
}

Vector *subVectors(const Vector *vec1, const Vector *vec2)//TEST ->> PASS
{
if(vec1->length != vec2->length)
    {
        return NULL;
    }
    Vector* vec3 = createVector(vec1->length,0);
    for(uint32_t i = 0; i < vec1->length; i ++)
    {
        vec3->data[i]=vec1->data[i] - vec2->data[i];
    }
    return vec3;
}

float multiplyVectors(const Vector *vec1, const Vector *vec2)//TEST ->> PASS
{
    if(vec1->length != vec2->length)
    {
        return 1;
    }
    Vector* vec3 = createVector(vec1->length,0);
    for(uint32_t i = 0; i < vec1->length; i ++)
    {
        vec3->data[i]=vec1->data[i] * vec2->data[i];
    }
    vec3->data[0]=vec3->data[0] + vec3->data[1] +vec3->data[2];
    return vec3->data[0];
}
