#include "main.h"

/**
 * _strlen - returns string length
 * @s: string to check
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
