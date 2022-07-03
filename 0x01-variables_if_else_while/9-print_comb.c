#include <stdio.h>

/**
 * main - print number separated by comma
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char n;

	for (i = 0; i < 10; i++)
	{
		if (i < 9)
			printf("%d, ", i);
		else
			printf("%d", i);
	}
	printf("\n");
	return (0);
}
