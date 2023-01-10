#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: rows
 * @height: columns
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **) malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(width * sizeof(int));
		if (ptr == NULL)
		{
			for (; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	return (ptr);
}
