#include <stdlib.h>
#include "main.h"

/**
 * array_range - create an array of integer
 * @min: minimum value to start from
 * @max: maximum value to end
 *
 * Description: This function is meant to create an array that
 * contain all the values from min to max
 * Return: return the pointer to the newly allocated space
 */

int *array_range(int min, int max)
{
	int i, k, sum;
	int *new_array;

	if (min > max)
		return (NULL);
	if (min == 0)
		sum = max - min;
	sum = (max - min) + 1;
	new_array = malloc(sum * sizeof(*new_array));
	if (new_array)
	{
		for (i = min, k = 0; i <= max ; i++, k++)
		{
			new_array[k] = i;
		}
		return (new_array);
	}
	return (NULL);
}
