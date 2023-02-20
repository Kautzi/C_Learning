#include <stdio.h>

//### Func Declaration ###

//### END Declaration ###


int main()
{
    //Declaration of int Array arr_1
    int arr_1[4];

    //Init arr_1 mit Wert 1337
    for (int i = 0; i < 4; i++)
    {

        arr_1[i] = 1337;
    }

    //Output content of arr_1
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", arr_1[i]);
    }

    int arr_2[] = {13, 14, 56, 32};

    //Output content of arr_2
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", arr_2[i]);
    }


    return 0;
}

//### Func Definition ###

//### END Definition ###
