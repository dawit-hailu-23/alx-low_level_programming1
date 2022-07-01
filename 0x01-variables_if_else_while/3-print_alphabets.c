#include <stdio.h>
/*
 * main - print alphabet in lower and uppercase
 *
 * Return: 0
 */
int main(void)
{
	char i = 'a';
	char j = 'A';
	while (i <= 'z')
	{
		printf("%c", i);
		i++;
	}
	while (j <= 'Z')
	{
		printf("%c", j);
		j++;
	}
	printf("\n");
	return (0);
}
