#include <stdio.h>
#include <stdlib.h> //für integration malloc

int main()
{
    unsigned int length =3;
    int * array = (int*)malloc(length * sizeof(int));

    for(unsigned int i = 0; i < length; i++)
    {
        array[i]= (int)i;

    }

     for(unsigned int i = 0; i < length; i++)
    {
        printf("%d\n",array[i]);

    }
    free(array);//sollte bei selbstangelegten arraya immer frei gegeben werden
    array = NULL;
    return 0;
}
