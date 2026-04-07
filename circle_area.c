#include <stdio.h>

int main()
{
    float radius, pi = 3.14;
    printf("Enter radius:");
    scanf("%f", &radius);
    printf("area = %f", pi * radius * radius);
    return 0;
}