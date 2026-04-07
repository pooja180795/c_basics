#include <stdio.h>
int getFact(int n);

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int ans = getFact(n);
    printf("factorial of %d is = %d \n", n, ans);
    return 0;
}

int getFact(int n)
{
    if(n == 1)
    {
        return 1;
    }
    int nM1 = getFact(n-1);
    int fact = nM1 * n;
    return fact;
}
