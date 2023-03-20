#include <stdlib.h> //für qsort
#include <stdio.h>

/*Zur implementierung der qsort() Funktion
muss eine Vergleichsfunktion erstellt werden die 3 parameter zurückgeben kann
-1,1,0*/

//### DEFINES ###
#define ARR_Type int
#define ARR_LENGHT 4
//### END DEFINES ###

//### Function Declaration ###
int comp();
//### END Declararation ###

//### MAIN ###
int main()
{
int liste[ARR_LENGHT]={-5,1,9,-18};

qsort(&liste,ARR_LENGHT,sizeof(ARR_Type),comp);


for(int i = 0; i < ARR_LENGHT;i ++)
{
printf("%d\n",liste[i]);
}



    return 0;
}
//### END MAIN ###
int comp(const  void* val_1, const void* val_2)
{
ARR_Type LEFT = (*(ARR_Type*)val_1);
ARR_Type RIGHT = (*(ARR_Type*)val_2);

if(LEFT < RIGHT)
return -1;
else if (LEFT < RIGHT)
return 1;
else
return 0;

}
//### Function Definition ###
