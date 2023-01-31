#include <stdio.h>

int factorial(int n)
{
    if (n > 1) return n * factorial(n - 1);
    else return 1;
}

int factorial2(int n)
{
    return n > 1 ? n * factorial2(n - 1) : 1;
}

int main(void)
{
    printf("%d\n", factorial(5));
    printf("%d\n", factorial(6));
    printf("%d\n", factorial(12));
    printf("%d\n", factorial(13));
    puts("------------");

    printf("%d\n", factorial2(5));
    printf("%d\n", factorial2(6));
    printf("%d\n", factorial2(12));
    printf("%d\n", factorial2(13));
}
