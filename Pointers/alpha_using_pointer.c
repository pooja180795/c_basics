#include <stdio.h>
void display_all_alphas(char* first);

int main()
{
    char first = 'a';
    display_all_alphas(&first);
    return 0;
}

void display_all_alphas(char* first)
{
    int count = 0;
    while(count < 26)
    {
        printf("%c", *first);
        *first += 1;
        count++;
    }
}
