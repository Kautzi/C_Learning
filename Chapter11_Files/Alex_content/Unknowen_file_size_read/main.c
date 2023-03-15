#include <stdio.h>
#include <string.h>

#include "lib.h"


char PROJECT_DIR[] = "D:\\Programmieren\\C_Learning\\";

int main()
{
    //Create an input Data Path
    char input_filepath[100]= {'\0'}; //

    strncpy(input_filepath,PROJECT_DIR,100);
    strncat(input_filepath,"Chapter11_Files\\Alex_content\\Unknowen_file_size_read\\Input_Data.txt",99);
    FILE *fp = fopen(input_filepath,"r");

    //Create Output File Path

    char output_filepath[100]= {'\0'}; //

    strncpy(output_filepath,PROJECT_DIR,100);
    strncat(output_filepath,"Chapter11_Files\\Alex_content\\Unknowen_file_size_read\\Input_Data.txt",99);
    FILE *fp_out = fopen(output_filepath,"w");

    if(fp == NULL || fp_out == NULL)
    {
        return 1;
    }

    int line_size = 100;
    char line[100]={'\0'};


    //Die fgets() funktion liest zeilenweise aus einer datei aus bis'\n' und speichert pro Zeile in line ab.
    while(fgets(line,line_size,fp) != NULL)
    {

        printf("%s\n",line);
    }

    fclose(fp);


    return 0;
}
