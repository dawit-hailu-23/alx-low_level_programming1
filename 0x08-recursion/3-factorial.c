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

	if (n == 0 && n == 1)
	{
		printf("1");
	}
	num = num * factorial(n - 1);
	printf("%d", num);
	return (num);
}
