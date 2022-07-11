#include <stdio.h>
#include "main.h"
int main()
{
	int n = 10;
	n = 400;

	printf("before %d\n", n);
	reset_to_98(&n);
	printf("after %d", n);
}
