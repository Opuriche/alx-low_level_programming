#include "main.h"

/**
 * Prints the alphabets ten times - Entry point
 *
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
