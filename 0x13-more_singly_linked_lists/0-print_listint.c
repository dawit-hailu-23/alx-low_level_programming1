#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints values in node
 * @h: node pointer
 *
 * Return: length of node
 */
size_t print_listint(const listint_t *h)
{
	int sum = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		sum = sum + 1;
		h = h->next;
	}
	return (sum);
}
