/*### Description: ###

This should be a programm to read CSV files (Comma Seperated Values) like a,5; b,7 ....
The goal is to implement functions to read the values out of a file at execution time of main with int main(int argc, char * argv)
open and read the Values of data_in.txt sort and write the values int a new file data_out.txt

#############################################################################*/
//### INCLUDES ###
#include <stdio.h>  //printf ...
#include <stdlib.h> //malloc ...
#include <string.h> //strncat ...
#include "table.h"
//### END INCLUDES ###

//### DEFINES ###
//...
//### END DEFINES ###

//### FUNC DECLARATION ###
//table_t read_file(char * FILE_PATH,table_t table);
//table_t sort_file(table_t table, uint32_t direction);
//table_t write_file(char * FILE_PATH);
//### END DECLARATION ###

//### MAIN ###
//Strg+Alt+A für Übergabe argv
int main(int argc, char **argv)
{
//char Com_PATH[100] ={"D:\\Programmieren\\C_Learning\\Chapter16_SimpleCSVReader\\Alex_Cont\\CSV Reader"};
//### Check the input from argc
if(argc == 1)//First Check ->> PASS
{
    printf("You missed to input an Input File to Read from!\n");
    return 1;
}
else if(argc == 2)//First Check ->> PASS
{
    printf("You missed to input an Output File to Read too!\n");
    return 1;
}
else if(argc == 3)//First Check ->> PASS
{
    printf("You missed to input Sort direction!\n");
    return 1;
}
//### END check of argc
//### Variable Declaration/Definition
table_t *table = create_table();
//### END Variable Declaration

//### Test Area: ###
//Check if the table_t struct works
strncpy(table->data[1][5],"Cell",5);
printf("%s\n",table->data[2][5]);

//### END Test Area ###




return 0;
}
