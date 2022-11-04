#include <stdio.h>

//*****FUNC DECLARATION************

void binom(int a, int b, int *c);

//****END DECLARATION**************

int main()
{

    int first = 0;
    int second = 0;
    int result = 0;

    printf("\nGebe den ersten Parameter ein:");
    scanf("%d", &first);


    printf("\nGebe den zweiten Parameter ein:");
    scanf("%d", &second);

    //Berechne die erste binomische Formel

    binom(first, second, &result);

    printf("\nDas Ergebnis der ersten Binomischen Formel ist %d.", result);


    return 0;
}


//*****FUNC DEFINITION*************

void binom(int a, int b, int *c)
{

    *c = (a * a) + (2 * a * b) + b * b;
}

//*****END DEFINITION**************
