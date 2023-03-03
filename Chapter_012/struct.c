#include <stdio.h>

struct fruit {
    char name[20];
    int quantity;
    float price;
};

typedef struct {
    char name[20];
    int quantity;
    float price;
} fruit_t;

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

typedef struct {
    char name[20];
    int quantity;
    float price;
    float weight;
} fruit_t_with_f;

void print_fruit(fruit_t_with_f f)
{
    printf("%s, %d, $%.2f, $%.2f\n", f.name, f.quantity, f.price, f.weight);
}

void print(FRUIT f)
{
    printf("%s, %d, $%.2f, $%.2f\n", f.name, f.quantity, f.price, f.weight);
}

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

    fruit_t apple3 = {"apple", 10, 1.5};
    fruit_t orange3 = {"orange", 20, 2.5};
    fruit_t banana3 = {"banana", 30, 3.5};

    FRUIT a = {"apple", 10, 1.5, 0.5};
    FRUIT b = a;
    b.price /= 2;
    b.weight *= 0.7;
    b.quantity = 20;

    printf("a: %s, %d, $%.2f, %.2fkg\n", a.name, a.quantity, a.price, a.weight);
    printf("b: %s, %d, $%.2f, %.2fkg\n", b.name, b.quantity, b.price, b.weight);

    fruit_t_with_f c = {"apple", 10, 1.5, 0.5};
    print_fruit(c);

    print_fruit((fruit_t_with_f){"apple", 10, 1.5, 0.5});

    print(input());

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

} // main
