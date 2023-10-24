#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *active, *former = NULL, *nnode = NULL;

	while (*head != NULL)
	{
		active = *head;
		nnode = active->next;
		active->next = former;

		former = active;
		*head = nnode;
	}

	*head = former;
	return (*head);
}
