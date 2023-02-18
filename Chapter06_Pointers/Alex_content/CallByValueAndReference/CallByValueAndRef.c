#include <stdio.h>


//Call by Value
float add(float v)
{

    v = v + 1.0f;
    return v;
}

//Call by Reference
void add2(float *v)
{

    *v = *v + 1.0f;
}

int main()
{

    float v_main = 0.0f;
    //Call by Value
    printf("Called by value == %f\n", v_main);
    v_main = add(v_main);
    printf("Called by value ==  %f\n", v_main);

    //Call by Reference
    add2(&v_main);
    printf("Called by Ref == %f", v_main);

    return 0;
}
