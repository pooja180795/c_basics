#include <stdio.h>
#include<stdlib.h>
#include "student.h"

int main()
{   int total_students;
    printf("how many students you want to add? : ");
    scanf("%d", &total_students);

    stu *s;
    s = (stu *)(malloc(total_students * sizeof(stu)));
    if(s == NULL)
    {
        fprintf(stderr, "memory aloaction failed");
    }
    

    add_student(s, total_students);
    printf("================");

    display_student(s, total_students);
    printf("================\n");

    find_topper(s, total_students);
    
    save_student(s, total_students);
    printf("================\n");

    fetch_student(total_students);

    free(s);

    return 0;
}