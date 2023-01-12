#include <stdio.h>

int main(void)
{
    printf("float: %lubytes\n", sizeof(float));
    printf("double: %lubytes\n", sizeof(double));
    printf("long double: %lubytes\n", sizeof(long double));

    float x = 1 / 3.0;
    double y = 1 / 3.0;
    long double z = 1 / 3.0L;
    printf("x = %.40f\n", x);
    printf("y = %.40f\n", y);
    printf("z = %.40Lf\n", z);
}
