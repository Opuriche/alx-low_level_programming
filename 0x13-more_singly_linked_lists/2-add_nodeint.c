#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Integer value to be stored in the new node.
 * Return: The address of the new head, or NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnode;

	if (head == NULL)
		return (NULL);
	nnode = malloc(sizeof(listint_t));

	if (nnode == NULL)
		return (NULL);
	nnode->n = n;
	nnode->next = *head;
	*head = nnode;

	return (nnode);
}
