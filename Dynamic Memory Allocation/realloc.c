// realloc() - realoocate(increase or decrease) memory using the same pointer & size.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    printf("enter 5 integers: ");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 8);

    printf("enter 8 integers: ");
    for(int i = 0; i < 8; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for(int i = 0; i < 8; i++)
    {
        printf("%d \n", ptr[i]);
    }

    return 0;
}