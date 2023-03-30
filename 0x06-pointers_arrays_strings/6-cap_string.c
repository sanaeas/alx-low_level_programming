#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @str: a given string
 *
 * Return: Capitalized string
 */
char *cap_string(char *str)
{
	int i, j;
	char sep[] = {' ', 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (str[i] == sep[j])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
					str[i + 1] -= 32;
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
