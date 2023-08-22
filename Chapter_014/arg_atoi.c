#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    };

    int total = 0;
    for (int i = 1; i < argc; i++) {
        total += atoi(argv[i]);
    };

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", (float)total / (argc - 1));
}
