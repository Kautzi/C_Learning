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

    strcpy(friends[0],"Alexander Kautz");
    strcpy(friends[1],"IRIS Kautz");
    strcpy(friends[2],"Michael Schloter");

    for(uint32_t i = 0 ; i < num_friends; i++)
    {
        printf("%s\n",friends[i]);
    }

    friends = freeFriendbook(friends,num_friends);
    return 0;
}
