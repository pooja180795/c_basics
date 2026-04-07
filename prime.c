#include <stdio.h>

int main()
{
    int n;
    printf("Enter end number: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++)
    {
        int isPrime = 1;
        for(int j = 2; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
        {
            printf("%d \n", i);
        }
    }
    return 0;
}