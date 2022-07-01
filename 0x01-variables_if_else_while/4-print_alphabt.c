#include <stdio.h>

/**
 * main - print alphabet with out q and e
 *
 * Return: 0
 */
int main(void)
{
	char i = 'a';

	for (; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			printf("%c", i);
		}
	}
	printf("\n");
	return (0);
}
