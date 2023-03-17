#include <stdio.h>
#include <stdint.h>
#include <time.h>


void do_something()
{
    volatile double value = 0.0; //volatile says the compiler to dont optimize this variable

    for(uint32_t i = 0 ; i < 1000000000; i++)
    {

        value += i;
    }
}

int main()
{
    //Clock time
    clock_t clock_start = clock();
    do_something();

    clock_t clock_end= clock();
    clock_t duration = clock_end - clock_start;
    double s = (double)duration / CLOCKS_PER_SEC;
    //END clock time

    //Wall time
    time_t time_start = time(NULL);

    do_something();

    time_t time_end =time(NULL);
    double duration2 = (double)difftime(time_end, time_start);
    //END Wall time

    double ms= 1000.0 * s;
    double us= 1000.0 * ms;
    double ns= 1000.0 * us;
    printf("s: %lf\n",s);
    printf("ms: %lf\n",ms);
    printf("us: %lf\n",us);
    printf("ns: %lf\n",ns);


    printf("Timestamp Start: %u\n", (unsigned int)time_start);
    printf("Timestamp End: %u\n", (unsigned int)time_end);

    printf("Time Format: %s\n",ctime(&time_end));
    return 0;
}
