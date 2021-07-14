#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: int
 * @height: int
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int i, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **) calloc(height, sizeof(int *));
	if (grid == NULL)
		return(NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = calloc(width, sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
			i--;
			}
		}
		free(grid);
		return(NULL);
	}
	return(grid);
}
