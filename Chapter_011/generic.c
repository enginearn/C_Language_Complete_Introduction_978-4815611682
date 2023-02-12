#include <stdio.h>

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

int main(void)
{
    printf("%d\n", minus_i(123));
    printf("%g\n", minus_d(1.23));
    printf("%d\n", minus(123));
    printf("%g\n", minus(1.23));
    printf("%g\n", minus(1.23f));
}
