#include <stdio.h>

struct student{
    int roll_no;
    float cgpa;
    char name[20];
};

int main()
{
    struct student s1 = {5, 7.28, "pooja"};
    struct student *ptr = &s1;
    printf("by pointer = %s \n", (*ptr).name);
    printf("by -> operator = %s \n", ptr->name);
    return 0;
}