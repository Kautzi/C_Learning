#include <stdio.h>

/*### Description ###
Here is the use of unions showen. A union is as big as the largest datatype. In union_t is a integer and a float variable defined
with int == 4byte and floate == 4 byte so the union is 4 byte big.
Because it is only one Value a union can represent but this value for example 45.8 can be represented as float like it is or as
Integer in the case of float 45.8 it is int == 1110913843. Most normal cases are in embeddet for example in data protokolls like
CAN Bus communication.*/



typedef union
{
    int id;
    float val;
}union_t;


int main()
{
    union_t num ={.val= 45.8F};

    printf("Der Integer Anteil von ""union_t num "" ist = %d\nDer float Anteil ist = %f\n",num.id,num.val);
    printf("INT is %lu bytes big\n",sizeof(int));
    printf("Float is %lu bytes big\n",sizeof(float));



    return 0;
}
