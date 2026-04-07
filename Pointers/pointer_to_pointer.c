#include <stdio.h>

int main()
{
    int age = 80;
    int *ptr = &age;
    int **pptr = &ptr;

    printf("%d", **pptr);

    return 0;
}
