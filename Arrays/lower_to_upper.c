#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "hello world!";
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            str[i] = str[i] - 'a' +'A';
        }
    }
    puts(str);
    return 0;
}