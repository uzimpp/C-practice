#include <stdio.h>

int main(void)
{
    int x;

    x = 7;
    printf("placing increment before variable (++x): %d\n", ++x);
    printf("placing increment after variable (x++): %d\n", x++);
    printf("value after increment (x): %d\n", x);

    // So, the position of ++ / -- matters!!!
    // If you place ++ / -- BEFORE,
    //  it does the operation with the variable then uses that variable

    // If you place ++ / -- AFTER,
    //  it uses that variable then does the operation with the variable
}