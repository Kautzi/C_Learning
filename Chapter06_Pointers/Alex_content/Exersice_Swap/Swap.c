#include <stdio.h>
/*##########Description################

The Programm should swap to Parameters
here called p_1 and p_2. Therefore a
function is given called swap that takes
two pointer varables p_1 and p_2 and
swaps the parameters. After leaving the
function the original parameters will be printed.

#######################################*/

//###########Func Deklraration########
void swap(double *p_1, double *p_2);
//###########End Deklaration##########

int main()
{

    double par_1 = 34.67;
    double par_2 = 690.999;

    printf("Values of par_1= %lf and par_2= %lf before Swap.\n", par_1, par_2);
    swap(&par_1, &par_2);
    printf("Values of par_1= %lf and par_2= %lf after Swap.\n", par_1, par_2);


    return 1;
}

//###########Func definition####
void swap(double *p_1, double *p_2)
{
    double v_help = *p_1; //save value of p_1 in heler variable

    *p_1 = *p_2; //than swap the two variables
    *p_2 = v_help;
}
//###########End definition###
