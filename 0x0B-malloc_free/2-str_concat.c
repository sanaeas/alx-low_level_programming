#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the contatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, size1, size2;
	char *str;

	size1 = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		size1++;
		i++;
	}
	size2 = 0;
	i = 0;
	while (s2[i] != '\0')
	{
		size2++;
		i++;
	}

	str = malloc(sizeof(char) * (size1 + size2 + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < size1)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (j <= size2)
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	return (str);
}
