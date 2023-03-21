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
#include <stdlib.h>

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


    return 0;
}
//### END MAIN

//### Function Definition ###

int comp(const void* val_1, const void* val_2)
{
    ARR_TYPE RIGHT = (*(ARR_TYPE*)val_1);
    ARR_TYPE LEFT = (*(ARR_TYPE*)val_2);

    if(left < right)
    {
        return 1;
    }
    else if(left > right)
    {
        return -1;
    }
    else
    {
        return 0;
    }

}
