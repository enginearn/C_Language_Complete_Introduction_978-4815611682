#include <stdio.h>
#define PI 3.14

int main(void)
{
    double radius;
    printf("radius: ");
    scanf("%lf", &radius);
    printf("area: %g\n", 4 * PI * radius * radius);

    enum {RED, BLUE, GREEN};
    printf("READ: %d\n", RED);
    printf("BLUE: %d\n", BLUE);
    printf("GREEN: %d\n", GREEN);

    enum {sep=9, oct, nov, dec, jan=1, feb, mar, apr, may, jun, jul, aug};
    printf("sep: %d\n", sep);
    printf("oct: %d\n", oct);
    printf("nov: %d\n", nov);
    printf("dec: %d\n", dec);
    printf("jan: %d\n", jan);
    printf("feb: %d\n", feb);
    printf("mar: %d\n", mar);
    printf("apr: %d\n", apr);
    printf("may: %d\n", may);
    printf("jun: %d\n", jun);
    printf("jul: %d\n", jul);
    printf("aug: %d\n", aug);

    enum DAY {sun, mon, tue, wed, thu, fri, sat} day = tue;
    printf("%d\n", day);
    printf("%d\n", fri - day);
}
