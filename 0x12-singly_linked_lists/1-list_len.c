#include "lists.h"

/**
 * list_len - print list length
 * @h: linked list
 *
 * Return: number of element in list
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
