#include <stdio.h>

//### Struct declaration ###

struct Car
{
char brand[20];
char model[20];
uint32_t year;

};


//### MAIN ###

int  main(){

struct Car my_first = {.brand = "Opel", .model = "Vectra",.year = 1991};

printf("%s\n",my_first.brand);
printf("%s\n",my_first.model);
printf("%u\n",my_first.year);


    return 0;
}
