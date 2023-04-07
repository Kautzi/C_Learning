//### INCLUDES ###
#include <stdio.h>  //printf ...
#include <stdlib.h> //malloc ...
#include <string.h> //strncat ...
#include "table.h"
//### END INCLUDES ###

/*
//### INFORMATION ###
//### DEFINES ###
#define INTI_CAP 10U
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

/*### create_tbale():
The create_table function allocates memory for an initial table with
an initial capacity of rows and colls defined by INIT_CAP(10rows and 10colls).
The initial capacity of a cell should be defines by INIT_CAP_CELL
##################*/
table_t *create_table()
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
    table->data= (char***)malloc(sizeof(char**)*INTI_CAP);
        if(table->data == NULL)
        {
            return NULL;
        }
    //After row alloction allocate for every row the initial amount of colls
    for(uint32_t i = 0; i < INTI_CAP; i ++)
    {
        table->data[i] = (char**)malloc(sizeof(char*));
        if(table->data[i] == NULL)
        {
            return NULL;
        }
    }
    //At last allocate an Array for each cell with INIT_CAP_CELL
    for(uint32_t i = 0; i < INTI_CAP; i++)//for the rows
    {
        for(uint32_t j = 0; j < INTI_CAP;j++)//for the colls
        {
            table->data[i][j]=(char*)malloc(sizeof(char)*INIT_CAP_CELL);
            strncpy(table->data[i][j],"Cell",5);//Only for debugging / Testing
            if(table->data[i][j]==NULL)
            {
                return NULL;
            }
        }
    }

    return table;
}
//### END FUNC DEFINITIONS ###
