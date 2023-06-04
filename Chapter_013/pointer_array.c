#include <stdio.h>

void print_ptr(int *p) {
    while (*p != 0)
    {
        /* code */
        printf("%d %p\n", *p++, *p);

    };
}

void print_array(int a[]) {
    for (int i = 0; a[i] != 0; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    };
}

int main(void) {
    int bottle[] = {300, 500, 700, 1000, 1500};
    int *p = bottle;
    printf("bottle = %p\n", bottle);
    printf("p = %p\n", p);

    for (int i = 0; *(p + i) != 0; i++) {
        printf("bottle[%d] = %d\n", i, *(p + i));
    };

    for (int i = 0; p[i] != 0; i++) {
        printf("bottle[%d] = %d\n", i, p[i]);
    };

    for (int i = 0; i[p] != 0; i++) {
        printf("bottle[%d] = %d\n", i, i[p]);
    };

    for (int *p=bottle; *p != 0; p++) {
        printf("bottle[%d] = %d\n", p-bottle, *p);
    };

    print_ptr(bottle);
    print_array(bottle);
}
