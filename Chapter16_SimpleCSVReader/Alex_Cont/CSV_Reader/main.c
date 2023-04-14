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
#include "CsvReader.h"
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
char Com_PATH[100] ={"D:\\Programmieren\\C_Learning\\Chapter16_SimpleCSVReader\\Alex_Cont\\CSV_Reader\\"};
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
{//Alternative Version Test later
//### Variable Declaration/Definition
//table_t *table = create_table();
//### END Variable Declaration
}

//create file path with argv[1] as relative input file path + Com_PATH
char INPUT_FILE_PATH[100];
strncpy(INPUT_FILE_PATH,Com_PATH,100);
strncat(INPUT_FILE_PATH,argv[1],20);

//create file path with argv[2] for output
char OUTPUT_FILE_PATH[100];
strncpy(OUTPUT_FILE_PATH,Com_PATH,100);
strncat(OUTPUT_FILE_PATH,argv[2],20);

//### Test Area: ###


records_t* records = create_records();
read_simple_csv(INPUT_FILE_PATH,records);
print_records(records, "Unsorted:\n");
if(strncmp(argv[3],"up",3)==0)
{

sort_records(records,SORTING_SCHEME_ASCENDING );
print_records(records, "ASCENDING Sorted:\n");
}
else if(strncmp(argv[3],"down",5)==0)
{
sort_records(records,SORTING_SCHEME_DESCENDING );
print_records(records, "DESCENDING Sorted:\n");
}
else
{
printf("No valid sorting scheme!\n");
}
write_simple_csv(OUTPUT_FILE_PATH,records);


//### END Test Area ###




return 0;
}
