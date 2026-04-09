#include <stdio.h>
void find_largest(int arr[], int n);

int main()
{
    int arr[10];
    for(int i = 0; i < 10; i++)
    {
        printf("Enter array element %d : ", i);
        scanf("%d", &arr[i]);
    }
    find_largest(arr, 10);
    return 0;
}

void find_largest(int arr[], int n)
{
    int largest = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("largest element = %d \n", largest);
}