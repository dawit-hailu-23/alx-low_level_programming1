#include "main.h"

/**
 * print_square - print square with *
 * @c: size
 */
void print_square(int c)
{
	int i, j;

	for (i = 1; i <= c; i++)
	{
		for (j = 1; j <= c; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
