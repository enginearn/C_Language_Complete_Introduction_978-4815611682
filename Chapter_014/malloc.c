#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int*) malloc(sizeof(int));

    if (p == NULL) {
        fprintf(stderr, "メモリ確保に失敗しました。\n");
        exit(EXIT_FAILURE); // プログラムを終了
    }

    *p = 123;

    printf("*p = %d\n", *p);
    printf("p = %p\n", p);
    printf("&p = %p\n", &p);

    free(p);
}
