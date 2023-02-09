#include <stdio.h>

#define ADD(X, Y) ((X) + (Y))

int main(void)
{
    printf("The sum of 1 and 2 is %d\n", ADD(1, 2));
    printf("The sum of 3, 4 and 5 is %d\n", ADD(ADD(3, 4), 5));
    printf("The sum of 6, 7, 8 and 9 is %d\n", ADD(ADD(6, 7), ADD(8, 9)));
}

