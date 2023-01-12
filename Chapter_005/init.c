#include <stdio.h>

int main(void)
{
    int radius = 10;
    double pi = 3.14159;
    printf("Radius = %d\n", radius);
    printf("Pi = %f\n", pi);
    printf("Area = %.2f\n", pi * radius * radius);

    int price_food = 980, price_drink = 450;
    double discount = 0.3;
    printf("Food = %d円\n", price_food);
    printf("Drink = %d円\n", price_drink);
    printf("Before discount = %d円\n", price_food + price_drink);
    printf("Discount = %.0f%%\n", discount * 100);
    printf("Total = %.1f円\n", ((price_food + price_drink) * (1 - discount)));
}
