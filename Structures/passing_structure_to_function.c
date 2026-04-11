#include <stdio.h>
#include <string.h>

struct student{
    int roll_no;
    char name[20];
    float cgpa;
};

void print_data(struct student s1);
void by_pointer(struct student *ptr);

int main()
{
    struct student s1 = {1, "pooja", 9};
    print_data(s1);
    printf("%d \n", s1.roll_no);

    by_pointer(&s1);
    printf("%d \n", s1.roll_no);
    
    return 0;
}

// here struct parameter pass as value not as reference
void print_data(struct student s1)
{
    s1.roll_no = 11;
    printf("%d \n", s1.roll_no);
}

void by_pointer(struct student *ptr)
{
    (*ptr).roll_no = 10;
}