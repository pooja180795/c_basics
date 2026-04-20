#include <stdio.h>

int main()
{
    FILE *fptr = fopen("nums.txt", "r");
    int x, y;

    fscanf(fptr, "%d", &x);
    fscanf(fptr, "%d", &y);

    fclose(fptr);

    FILE *fptr = fopen("nums.txt", "w");
    fprintf(fptr, "%d", x + y);

    fclose(fptr);

    return 0;
}