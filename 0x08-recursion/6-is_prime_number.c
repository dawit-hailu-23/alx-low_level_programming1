/**
 * is_prime_number - check if num is prime
 * @n: number to check
 *
 * Return: 1 if num is prime
 */
int is_prime_number(int n)
{
	if (n % 2 == 0)
	{
		return (0);
	}
	else if (n / 2 == 2)
	{
		return (1);
	}
}
