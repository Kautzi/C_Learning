#include <stdio.h>

struct Friend
{
    char name[50];
    char prename[50];
    unsigned int year;
    unsigned int month;
    unsigned int day;

};

int main()
{
    //way to initialise a struct
    struct Friend jan = {.name="Kautz",.prename = "Alex",.year = 1989, .month = 9, .day = 14 };

    struct Friend peter = {.name="Lustig",.prename = "Peter",.year = 1960, .month = 3, .day = 2 };
    struct Friend hans = {.name="Maier",.prename = "Hans",.year = 1940, .month = 12, .day = 3 };

    printf("%s\n",jan.name);
    printf("%s\n",jan.prename);
    printf("%d\n",jan.year);


    printf("%s\n",peter.name);
    printf("%s\n",peter.prename);
    printf("%d\n",peter.year);

    printf("%s\n",hans.name);
    printf("%s\n",hans.prename);
    printf("%d\n",hans.year);

    return 0;
}
