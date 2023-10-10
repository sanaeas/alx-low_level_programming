#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	int indx;

	if (array == NULL)
		return (-1);

	for (indx = 0; indx < (int)size; indx++)
	{
		printf("Value checked array[%d] = [%d]\n", indx, array[indx]);
		if (array[indx] == value)
			return (indx);
	}

	return (-1);
}
