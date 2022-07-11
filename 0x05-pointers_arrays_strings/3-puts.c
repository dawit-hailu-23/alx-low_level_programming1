#include "main.h"

/**
 * _puts - insert string at the end
 * @str: string to
 */
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
