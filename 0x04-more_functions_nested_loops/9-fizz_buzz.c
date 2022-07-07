#include <stdio.h>

/**
 * main - print fizz if num is multiple of 3 and buzz if num is multiple of 5
 *
 * Return: 0
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		//if(i<100)
		//{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}else if (i % 5 == 0)
		{
			printf("Buzz ");
		}else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz ");
		}else
		{
			printf("%d ", i);
		}
		//}
		i++;
	}
}
