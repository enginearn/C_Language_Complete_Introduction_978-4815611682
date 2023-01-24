#include <stdio.h>

int sub(int x, int y);

int add(int x, int y)
{
    return x + y;
}

int capital1(int c)
{
    if ('a' <= c && c <= 'z') return c - 'a' + 'A';
    return c;
}

int capital2(int c)
{
    return 'a' <= c && c <= 'z' ? c - 'a' + 'A' : c;
}

void f(int d)
{
    int e = d + 4;
    printf("%d\n", e);
}

void g(int b)
{
    int c = b + 2;
    f(c + 3);
}

void h(int array[])
{
    printf("func h: %p\n", array);
    printf("func h: %lu\n", sizeof array);
}

int main(void)
{
    printf("add: %d\n", add(1, 2));
    printf("add: %d\n", add(add(3, 4), 5));
    printf("add: %d\n", add(add(6, 7), add(8, 9)));

    printf("sub: %d\n", sub(1, 2));
    printf("sub: %d\n", sub(sub(3, 4), 5));
    printf("sub: %d\n", sub(sub(6, 7), sub(8, 9)));

    printf("Enter a char: ");
    int c = getchar();
    putchar(capital1(c));
    putchar('\n');

    putchar(capital2(c));
    putchar('\n');

    int a = 0;
    g(a + 1);

    int array[10];
    printf("main array: %p\n", array);
    printf("main array: %lu\n", sizeof array);
    h(array);
}

int sub(int x, int y) { return x - y; }
