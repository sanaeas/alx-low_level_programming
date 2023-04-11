#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of chars and initialize it with c
 *
 * @size: size of the array
 * @c: a given character
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *char_arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	char_arr = malloc(size * sizeof(char));
	if (!char_arr)
		return (NULL);
	while (i < size)
	{
		char_arr[i] = c;
		i++;
	}
	return (char_arr);
}
