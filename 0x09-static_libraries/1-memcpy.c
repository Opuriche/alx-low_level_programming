#include "main.h"

/**
 * _memcpy - function copies memory area
 * @n: bytes to copy
 * @dest: destination to copy to
 * @src: source to copy from
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
