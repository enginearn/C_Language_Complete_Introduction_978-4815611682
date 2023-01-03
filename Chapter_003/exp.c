#include <stdio.h>

int main(void)
{
    printf("%g\n", 3.14); // %g は、%f と %e のうち短い方を選択
    printf("%G\n", 0.000314); // %G は、%f と %E のうち短い方を選択
    printf("%e\n", 6.022e23); // e: exponent
    printf("%E\n", 6.022e-23); // E: exponent
}
