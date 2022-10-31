#include <stdio.h>
#define NICHT !
int main()
{


    int age_alex = 32;
    int age_iris = 30;
    int age_lilly = 2;

    if (age_alex > age_iris && NICHT(age_lilly > age_iris))
    {
        printf("Alex ist %d Jahre älter", age_alex - age_iris);
    }
    else
        printf("Könnten auch gleich alt sein.");
    return 0;
}
