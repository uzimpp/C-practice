#include <stdio.h>

int main(void)
{
    int x;
    int y;

    x = 7;
    y = 6;
    printf("Addition (x + y): %d\n", x + y);
    printf("Subtraction (x - y): %d\n\n", x - y);

    printf("Muliplication (x * y): %d\n", x * y);
    printf("Division (x / y): %d\n", x / y);
    printf("Modulus (x %% y): %d\n\n", x % y);

    printf("Increment (++x): %d\n", ++x);
    printf("Decrement (--y): %d\n", --x);
}