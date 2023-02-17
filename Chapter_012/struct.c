#include <stdio.h>

struct fruit {
    char name[20];
    int quantity;
    float price;
};

typedef struct fruit fruit_t;

int main(void)
{
    struct fruit apple = {"apple", 10, 1.5};
    struct fruit orange = {"orange", 20, 2.5};
    struct fruit banana = {"banana", 30, 3.5};

    printf("apple: %s, %d, $%.2f\n", apple.name, apple.quantity, apple.price);
    printf("orange: %s, %d, $%.2f\n", orange.name, orange.quantity, orange.price);
    printf("banana: %s, %d, $%.2f\n", banana.name, banana.quantity, banana.price);

    fruit_t apple2 = {"apple", 10, 1.5};
    fruit_t orange2 = {"orange", 20, 2.5};
    fruit_t banana2 = {"banana", 30, 3.5};

    printf("apple2: %s, %d, $%.2f\n", apple2.name, apple2.quantity, apple2.price);
    printf("orange2: %s, %d, $%.2f\n", orange2.name, orange2.quantity, orange2.price);
    printf("banana2: %s, %d, $%.2f\n", banana2.name, banana2.quantity, banana2.price);
}
