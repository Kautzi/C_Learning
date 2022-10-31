#include <stdio.h>

int main(void)
{

    int count = 5;

    while (1)
    {
        printf("Count down %d\n", count--);
        if (count <= 0)
        {
            break;
        }
    }

    return 0;
}
