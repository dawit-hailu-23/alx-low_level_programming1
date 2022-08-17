#include "lists.h"

/**
 * find_listint_loop - finds the loop in the linked list
 * @head: pointer to the first node
 *
 * Return: NULL if no loop else the address the loop start
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);
	tortoise = head->next;
	hare = (head->next)->next;
	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (NULL);
}
