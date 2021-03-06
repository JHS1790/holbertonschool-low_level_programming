#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - free the grid
 * @grid: grid
 * @height: number of rows in grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (!grid || !height)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
