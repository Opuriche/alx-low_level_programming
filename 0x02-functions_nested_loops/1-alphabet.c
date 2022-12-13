#include "main.h"

/**
 * main - Prints alphabets
 *
 * Return: 0
 */

void print_alphabet(void);
{
	char al = 'a';
	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}
