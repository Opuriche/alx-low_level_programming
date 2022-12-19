#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: first integer
 * @b: second integer
 * Return: Swapped values
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
