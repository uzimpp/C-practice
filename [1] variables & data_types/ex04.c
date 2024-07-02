#include <stdio.h>

int main(void)
{
    float myFloatNum = 3.56911539;

    printf("%f\n", myFloatNum);
    printf("%.1f\n", myFloatNum);
    printf("%.2f\n", myFloatNum);
    printf("%.5f\n", myFloatNum);

    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(myFloatNum));
}