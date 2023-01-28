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
    printf("func h: %lu\n", sizeof array); // 8
}

void i(int x)
{
    x++;
}

void j(int y[])
{
    y[0]++;
}

double average(int a[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++) total += a[i];
    return (double) total / n;
}

double averageWithNull(int a[])
{
    int total = 0, i;
    for (i = 0; a[i] >= 0; i++) total += a[i];
    return (double) total / i;
}

double arrayWithCompoundLiteral(int a[])
{
    int total = 0, i;
    for (i = 0; a[i] >= 0; i++) total += a[i];
    return (double) total / i;
}

int len(char s[])
{
    int i;
    for (i = 0; s[i]; i++);
    return i;
}

void copy(char to[], char from[])
{
    int i;
    for (i = 0; from[i]; i++) to[i] = from[i];
    to[i] = '\0';
}

void k(void)
{
    int b = 456;
    printf("func k: %d\n", b);
}

int d = 123;

void l(void)
{
    printf("func l: %d\n", d);

    int d = 456;
    printf("func l: %d\n", d);
}

int m(void)
{
    static int count;
    printf("func m: %d\n", ++count);
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
    printf("main array: %lu\n", sizeof array); // 40
    h(array);

    int score[] = {84, 93, 100, 75, 64};
    printf("%g\n", average(score, sizeof score / sizeof score[0]));

    int scoreWithNull[] = {83, 33, 42, 999, 246, -1};
    printf("%g\n", averageWithNull(scoreWithNull));

    // error: taking address of temporary array
    // printf("%g\n", arrayWithCompoundLiteral((int[]) {83, 33, 42, 99, 246, -1}));

    int x = 0;
    printf("%d\n", x);

    i(x);
    printf("%d\n", x);

    int y[] = {0};
    printf("%d\n", y[0]);

    j(y);
    printf("%d\n", y[0]);

    printf("len: %d\n", len("Hello, World!"));

    char s[] = "Hello, World!";
    char t[100];
    copy(t, s);
    printf("copy: %s\n", t);

    int b = 123;
    printf("%d\n", b);
    k();
    printf("%d\n", b);

    printf("%d\n", d);
    l();
    printf("%d\n", d);

    m();
    m();
    m();
}

int sub(int x, int y) { return x - y; }
