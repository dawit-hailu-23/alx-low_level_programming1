#include "main.h"

/**
 * print_alphabet_X10 - print alphabet 10X
 * followd by new line
 */
void print_alphabet_x10(void)
{
	char j;
	int i = 1;

	while (i <= 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
