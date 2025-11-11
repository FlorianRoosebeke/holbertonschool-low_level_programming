#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array integers (grid) with given width and height
 * @width: the number of integers in each row (columns)
 * @height: the number of rows in the grid
 *
 * Return: pointer to the newly allocated 2D array (int **), or NULL on failure
 *         or if width or height is less than or equal to 0.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{

			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}


