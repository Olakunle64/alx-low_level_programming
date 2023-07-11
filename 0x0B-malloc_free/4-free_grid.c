#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free the memory allocated to 2D array
 * @grid: 2D array
 * @height: row
 *
 * Description: This function is meant to free the memory allocated
 * to 2D array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
