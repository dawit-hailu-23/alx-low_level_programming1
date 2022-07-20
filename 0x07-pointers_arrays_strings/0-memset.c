#include "main.h"

/**
 * _memset - fills memory with byte
 * @s: pointer
 * @n: byte to be filled
 * @b: character to be filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
