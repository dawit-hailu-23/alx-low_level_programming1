#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - print the first int that is returned 1 from another function
 * @array: the array to itterate through
 * @size: the size of the array
 * @cmp: the function to be passed
 *
 * Return: index of int else 0, 0 if size if equal or less than 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return;

	if (size <= 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
}
