#include "lists.h"

/**
 * reverse_listint - reverse the node
 * @head: pointer to the first node
 *
 * Return: a pointer to the first node reversed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);
	behind = NULL;
	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}
	(*head)->next = behind;
	return (*head);
}
