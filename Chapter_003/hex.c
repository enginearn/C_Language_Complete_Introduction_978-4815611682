#include <stdio.h>
#include <limits.h>

void printb(unsigned int v);
void putb(unsigned int v);

int main(void)
{
    printf("%x\n", 0xabcdef);  // x: 16進数 a-fを小文字で表示
    printf("%X\n", 0xabcdef);  // X: 16進数 A-Fを大文字で表示
    printf("%#x\n", 0xabcdef); // #: 16進数の先頭に0xを付加
    printf("%#X\n", 0xabcdef); // #: 16進数の先頭に0Xを付加
    printf("%#o\n", 0123);     // #: 8進数の先頭に0を付加
    printf("%d\n", 0xabcdef);  // d: 10進数

    printf("============================\n");

    printb(755);          // b: 2進数
    printf("%o\n", 0755); // o: 8進数
    printf("%d\n", 0755); // d: 10進数
    printf("%x\n", 0755); // x: 16進数
}

// 2進数を表示する関数
void printb(unsigned int v)
{
    unsigned int mask = (int)1 << (sizeof(v) * CHAR_BIT - 1);
    do
        putchar(mask & v ? '1' : '0');
    while (mask >>= 1);
}

// 2進数を表示する関数
void putb(unsigned int v)
{
    putchar('0'), putchar('b'), printb(v), putchar('\n');
}
