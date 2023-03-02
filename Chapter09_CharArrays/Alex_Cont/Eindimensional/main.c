#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//### Func Definition ###

char ** create_Friendbook(uint32_t num_friends)
{

    char** friends = (char**)malloc(num_friends * sizeof(char*));

    if(friends == NULL)
    {
        return NULL;
    }

    for(uint32_t i = 0; i < num_friends;i++)
    {
        friends[i]=(char*)malloc(20 * sizeof(char));
    }

    return friends;

}

char ** freeFriendbook(char** friends,uint32_t num_friends)
{
    for(uint32_t i = 0; i < num_friends; i++ )
    {
        free(friends[i]);
    }
    free(friends);
    return NULL;
}

//### END Definition ###

int main()
{
    uint32_t num_friends = 3;

    char** friends = create_Friendbook(num_friends);

// Die funktion strncpy() copiert einen STRING in einen Speicherbereich der dritte parameter zBs.:"20" gibt die max Länge an
    strncpy(friends[0],"Alexander Kautz",20);
    strncpy(friends[1],"IRIS Kautz",20);
    strncpy(friends[2],"Michael Schloter",20);

    for(uint32_t i = 0 ; i < num_friends; i++)
    {
        printf("%s\n",friends[i]);
    }
//###########################################################################################################################
    long unsigned int length0= strlen(friends[0]);//strlen gibt die länge eines strings ohne \0 wieder
    long unsigned int length1= strlen(friends[1]);
    long unsigned int length2= strlen(friends[2]);

    printf("%lu\n",length0);
    printf("%lu\n",length1);
    printf("%lu\n",length2);

    int compare0 = strncmp(friends[0],friends[1],30);//strncmp vergleicht zwei strings wenn sie gleich sind wird 0 zurück gegeben benötigt die Anzahl der zu vergleichenden Zeichen
    int compare1 = strncmp(friends[0],friends[2],30);
    int compare2 = strncmp(friends[1],friends[1],30);

    printf("%d\n",compare0);
    printf("%d\n",compare1);
    printf("%d\n",compare2);

//Die Funktion strncat() hängt zwei Strings hintereinander und spechert sie im String 1 ab und returnt diesen auch
    char* friendcomp = strncat(friends[0],friends[1],40);

    printf("%s\n",friendcomp);
//#################################################################################################################


//Die Funktion strchr() gibt einen Pointer zurück von dem ersten Vorkommen des Charakters im angegebenen String
    char* found_char0 = strchr(friends[0], 'a');//Ausgabe: "ander KautzIRIS Kautz"

//Die Funktion strrchr() gibt den Pointer zum letzten Vorkommen des angegebenen Charakters aus
    char* found_char1 = strrchr(friends[0], 'a');//Ausgabe:"autz"

    if(found_char0 != NULL)
    {
    printf("%s\n",found_char0);
    }
    if(found_char1 != NULL)
    {
    printf("%s\n",found_char1);
    }
//Die strstr() Funktion gibt einen Pointer auf die Position im angegebenen String wieder wo der gesuchter String zu finden ist und gibt alles bis zum ende wieder
    char* found_str = strstr(friends[0], "Kautz");// Ausgabe strstr(): KautzIRIS Kautz

    if(found_str != NULL)
    {
        printf("Ausgabe strstr(): %s\n",found_str);
    }

//Die strtok() Funktion sucht den charakter der im zweiten Parameter angegebene wurde und gibt einen Pointer auf den Bereich danach aus
    char* token = strtok(friends[0]+10, " ");//Ausgabe strtok(): KautzIRIS
                            // wenn ich ab einer gewissen stelle erst suchen will kann ich "friends[0]+10" das schreiben
    if(token != NULL)
    {
        printf("Ausgabe strtok(): %s\n",token);
    }

    friends = freeFriendbook(friends,num_friends);
    return 0;
}
