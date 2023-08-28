#include <stdio.h>

int main(int argc, char* argv[])
{
    for (char **p = argv; *p != NULL; p++)
    {
        for (char *q = *p; *q != '\0'; q++)
        {
            printf("%c", *q);
        }
        puts("");

    }
}
