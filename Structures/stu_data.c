#include <stdio.h>
#include <string.h>

struct student{
    char name[20];
    int roll_no;
    float cgpa;
};

//basic structure concept
// int main()
// {
//     struct student s1;
//     strcpy(s1.name, "pooj achothani"); 
//     s1.roll_no = 1;
//     s1.cgpa = 7.28;
    
//     printf("%s \n", s1.name);
//     printf("%d \n", s1.roll_no);
//     printf("%f \n", s1.cgpa);
    
//     struct student s2;
//     strcpy(s2.name, "pia"); 
//     s2.roll_no = 2;
//     s2.cgpa = 7.50;
    
//     printf("%s \n", s2.name);
//     puts(s1.name);
//     printf("%d \n", s2.roll_no);
//     printf("%f \n", s2.cgpa);

//     return 0;
// }

//Array of structures
// int main()
// {
//     struct student CE[100];
//     strcpy(CE[0].name, "priti");
//     CE[0].roll_no = 1667;
//     CE[0].cgpa = 7.9;
    
//     printf("%s \n", CE[0].name);
//     printf("%d \n", CE[0].roll_no);
//     printf("%f \n", CE[0].cgpa);
//     return 0;
// }

//structure initialization
int main()
{
    struct student s1 = {"pooja", 1, 7.28};
    struct student s2 = {"lina", 2, 9.8};
    struct student s3 = {0};

    printf("%s \n", s1.name);
    printf("%f \n", s2. cgpa);
    return 0;
}
