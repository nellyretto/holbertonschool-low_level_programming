#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returning a pointer to 2 dimensional array of intengers
 * @width: width of int size
 * @height: height of int size
 *
 * Return: returning NULL on failure
 *
 */

int **alloc_grid(int width, int height)

{
	int **grid;
	int i, j;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
