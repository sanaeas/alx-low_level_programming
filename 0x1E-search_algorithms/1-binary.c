#include "search_algos.h"

/**
 * binary_search - searche for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = (int)size - 1, m, i;

	if (!array)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array:");
		for (i = l; i <= r; i++)
		{
			printf(" %d", array[i]);
			if (i != r)
				printf(",");
			else
				printf("\n");
		}

		m = l + (r - l) / 2;

		if (array[m] == value)
			return (m);

		if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}

	return (-1);
}
