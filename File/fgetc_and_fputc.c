#include <stdio.h>

int main()
{
    FILE *fptr = fopen("t1.txt", "r");

    printf("ch = %c", fgetc(fptr));

    fclose(fptr);

    FILE *fptr1 = fopen("t2.txt", "w");

    fputc('p', fptr1);

    fclose(fptr1);
    

    return 0;
}