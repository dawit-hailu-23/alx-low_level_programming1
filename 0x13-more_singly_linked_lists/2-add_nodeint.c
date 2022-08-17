#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - addes number before first node
 * @head: pointer to the first node
 * @n: the number to be put
 *
 * Return: NULL if faild
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = (listint_t *) malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = *head;
	*head = p;
	return (p);
}
