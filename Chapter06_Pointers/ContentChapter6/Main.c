#include <stdio.h>
//Erstes Beispielprog um Speicheradressen aus zu lesen
int main()
{
    int value = 12;

    printf("Der Wert von Value ist %d", value);

    printf("\nDie Adresse von Value lautet %x", &value);
    return 0;
}
