#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters to uppercase
 *
 * @str: a given string
 *
 * Return: the string in uppercase
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		i++;
	}
	return (str);
}
