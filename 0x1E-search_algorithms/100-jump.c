#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t left, right, step;

	if (array == NULL)
		return (-1);

	right = 0, step = sqrt(size);
	while (right < size)
	{
		if (array[right] >= value)
			break;
		left = right, right += step;
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	if (right >= size)
		right = size - 1;

	for (left = left; left <= right; left++)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
	}
	return (-1);
}
