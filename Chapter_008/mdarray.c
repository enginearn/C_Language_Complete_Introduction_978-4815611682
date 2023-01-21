#include <stdio.h>

int main(void)
{
    enum
    {
        ROW = 2,
        COL = 3,
    };

    int a[ROW][COL] = {{11, 12, 13}, {14, 15, 16}};

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
            printf("%d ", a[i][j]);
        puts("");
    }

    int b[ROW * COL] = {11, 12, 13, 14, 15, 16};

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
            printf("%2d ", b[i + COL + j]);
        puts("");
    }

    int n;
    printf("count: ");
    scanf("%d", &n);

    int sales[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &sales[i]);
    puts("");

    int total = 0;
    for (int i = 0; i < n; i++)
        total += sales[i];
    puts("sales percentage");
    for (int i = 0; i < n; i++)
    {
        printf("%5d %9.1f%%\n", sales[i], sales[i] * 100.0 / total);
    }
    puts("");
}
