#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 *
 * @min: min number to start with
 * @max: max number to end with
 *
 * Return: a pointer to the array
 */
int *array_range(int min, int max)
{
	int *arr, len, i;

	if (min > max)
		return (NULL);

	len = (max - min) + 1;
	arr = malloc(sizeof(int) * len);
	if (!arr)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
