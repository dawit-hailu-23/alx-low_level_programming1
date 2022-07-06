#include "main.h"
int main()
{
	int r;
	int c;

	r = _isalpha('a');
	c = _isalpha(4);
	_putchar(c + '0');
	_putchar(r+'0');
	return 0;
}
