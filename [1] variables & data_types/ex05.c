#include <stdio.h>

int main(void)
{
    double myDoubleNum = 3.56911539;

    printf("%lf\n", myDoubleNum);
    printf("%.1lf\n", myDoubleNum);
    printf("%.2lf\n", myDoubleNum);
    printf("%.5lf\n", myDoubleNum);

    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(myDoubleNum));
}