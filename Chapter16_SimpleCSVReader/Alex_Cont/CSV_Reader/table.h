#ifndef TABLE_H
#define TABLE_H

//### INCLUDES ###
#include <stdio.h>
//### END INCLUDES ###

//### DEFINES ###
#define INIT_CAP 10U //for rows and colls
#define INIT_CAP_CELL 5U //init capacity of an cell
#define SHRINK_F 2U
#define GROWTH_F 2U

#define NUM_VALUES 2U //for struct val_pairs_t in create_pairs() func
//### END DEFINES ###

//### TYPES ###

//### val_pairs holds packets of two cells
typedef struct
{
    char value_a;
    int value_b;
}val_pairs_t;
//###

//### records struct gets as member a val_pair and a number of pairs
typedef struct
{
    val_pairs_t * values;
    uint32_t num;
}records_t;
//### with the records struct its simple to iterate over the pairs and compair

//### table struct holds strings
typedef struct table
{
    char *** data;      //data sholud hold per row and col a string so for example data[0][3][]={"Ich bin eine Zelle"}
    uint32_t actual_row;       //actual length of row
    uint32_t actual_coll;      //actual length of coll
    uint32_t cap_row;   //apacity of row should be two times larger than actual length
    uint32_t cap_coll;  //apacity of coll should be two times larger than actual length
    uint32_t cap_zell;
}table_t;
//### END TYPES ###

//### FUNC DECLARATION ###
val_pairs_t * create_pairs(const size_t num_pairs);
void free_pairs(val_pairs_t* pairs);
records_t * create_records();
void free_records(records_t * records);


table_t *create_table();//Check ->> PASS
void write_cell_to_table(table_t table,uint32_t row,uint32_t coll, char* value);
table_t *expand_table(table_t table);//only row and colls with initial length for cell
table_t *shrink_table(table_t table);//delets the last cell
char * adjust_cell(table_t *table,uint32_t row,uint32_t coll, size_t input);//as input takes the current size of data in table_t(the cell to write to) and checks wether it is big enougth or to smal for the input string
char * read_cell_from_table(table_t table,uint32_t row,uint32_t coll, char* value);


#endif /* TABLE_H */
