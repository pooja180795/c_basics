#include <stdio.h>
void swap(int x, int y);
void _swap(int* x, int* y);

int main()
{
    int a = 1, b = 10;
    //swap(a, b);
    _swap(&a, &b);
   // printf("a = %d and b = %d\n", a, b);
    printf("a = %d and b = %d", a, b);
    return 0;
}

//call by value 
void swap(int x, int y)
{
    int t = x;
    x = y;
    y = t;
    printf("x = %d and y = %d\n", x, y);
}

//call by reference
void _swap(int* x, int* y)
{
    int t = *x;
    *x = *y;
    *y = t;
    printf("x = %d and y = %d\n", *x, *y);
}