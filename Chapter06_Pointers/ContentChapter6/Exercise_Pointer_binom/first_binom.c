#include <stdio.h>

//*****FUNC DECLARATION************

void binom(int a, int b, int *c);

//****END DECLARATION**************

int main()
{

    int first = 8;
    int second = 5;
    int result;

    binom(first, second, &result);

    printf("The Result of (%d + %d)to the power of 2 is = %d", first, second, result);

    return 0;
}


//*****FUNC DEFINITION*************

void binom(int a, int b, int *c)
{

    *c = (a + b) * (a + b);
}

//*****END DEFINITION**************
