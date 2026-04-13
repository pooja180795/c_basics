#include <stdio.h>

typedef struct computerEngineeringStudent{
    int roll_no;
    float cgpa;
}ces;

int main()
{
    ces s1 = {1, 7.8};
    printf("%d \n", s1.roll_no);
    printf("%f \n", s1.cgpa);
    return 0;
}