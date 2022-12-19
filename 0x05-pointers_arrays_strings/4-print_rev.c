#include "main.h"

/**
 * print_rev - prints the reverse of a string
 * @s: the string
 * Return: reverse of the string
 */

void print_rev(char *s)
{
	int i, j;

	j = 0;

	while (s[j] != '\0')
		j++;

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
