#include <stdio.h>

struct vector{
    int x;
    int y;
};

void vector_sum(struct vector v1, struct vector v2);

int main()
{
    struct vector v1 = {4,10};
    struct vector v2 = {4,10};
    
    vector_sum(v1, v2);
    
    return 0;

}

// pass by value
void vector_sum(struct vector v1, struct vector v2)
{
    struct vector sum = {0};
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("sum of x-vecor = %d \n", sum.x);
    printf("sum of y-vecor = %d \n", sum.y);
}