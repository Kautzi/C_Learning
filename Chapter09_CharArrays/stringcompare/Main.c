#include <stdio.h>
#include <stdlib.h>


/****FUNC DECLARATION****/

unsigned int string_compare(char *array_1, char *array_2);

/****END DECLARATION****/


/****MAIN FUNCTIO****/

int main()
{

    char array_1[] = "Harry Potter";
    char array_2[] = "Harry ";

    printf("Array_1 und Array_2 sind 1=gleich, 0=ungleich => %d", string_compare(array_1, array_2));

    return 0;
}
/****END MAIN****/


/****FUNC DEFINITION****/


/*+++++++++++++++++++++++++++*/
/****FUNC string_compare()****/

/*Description:
The string_compare() function should get two arrays */
unsigned int string_compare(char *array_1, char *array_2)
{
    unsigned int count_1 = 0;
    unsigned int count_2 = 0;
    /**At first the lenth of array_1 and array_2 will be compared
     if both array are not equal then 0 will be returned
    */

    // check length of array_1
    while (array_1[count_1] != '\0')
    {
        count_1++;
    }
    while (array_2[count_2] != '\0')
    {
        count_2++;
    }
    if (count_1 == count_2)
    {
        count_1 = 0; //reset counter first
        count_2 = 0; //reset counter first

        while (1)
        {
            if (array_1[count_1] == array_2[count_1] && array_1[count_1] != '\0')
            {
                count_1++;
            }
            else if ((array_1[count_1] == array_2[count_1]) && (array_1[count_1] == '\0'))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
    else
    {
        return 0; //if the equality check in row 45 till 49 wasn't equal return 0
    }
}
/****END FUNC string_compare()****/
/*+++++++++++++++++++++++++++*/


/****END FUNC DEFINITION****/
