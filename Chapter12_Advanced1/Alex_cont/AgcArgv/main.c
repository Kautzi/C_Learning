#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


int main(int argc, char** argv)
{

    for(int i = 0; i < argc; i++)
    {
        printf("%s\n",argv[i]);
    }

return 0;
}
