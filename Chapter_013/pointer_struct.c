#include <stdio.h>

typedef struct {
    char name[100];
    int price;
    double weight;
} FRUIT;


void print(FRUIT *p) {
    printf("Name: %s\n", p->name);
    printf("Price: %d\n", p->price);
    printf("Weight: %lf\n", p->weight);
}

void input(FRUIT *p) {
    printf("Name: ");
    scanf("%s", p->name);
    printf("Price: ");
    scanf("%d", &p->price);
    printf("Weight: ");
    scanf("%lf", &p->weight);
}

int main() {
    FRUIT apple = {"Apple", 100, 0.5};
    print(&apple);

    FRUIT orange;
    input(&orange);
    print(&orange);
    return 0;
}
