#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nn;
	listint_t *tmp = *head;

	nn = malloc(sizeof(listint_t));
	if (!nn || !head)
		return (NULL);

	nn->n = n;
	nn->next = NULL;

	if (idx == 0)
	{
		nn->next = *head;
		*head = nn;
		return (nn);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			nn->next = tmp->next;
			tmp->next = nn;
			return (nn);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
