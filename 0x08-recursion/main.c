#include "main.h"
#include <stdio.h>
int factorial(int n)
{
	int num = n;
	if (n == 0)
	{
		return -1;
	}
	else if (n >= 0 && n <= 1)
	{
	}
	num *= factorial(num - 1);
	return (num);
}
int main(void)
{
	char str[] = "dave";

	factorial(5);
	// _puts_recursion("dave");
}
