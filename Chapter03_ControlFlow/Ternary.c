#include <stdio.h>

int main()
{
    /***************Ternary Abfrage*************
 Kann für einzelne Abragen eine if else Abfrage Ersetzen
 */

    int age_karsten = 29;
    int age_kim = 22;

    int age_lars = age_karsten < age_kim ? age_karsten : age_kim - age_karsten;
    printf("%d", age_lars);

    return 0;
}
