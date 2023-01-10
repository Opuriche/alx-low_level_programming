#include "main.h"
#include <stddef.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to use to initialize
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int count = 0;

	if (size == 0)
		return (NULL);
	arr = (char *)(malloc(size * sizeof(char)));

	if (!arr)
		return (NULL);
	while (count < size)
	{
		arr[count] = c;
		count++;
	}
	return (arr);
}
