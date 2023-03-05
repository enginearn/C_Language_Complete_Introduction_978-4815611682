#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int quantity;
    float price;
    float weight;
} FRUIT;

FRUIT input(void)
{
    FRUIT f;
    printf("Enter name: ");
    scanf("%s", f.name);
    printf("Enter quantity: ");
    scanf("%d", &f.quantity);
    printf("Enter price: ");
    scanf("%f", &f.price);
    printf("Enter weight: ");
    scanf("%f", &f.weight);
    return f;
}

int main(void)
{
    FRUIT fruit[] = {
        {"apple", 10, 1.5, 0.5},
        {"orange", 20, 2.5, 0.6},
        {"banana", 30, 3.5, 0.7},
        {"grape", 40, 4.5, 0.8},
        {"kiwi", 50, 5.5, 0.9},
        {"mango", 60, 6.5, 1.0},
        {"pear", 70, 7.5, 1.1},
        {"pineapple", 80, 8.5, 1.2},
        {"strawberry", 90, 9.5, 1.3},
        {"watermelon", 100, 10.5, 1.4}
    };

    int n = sizeof fruit / sizeof fruit[0];
    for (;;)
    {
        char name[20];
        double price;
        printf("name and price: ");
        if (scanf("%s %lf", name, &price) != 2) break;
        for (int i = 0; i < n; i++) {
            if (strcmp(fruit[i].name, name) == 0) {
                double weight = fruit[i].weight;
                printf("weight: %lf\n", fruit[i].quantity * weight * price);
                break;
            }
        }
    }

    puts("Fruit  Quantity  Price  Weight");
    for (int i = 0; i < n; i++) {
        printf("%-6s %5d  %6.1f %6.1f\n", fruit[i].name, fruit[i].quantity, fruit[i].price, fruit[i].weight);
    }
}
