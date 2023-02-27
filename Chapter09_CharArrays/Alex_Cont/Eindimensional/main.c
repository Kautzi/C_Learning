#include <stdio.h>
#include <stdlib.h>

int main()
{

// Stack Arrays
char array1[] = {'J','a','n','\0'};//Erste \0 muss bei dieser Variante angegeben werden aber variable String länge


char array2[4] = {'J','a','n','\0'};//Auch hier muss \0 angegeben werden aber Länge von string abhängig von [4]


char array3[] = "Hallo Alex\n";// \0 wird automatisch mit angegeben und länge wird automatisch bestimmt

char array4[32] ={'\0'}; //hier wird ein array mit 32 elementen initialisiert und jeder member wird mit \0 initialisiert



//Heap Arrays

char * array5 = (char*)malloc(32 * sizeof(char));

array5[0]='A';
array5[1]='L';
array5[2]='E';
array5[3]='X';
array5[4]='\0';

printf("%s",array5);



printf("%s",array3);



return 0;
}
