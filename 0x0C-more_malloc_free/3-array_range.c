#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: start of array
 * @max: end of array
 * Return: 0
 */

int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	j = max - min + 1;
	ptr = malloc(sizeof(int) * j);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}