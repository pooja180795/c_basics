#include <stdio.h>

int main()
{
    int arr[] = {2,3,4,5,6};
    int len = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;
    ptr = ptr + len;
    *ptr = 89;
    for(int i = 0; i < len+1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}