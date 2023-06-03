#include <stdio.h>

typedef union {
    int i;
    char c[4];
} INT_CHAR;

int main(void)
{
    // 4 bytes
    INT_CHAR ic;

    // initialize
    ic.i = 0x12345678; // 0x78 0x56 0x34 0x12
    printf("%x\n", ic.i);
    printf("%x %x %x %x\n", ic.c[0], ic.c[1], ic.c[2], ic.c[3]);

    // swap
    char b;
    b = ic.c[0], ic.c[0] = ic.c[3], ic.c[3] = b;
    b = ic.c[1], ic.c[1] = ic.c[2], ic.c[2] = b;
    printf("%x\n", ic.i);
}
