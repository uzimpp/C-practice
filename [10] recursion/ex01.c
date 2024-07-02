// Write a program in C to receive the input
// and calculate the sum of numbers from 1 to n using recursion
// and followed by a new line.
// 
// If the number of argument is not 2 return "Invalid input"
// and followed by a new line.
// 
// === Example ===
// Expected Output 1:
// The sum of numbers from 1 to --42 :
// 903
//
// Expected Output 2:
// The sum of numbers from 1 to 0 :
// Invalid input
//
// Expected Output 3:
// The sum of numbers from 1 to -42 :
// Invalid input

#include <stdio.h>

int ft_atoi(char *nbr)
{
    long    num;
    int     i;
    int     parity;

    num = 0;
    i = 0;
    parity = 1;
    while (9 <= nbr[i] && nbr[i] <= 13 || nbr[i] == ' ')
        i++;
    while (nbr[i] == '-' || nbr[i] == '+')
    {
        if (nbr[i] == '-')
            parity *= -1;
        i++;
    }
    while ('0' <= nbr[i] && nbr[i] <= '9')
    {
        num = (num * 10) + (nbr[i] - 48);
        i++;
    }
    printf("%d\n", num * parity);
    return (num * parity);
}

long long int  ft_recnbr(int n)
{
    if (n == 1)
        return (1);
    return (n + ft_recnbr(n - 1));
}

int main(int argc, char *argv[])
{
    (void) argc;
    int n;

    n = ft_atoi(argv[1]);
    if (n <= 0)
    {
        printf("Invalid input\n");
        return (0);
    }
    printf("The sum of numbers from 1 to %d :\n", n);
    printf("%lld\n", ft_recnbr(n));
}