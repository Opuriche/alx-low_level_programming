#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string
 * Return: void
 */

void puts2(char *str)
{
	int l = 0;
	int t = 0;
	char *n = str;
	int m;

	while (*n != '\0')
	{
		n++;
		l++;
	}
	t = l - 1;
	for (m = 0 ; m <= t ; m++)
	{
		if (m % 2 == 0)
	{
		_putchar(str[m]);
	}
	}
	_putchar('\n');
}

