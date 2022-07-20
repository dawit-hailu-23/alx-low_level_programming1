#include <stdio.h>

/**
 * factorial - returns the factorial
 * @n: number to calculate the factorial
 *
 * Return: factorial
 */
int factorial(int n)
{
	int num = n;

	if (n == 0 && n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	num *= factorial(n - 1);
	return (num);
}
