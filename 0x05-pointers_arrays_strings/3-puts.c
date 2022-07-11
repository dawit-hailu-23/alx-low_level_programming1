#include "main.h"

/**
 * _puts - insert string at the end
 * @str: string to
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
