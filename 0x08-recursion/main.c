#include <stdio.h>
int _pow(int x, int y)
{
	int num = x;
	if (y < 0)
	{
		return -1;
	}
	// else if (y == 0)
	// {
	// 	return num;
	// }
	else if (y > 0)
	{
		num = num * x;
		_pow(x, y - 1);
		return num;
	}
}
int main(int argc, char const *argv[])
{
	int num = 5;
	int y = 3;
	printf("%d", _pow(5, 4));
	return 0;
}
