#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in lower case
 * Return: 0
 */

void print_alphabet_x10(void) /*function prints the alphabet in lower case*/
{
	char ch;
	int i = 0;

	while (i < 10)
	{

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		i++;
		_putchar('\n');
	}
}
