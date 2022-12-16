#include "main.h"

/**
 * more_numbers - prints numbers ten times
 * Return: void
 */

void more_numbers(void)
{
	int c = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		while (c <= 14)
		{
			_putchar(c > 9 ? (c / 10) + '0' : c + '0');
			if (c > 9)
				_putchar((c % 10) + '0');
			c++;
		}
		c = 0;
		_putchar('\n');
	}
}
