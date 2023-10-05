#include "main.h"
#include <stdlib.h>

/**
 * free_g - code to free
 * @grid: grid to free
 * @height: height of array
 * Return: void
 */

void free_g(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		free(grid[height]);
			free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: pointer to array of words
 */

char **strtow(char *str)
{
	char **ptr;
	size_t x, height, i, j, y;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (x = height = 0; str[x] != '\0'; x++)
		if (str[x] != ' ' && (str[x + 1] == ' ' || str[x + 1] == '\0'))
		height++;
	{
		ptr = malloc((height + 1) * sizeof(char *));
	}
		if (ptr == NULL || height == 0)
		{
			free(ptr);
			return (NULL);
		}
	for (i = y = 0; i < height; i++)
	{
		for (x = y; str[x] != '\0'; x++)
		{
			if (str[x] == ' ')
				y++;
			if (str[x] == ' ' && (str[x + 1] == ' ' || str[x + 1] == '\0'))
			{
				ptr[i] = malloc((x - y + 2) * sizeof(char));
				if (ptr[i] == NULL)
				{
					free_g(ptr, i);
					return (NULL);
				}
				break;
			}
		}

		for (j = 0; y <= x; y++, j++)
			ptr[i][j] = str[y];
		ptr[i][j] = '\0';
	}
	ptr[i] = NULL;
	return (ptr);
}
