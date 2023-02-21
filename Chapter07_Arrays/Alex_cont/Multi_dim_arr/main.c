#include <stdint.h>
#include <stdio.h>

int main()
{
    double M[3][3];


    //Benutze zur Init für zwei dim array zwei for Schleifen
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            M[i][j] = i + j;
        }
    }

    //Zur Ausgabe von zwei dim Array verwende zwei for Schleifen

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("M[%d][%d] = %lf\n", i, j, M[i][j]);
        }
    }

    return 0;
}
