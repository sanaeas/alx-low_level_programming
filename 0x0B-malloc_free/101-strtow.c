#include "main.h"
#include <stdlib.h>

/**
 * words_count - a function that returns the number of words in a string
 *
 * @str: a given string
 *
 * Return: number of words
 */
int words_count(char *str)
{
	int w, i;

	w = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			w++;
			while (str[i] != '\0' && str[i] != ' ' &&
				str[i] != '\t')
			{
				i++;
			}
		}
		else
		{
			i++;
		}
	}
	return (w);
}

/**
 * strtow - a function that splits a string into words
 *
 * @str: a given string
 *
 * Return: array of  words
 */
char **strtow(char *str)
{
	char **array, *temp;
	int i, k = 0, len, words, ch = 0, start = 0, end;

	len = 0;
	while (str[len])
		len++;
	words = words_count(str);
	if (words == 0)
		return (NULL);

	array = malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (ch)
			{
				end = i;
				temp = malloc(sizeof(char) * (ch + 1));
				if (!temp)
					return (NULL);
				while (start < end)
				{
					*temp = str[start];
					*temp++;
					start++;
				}
				*temp = '\0';
				array[k] = temp - ch;
				k++;
				ch = 0;
			}
		}
		else if (ch++ == 0)
			start = i;
	}
	array[k] = NULL;
	return (array);
}
