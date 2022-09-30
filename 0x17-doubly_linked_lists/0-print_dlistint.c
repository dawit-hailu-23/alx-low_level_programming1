#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print linked list
 * @h: the struct of doublyLL
 *
 * Return: the number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	int len=0;

	while (h)
	{
		printf("%d\n", h->n );
		len++;
		h=h->next;
	}
	return (len);
}
