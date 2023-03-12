#include <stdio.h>

//### Struct declaration ###

typedef struct TUV
{
    uint32_t month;
    uint32_t year;

}tuv_t;

typedef enum type
{
    H,
    E,
}type_t;

typedef struct Licenseplate
{
    char region[3];
    char ab[3];
    uint32_t num;
    type_t type;
    tuv_t date_due;


}license_t;

typedef struct Car
{
char brand[20];
char model[20];
uint32_t year;
license_t plate;

}car_t;

//### Function Declaration ###
void print_license(car_t * car);
//### END Declaration ###

//### MAIN ###

int  main(){

car_t my_first = {.brand = "Opel", .model = "Vectra",.year = 1991,.plate={.region="DN",.ab="KL",.num=420,.type=H,.date_due = {.month=9,.year=2023}}};

printf("%s\n",my_first.brand);
printf("%s\n",my_first.model);
printf("%u\n",my_first.year);

print_license(&my_first);


    return 0;
}


//### Function Definition ###

void print_license(car_t *car)
{
    switch(car->plate.type)
    {
        case H:
        {
        printf("The car is oldschool\n");
        break;
        }

        case E:
        {
        printf("The car is electric\n");
        break;
        }

    }
    printf("%s %s %d\n",car->plate.region,car->plate.ab,car->plate.num);
    printf("Your next check is on %d.%d.\n",car->plate.date_due.month,car->plate.date_due.year);
}
