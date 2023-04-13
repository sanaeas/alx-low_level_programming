#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array
 *
 * @nmemb: number of elements of the array
 * @size: size of an element
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);

	i = 0;
	while (i < (nmemb * size))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
