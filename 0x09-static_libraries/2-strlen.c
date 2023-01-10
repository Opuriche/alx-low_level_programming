#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string in question
 * Return: length of string
 */

int _strlen(char *s)
{
	int count = 0;

	for (; *s++;)
		count++;
	return (count);
}
