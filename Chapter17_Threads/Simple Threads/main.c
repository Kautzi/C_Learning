#include <stdio.h>
#include <stdlib.h>

#include <pthread.h>

void* function(void* args)
{
    int arg=*((int*)(args));

    if(arg == 1)
    {
    printf("First Input\n");
    }

    if(arg == 2)
    {
    printf("Second Input\n");
    }

    int *result = (int*)malloc(sizeof(int));
    *result= arg*2;
    pthread_exit((void*)(result));

    //const pthread_t this_thread = pthread_self();

    //printf("Called from thread %d\n",(int)(this_thread));

    return NULL;
}

int main()
{

pthread_t thread1;
pthread_t thread2;

int input1 = 1;
int input2 = 2;

pthread_create(&thread1,NULL,&function,&input1);
pthread_create(&thread2,NULL,&function,&input2);

int * result1;
int * result2;

pthread_join(thread1,(void*)(&result1));
pthread_join(thread2,(void*)(&result2));

printf("Result of Thread1 = %d\n",*result1);
printf("Result of Thread2 = %d\n",*result2);

    return 0;
}
