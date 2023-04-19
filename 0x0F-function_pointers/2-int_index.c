#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: an array of integers
 * @size: the size of the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: the index of the wanted element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
