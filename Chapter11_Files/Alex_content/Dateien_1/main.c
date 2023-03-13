#include <stdio.h>
#include <string.h>

#include "lib.h"


char PROJECT_DIR[] = "D:\\Programmieren\\C_Learning\\";

int main()
{

    char input_filepath[100]= {'\0'}; //

    strncpy(input_filepath,PROJECT_DIR,100);
    strncat(input_filepath,"Chapter11_Files\\Alex_content\\Dateien_1\\Input_Data.txt",99);

    FILE *fp = fopen(input_filepath,"r");

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
        printf("%d\n",v1.array[i]);
    }




    return 0;
}
