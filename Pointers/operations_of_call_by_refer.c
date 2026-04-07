#include <stdio.h>
void doWork(int a, int b, int* sum, int* prod, int* avg);

int main()
{
    int a = 7, b = 3, sum, prod, avg;
    doWork(a, b, &sum, &prod, &avg);
    printf("sum = %d, product = %d, average = %d", sum, prod, avg);
    return 0;
}

void doWork(int a, int b, int* sum, int* prod, int* avg)
{
    *sum = a + b;
    *prod = a * b;
    *avg = (a+b) / 2;
}
