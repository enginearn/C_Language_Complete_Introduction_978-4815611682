#include <stdio.h>

int main(void)
{
    {
        int x = 0, y = x++;
        printf("x++. x: %d y: %d\n", x, y);
        y = x;
        printf("y=x. x: %d y: %d\n", x, y);
        y = ++x;
        printf("++x. x: %d y: %d\n", x, y);
        y = x--;
        printf("x--. x: %d y: %d\n", x, y);
        y = --x;
        printf("--x. x: %d y: %d\n", x, y);
    }

    {
        for (int i = 0; i < 10; i++)
            printf("%d ", i * i);
        puts("");
    }

    {
        for (int i = 0; i < 10; i++)
        {
            printf("%d\n", i * i);
        }
    }

    {
        for (int i = 1; i < 10; i++)
        {
            for (int j = 1; j < 10; j++)
            {
                printf("%d x %d = %d\n", i, j, i * j);
            }
            puts("");
        }
    }

    {
        long int n;
        printf("Enter a number: ");
        scanf("%d", &n);

        int i;
        for (i = 2; i < n && n % i; i++)
            ;
        printf("%ld %s a prime number\n", n, n >= 2 && i == n ? "is" : "isn't");
    }

    {
        int count;
        printf("Enter loop count: ");
        scanf("%d", &count);
        while (--count >= 0)
            puts("Hello");

        do
            puts("Hello from do");
        while (--count > 0);
    }

    {
        for (int i = 0; i < 10; i++)
            printf("%d ", i);
        puts("");

        int i = 0;
        while (++i < 10)
            printf("%d ", i);
        puts("");
    }

    {
        int total = 0;

        for (;;)
        {
            int price;
            printf("Enter price: ");
            scanf("%d", &price);

            if (price == 0)
                break;

            if (price < 0)
            {
                puts("error: price < 0");
                continue;
            }

            total += price;
        }
        printf("total: %d円\n", total);
    }

    {
        int x, y;
        printf("Enter 2 numbers with space: ");
        scanf("%d%d", &x, &y);

        for (int i = 1; i <= 9; i++)
        {
            for (int j = 1; j <= 9; j++)
            {
                printf("%2d ", i * j);

                // if (i == x && j == y) break;
                if (i == x && j == y)
                    goto end;
            }
            puts("");
        }
    end:
        puts("");
    }

    {
        int price, count;

        printf("price: ");
        scanf("%d", &price);
        if (price < 0)
            goto error;

        printf("count: ");
        scanf("%d", &count);
        if (count < 0)
            goto error;

        printf("total: %d\n", price * count);
        goto thankyou;

    error:
        puts("Error!");

    thankyou:
        puts("Thank you!");
    }

    {
        int price, count;

        printf("price: ");
        scanf("%d", &price);

        if (price >= 0)
        {
            printf("count: ");
            scanf("%d", &count);

            if (count >= 0)
                printf("total: %d\n", price * count);
        }

        if (price < 0 || count < 0)
            puts("Error!");

        puts("Thank You!");
    }

    {
        int total = 0;
        for (int price;; total += price)
        {
            printf("Enter price: ");
            scanf("%d", &price);
            if (price == 0)
                break;
        }
        printf("total: %d\n", total);
    }

    {
        int total = 0;
        printf("Enter price: ");
        for (int price; scanf("%d", &price), price; total += price)
            ;
        printf("total: %d\n", total);
    }
}
