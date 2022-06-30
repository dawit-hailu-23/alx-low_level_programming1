#include <stdio.h>
/**
 * main - Print size of chars
 *
 * Return: Always 0
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	long long int longlongInt;
	long longType;
	printf("Size of char: %zu byte(s)\n",sizeof(charType));
	printf("Size of int: %zu byte(s)\n",sizeof(intType));
	printf("Size of long int: %zu byte(s)\n",sizeof(longType));
	printf("Size of long long int: %zu byte(s)\n",sizeof(longlongInt));
	printf("Size of float int: %zu byte(s)\n",sizeof(floatType));
	sizeof(char);
	return (0);	
}
