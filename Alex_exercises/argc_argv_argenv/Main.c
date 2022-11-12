#include <stdio.h>
#include <stdlib.h>

/*Description:

The programm reads the environment variables
and outputs the in argv given paramenter
*/

int main(int argc, char **argv, char **argenv)
{
    int i = 0;
    int zahl = atoi(argv[1]);

    if (argc < 2)
    {
        printf("Keine Parameter übergeben");
    }

    {
        printf(argenv[zahl]);
    }
    return 0;
}
