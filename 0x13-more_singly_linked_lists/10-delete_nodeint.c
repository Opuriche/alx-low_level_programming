#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node
 * at a given index in a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *old;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	tmp = *head;
	while (tmp != NULL)
	{
		if (i == index)
		{
			old->next = tmp->next;
			free(tmp);
			return (1);
		}
		old = tmp;
		tmp = tmp->next;
		i++;
	}

	return (-1);
}
