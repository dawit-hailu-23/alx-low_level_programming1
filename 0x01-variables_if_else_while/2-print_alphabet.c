#include <stdio.h>
/**
 * main - prints from a to z
 *
 * Return: Always 0
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		printf("%c", i);
		i++;
	}
	printf(" \n");
	return (0);
}
