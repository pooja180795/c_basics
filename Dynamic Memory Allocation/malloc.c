// malloc() - It takes number of types to be allocated & returns a pointer of type void.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *) (malloc(5 * sizeof(int))); // because malloc returns void, so we need to typecast it

    ptr[0] = 1;
    ptr[1] = 11;
    ptr[2] = 111;
    ptr[3] = 1111;
    ptr[4] = 11111;

    for(int i = 0; i < 5; i++)
    {
        printf("%d \n", ptr[i]);
    }

    return 0;
}