#include <stdio.h>

int main(void)
{
    int dollar =15, rate = 105;
    printf("%d\n", dollar * rate);
    rate = 139;
    printf("%d\n", dollar * rate);

    int x = 1 / 2.0;
    printf("%d\n", x); // 0
    x = 3 / 2.0;
    printf("%d\n", x); // 1

    double component = 1;
    component *= 1.4;
    printf("%g\n", component); // 1.400000
    component *= 1.4;
    printf("%g\n", component); // 1.960000
    component *= 1.4;
    printf("%g\n", component); // 2.744000
    component *= 1.4;
    printf("%g\n", component); // 3.841600
    component *= 1.4;
    printf("%g\n", component); // 5.378240
    component *= 1.4;
    printf("%g\n", component); // 7.513536
    component *= 1.4;
    printf("%g\n", component); // 10.482380
    component *= 1.4;
    printf("%g\n", component); // 14.574530
    component *= 1.4;
    printf("%g\n", component); // 20.404330
    component *= 1.4;
    printf("%g\n", component); // 28.565860

    printf("%d\n", x = 123); // 123
    printf("%d\n", x); // 123

    int a, b;
    a = b = 123; // a = (b = 123) is wrong because = is right-associative operator in C
    printf("%d\n", a); // 123
    printf("%d\n", b); // 123
}
