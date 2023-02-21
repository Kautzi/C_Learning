#include <stdint.h>
#include <stdio.h>

/*### Description:
Th Program takes two multi dim arrays and
add every member of the first array with the second array
##################*/


int main()
{
    float arr_1[3][2] = {{4.6f, 6.7f}, {9.2f, 1.9f}, {5.5, 4.9}};
    float arr_2[3][2] = {{3.3, 6.6}, {7.7, 8.34}, {99.1, 11.6}};
    float arr_3[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arr_3[i][j] = arr_1[i][j] + arr_2[i][j];
        }
    }

    //Ausgabe der addierten Werte

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Addierte Werte von arr_3[%d][%d] = %lf\n", i, j, arr_3[i][j]);
        }
    }

    return 0;
}
