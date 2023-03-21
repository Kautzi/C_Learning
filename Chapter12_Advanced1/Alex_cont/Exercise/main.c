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
#define DPATH "D:\\Programmieren\\C_Learning\\Chapter12_Advanced1\\Alex_cont\\Exercise\\"
#define ARR_TYPE  int
//### END DEFINES ###

//### Function Declaration ###
int comp(const void* val_1, const void* val_2); //Hilfs Funktion für qsort
//### END Declaration ###

//### MAIN ###

int main(int argc, char** argv)
{
// Erst Abfrage ob der dateiname in argc 2 enthalten ist
if(argc == 1)
{
printf("Du hast keine Datei angegeben.");
}

//Kopiere den Datei Pfad in argc 2 in Datapah
char PATH[100]=strncpy(PATH,DPATH,100);
strncat(PATH,argv[2],100);


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
