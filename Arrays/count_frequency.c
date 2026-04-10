#include <stdio.h>

int main()
{
    char str[] = "hello worldolpppppp";
    int freq[256] = {0};
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }

    int max = 0;
    char maxChar;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(freq[str[i]] > max)
        {
            maxChar = str[i];
            max = freq[str[i]];
        }
    }
    printf("%c = %d",maxChar, max);
    return 0;
}