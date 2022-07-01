#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* 
 * main - print nunbers
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int num = n % 10;
	printf("%d",num);
	/* your code goes there */
	return (0);
}
