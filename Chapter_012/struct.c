#include <stdio.h>

struct fruit {
    char name[20];
    int quantity;
    float price;
};

int main(void)
{
    struct fruit apple = {"apple", 10, 1.5};
    struct fruit orange = {"orange", 20, 2.5};
    struct fruit banana = {"banana", 30, 3.5};

    printf("apple: %s, %d, $%.2f\n", apple.name, apple.quantity, apple.price);
    printf("orange: %s, %d, $%.2f\n", orange.name, orange.quantity, orange.price);
    printf("banana: %s, %d, $%.2f\n", banana.name, banana.quantity, banana.price);
}
