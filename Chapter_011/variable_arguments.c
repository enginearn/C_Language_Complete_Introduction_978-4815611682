#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
{
    va_list list;
    va_start(list, count);

    int total = 0;
    for (int i = 0; i < count; i++) total += va_arg(list, int);

    va_end(list);
    return total;
}

int main(void)
{
    printf("Sum of 1, 2, 3, 4, 5 is %d\n", sum(5, 1, 2, 3, 4, 5));
    printf("Sum of 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 is %d\n", sum(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10));
}
