#include <stdio.h>

#define PI 3.14159f

int main()
{
    float radius = 0.0F;
    printf("Geben Sie den Radius ein:");
    scanf("%f", &radius);

    if (radius <= 0.0F)
    {
        return 1;
    }
    else
    {
        printf("Der Umpfang beträgt %f", (2 * radius * PI));
    }
    return 0;
}
