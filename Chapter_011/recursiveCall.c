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

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

int gcd2(int x, int y)
{
    if (!y) return x;
    if(x % y) return gcd2(y, x % y);
}

int gcd3(int x, int y)
{
    return !y ? x : x % y ? gcd3(y, x % y): y;
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
    puts("------------");

    printf("gcd: %d\n", gcd(12, 18));
    printf("gcd: %d\n", gcd(12, 0));
    printf("gcd: %d\n", gcd(12345, 67890));
    printf("gcd: %d\n", gcd(36, 28));
    puts("------------");

    printf("gcd2: %d\n", gcd2(12, 18));
    printf("gcd2: %d\n", gcd2(12, 0));
    printf("gcd2: %d\n", gcd2(12345, 67890));
    printf("gcd2: %d\n", gcd2(36, 28));
    puts("------------");

    printf("gcd3: %d\n", gcd3(12, 18));
    printf("gcd3: %d\n", gcd3(12, 0));
    printf("gcd3: %d\n", gcd3(12345, 67890));
    printf("gcd3: %d\n", gcd3(36, 28));
    puts("------------");

}
