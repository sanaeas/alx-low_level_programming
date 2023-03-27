#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: a pointer to a string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (len >= 0)
	{
		if (s[len] == '\0')
		{
			break;
		}
		else
		{
			len++;
		}
	}
	return (len);
}
