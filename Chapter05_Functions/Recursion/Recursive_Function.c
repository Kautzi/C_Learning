#include <stdint.h>
#include <stdio.h>

uint64_t fac(uint8_t);

int main()
{
    //Max Recursion deapth = 65
    uint8_t i = 65;
    uint64_t num;

    num = fac(i);
    printf("Facultät von %u ist %lu", i, num);


    return 0;
}

uint64_t fac(u_int8_t num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * fac(num - 1);
    }
}
