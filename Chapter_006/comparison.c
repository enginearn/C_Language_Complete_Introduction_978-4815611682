#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Enter 2 numbers with space: ");
    scanf("%d%d", &x, &y);
    printf("%d==%d: %d\n", x, y, x == y);
    printf("%d!=%d: %d\n", x, y, x != y);
    printf("%d<%d: %d\n", x, y, x < y);
    printf("%d>%d: %d\n", x, y, x > y);
    printf("%d<=%d: %d\n", x, y, x <= y);
    printf("%d>=%d: %d\n", x, y, x >= y);

    float a;
    double b;
    printf("Enter two float or double: ");
    scanf("%f%lf", &a, &b);
    printf("%g==%g: %d\n", a, b, a == b);
    printf("%g!=%g: %d\n", a, b, a != b);
    printf("%g<%g: %d\n", a, b, a < b);
    printf("%g>%g: %d\n", a, b, a > b);
    printf("%g<=%g: %d\n", a, b, a <= b);
    printf("%g>=%g: %d\n", a, b, a >= b);
    printf("a: %.20f\n", a);
    printf("b: %.20f\n", b);
}
