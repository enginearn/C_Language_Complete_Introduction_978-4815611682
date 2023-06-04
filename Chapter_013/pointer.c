#include <stdio.h>

int main(void) {
    int a = 10;
    int *p = &a;
    printf("a = %d\n", a);
    printf("p = %d\n", p);
    printf("*p = %p\n", *p);
    printf("&a = %p\n", &a);
    printf("&p = %p\n", &p);

    *p = 111;

    printf("a = %d\n", a);
    printf("*p = %d\n", *p);

    int b;
    int* pnt = &b;
    printf("b = %p\n", &b);
    printf("pnt = %p\n", pnt);

    int* nptr = NULL;
    printf("nptr = %p\n", nptr);

    return 0;
}
