#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("t1.txt", "w");
    if(fptr == NULL)
    {
        printf("file doesn't exists...");
    }
    else
    {
        fprintf(fptr, "%c", 'M');
        fprintf(fptr, "%c", 'A');
        fprintf(fptr, "%c", 'N');
        fprintf(fptr, "%c", 'G');
        fprintf(fptr, "%c", 'O');
        fclose(fptr);
    }
    return 0;
}