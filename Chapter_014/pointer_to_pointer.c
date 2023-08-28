#include <stdio.h>

int main()
{
    int x = 123;
    printf("Value of x = %d\n", x);

    int *p = &x;
    printf("Value of p = %p\n", p);
    printf("Value of *p = %d\n", *p);

    int **q = &p;
    printf("Value of q = %p\n", q);
    printf("Value of *q = %p\n", *q);
    printf("Value of **q = %d\n", **q);
}
