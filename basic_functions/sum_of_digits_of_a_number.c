#include <stdio.h>
void doSum(int n);

int main()
{
    int n =  8;
    doSum(n);
    return 0;
}

void doSum(int n)
{
    int sum = 0;
    while(n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("%d \n", sum);
}