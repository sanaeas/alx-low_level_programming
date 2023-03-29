#include "main.h"

/**
 * _strncat - concatenate two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from source
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (src[j] != '\0')
		j++;

	for (k = 0; k < n; k++)
	{
		if (k == j)
			break;
		dest[i++] = src[k];
	}
	return (dest);
}
