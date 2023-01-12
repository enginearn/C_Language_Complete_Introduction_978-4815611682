#include <stdio.h>

int main(void)
{
    const double PI = 3.14;
    double radius;
    printf("Enter double\n");
    printf("radius: ");
    scanf("%lf", &radius);
    printf("volume: %gcm3\n", 4 * PI * radius * radius * radius / 3);
}
