#include "main.h"

/**
 * count_set_bits - counts set bits
 * @n: given number
 * Return: the count
 */

unsigned int count_set_bits(unsigned long int n)
{
	unsigned int count = 0;

	while (n > 0)
	{
		count += (n & 1);
		n >>= 1;
	}
	return (count);
}

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: start int
 * @m: next int
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;

	return (count_set_bits(xor_result));
}
