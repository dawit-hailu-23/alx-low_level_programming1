#include "lists.h"

/**
 * add_nodeint_end - adds value at the end of the node
 * @head: pointer to the first node
 * @n: integer to add
 *
 * Return: address of the new pointer else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *p;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		p = *head;
		while (p->next != NULL)
			p = p->next;
		new->next = NULL;
		p->next = new;
	}
	return (*head);
}
