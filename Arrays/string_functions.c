#include <stdio.h>
#include <string.h>

int main()
{
    //strlen function
    // char str[] = "Hello";
    // int len = strlen(str);
    // printf("length = %d \n", len); 
    
    //strcpy function
    // char firstStr[] = "Hello";
    // char secStr[] = "Workvsfsfsf";
    // strcpy(firstStr, secStr);
    // puts(firstStr);

    //strcat fun
    // char firstStr[100] = "Hello ";
    // char secStr[] = "World";
    // strcat(firstStr, secStr);
    // puts(firstStr);

    //strcmp fun
    char firstStr[] = "HHHa";
    char secStr[] = "HHHv";
    printf("%d", strcmp(firstStr, secStr));

    
    return 0;
}