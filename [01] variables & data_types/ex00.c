#include <stdio.h>

int main(void)
{
    int index;
    int age;

    index = 0;
    age = 18;

    printf("%d\n", index);
    printf("%d\n", age);

    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(index));
    printf("%d\n", sizeof(age));
}