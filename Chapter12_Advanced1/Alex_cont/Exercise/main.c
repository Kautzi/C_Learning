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
#define FGETS_FPUTS //um verschiedene arten zum schreiben und lesen von dateien aus zu probieren FGETS_FPUTS, FWRITE_FREAD
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
char DPATH[]= "D:\\Programmieren\\C_Learning\\Chapter12_Advanced1\\Alex_cont\\Exercise\\";
int length = atoi(argv[2]);//wandle den dritten Parameter in int um, ist die Anzahl der Zahlen
int numbers[100]={'\0'}; //Variable um die Werte aus den dateien ab zu speichern
char FGETS_NUMBERS[100]={'\0'};
//### END Variablen ###

// Erst Abfrage ob der dateiname in argc 2 enthalten ist
if(argc == 1)
{
printf("Du hast keine Datei angegeben.\n");
}


//Kopiere den Datei Pfad in argc 2 in Datapah
//Input File PATH im argv[1]
char input_file_path[101]={'\0'};
strncpy(input_file_path,DPATH,100);
strncat(input_file_path,argv[1],100);
//output_file_path im argv[3]
char output_file_path[100]={'\0'};
strncpy(output_file_path,DPATH,100);
strncat(output_file_path,argv[3],100);

//Open the imput file in read mode
FILE *fp =fopen(input_file_path,"r");//öffne die in input_file_path gespeicherte Datei im lese Modus
//check that fp isnt NULL
if(fp==NULL)
{
    return 1;
}
//open the output file and check that it isnt NULL
FILE* fout=fopen(output_file_path,"w");
if(fout == NULL)
{
    return 1;
}



//############ START FSCANF_FPRINTF #######################
//Here is the code for reading and writing with fscanf and fprintf
#ifdef FSCANF_FPRINTF
for(int i = 0; i < length; i ++)
{
    fscanf(fp,"%d",&numbers[i]);
    printf("%d\n",numbers[i]);

}
printf("\n\n");

//### END Lesen der Nummern

qsort(numbers,(size_t)length,sizeof(int),comp);

for(int i = 0; i < length; i ++)
{

    printf("%d\n",numbers[i]);

}
printf("\n\n");
//NEXT schreiben der sortierten Zahlen in eine neue Datei!!

for(int i = 0; i < length; i ++)
{
    fprintf(fout,"%d\n",numbers[i]);
}
//after writing all sorted numbers to output_file_path
//read them again and print thair values
//############ END FSCANF_FPRINTF #######################
#endif

//############  START FGETS_FPUTS #######################
//Here we read and write files with fgets and fputs
//char FGETS_NUMBERS[100]={'\0'}; <== input variable
#ifdef FGETS_FPUTS

int i=0;
while(fgets(FGETS_NUMBERS,length,fp)!=NULL)
{
    printf("%s\n",FGETS_NUMBERS);
    numbers[i]=atoi(FGETS_NUMBERS);
}
//first sort numbers
qsort(numbers,(size_t)length,sizeof(int),comp);


//than format numbers to string with sprintf func
for(int j = 0; j< length; j ++)
{
    sprintf(FGETS_NUMBERS,"%d\n",numbers[j]);
    fputs(FGETS_NUMBERS,fout);
}


#endif

//############  START FWRITE_FREAD  #######################
#ifdef FWRITE_FREAD
//code missing
#endif




//at the end we close all files
fclose(fout);
fclose(fp);//schliese die Datei
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
