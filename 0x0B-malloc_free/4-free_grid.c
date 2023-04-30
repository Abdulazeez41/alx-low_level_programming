#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by alloc_grid function.
 * @grid: int
 * @height: int
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
