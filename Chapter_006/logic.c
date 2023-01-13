#include <stdio.h>

int main(void)
{
    int hour;
    printf("hour: ");
    scanf("%d", &hour);
    printf("Open : %d\n", 8 <= hour && hour <= 22);
    printf("Closed : %d\n", hour < 8 || 22 < hour);
    printf("Open : %d\n", !(hour < 8 || 22< hour));
    printf("Closed : %d\n", !(8 <= hour && hour <= 22));

    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    x == 0 && puts("x == 0");
    x == 0 || puts("x != 0");
}
