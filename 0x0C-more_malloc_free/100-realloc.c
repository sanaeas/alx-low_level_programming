#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block
 *
 * @ptr: a pointer to the memory previously allocated
 * @old_size: size of ptr in bytes
 * @new_size: new size in bytes of the new memory block
 *
 * Return: a pointer to the new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		ptr = malloc(new_size);

	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
