#include <stdio.h>
void reverse(int arr[], int len);

int main()
{
    int arr[] = {32,33,34,35,36,37};
    int len = sizeof(arr) / 4;
    reverse(arr, len);
    for(int i = 0; i < len; i++)
    {
        printf("%d \t", arr[i]);
    }
    return 0;
}

void reverse(int arr[], int len)
{
    for(int i = 0; i < len/2; i++)
    {
        int first_val = arr[i];
        int sec_val = arr[len - i - 1]; 
        arr[i] = sec_val;
        arr[len-i-1] = first_val;
    }
     
}