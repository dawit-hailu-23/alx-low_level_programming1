#include <stdio.h>
#include "lists.h"

/**
 * listint_len - print list of the elements
 * @h: pointer to the node
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != 0)
	{
		len = len + 1;
		h = h->next;
	}
	return (len);
}
