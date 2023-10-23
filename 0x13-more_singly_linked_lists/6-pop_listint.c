#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list and returns its data.
 * @head: Pointer to a pointer to the head of the list.
 * Return: The data of the deleted node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int cont = 0;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = *head;
	cont = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (cont);
}
