#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index at which the new node should be inserted (starting at 0).
 * @n: Integer value to be stored in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nnode, *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = n;

	if (idx == 0)
	{
		nnode->next = *head;
		*head = nnode;
		return (nnode);
	}

	tmp = *head;
	while (tmp != NULL)
	{
		if (i == (idx - 1))
		{
			nnode->next = tmp->next;
			tmp->next = nnode;
			return (nnode);
		}
		i++;
		tmp = tmp->next;
	}
	free(nnode);
	return (NULL);
}
