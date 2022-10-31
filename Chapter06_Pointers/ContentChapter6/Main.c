#include <stdio.h>
//Erstes Beispielprog um Speicheradressen aus zu lesen
int main()
{
    int value = 12;
    printf("Der Wert von Value ist %d", value);

    printf("\nDie Adresse von Value lautet %p", &value);

    //Pointer Variablen anlegen
    int *my_pointer = &value;
    printf("\nDer Wert von Value ist %d", *my_pointer);
    printf("\nDie Adresse von Value lautet %p", my_pointer);


    return 0;
}
