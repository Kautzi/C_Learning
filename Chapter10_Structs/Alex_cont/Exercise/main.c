#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/*# Exercise

Hallo Leute!

Willkommen bei der nächsten Programmier-Übung in diesem Kurs.

## Aufgaben der Programmierübung

- Deklariere das Struct **struct Vector** und ein Typedef **Vector**
  - Die Struktur soll das Daten Array und die Länge des Arrays abspeichern
- Für dieses struct sollen die 1D-Array Methoden aus Kapitel 7/8 angepasst werden
- Teste den Code für die Max, Min und Mean Funktion für einen erstellten Vector*/

//### Structs ###

typedef struct
{
  int *array;
  size_t length;
}Vector_t;

//### END Structs ###


//### Function Declaration ###
int min(Vector_t * Vector);
int max(Vector_t * Vector);
double mean(Vector_t * Vector);
int * create_array(size_t length, int init);
//### END Function Declaration ###


//### MAIN ###

int main()
{
    Vector_t Vector ={.array=create_array(3,1),.length=3};

    Vector.array[0]= 200;
    Vector.array[1]= -10;
    Vector.array[2]= -30;



    printf("%d\n",min(&Vector));
    printf("%d\n",max(&Vector));
    printf("%.2lf\n",mean(&Vector));



  return 0;
}

//### END MAIN ###

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
