#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <pthread.h>

#define NUM_THREAD 10
#define NUM_ITERATIONS 10000
//#define USE_MUTEX
#define EXPECTED_RESULT (NUM_THREAD * NUM_ITERATIONS)

int global_variable = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void* function(void* args)                      //der Funktionsaufbau muss genau so aussehen der einem thread übergeben wird
{                                               //möchte man mehr parameter übergeben muss das über struckt oder arrays/pointer geschehen
    int arg=*((int*)(args));

    if(arg == 1)
    {
    printf("First Input\n");
    }

    if(arg == 2)
    {
    printf("Second Input\n");
    }

    if(arg <=2)
    {
    printf("Next Input\n");
    }

    int *result = (int*)malloc(sizeof(int));
    *result= arg*2;

    int local_count=0;

    for(int i = 0; i < NUM_ITERATIONS; i ++)
    {
        local_count++;
    }

        pthread_mutex_lock(&mutex);
        global_variable = local_count;
        pthread_mutex_unlock(&mutex);

    pthread_exit((void*)(result));

    //const pthread_t this_thread = pthread_self();

    //printf("Called from thread %d\n",(int)(this_thread));

    return NULL;
}

int main()
{

pthread_t threads[NUM_THREAD];
int *results[NUM_THREAD];

int inputs[NUM_THREAD];

for(int i = 0; i < NUM_THREAD;i++)
{
    inputs[i]=i+1;

}

for(int i = 0; i < NUM_THREAD;i++)
{
   pthread_create(&threads[i],NULL,&function,&inputs[i]);

}


//... hier kann wärend der zusätzlichen thread ausführung beliebiger code stehen der ausgeführt wird

for(int i = 0; i < NUM_THREAD;i++)
{
   pthread_join(threads[i],(void*)(&results[i]));


}

for(int i = 0; i < NUM_THREAD;i++)
{

   printf("Result of Thread%d = %d\n",i+1,*results[i]);

}

printf("Counter: %d\n",global_variable);
assert(EXPECTED_RESULT == global_variable);

    return 0;
}
