#include <stdio.h>
#include <string.h>
#include "student.h"

void add_student(stu *s, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("Enter roll_no: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter math marks: ");
        scanf("%d", &s[i].math);

        printf("Enter science marks: ");
        scanf("%d", &s[i].science);

        printf("Enter english marks: ");
        scanf("%d", &s[i].english);
    }
}

void display_student(stu *s, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("student roll_no: %d \n", s[i].roll_no);
        printf("student name: %s \n", s[i].name);
        printf("student math score: %d \n", s[i].math);
        printf("student science score: %d \n", s[i].science);
        printf("student english score: %d \n", s[i].english);
    }
}

void find_topper(stu *s, int size)
{
    float percentage, highest = 0.0;
    char topper_name[50];
    for(int i = 0; i < size; i++)
    {
        percentage = (s[i].math + s[i].science + s[i].english) / 3.0;
        if(percentage > highest)
        {
            highest = percentage;
            strcpy(topper_name, s[i]. name);
        }
    }
    printf("topper is : %s with percentage : %f", topper_name, highest);

}

void save_student(stu *s, int size)
{
    FILE *fptr = fopen("student_log.txt", "w");

    if(fptr == NULL)
    {
        printf("error opening file \n");
        return;
    }

    for(int i = 0; i < size; i++)
    {
        fprintf(fptr, "%d\t%-15s\t%d\t%d\t%d\n", s[i].roll_no, s[i].name, s[i].math, s[i].science, s[i].english);
    }

    fclose(fptr);
}

void fetch_student(int size)
{
    int roll_no, math, scie, eng;
    char name[50];
    FILE *fptr = fopen("student_log.txt", "r");

    if(fptr == NULL)
    {
        printf("error opening file \n");
        return;
    }

    while(fscanf(fptr, "%d %s %d %d %d", &roll_no, name, &math, &scie, &eng) == 5)
    {
        printf("%d\t%-15s\t%d\t%d\t%d\n", roll_no, name, math, scie, eng);
    }
    
    fclose(fptr);
}

