#include <stdio.h>

struct Friend
{
    char name[50];
    char prename[50];
    unsigned int year;
    unsigned int month;
    unsigned int day;

};

//### Function Declaration ###
//Wenn eine struktur als pointer einer function übergeben wird muss aus dem Zugriffsoperator
// zBsp: friend.name ==> friend->name werden

//der -> Operator ersätzt die derefferenzierungsmethode über (*friend).prename beispielsweise
void print_friend(struct Friend *friend)
{
    printf("%s %s\n",friend->prename,friend->name);
    printf("%u.%u.%u\n",friend->day,friend->month,friend->year);
}

//### END Function Declaration ###

int main()
{
    //way to initialise a struct
    struct Friend jan = {.name="Kautz",.prename = "Alex",.year = 1989, .month = 9, .day = 14 };

    struct Friend peter = {.name="Lustig",.prename = "Peter",.year = 1960, .month = 3, .day = 2 };
    struct Friend hans = {.name="Maier",.prename = "Hans",.year = 1940, .month = 12, .day = 3 };

    //strukturen in arrays abspeichern

    struct  Friend friend_book[] = {jan,peter,hans};

    //iterate the struct in a for loop and give it to a function
    for(uint32_t i = 0; i < 3; i ++)
    {
    //direkt Zugriff als Pointer
    print_friend(friend_book + i);
    //zugriff über Arrayschreibweise
    //print_friend(&friend_book[i]);

    }


    /*
    printf("%s\n",jan.name);
    printf("%s\n",jan.prename);
    printf("%d\n",jan.year);


    printf("%s\n",peter.name);
    printf("%s\n",peter.prename);
    printf("%d\n",peter.year);

    printf("%s\n",hans.name);
    printf("%s\n",hans.prename);
    printf("%d\n",hans.year);
    */
    return 0;
}
