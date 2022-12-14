#include "main.h"

/**
 * print_sign - checks and prints the sign of a number
 * @n: is the number to be checked
 * Return: 1 if positive, -1 if negative, 0 if 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
}
