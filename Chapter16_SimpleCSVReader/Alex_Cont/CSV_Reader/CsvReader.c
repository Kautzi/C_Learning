#include <errno.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "CsvReader.h"
#include "table.h"

//### DEFINES ###
#define NEW_LINE_CHARACTER_ASCII ('\n') //for line count to check how much lines present
#define BUFFER_SIZE (size_t)(128)
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

void read_simple_csv(const char *const file_path,records_t * const records)//FIRST CHECK ->>PASS
{
    FILE *const fp = fopen(file_path,"r");
    if(fp == NULL)
    {
        fprintf(stderr,"NOT able to open the file: %s!\n",strerror(errno));
    }

    const size_t num_lines = line_count(file_path);

    val_pairs_t * const values = create_pairs(num_lines);

    if(values == NULL)
    {
        fclose(fp);
        return;
    }

    for(size_t i = 0; i < num_lines; i++)
    {
        char buffer[BUFFER_SIZE]={'\0'};
        fgets(buffer,BUFFER_SIZE,fp);

        sscanf(buffer,"%c,%d",&values[i].value_a,&values[i].value_b);

    }
    fclose(fp);

    records->values=values;
    records->num=num_lines;






    fclose(fp);
}

void write_simple_csv(const char *const file_path,const records_t * const records)//FIRST CHECK->>PASS
{
    FILE *const fp = fopen(file_path,"w");
    if(fp == NULL)
    {
        fprintf(stderr,"NOT able to open the file: %s!\n",strerror(errno));

    }

     for(size_t i = 0; i < records->num; i++)
    {
        fprintf(fp,"%c,%d\n",records->values[i].value_a,records->values[i].value_b);

    }





    fclose(fp);
}
//### END FUNCTION DEFINITIONS ###
