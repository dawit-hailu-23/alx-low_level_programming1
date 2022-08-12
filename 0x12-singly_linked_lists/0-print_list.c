#include "lists.h"
#include <stdio.h>
/**
 * print_lists - print struct values
 * @h: struct of list_t
 *
 * Return: node
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
