#include <stdio.h>

int main(void)
{
    int x = 5;
    printf("x = %d\n", x);
    {
        int x = 10;
        printf("block a: x = %d\n", x);
    }

    {
        int x = 20;
        printf("block b: x = %d\n", x);
    }

    printf("x = %d\n", x);
}
