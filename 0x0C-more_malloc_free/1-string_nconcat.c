#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculate the length of a string
 *
 * @s: a given string
 *
 * Return: the length of the string
 */
unsigned int _strlen(char *s)
{
	unsigned int size, i;

	i = 0;
	size = 0;
	while (s[i] != '\0')
	{
		size++;
		i++;
	}
	return (size);
}

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to use from s2
 *
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size = 0, size2, i, j = 0;
	char *final_str;

	if (s1)
		size += _strlen(s1);
	if (s2)
	{
		size2 = _strlen(s2);
		if (size2 > n)
			size += n;
		else
			size += size2;
	}
	final_str = malloc(sizeof(char) * (size + 1));
	if (!final_str)
		return (NULL);
	i = 0;
	if (s1)
	{
		while (s1[i] != '\0')
		{
			final_str[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (s2[j] != '\0' && j < n)
		{
			final_str[i] = s2[j];
			j++;
			i++;
		}
	}
	final_str[i] = '\0';
	return (final_str);
}
