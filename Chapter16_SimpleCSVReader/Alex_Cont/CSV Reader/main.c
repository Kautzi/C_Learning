/*### Description: ###

This should be a programm to read CSV files (Comma Seperated Values) like a,5; b,7 ....
The goal is to implement functions to read the values out of a file at execution time of main with int main(int argc, char * argv)
open and read the Values of data_in.txt sort and write the values int a new file data_out.txt

#############################################################################*/
//### INCLUDES ###
#include <stdio.h>  //printf ...
#include <stdlib.h> //malloc ...
#include <string.h> //strncat ...
//### END INCLUDES ###

//### DEFINES ###
#define INTI_CAP 10U
#define SHRINK_F 2U
#define GROWTH_F 2U

typedef struct table
{
    char *** data;      //data sholud hold per row and col a string so for example data[0][3][]={"Ich bin eine Zelle"}
    uint32_t row;       //actual length of row
    uint32_t coll;      //actual length of coll
    uint32_t cap_row;   //apacity of row should be two times larger than actual length
    uint32_t cap_coll;  //apacity of coll should be two times larger than actual length
}table_t;

//### END DEFINES ###

//### FUNC DECLARATION ###
table_t create_table();

table_t read_file(char * FILE_PATH,table_t table);
table_t sort_file(table_t table, uint32_t direction);
table_t write_file(char * FILE_PATH);
//### END DECLARATION ###

//### MAIN ###

int main(int argc, char **argv)
{
char Com_PATH[100] ={"D:\\Programmieren\\C_Learning\\Chapter16_SimpleCSVReader\\Alex_Cont\\CSV Reader"};
//### Check the input from argc
if(argc == 1)
{
    printf("You missed to input an Input File to Read from!\n");
    return 1;
}
else if(argc == 2)
{
    printf("You missed to input an Output File to Read too!\n");
    return 1;
}
else if(argc == 3)
{
    printf("You missed to input Sort direction!\n");
    return 1;
}
//### END check of argc




return 0;
}

//### FUNCTION DEFINITION ###

table_t read_file(char *FILE_PATH,table_t table)
{
    FILE * f_in= fopen(FILE_PATH,"r");

return table_t;
}
