#include <stdio.h>
#include <string.h>

int main()
{
    int j = 0;
    char str[] = "hello pooja chothani";
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
    puts(str);
    return 0;
}