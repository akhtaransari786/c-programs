#include <stdio.h>
#include <math.h>

int main()

{
    int a = 10, b = 50;
    int sum, sub, mul, div, mod;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;
    printf("sum = %d\n", sum);
    printf("sub = %d\n", sub);
    printf("mul = %d\n", mul);
    printf("div = %d\n", div);
    printf("mod = %d\n", mod);
    return 0;
}