#include <stdio.h>

int main()
{

    int value = 1345;
    printf("Value mem adr: %p\n", &value);

    int *p = &value;

    printf("p value: %d\n", *p);
}
