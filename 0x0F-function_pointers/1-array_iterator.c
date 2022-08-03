#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - itterate through the given array
 * @array: the array to be passed
 * @size: size of the array
 * @action: the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i <= size; i++)
	{
		action(array[i]);
	}
}
