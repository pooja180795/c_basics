#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Enter even number: ");
        scanf("%d", &n);
    }while(n % 2 == 0);

    return 0;
}
