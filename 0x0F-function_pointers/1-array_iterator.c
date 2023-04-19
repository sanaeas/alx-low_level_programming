#include "function_pointers.h"

/**
 * array_iterator - a function that executes a given function on each element
 * of an array
 *
 * @array: a given array
 * @size: the size of the array
 * @action: a pointer to the function to execute
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !action)
		return;
	i = 0;
	while (i < size)
		action(array[i++]);
}
