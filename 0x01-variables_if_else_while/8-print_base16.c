#include <stdio.h>

/**
 * main - print in base 16
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 16; i++)
	{
		if (i > 9)
		{
			for (i = 'a'; i <= 'f'; i++)
			{
				putchar(i);
			}
		}
		else
			putchar(i + '0');
	}
	putchar('\n');
}
