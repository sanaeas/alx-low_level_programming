#include "search_algos.h"

/**
 * binarySearch - searches for a value in a sorted integer array
 *
 * @array: a pointer to the first element of the array
 * @left: index of the left boundary for the search
 * @right: index of the right boundary for the search
 * @value: the value to search for
 *
 * Return: the index of the found value
 */
int binarySearch(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, left, right;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}

	left = i / 2;
	right = (i < size - 1) ? i : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	return (binarySearch(array, left, right, value));
}
