#include <stdio.h>

int add_i(int x, int y)
{
    printf("int: ");
    return x + y;
}

double add_d(double x, double y)
{
    printf("double: ");
    return x + y;
}

int minus_i(int x)
{
    printf("int: ");
    return -x;
}

double minus_d(double x)
{
    printf("double: ");
    return -x;
}

#define minus(x) _Generic((x), \
    int: minus_i, \
    default: minus_d \
)((x))

#define add(x, y) _Generic((x), \
    int: add_i, \
    default: add_d \
)((x), (y))

int main(void)
{
    printf("%d\n", minus_i(123));
    printf("%g\n", minus_d(1.23));
    printf("%d\n", minus(123));
    printf("%g\n", minus(1.23));
    printf("%g\n", minus(1.23f));
    printf("--------------------\n");
    printf("%d\n", add_i(123, 456));
    printf("%g\n", add_d(1.23, 4.56));
    printf("%d\n", add(123, 456));
    printf("%g\n", add(1.23, 4.56));
    printf("%g\n", add(1.23f, 4.56f));
}
