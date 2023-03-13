#include "lib.h"

//### Function Definition ###

//Func min() returns the smalest term in an array
int min(Vector_t *Vector)
{
    int min = Vector -> array[0];
    for(size_t i = 1; i < Vector->length; i ++)
    {
        if(Vector->array[i] < min)
        {
        min = Vector->array[i];
        }
    }
  return min;
}

int max(Vector_t *Vector)
{
  int max = Vector -> array[0];
    for(size_t i = 1; i < Vector->length; i ++)
    {
        if(Vector->array[i] > max)
        {
        max = Vector->array[i];
        }
    }
  return max;
}

double mean(Vector_t *Vector)
{
  int mean = 0;

  for(size_t i = 0; i < Vector->length;i++)
  {
    mean+=Vector->array[i];
  }

  return mean/(double)Vector->length;
}

int *create_array(size_t length, int init)
{

  int * array = (int*)malloc(sizeof(int)*length);

  for(size_t i = 0; i < length; i++)
  {
    array[i]=init;
  }
  return array;
}
