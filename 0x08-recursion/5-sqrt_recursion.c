#include "main.h"

int main_sqrt(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (main_sqrt(n, 0));
}

/**
 * main_sqrt - uses recursion to find square root
 * @n: integer to find square root
 * @i: iterator
 * Return: the square root
 */

int main_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (main_sqrt(n, i + 1));
}
