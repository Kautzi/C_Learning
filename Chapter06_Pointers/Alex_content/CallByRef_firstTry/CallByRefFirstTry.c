#include <stdio.h>

//########Function Declaration and Definition


void do_some(double p_in, double *p_out_1, double *p_out_2)
{

    *p_out_1 = p_in * *p_out_2;
}


int main()
{

    double arg_in = 2.0;
    double arg_out_1 = 2.0;
    double arg_out_2 = 3.0;

    do_some(arg_in, &arg_out_1, &arg_out_2);

    printf("%lf\n", arg_out_1);
    printf("%lf\n", arg_out_2);


    return 1;
}
