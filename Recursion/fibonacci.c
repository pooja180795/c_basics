#include <stdio.h>
int fibo(int n);

int main()
{
    int n, ans;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("fibonacci of %d = %d \n", n, fibo(n));
    return 0;
}

int fibo(int n)
{
    if(n == 0)
    { return 0; }
    if(n == 1)
    { return 1; }
    int ans = fibo(n-1) + fibo(n-2);
    return ans;
}

