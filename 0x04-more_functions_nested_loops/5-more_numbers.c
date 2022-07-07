#include <stdio.h>

/**
 * more_numbers - print num 0 - 14 10 times
 */
void more_numbers(void)
{
	int i, j;
	
	i = 0;
	while (i <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			printf("%d", j);
			j++;
		}
		printf("\n");
		i++;
	}
}
