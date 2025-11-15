// Write a program to calculate area of square ( side is given by user)

#include <stdio.h>

int main()
{
    float side;
    printf("enter side");
    scanf("%f", &side);

    printf("area of square is : %f", side * side);
    return 0;
}