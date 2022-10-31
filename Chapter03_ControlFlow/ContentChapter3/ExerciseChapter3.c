#include <stdio.h>

int main()
{
    int zahl;

    printf("Geben Sie eine ganze Zahl ein:\n");
    scanf("%d", &zahl);

    if (zahl % 3 > 0)
    {
        printf("Die Zahl ist nicht durch drei Teilbar.\n");
    }
    else
    {
        printf("Die Zahl ist durch drei teilbar.\n");
    }

    printf("Der rest ist %d\n", zahl % 3);


    return 0;
}
