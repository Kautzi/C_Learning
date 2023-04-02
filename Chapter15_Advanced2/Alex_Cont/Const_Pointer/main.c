#include <stdio.h>



void func_1(int *value)
{

    (*value)++;//Read and write of the Value and the Adress of int * value

    printf("func_1 value = %d\n",*value);
    return;

}

void func_2(const int *value)
{

    value++; //only read of the value of int *value but adress is read and write

    printf("func_2 value = %d\n",*value);
    return;

}

void func_3(int *const value)
{

    (*value)++; // The Value of int* value ist read and write but the adress of value is only read

    printf("func_3 value = %d\n",*value);
    return;

}

void func_4(const int *const value)
{

    //(*value)++; //both the Value and the adress is read and write

    printf("func_4 value = %d\n",*value);
    return;

}

//### MAIN ###

int main()
{
    int  value = 6;

    func_1(&value);
    func_2(&value);
    func_3(&value);
    func_4(&value);




    return 0;
}
