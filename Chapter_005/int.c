#include <stdio.h>

int main(void)
{
    printf("short: %lu bits\n", sizeof(short));
    printf("int: %lu bits\n", sizeof(int));
    printf("long: %lu bits\n", sizeof(long));
    printf("long long: %lu bits\n", sizeof(long long));

    short x = 10000;
    int y = 1000000000;
    long long z = 1000000000000;

    printf("short x: %d\n", x);
    printf("int y: %d\n", y);
    printf("long long z: %lld\n", z);
}
