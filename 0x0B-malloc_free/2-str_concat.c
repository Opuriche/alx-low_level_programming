#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second dtring
 * Return: the result
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, x, y;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (x = 0; x < i; x++)
	{
		ptr[x] = s1[x];
	}
	for (y = 0; y <= j; y++)
	{
		ptr[x] = s2[y];
		x++;
	}
	return (ptr);
}
