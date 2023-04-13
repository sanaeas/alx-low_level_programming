#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory
 *
 * @b: size of memory to allocate
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
