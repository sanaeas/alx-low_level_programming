#include "search_algos.h"

/**
 * advanced_binary_recursive - performs the binary search
 *
 * @array: a pointer to the first element of the array to search in
 * @left: index of the left boundary for the search
 * @right: index of the right boundary for the search
 * @value: the value to search for
 *
 * Return: index of the first occurrence of the value
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (left < right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value && (array[mid - 1] != value))
			return (mid);
		else if (value <= array[mid])
			return (advanced_binary_recursive(array, left, mid, value));
		else if (value > array[mid])
			return (advanced_binary_recursive(array, mid + 1, right, value));
	}
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
	if (value == array[right])
		return (right);

	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
