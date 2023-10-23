#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Pointer to a pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *tmp;

	if (head == NULL)
		return;
	node = *head;
	while (node != NULL)
	{
		tmp = node->next;
		free(node);
		node = tmp;
	}

	*head = NULL;
}
