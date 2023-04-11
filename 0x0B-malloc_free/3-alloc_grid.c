#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2D array of integers
 *
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: the pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);
	if (!array)
		return (NULL);

	i = 0;
	while (i < height)
	{
		array[i] = malloc(sizeof(int) * width);
		if (!array[i])
		{
			j = 0;
			while (j < i)
			{
				free(array[j]);
				j++;
			}
			free(array);
			return (NULL);
		}
		i++;
	}

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			array[i][j] = 0;
			j++;
		}
		i++;
	}
	return (array);
}
