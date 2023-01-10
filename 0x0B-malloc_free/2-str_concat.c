#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * get_len - gets the lngth of the string
 * @str: the string
 * Return: the length
 */

int get_len(char *str)
{
	int i;

	for (int i = 0; str[i] != '\0'; i++)
		;
	return (i + 1);
}

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: a string
 */

char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = get_len(s1);
	s2_len = get_len(s2);

	ptr = (char *) malloc(((s1_len + s2_len) - 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}
