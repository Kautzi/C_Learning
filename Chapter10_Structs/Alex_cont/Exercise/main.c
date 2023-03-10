#include <stdio.h>
#include <stdint.h>

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
  int array[50];
  int length;
}Vector_t;

//### END Structs ###


//### Function Declaration ###
int min(Vector_t * Vector);
int max(Vector_t * Vector);
int mean(Vector_t * Vector);
//### END Function Declaration ###


//### MAIN ###

int main()
{
    Vector_t Vector;

    Vector.array[0]=2;
    Vector.array[1]=5;
    Vector.array[2]=-10;
    Vector.array[3]=55;
    Vector.array[4]=-200;
    Vector.array[5]=8;
    Vector.array[6]=0;

    Vector.length = sizeof(*Vector->array / Vector.array[0]);

    printf("%d\n",min(&Vector));


  return 0;
}

//### END MAIN ###

//### Function Definition ###

//Func min() returns the smalest term in an array
int min(Vector_t *Vector)
{
    int min = Vector -> array[0];
    for(int i = 1; i < Vector->length; i ++)
    {
        if(Vector->array[i] < min)
        {
        min = Vector->array[i];
        }
    }
  return 0;
}
