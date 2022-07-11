/**
 * swap_int - swap integers
 * @a: value
 * @b: value
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = *temp;
}
