// free() - We use it to free memory allocated using malloc & calloc.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *) calloc(5,  sizeof(int));

    ptr[0] = 1;
    ptr[1] = 11;
    ptr[2] = 111;
    ptr[3] = 1111;
    ptr[4] = 11111;

    for(int i = 0; i < 5; i++)
    {
        printf("%d \n", ptr[i]);
    }

    free(ptr);

    ptr = (int *) calloc(2 , sizeof(int));

    for(int i = 0; i < 2; i++)
    {
        printf("%d \n", ptr[i]);
    }

    return 0;
}