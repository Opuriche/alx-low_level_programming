#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an integer array
 * @a: the array
 * @n: number of elements
 * Return: 0
 */

void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);
		if (count != (n - 1))
			printf(", ");
		count++;
	}
	putchar('\n');

}
