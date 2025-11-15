// Write a program for factorial of a number ( number is given by user)
#include <stdio.h>

int main()
{
    int number, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; ++i)
    {
        factorial *= i;
    }

    printf("Factorial of %d = %d", number, factorial);
    return 0;
}