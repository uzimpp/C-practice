#include <stdio.h>

int main(void)
{
    int x;

    x = 41;
    printf("increment method: %d\n", ++x);
    --x;
    printf("equation method: %d\n", x = x + 1);
    --x;
    printf("short equation method: %d\n\n", x += 1);
    // all of these have the same meaning
}