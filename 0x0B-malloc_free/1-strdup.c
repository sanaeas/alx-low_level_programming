#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer that contains a copy of a given string
 *
 * @str: a given string
 *
 * Return: the pointer to the copy of str
 */
char *_strdup(char *str)
{
	int i, size;
	char *copy;

	if (str == NULL)
		return (NULL);
	size = 1;
	i = 0;
	while (str[i] != '\0')
	{
		size++;
		i++;
	}
	copy = malloc(size * sizeof(char));
	if (!copy)
		return (NULL);
	i = 0;
	while (i < size)
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}
