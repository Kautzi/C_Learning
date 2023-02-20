#include <stdio.h>

/*Descripition:

The User will enter two Vectors v_1 and v2
After entering the two vectors will be added and outputted
*/


//### Func Declaration ###
void input_Vector(float *vector);
void output_Vector(float *vector);
void add_Vector(float *v_1, float *v_2, float *v_3);
//### End Declaration ###

int main()
{
    float v_1[3];
    float v_2[3];
    float v_3[3];

    input_Vector(v_1);
    input_Vector(v_2);
    add_Vector(v_1, v_2, v_3);
    output_Vector(v_3);

    return 0;
}

//### Func Definition ###
void input_Vector(float *vector)
{

    for (int i = 0; i < 3; i++)
    {
        printf("Gebe den %d. Parameter vom Vector ein\n", i + 1);
        scanf("%f", &vector[i]);
    }
}

void output_Vector(float *vector)
{

    for (int i = 0; i < 3; i++)
    {
        printf("Der %d. Wert vom Vector ist => %f\n", i + 1, vector[i]);
    }
}

void add_Vector(float *v_1, float *v_2, float *v_3)
{

    for (int i = 0; i < 3; i++)
    {

        v_3[i] = v_1[i] + v_2[i];
    }
}
//### END Definition ###
