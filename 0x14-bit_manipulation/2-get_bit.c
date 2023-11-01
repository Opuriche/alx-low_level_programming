#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the integer
 * @index: the index
 * Return: bit valie at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int long mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
