#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list.
 * @head: Pointer to the pointer
 * @str: String to be added
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nn, *curr;

	if (str == NULL)
		return (NULL);

	nn = malloc(sizeof(list_t));
	if (nn == NULL)
		return (NULL);

	nn->str = strdup(str);
	if (nn->str == NULL)
	{
		free(nn);
		return (NULL);
	}
	nn->len = strlen(str);
	nn->next = NULL;

	if (*head == NULL)
	{
		*head = nn;
	}
	else
	{
		curr = *head;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = nn;
	}

	return (nn);
}

