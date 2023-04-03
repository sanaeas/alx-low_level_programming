#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 *
 * @s: a given string
 * @c: the character to locate
 *
 * Return: location of c
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
