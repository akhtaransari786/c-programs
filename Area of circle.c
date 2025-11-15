// write a program to calculate area of circle ( radius is given by user)

#include <stdio.h>

int main()
{
    float radius;
    printf("Enter radius");
    scanf("%f", &radius);

    printf("area of cercle is : %f", 3.14 * radius * radius);
    return 0;
}