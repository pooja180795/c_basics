#include <stdio.h>
#include <string.h>

struct student{
    int roll_no;
    char name[20];
    float cgpa;
};

void print_data(struct student s1);

int main()
{
    struct student s1 = {1, "pooja", 9};
    print_data(s1);
    printf("%s \n", s1.name);
    return 0;
}

// here struct parameter pass as value not as reference
void print_data(struct student s1)
{
    strcpy(s1.name, "lata");
    printf("%s \n", s1.name);
}