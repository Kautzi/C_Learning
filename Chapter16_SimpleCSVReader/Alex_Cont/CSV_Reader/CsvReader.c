#include <errno.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "CsvReader.h"
#include "table.h"

//### FUNCTION DEFINITIONS ###
size_t line_count(const char *const file_path)
{
    FILE *const fp = fopen(file_path,"r");

    if(fp == NULL)
    {
        printf(stderr,"NOT able to open the file: %s!\n",strerror(errno));
        return -1;
    }
    fpos_t* zeiger = 0;
    if(fgetpos(fp,zeiger) != NULL)
    {
        return -1;
    }
    while(fsetpos(fp,zeiger) == 0)
    {
        *zeiger++;
    }


    fclose(file_path);
    return *zeiger;
}

void read_simple_csv(const char *const file_path,records_t * const records)
{
    FILE *const fp = fopen(file_path,"r")
    if(fp == NULL)
    {
        printf(stderr,"NOT able to open the file: %s!\n",strerror(errno));
        return -1;
    }







    fclose(file_path);
}

void write_simple_csv(const char *const file_path,const records_t * const records)
{
    FILE *const fp = fopen(file_path,"w")
    if(fp == NULL)
    {
        printf(stderr,"NOT able to open the file: %s!\n",strerror(errno));
        return -1;
    }






    fclose(file_path);
}
//### END FUNCTION DEFINITIONS ###
