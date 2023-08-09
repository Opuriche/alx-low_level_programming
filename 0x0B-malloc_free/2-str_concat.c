#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to string
 */

char *str_concat(char *s1, char *s2)
{
	char *conc;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	conc = malloc(sizeof(char) * (i + j + 1));

	if (conc == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		conc[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		conc[i] = s2[j];
		i++, j++;
	}
	conc[i] = '\0';
	return (conc);
}

