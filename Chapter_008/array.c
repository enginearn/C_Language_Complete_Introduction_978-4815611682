#include <stdio.h>

int main(void)
{
    {
        int sales0, sales1, sales2, sales3, sales4;

        scanf("%d", &sales0);
        scanf("%d", &sales1);
        scanf("%d", &sales2);
        scanf("%d", &sales3);
        scanf("%d", &sales4);

        printf("%d ", sales0);
        printf("%d ", sales1);
        printf("%d ", sales2);
        printf("%d ", sales3);
        printf("%d ", sales4);
        puts("");
    }

    {
        int sales[5];

        scanf("%d", &sales[0]);
        scanf("%d", &sales[1]);
        scanf("%d", &sales[2]);
        scanf("%d", &sales[3]);
        scanf("%d", &sales[4]);

        printf("%d ", sales[0]);
        printf("%d ", sales[1]);
        printf("%d ", sales[2]);
        printf("%d ", sales[3]);
        printf("%d ", sales[4]);
        puts("");
    }

    {
        int sales[5];

        printf("sizeof array: %d", sizeof(sales) / sizeof(int));

        for (int i = 0; i < 5; i++) scanf("%d", &sales[i]);
        for (int i = 0; i < 5; i++) printf("%d ", sales[i]);
        puts("");
    }

    {
        enum {
            N = 5
        };

        int sales[N];
        for (int i = 0; i < N; i++) scanf("%d", &sales[i]);
        for (int i = 0; i < N; i++) printf("%d ", sales[i]);
    }

    {
        enum { N = 5 };
        int sales[N];

        for (int i = 0; i < N; i++) scanf("%d", &sales[i]);
        puts("");

        int total = 0;
        for (int i = 0; i < N; i++) total += sales[i];

        puts("sales percentage");
        for (int i = 0; i < N; i++) {
            printf("%5d %9.1f%%\n", sales[i], sales[i] * 100.0 / total);
        }
        puts("");
    }

    {
        enum { N = 5 };
        int sales[N];

        printf("sizeof array: lubytes\n", sizeof(sales));
        printf("sizeof one data: lubytes\n", sizeof(sales[0]));
        printf("data count: lubytes\n", sizeof(sales) / sizeof(sales[0]));
    }

    {
        int sales[5];

        printf("%p", sales);
        for (int i = 0; i < sizeof sales / sizeof sales[0]; i++) printf("%p\n", &sales[i]);
    }
}
