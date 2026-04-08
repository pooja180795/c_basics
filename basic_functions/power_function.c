#include <stdio.h>
int power(int base, int raise_to);

int main()
{
    printf("%d \n",power(3,4));
    return 0;
}

int power(int base, int raise_to)
{
    int power = 1;
    while(raise_to >= 1)
    {
        power = power * base;
        raise_to--;
    }
    return power;
}