#include <stdio.h>
#include <string.h>

#include "lib.h"


char PROJECT_DIR[] = "D:\\Programmieren\\C_Learning\\";

int main()
{
    //Create an input Data Path
    char input_filepath[100]= {'\0'}; //

    strncpy(input_filepath,PROJECT_DIR,100);
    strncat(input_filepath,"Chapter11_Files\\Alex_content\\Dateien_1\\Input_Data.txt",99);

    //Create an output Data path
    char output_filepath[100]= {'\0'}; //

    strncpy(output_filepath,PROJECT_DIR,100);
    strncat(output_filepath,"Chapter11_Files\\Alex_content\\Dateien_1\\Output_Data.txt",99);

    //Create a FILE Pointer and open the file in input_filepath in read mode
    FILE *fp = fopen(input_filepath,"r");


    //check if opening was successfull
    if(fp == NULL)
    {
        return 1;
    }

    Vector_t v1 = {.array = create_array(5,1),.length=5};

    for(uint32_t i = 0; i < v1.length;i++)
    {
        fscanf(fp,"%d\n",&v1.array[i]);
    }

    fclose(fp);

    for(uint32_t i = 0; i < v1.length;i++)
    {
        v1.array[i]-=1;

    }

    //Create a FILE Pointer and open the file in write mode
    FILE *fp_out = fopen(output_filepath,"w");

    //check wether the file exists or not
    if(fp_out == NULL)
    {
        return 1;
    }

    //write to the file via fprintf() function and for() loop
    for(uint32_t i = 0; i < v1.length;i++)
    {

        fprintf(fp_out,"%d\n",v1.array[i]);
    }


    //after writing close the file
    fclose(fp_out);



    return 0;
}
