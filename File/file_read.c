#include <stdio.h>

// int main()
// {
//     FILE *fptr;
//     fptr = fopen("t1.txt", "r");

//     char ch;
//     fscanf(fptr, "%c", &ch);
//     printf("character = %c", ch);

//     fclose(fptr);

//     return 0;
// }
int main()
{

FILE *fptr;
    fptr = fopen("t2.txt", "r");

    int ch;
    fscanf(fptr, "%d", &ch);
    printf("digit = %d", ch);

    fclose(fptr);

    return 0;
}