//### INCLUDES ###
#include <stdio.h>  //printf ...
#include <stdlib.h> //malloc ...
#include <string.h> //strncat ...
#include "table.h"
//### END INCLUDES ###

/*
//### INFORMATION ###
//### DEFINES ###
#define INIT_CAP 10U
#define INIT_CAP_CELL 5U //init capacity of an cell
#define SHRINK_F 2U
#define GROWTH_F 2U

typedef struct table
{
    char *** data;      //data sholud hold per row and col a string so for example data[0][3][]={"Ich bin eine Zelle"}
    uint32_t actual_row;       //actual length of row
    uint32_t actual_coll;      //actual length of coll
    uint32_t cap_row;   //apacity of row should be two times larger than actual length
    uint32_t cap_coll;  //apacity of coll should be two times larger than actual length
    uint32_t cap_zell;
}table_t;
*/
//### END DEFINES ###


//### FUNC DEFINITIONS ###
val_pairs_t * create_pairs(const size_t num_pairs)
{
    val_pairs_t * pairs= (val_pairs_t*)malloc(sizeof(val_pairs_t)*num_pairs);
    if(pairs == NULL)
    {
        return NULL;
    }

    return pairs;
}
void free_pairs(val_pairs_t* pairs)
{
    if(pairs == NULL)
    {
        return  ;
    }
    free(pairs);

}

records_t * create_records()
{
    records_t * records=(records_t*)malloc(sizeof(records_t));
    if(records == NULL)
    {
        return NULL;
    }
    return records;
}


void free_records(records_t * records)
{
    if(records == NULL)
    {
        return;
    }
    free(records->values);
    free(records);
    return;
}






/*### create_table():
The create_table function allocates memory for an initial table with
an initial capacity of rows and colls defined by INIT_CAP(10rows and 10colls).
The initial capacity of a cell should be defines by INIT_CAP_CELL
##################*/
table_t *create_table()//First Check ->> Pass
{
    //First allocate memory for aninitial table_t struct
    table_t *table =(table_t*)malloc(sizeof(table_t));
    //##################################################
    //Check if malloc was succesfull
    if(table == NULL)
    {
        return NULL;
    }
    //##################################################
    //Now allocate at first the initial rows
    table->data= (char***)malloc(sizeof(char**)*INIT_CAP);
        if(table->data == NULL)
        {
            return NULL;
        }
    //After row alloction allocate for every row the initial amount of colls
    for(uint32_t i = 0; i < INIT_CAP; i ++)
    {
        table->data[i] = (char**)malloc(sizeof(char*));
        if(table->data[i] == NULL)
        {
            return NULL;
        }
    }
    //At last allocate an Array for each cell with INIT_CAP_CELL
    for(uint32_t i = 0; i < INIT_CAP; i++)//for the rows
    {
        for(uint32_t j = 0; j < INIT_CAP;j++)//for the colls
        {
            table->data[i][j]=(char*)calloc(INIT_CAP_CELL,sizeof(char));//with calloc allocate INIT_CAP_CELL char elemtns and initialise with '\0'
            if(table->data[i][j]==NULL)
            {
                return NULL;
            }
        }
    }
    //After allocating the table.data the INIT Params must be initialised
    table->actual_coll = 0; //current coll length at start = 0 because no values are saved
    table->actual_row = 0;  //same as colls = 0
    table->cap_coll = INIT_CAP; //the start capacity defined by INIT_CAP = 10
    table->cap_row = INIT_CAP;
    table->cap_zell = INIT_CAP_CELL; //the start capacity defined by INIT_CAP_CELL = 5

    return table;
}
//### END create_table(); ###

/*adjust_cell():
The asjust_cell() function takes table_t struct input whitch shows how much memory is currently available
determined by the value uint32_t cap_zell in the table_t struct and compares it with the data string input.
If the input string is grater than the cap_zell value the data[][] will be raised to the input size +1*/
char * adjust_cell(table_t *table,uint32_t row,uint32_t coll, size_t input)
{
    if(table->cap_zell <= input)
    {
        if((char***)realloc(table->data[row][coll],sizeof(char)*input)==NULL)
        {
            return NULL;
        }
    }

    return table->data[row][coll];
}
//### END adjust_cell(); ###

table_t *expand_table(table_t table)//only row and colls with initial length for cell
{

    return ;
}
//### END FUNC DEFINITIONS ###
