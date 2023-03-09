#include <stdio.h>
#include <stdalign.h>

typedef struct {
    char c;
    short s;
    int i;
} A;

typedef struct {
    char c;
    int i;
    short s;
} B;

int main(void)
{
    A a;
    printf("%lu\n", sizeof(a));
    printf("%p\n", &a);
    printf("%p\n", &a.c);
    printf("%p\n", &a.s);
    printf("%p\n", &a.i);

    puts("");

    B b;
    printf("%lu\n", sizeof(b));
    printf("%p\n", &b);
    printf("%p\n", &b.c);
    printf("%p\n", &b.i);
    printf("%p\n", &b.s);

    printf("char: %lu\n", alignof(char));
    printf("short: %lu\n", alignof(short));
    printf("int: %lu\n", alignof(int));
    printf("long: %lu\n", alignof(long));
    printf("float: %lu\n", alignof(float));
    printf("double: %lu\n", alignof(double));
    puts("");

    printf("A: %lu\n", alignof(A));
    printf("B: %lu\n", alignof(B));
}
