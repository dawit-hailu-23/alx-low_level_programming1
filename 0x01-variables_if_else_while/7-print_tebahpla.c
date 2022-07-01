#include <stdio.h>

/**
 * main - print A - Z reversed
 *
 * Return: 0
 */
int main(void)
{
	char i = 'z';

	for(; i >= 'a'; i--)
	{
		printf("%c", i);
	}
	printf("\n");
	return (0);
}
