#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 *
 * @s: the address of memory to fill
 * @b: the constant byte
 * @n: the number of bytes to fill
 *
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
