/*## Aufgaben der Programmierübung

- Das Ergebnis der I/O Aufgabe soll in einem String von Strings abgespeichert werden (**text[][]**).
- Lese den Text aus der InputData.txt Datei iterativ ein:
- Jeder einzelne Satz des Textes soll in einen string von **text** abgelegt werden


- Gehe davon aus, dass eine maximale Länge eines Satzes 100 Zeichen beträgt
- Gehe davon aus, dass maximal 10 Sätze in dem Text vorliegen
*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h> //für malloc etc.
#include <string.h> //für stncat etc.


//### Struct Declaration ###

//### END Struct ###

//### Function Declaration ###
char ** create_s_matrix(uint32_t row,uint32_t col);
char * create_c_array(uint32_t length,char init);
char * free_array(char* array);
char * free_matrix(char** matrix);
char * read_s_from_file(FILE * fp);
//### END Declaration ###

//### Main ###

int main()
{
    char FILE_DIR[50]="D:\\Programmieren\\C_Learning\\";//absulut path
    char input_file_path[100] = {'\0'};
    strncpy(input_file_path,FILE_DIR,100);
    strncat(input_file_path,"Chapter11_Files\\Alex_content\\Exercise\\input.txt",98);

    FILE *in_file = fopen(input_file_path,"r"); //create a FILE pointer and open the file stored in input_file_path in read "r" mode

    if(in_file == NULL)
    {
        return 1;
    }

    char** saetze = create_s_matrix(10,100);
    

    //read rows from FILE in_file
    for(uint32_t i = 0; i < 10 ;i++)
    {
        fgets(saetze[i],100,in_file);


    }


    for(uint32_t i = 0; i < 10;i ++)
    {
        printf("%s",saetze[i]);
    }
    return 0;
}

//### Function Definition ###

char **create_s_matrix(uint32_t row, uint32_t col)
{
    char ** matrix = (char**) malloc(sizeof(char*)*row); //allocates a pointermatrix with in "row" stored value

    //now allocate for each colum in row the memory

    for(uint32_t i = 0; i < row;i ++)
    {
        matrix[i] = create_c_array(col,'\0');
    }

    return matrix;
}

char *create_c_array(uint32_t length, char init)
{
    char * array = (char*)malloc(sizeof(char)*length);//lege ein char array mit länge "length" von typ char an


    for(uint32_t i = 0; i < length; i++)            //Initialise the array with value stored in "init"
    {
        array[i] = init;
    }

    return array;                                   //return the adress of the pointer
}
