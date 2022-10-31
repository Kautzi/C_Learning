#include "min_max_mid.h"
#include <stdio.h>

double ret_mid(double first, double second)
{
    return ((first + second) / 2);
}

double ret_max(double first, double second)
{

    if (first == second)
    {
        return 0;
    }
    else
    {
        return first > second ? first : second;
    }
}

double ret_min(double first, double second)
{

    if (first == second)
    {
        return 0;
    }
    else
    {
        return first < second ? first : second;
    }
}

double enter_Number(void)
{

    double num;
    printf("\nPlease Enter Number:");
    scanf("%lf", &num);
    return num;
}
