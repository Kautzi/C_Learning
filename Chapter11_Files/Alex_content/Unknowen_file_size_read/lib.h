#ifndef FDA60304_A3B0_465F_8F1C_BF2079E17107
#define FDA60304_A3B0_465F_8F1C_BF2079E17107
#ifndef LIB_H
#define LIB_H

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct
{
  int *array;
  size_t length;
}Vector_t;

//### END Structs ###


//### Function Declaration ###
int min(Vector_t * Vector);
int max(Vector_t * Vector);
double mean(Vector_t * Vector);
int * create_array(size_t length, int init);
//### END Function Declaration ###

#endif /* LIB */


#endif /* FDA60304_A3B0_465F_8F1C_BF2079E17107 */
