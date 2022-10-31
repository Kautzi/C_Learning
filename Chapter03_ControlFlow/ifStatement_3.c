#include <stdio.h>
#define NICHT !
#define MOD %

int main()
{

    int age_jan = 27;
    printf("Geben Sie ds alter ein:\n");
    scanf("%d", &age_jan);

    if ((age_jan MOD 2) == 0)
    {
        printf("Age ist even");
    }
    else
    {
        printf("Age is odd");
    }


    return 0;
}
