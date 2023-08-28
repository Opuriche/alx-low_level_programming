#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nn;
	listint_t *tmp = *head;

	nn = malloc(sizeof(listint_t));
	if (!nn)
		return (NULL);

	nn->n = n;
	nn->next = NULL;

	if (*head == NULL)
	{
		*head = nn;
		return (nn);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = nn;

	return (nn);
}
