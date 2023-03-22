/*
# Exercise

Hallo Leute!

Willkommen bei der nächsten Programmier-Übung in diesem Kurs.

## Aufgaben der Programmierübung

- Erstelle eine Datei mit zufälligen Int Werten
- Lese die Werte der Datei ein (Dateiname und Länge als argv einlesen)
- Sortiere die Werte der Datei
- Speichere die sortierten Werte in der Datei wieder ab*/

#include <stdio.h>
#include <stdlib.h>//qsort()
#include <string.h>//für strncpy()

//### DEFINES ###
char DPATH[]= "D:\\Programmieren\\C_Learning\\Chapter12_Advanced1\\Alex_cont\\Exercise\\";
#define ARR_TYPE  int
//### END DEFINES ###

//### Function Declaration ###
int comp(const void* val_1, const void* val_2); //Hilfs Funktion für qsort
//### END Declaration ###

//### MAIN ###
//Strg+Alt+A für Übergabe argv
int main(int argc, char** argv)
{
//### Variablen ###

int length = atoi(argv[2]);//wandle den dritten Parameter in in um, ist die Anzahl der Zahlen
int numbers[100]={'\0'}; //Variable um die Werte aus den dateien ab zu speichern
//### END Variablen ###

// Erst Abfrage ob der dateiname in argc 2 enthalten ist
if(argc == 1)
{
printf("Du hast keine Datei angegeben.\n");
}

//Kopiere den Datei Pfad in argc 2 in Datapah
char input_file_path[101]={'\0'};
strncpy(input_file_path,DPATH,100);
strncat(input_file_path,argv[1],100);

FILE *fp =fopen(input_file_path,"r");//öffne die in input_file_path gespeicherte Datei im lese Modus
if(fp==NULL)
{
    return 1;
}
for(int i = 0; i < length; i ++)
{
    fscanf(fp,"%d",&numbers[i]);
    printf("%d\n",numbers[i]);

}
printf("\n\n");
fclose(fp);//schliese die Datei
//### END Lesen der Nummern

qsort(numbers,(size_t)length,sizeof(int),comp);

for(int i = 0; i < length; i ++)
{

    printf("%d\n",numbers[i]);

}
printf("\n\n");


    return 0;
}
//### END MAIN

//### Function Definition ###

int comp(const void* val_1, const void* val_2)
{
    ARR_TYPE RIGHT = (*(ARR_TYPE*)val_1);
    ARR_TYPE LEFT = (*(ARR_TYPE*)val_2);

    if(LEFT < RIGHT)
    {
        return 1;
    }
    else if(LEFT > RIGHT)
    {
        return -1;
    }
    else
    {
        return 0;
    }

}
