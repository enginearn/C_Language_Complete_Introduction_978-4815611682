#include <stdio.h>

int main(void)
{
    puts("char code");
    printf("%4c %4d\n", '0', '0');
    printf("%4c %4d\n", '1', '1');
    printf("%4c %4d\n", '2', '2');

    puts("char code");
    printf("%4c %4d\n", 'A', 'A');
    printf("%4c %4d\n", 'B', 'B');
    printf("%4c %4d\n", 'C', 'C');

    puts("char code");
    printf("%4c %4d\n", 'a', 'a');
    printf("%4c %4d\n", 'b', 'b');
    printf("%4c %4d\n", 'c', 'c');

    char c = 0xff;
    printf("char: %13d\n", c);

    signed char sc = 0xff;
    printf("signed char: %6d\n", sc);

    unsigned char usc = 0xff;
    printf("unsigned char: %4d\n", usc);

    // {
    //     for (;;) {
    //         char c;
    //         printf("Enter a character: ");
    //         scanf("%c", &c);
    //         printf("%d\n", c); // '\n' is 10
    //     }
    // }

    {
        for (;;) {
            int c = getchar();

            if ( 'a' <= c && c <= 'z') {
                putchar(c - 'a' + 'A');
                putchar('\n');
            }
        }
    }
}
