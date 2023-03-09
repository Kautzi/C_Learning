#include <stdio.h>

//TYPEDEF 1.
typedef struct Friend //typedef kann auch in der typdefinition wie hier verwendet werden, üblich
{
    char name[50];
    char prename[50];
    unsigned int year;
    unsigned int month;
    unsigned int day;

}Friend_t; //der durch typedef verwendete NAme muss dann hinter dem geschweiften klammernpaar angegebene werden

//TYPEDEF 2.
//typedef: Wenn typedef verwendet wird muss der durch typedef angewendete typ vorher bekannt sein

//typedef struct Friend Friend_t

//### Function Declaration ###
//Wenn eine struktur als pointer einer function übergeben wird muss aus dem Zugriffsoperator
// zBsp: friend.name ==> friend->name werden

//der -> Operator ersätzt die derefferenzierungsmethode über (*friend).prename beispielsweise
void print_friend(Friend_t *friend)
{
    printf("%s %s\n",friend->prename,friend->name);
    printf("%u.%u.%u\n",friend->day,friend->month,friend->year);
}

//### END Function Declaration ###

int main()
{
    //way to initialise a struct
    Friend_t jan = {.name="Kautz",.prename = "Alex",.year = 1989, .month = 9, .day = 14 };

    Friend_t peter = {.name="Lustig",.prename = "Peter",.year = 1960, .month = 3, .day = 2 };
    Friend_t hans = {.name="Maier",.prename = "Hans",.year = 1940, .month = 12, .day = 3 };

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
