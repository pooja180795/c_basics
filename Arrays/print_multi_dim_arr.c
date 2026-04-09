#include <stdio.h>
void printTable(int arr[][10], int n,  int m);

int main()
{
    int arr[2][10];
    printTable(arr, 0, 4);
    printTable(arr, 1, 3);
    for(int i = 0; i < 10; i++)
    {
        printf("%d \t", arr[0][i]);
    }
    printf("\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d \t", arr[1][i]);
    }
    return 0;
}

void printTable(int arr[][10], int n, int m)
{
    for(int i = 0; i < 10; i++)
    {
        arr[n][i] = m * (i+1); 
    }
}