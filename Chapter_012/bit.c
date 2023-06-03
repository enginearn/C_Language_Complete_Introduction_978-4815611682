#include <stdio.h>
#include <stdbool.h>

// struct COLOR_ST
typedef struct COLOR_ST
{
    unsigned short red;
    unsigned short green;
    unsigned short blue;
} COLOR_ST;

// struct COLOR_BF
typedef struct COLOR_BF
{
    unsigned int red : 10;
    unsigned int green : 10;
    unsigned int blue : 10;
} COLOR_BF;

// main
int main(void)
{
    COLOR_ST color_st = { 0x1F, 0x3F, 0x1F };
    COLOR_BF color_bf = { 0x1F, 0x3F, 0x1F };

    printf("sizeof(COLOR_ST) = %d\n", sizeof(COLOR_ST));
    printf("sizeof(COLOR_BF) = %d\n", sizeof(COLOR_BF));

    printf("color_st.red = 0x%04X\n", color_st.red);
    printf("color_st.green = 0x%04X\n", color_st.green);
    printf("color_st.blue = 0x%04X\n", color_st.blue);

    printf("color_bf.red = 0x%04X\n", color_bf.red);
    printf("color_bf.green = 0x%04X\n", color_bf.green);
    printf("color_bf.blue = 0x%04X\n", color_bf.blue);

    for (;;) {
        double r, g, b;
        printf("r g b : ");
        scanf("%lf %lf %lf", &r, &g, &b);

        // the value gt 1 or lt 0 will be set to 1 or 0
        r = r > 1 ? 1 : r < 0 ? 0 : r;
        g = g > 1 ? 1 : g < 0 ? 0 : g;
        b = b > 1 ? 1 : b < 0 ? 0 : b;

        COLOR_BF color = {r * 1023, g * 1023, b * 1023};

        printf("%d %d %d\n", color.red, color.green, color.blue);
    }

    return 0;
}
