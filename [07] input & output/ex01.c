#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;

    i = 0;
    printf("%d\n", argc);
    while (*argv != NULL)
    {
        printf("%s\n", *argv);
        argv++;
    }
    return (0);
}
