#include "Vector.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


//### DEFINES ###

//### END DEF ###

//### Declarations ###

//### END DEC ###

//### MAIN ###
int main()
{
    //### Variables ###

    //float* array = createArray(50,3);
    Vector* vec1 = createVector(3,0);
    Vector* vec2 = createVector(3,0);
    Vector* res = createVector(3,0);
    char Path_In[]={"D:\\Programmieren\\C_Learning\\Chapter13_VectorStruct\\Alex_Cont\\Vector_Struct\\input.txt"};
    char Path_Out[]={"D:\\Programmieren\\C_Learning\\Chapter13_VectorStruct\\Alex_Cont\\Vector_Struct\\output.txt"};
    //Test Values
    vec1->data[0]=40;
    vec1->data[1]=4;
    vec1->data[2]=-10;

    vec2->data[0]=5;
    vec2->data[1]=-1;
    vec2->data[2]=6;

    assert(vec1 != NULL);

    //### END Variables ###

    //### TEST AREA ###
    {
    //#################
        //readInVectorData(vec,Path_In);
        //res = addVectors(vec1,vec2);
        //printVector(res);
        //res = subVectors(vec1,vec2);
        //printVector(res);
        //res->data[0]=multiplyVectors(vec1,vec2);
        //printf("%f\n",res->data[0]);
        res = multiplyScalar(vec1,4);
        printVector(res);
        res = divideScalar(res,4);
        printVector(res);

        /*writeOutVectorData(vec,Path_Out);
        printf("Mean: %f\n",meanVector(vec));
        printf("Min: %f\n",minVector(vec));
        printf("Max: %f\n",maxVector(vec));
        */
        freeVector(vec1);
         freeVector(vec2);
          freeVector(res);
    //#################
    }
    //### END TEST ###


    return 0;
}
//### END MAIN ###

//### DEFINITIONS ###

Vector *multiplyScalar(const Vector *vec, const float scalar)//TEST ->> PASS
{
    Vector* res = createVector(vec->length,0);
    if(res == NULL)
    {
        return NULL;
    }
    for(uint32_t i = 0; i < vec->length; i ++)
    {
        res->data[i]= vec->data[i] * scalar;
    }
    return res;

}

Vector *divideScalar(const Vector *vec, const float scalar)
{
    Vector* res = createVector(vec->length,0);
    if(res == NULL || scalar == 0)
    {
        return NULL;
    }
    for(uint32_t i = 0; i < vec->length; i ++)
    {
        res->data[i]= vec->data[i] / scalar;
    }
    return res;

}
