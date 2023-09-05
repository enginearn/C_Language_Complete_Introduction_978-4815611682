#include <stdio.h>

int main(int argc, char* argv[])
{
    printf("argc = %d\n", argc);
    for (char **p = argv; *p != NULL; p++)
    {
        printf("%p\n", *p);
        for (char *q = *p; *q != '\0'; q++)
        {
            printf("%c", *q);
        }
        puts("");

    }
}
