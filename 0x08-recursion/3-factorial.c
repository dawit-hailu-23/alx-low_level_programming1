/**
 * factorial - returns the factorial 
 * @n: number to calculate the factorial
 *
 * Return: factorial
 */
int factorial(int n)
{
	int num;

	if (num == 0)
	{
		return (-1);
	}
	num *= factorial(n-1);
	return (num);
}
