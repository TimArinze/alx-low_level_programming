#include "main.h"
#include <stdlib.h>
/**
 * free_grind - function that frees the grid
 * @grid: the grid to be freed
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
