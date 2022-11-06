#include <stdio.h>
#include <stdlib.h> //muss includert werden um malloc() und free() verwenden zu können

int main()
{

    int length = 0;
    int *array = NULL;

    do
    {

        printf("\nGeben Sie die groeße des Arrays an:");
        scanf("%d", &length);

        if (length <= 0)
        {
            printf("\nKein gültiger Wert!!");
            continue;
        }

        else
        {
            array = (int *)malloc((int)length * sizeof(int));
            /*array = realloc(
                array,
                (int)length *
                    sizeof(int)); // reserviert Speicher in größe von "length * (größe eines Int speicherplatzes)

            */
            break;
        }

    } while (1);

    printf("\nBitte geben Sie fuer %d "
           "INT"
           " Werte an:",
           length);

    for (int i = 0; i < (int)length; i++)
    {

        scanf("%d", &array[i]);
    }

    for (int i = 0; i < (int)length; i++)
    {

        printf("\nDer %d: Wert ist %d,", i + 1, array[i]);
    }
    printf("\n");
    free(array);


    return 0;
}
