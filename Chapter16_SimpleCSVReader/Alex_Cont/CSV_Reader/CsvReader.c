#include <errno.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "CsvReader.h"
#include "table.h"

//### DEFINES ###
#define NEW_LINE_CHARACTER_ASCII ('\n')
//### END DEFINE ###

//### FUNCTION DEFINITIONS ###
size_t line_count(const char *const file_path)//FIRST CHECK ->> PASS
{
    FILE *const fp = fopen(file_path,"r");

    if(fp == NULL)
    {
        fprintf(stderr,"NOT able to open the file: %s!\n",strerror(errno));
        return 1;
    }

    size_t count = 0;
    char temp;
    while(fscanf(fp,"%c",&temp) != EOF)
    {
        if(temp == NEW_LINE_CHARACTER_ASCII)
        {
        count++;
        }
    }


    fclose(fp);
    return count;
}

void read_simple_csv(const char *const file_path,records_t * const records)
{
    FILE *const fp = fopen(file_path,"r");
    if(fp == NULL)
    {
        fprintf(stderr,"NOT able to open the file: %s!\n",strerror(errno));
        return -1;
    }







    fclose(file_path);
}

void write_simple_csv(const char *const file_path,const records_t * const records)
{
    FILE *const fp = fopen(file_path,"w");
    if(fp == NULL)
    {
        printf(stderr,"NOT able to open the file: %s!\n",strerror(errno));
        return -1;
    }






    fclose(file_path);
}
//### END FUNCTION DEFINITIONS ###
