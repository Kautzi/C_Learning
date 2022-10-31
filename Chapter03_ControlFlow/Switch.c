#include <stdio.h>

enum Drink
{
    COLA,
    ICETEA,
    WATER,
    COFFE
};

int main(void)
{


    int selection;

    printf("Plese Enter your selection:");
    scanf("%d", &selection);

    switch (selection)
    {
    case COLA:
        printf("You chose cola");
        break;
    case ICETEA:
        printf("You chose icetea");
        break;
    case WATER:
        printf("You chose water");
        break;
    case COFFE:
        printf("You chose coffe");
        break;
    default:
        printf("Dont care");
    }

    return 0;
}
