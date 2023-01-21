#include <stdio.h>
#include <string.h>

int main(void)
{
    enum
    {
        N = 5
    };

    int sales_a[] = {190, 123, 435, 433, 999};

    for (int i = 0; i < N; i++)
        printf("%d ", sales_a[i]);
    puts("");

    int sales_b[N];

    for (int i = 0; i < N; i++)
        sales_b[i] = sales_a[i];

    for (int i = 0; i < N; i++)
        printf("%d ", sales_b[i]);
    puts("");

    int sales_c[] = {999, 800, 321, 888, 9999};

    for (int i = 0; i < N; i++)
        printf("%d ", sales_c[i]);
    puts("");

    int sales_d[N];

    memcpy(sales_d, sales_c, sizeof sales_d);

    for (int i = 0; i < N; i++)
        printf("%d ", sales_d[i]);
    puts("");
}
