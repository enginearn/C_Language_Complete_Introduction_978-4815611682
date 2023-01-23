#include <stdio.h>
#include <string.h>

int main(void)
{
    puts(
        "(1) Edit\n"
        "(2) Compile\n"
        "(3) Run");

    printf("%p\n", "hello");
    printf("%c %d %p\n", "hello"[0], "hello"[0], "hello"[0]);
    printf("%c %d %p\n", "hello"[1], "hello"[1], "hello"[1]);
    printf("%c %d %p\n", "hello"[2], "hello"[2], "hello"[2]);
    printf("%c %d %p\n", "hello"[3], "hello"[3], "hello"[3]);
    printf("%c %d %p\n", "hello"[4], "hello"[4], "hello"[4]);
    printf("%c %d %p\n", "hello"[5], "hello"[5], "hello"[5]);

    char s[] = "Hello";
    for (int i = 0; s[i]; i++)
        printf("%c %d\n", s[i], s[i]);

    {
        char s[100];
        scanf("%s", s);
        printf("%s\n", s);
    }

    {
        char s[100];
        fgets(s, sizeof s, stdin);
        puts(s);
    }

    {
        char s[] = "String length";
        printf("%lu\n", strlen(s));

        int i;
        for (i = 0; s[i]; i++);
        printf("%d\n", i);
    }

    {
        char s[] = "String Copy";
        char t[100];
        strcpy(t, s);
        puts(t);

        char u[100];
        int i;
        for (i = 0; s[i]; i++) u[i] = s[i];
        u[i] = '\0';
        puts(u);
    }

    {
        for (;;) {
            char s[100], t[100];
            fgets(s, sizeof(s), stdin);
            fgets(t, sizeof(t), stdin);

            int c = strcmp(s, t);
            puts(c < 0 ? "<" : c > 0 ? ">" : "==");

            int i;
            for (i = 0; s[i] && s[i] == t[i]; i++);
            puts(s[i] < t[i] ? "<" : s[i] > t[i] ? ">" : "==");
            puts("");
        }
    }
}
