#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int hour;
    printf("hour: ");
    scanf("%d", &hour);
    printf("Open : %d\n", 8 <= hour && hour <= 22);
    printf("Closed : %d\n", hour < 8 || 22 < hour);
    printf("Open : %d\n", !(hour < 8 || 22< hour));
    printf("Closed : %d\n", !(8 <= hour && hour <= 22));

    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    a == 0 && puts("a == 0");
    a == 0 || puts("a != 0");

    int x, y;
    printf("Enter two integer with a space: ");
    scanf("%d%d", &x, &y);
    _Bool b=x==y;
    printf("x == y: %d\n", b);

    bool t = true, f = false;
    printf("t: %d\n", t);
    printf("f: %d\n", f);
}
