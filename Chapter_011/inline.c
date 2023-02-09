#include <stdio.h>

inline int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    printf("a + b = %d\n", add(1, 2));
    printf("a + b = %d\n", add(add(3, 4), 5));
    printf("a + b = %d\n", add(add(6, 7), add(8, 9)));
}

// g++ -O2 inline.c -o inline
