#include <stdio.h>

//******FUNC DECLARATION***************
void add_by_pointer(int input_1, double *output_1, double *output_2);

//*****END DECLARATION******************

int main()
{
    int my_add_input = 2;
    double my_first_output = 5;
    double my_second_output = 6;


    add_by_pointer(
        my_add_input,
        &my_first_output,
        &my_second_output); //hier werden nur die Adressen übergeben da die Funktion mt pointern arbeitet "&""

    printf("\nValue of "
           "my_first_output"
           " is %0.1lf",
           my_first_output);
    printf("\nValue of "
           "my_second_output"
           " is %0.1lf",
           my_second_output);

    return 0;
}


//*****FUNC DEFINITION******************


void add_by_pointer(int input_1, double *output_1, double *output_2)
{

    *output_1 = *output_1 + input_1;
    *output_2 = *output_2 + input_1;
}

//*****END DEFINITION*******************
