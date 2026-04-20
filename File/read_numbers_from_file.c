#include <stdio.h>

int main()
{
    FILE *fptr = fopen("t3.txt", "r");
    
    int count = 0;
    while(count < 5)
    {
        int ch;
        fscanf(fptr, "%d", &ch);
        printf("%d \n", ch);
        count++;
    }

    fclose(fptr);

    return 0;
}