#include <stdio.h>
#include "main.h"
int main()
{
	char *str;
	int i;

	str = "dave is my name";

	while (str[i] != '\0')
	{
		i++;
	}
	printf("%d", i);
}
