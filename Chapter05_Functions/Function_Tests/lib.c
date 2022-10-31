#include <stdio.h>
#include "lib.h"

void printDivisibility(int number)
{
    if (number % 2 == 0)
    {
        printf("%d is even!\n", number);
        return;
    }
    else if (number % 3 == 0)
    {
        printf("%d divisible by 3\n", number);
        return;
    }
    else
    {
        printf("%d is Odd!\n", number);
        return;
    }
}

int getNumber(void)
{
    int number = 0;
    printf("Bitte gebe eine ganze Zahl ein:\n");
    scanf("%d", &number);

    return number;
}
