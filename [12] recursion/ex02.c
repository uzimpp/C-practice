// Write a program in C to print the Fibonacci Series using recursion. >
// Test Data :
// Input number of terms for the Series (< 20) : 10
// Expected Output:
//
//  Input number of terms for the Series (< 20) : 10                                
//  The Series are :                                                                
//  1  1  2  3  5  8  13  21  34  55

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

int  ft_fibonacci(int n)
{
	if (n <= 0)
		return (0);
	if (n < 2)
		return (n);
    return(ft_fibonacci(n - 2) + ft_fibonacci(n - 1));
}

int main(int argc, char *argv[])
{
    (void) argc;
    int n;

    n = ft_atoi(argv[1]);
    if (n >= 0)
    {
        printf("The fibonacci value at %d :\n", n);
        printf("%d\n", ft_fibonacci(n));
    }
    else
        printf("Invalid input\n");
    return (0);
}