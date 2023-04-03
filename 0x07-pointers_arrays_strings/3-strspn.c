#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: a given string
 * @accept: set of bytes
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 1000)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			if (accept[j] == '\0')
				return (len);
			j++;
		}
		i++;
	}
	return (len);
}
