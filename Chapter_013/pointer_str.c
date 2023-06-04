#include <stdio.h>

int len(char *s) {
    char *p = s;
    while (*p != '\0') {
        p++;
    }

    // q: ここはなぜ p - s ではなく p - s - 1 としないのか？
    // a: これは、文字列の長さを求めるためには、文字列の終端のnull文字を含めないからです。
    return p - s;
}

void copy(char *to, char *from) {
    while (*from != '\0') {
        // q: ここはなぜ *to++ = *from++ ではなく *to = *from; to++; from++; としないのか？
        // a: これは、*to++ = *from++ という式は、*to = *from; to++; from++; という式と同じ意味になるからです。
        *to++ = *from++;
    }
    // q: ここはnull文字を代入している?
    // a: はい、これは文字列の終端を表すために必要です。
    *to = '\0';
}

int main(void) {
    printf(("Length of string \"Hello\" is %d\n"), len("Hello"));
    char s[10];
    copy(s, "Hello World!");
    printf("Copied string is \"%s\"\n", s);
}
