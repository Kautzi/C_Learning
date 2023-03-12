#include <stdio.h>

//Enumerartion: ein enum ist eine Aufzählung in dem unten gezeigten Besispiel
//sind die namen FAMILY,SCHOOL und OTHER nichts anderes als 1,2,3
//diese könne beispielsweise mit eine Switch Anweisung einfach abgefangen werden

typedef enum realtionship
{
    FAMILY,
    SCHOOL,
    OTHER,
}relation_t;

//Anhand fon dem nächsten typedef wird gezeigt wie man strukturen in strukturen verpacken kann
typedef struct
{
    unsigned int year;
    unsigned int month;
    unsigned int day;
}date_t;

//TYPEDEF 1.
typedef struct Friend //typedef kann auch in der typdefinition wie hier verwendet werden, üblich
{
    char name[50];
    char prename[50];
    date_t date;
    relation_t rel;

}Friend_t; //der durch typedef verwendete NAme muss dann hinter dem geschweiften klammernpaar angegebene werden

//TYPEDEF 2.
//typedef: Wenn typedef verwendet wird muss der durch typedef angewendete typ vorher bekannt sein

//typedef struct Friend Friend_t

//### Function Declaration ###
//Wenn eine struktur als pointer einer function übergeben wird muss aus dem Zugriffsoperator
// zBsp: friend.name ==> friend->name werden

//der -> Operator ersätzt die derefferenzierungsmethode über (*friend).prename beispielsweise

void print_date(date_t *date)
{
    printf("%d.%d.%d\n",date->day,date->month,date->year);
}

void print_friend(Friend_t *friend)
{
    printf("%s %s\n",friend->prename,friend->name);
    print_date(&friend->date);

    switch(friend->rel)
    {
        case FAMILY:
        {
            printf("I know him from Family.\n");
            break;
        }
        case SCHOOL:
        {
            printf("I know him from school.\n");
            break;
        }
        case OTHER:
        {
            printf("I know him from somewhereelse.\n");
            break;
        }
    }
}


//### END Function Declaration ###

int main()
{
    //way to initialise a struct
    Friend_t jan = {.name="Kautz",.prename = "Alex",.date ={.year = 1989, .month = 9, .day = 14},.rel = FAMILY};
                                            //       A       A
                                            //      | |     | |
    //hier sieht man das wenn strukturen ineinander verschachtelt werden die struktur beim initialiesieren mit weiteren punktoperatoren und geschweiften klammern versehen werden muss

    Friend_t peter = {.name="Lustig",.prename = "Peter",.date ={.year = 1960, .month = 3, .day = 2},.rel = SCHOOL };
    Friend_t hans = {.name="Maier",.prename = "Hans",.date ={.year = 1940, .month = 12, .day = 3},.rel = OTHER };

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
