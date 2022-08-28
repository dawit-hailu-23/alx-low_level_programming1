#include "main.h"

/**
 * binary_to_uint - convert binary to int
 * @b: the binary to be converted
 *
 * Return: the converted binary
 */
unsigned int binary_to_uint(char *b)
{
	unsigned int num = 0, multi = 1;
	int i;

	if (*b == '\0')
		return (0);

	while (b[i])
		i++;

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num += (b[i] - '0') * multi;
		multi *= 2;
	}
	return (num);
}
