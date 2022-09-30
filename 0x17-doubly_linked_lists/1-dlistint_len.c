#include "lists.h"

/**
 * dlistint_len - return the number of element
 * @h: struct of doubly LL
 *
 * Return: the length
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return len;
}
