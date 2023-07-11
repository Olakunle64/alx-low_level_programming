#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocate space for 2D array in the memory.
 * @width: column
 * @height: row
 *
 * Description: allocate space of 2 dimensional array in the memory
 * and initialize each element to 0
 * Return: return NULL on failure or NULL if width or height is 0
 * or -ve or pointer to 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * sizeof(*a));
	if (a)
	{
		for (i = 0; i < height; i++)
		{
			a[i] = malloc(width * sizeof(int));
			if (a[i])
			{
			for (j = 0; j < width; j++)
			{
				a[i][j] = 0;
			}
			}
			else
			{
			free(a);
			}
		}
		return (a);
	}
	return (NULL);
}
