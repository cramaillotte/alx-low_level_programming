#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees grid created by alloc_grid
 * @grid: 2d grid
 * @height: grids height
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
	grid = NULL;
}
