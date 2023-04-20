#include <stdio.h>

typedef union {
    int i;
    char c[4];
} INT_CHAR;

int main(void)
{
    INT_CHAR ic;
    ic.i = 0x12345678;
    printf("%x\n", ic.i);
    printf("%x %x %x %x\n", ic.c[0], ic.c[1], ic.c[2], ic.c[3]);

    char b;
    b = ic.c[0], ic.c[0] = ic.c[3], ic.c[3] = b;
    b = ic.c[1], ic.c[1] = ic.c[2], ic.c[2] = b;
    printf("%x\n", ic.i);
    printf("Hello World!🍕🍟🥙🌭🌮🍙🍞🧀🧂🥨🥟🧈🥚🍖🍤🥩🍜🍛🥓🍳🍔🧇🍥");
}
