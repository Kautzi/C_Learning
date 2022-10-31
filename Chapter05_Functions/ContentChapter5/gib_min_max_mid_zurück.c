#include "min_max_mid.h"
#include <stdio.h>


int main()
{
    //**************Variablen Declaration**********************
    double first_num = enter_Number();
    double second_num = enter_Number();


    double min = 0;
    double max = 0;
    double mid = 0;

    //*************Ende Variablen Declaration*****************

    //*************Aufruf der ret_min Funktion****************

    min = ret_min(first_num, second_num);
    printf("\nDie kleinere Zahl ist: %.1lf", min);


    //*************Aufruf der ret_max Funktion****************

    max = ret_max(first_num, second_num);
    printf("\nDie größere Zahl ist %.1lf", max);


    //*************Aufruf der ret_mid Funktion****************

    mid = ret_mid(first_num, second_num);
    printf("\nDer Schnitt ist %.1lf", mid);


    return 0;
}
