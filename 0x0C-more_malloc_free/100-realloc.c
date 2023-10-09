#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of allocated space for ptr
 * @new_size: size of new memory block
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	size_t i, max = new_size;
	char *prev = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		max = old_size;
	}
	for (i = 0; i < max; i++)
	{
		p[i] = prev[i];
	}
	free(ptr);
	return (p);
}
