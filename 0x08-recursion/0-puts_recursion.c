#include <stdio.h>

/**
 * _puts_recursion - print value
 * @s: value to be print
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(*s + 1);
	}
	else
	{
		putchar('\n');
	}
}
