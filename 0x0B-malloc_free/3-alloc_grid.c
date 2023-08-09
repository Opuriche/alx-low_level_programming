#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **td;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	td = malloc(sizeof(int *) * height);

	if (td == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		td[i] = malloc(sizeof(int) * width);

		if (td[i] == NULL)
		{
			for (; i >= 0; i--)
				free(td[i]);

			free(td);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			td[i][j] = 0;
	}

	return (td);
}
