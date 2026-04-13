#include <stdio.h>


typedef struct address{
    int unit_no;
    int street_no;
    char street_name[20];
    char city[20];
}add;

void print_address(struct address person[]);

int main()
{
    add person[5];
    for(int i = 0; i < 1; i++)
    {
        printf("enter unit for person %d = ", i);
        scanf("%d", &person[i].unit_no);
        printf("enter street no for person %d = ", i);
        scanf("%d", &person[i].street_no);
        printf("enter street name for person %d = ", i);
        scanf("%s", person[i].street_name);
        printf("enter city for person %d = ", i);
        scanf("%s", person[i].city);
    }

    print_address(person);

    

    return 0;
}

void print_address(struct address person[])
{
    for(int i = 0; i < 1; i++)
    {
        printf("%d = %d %d %s %s",i, person[i].unit_no, person[i].street_no, person[i].street_name, person[i].city);
    }
}

