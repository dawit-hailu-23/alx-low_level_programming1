#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all the argumetns passed
 * @n: the list size
 *
 * Return: sum of al value
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
