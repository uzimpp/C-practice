#include <stdio.h>

int main(void)
{
    int intmax;

    intmax = 2147483647;
    printf("%d\n", intmax);
	printf("%d\n", intmax + 1);
	
	printf("%d\n", -intmax - 1);
    printf("%d\n", -intmax - 2);
}
