#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list.
 * @head: A pointer to a pointer
 * @str: The string to be duplicated
 * Return: The address of the new element, or NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nn;
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
	nn->next = *head;

	*head = nn;

	return (nn);
}

