#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    printf("%d\n", x * x);

    int a, b;
    printf("Enter two integers with a space: ");
    scanf("%d%d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);

    double inch;
    printf("inch: ");
    scanf("%lf", &inch);
    printf("%gcm\n", inch * 2.54);
}
