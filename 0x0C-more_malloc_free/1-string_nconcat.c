#include "main.h"
#include <stdlib.h>

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
	unsigned int size1, size2, i, j = 0;
	char *final_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
	{
		size1++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		size2++;
		i++;
	}
	final_str = malloc(size1 + size2 + 1);
	if (!final_str)
		return (NULL);
	i = 0;
	while (i < size1)
	{
		final_str[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		if (s2[j] == '\0')
			break;
		final_str[i] = s2[j];
		j++;
		i++;
	}
	final_str[i] = '\0';
	return (final_str);
}
