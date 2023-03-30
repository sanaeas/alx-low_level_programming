#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 *
 * @s: a given string
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char ch;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		ch = s[i];
		while (((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)) && j < 13)
		{
			if (c == 90 || c == 122)
				c -= 26;
			c++;
			j++;
		}
		s[i] = ch;
		i++;
	}
	return (s);
}
