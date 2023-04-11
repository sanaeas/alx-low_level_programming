#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all the arguments in a string
 *
 * @ac: arguments count
 * @av: arguments vector (array)
 *
 * Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			size++;
			j++;
		}
		i++;
	}
	size += (ac + 1);
	str = malloc(sizeof(char) * size);
	if (!str)
		return (NULL);

	k = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k] = av[i][j];
			j++;
			k++;
		}
		str[k++] = '\n';
		i++;
	}
	str[k] = '\0';
	return (str);
}
