#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;

    i = 0;
    printf("%d\n", argc);
    while (*argv[i] != '\0')
    {
        printf("%s\n", argv[i]);
        i++;
    }
    return (0);
}
