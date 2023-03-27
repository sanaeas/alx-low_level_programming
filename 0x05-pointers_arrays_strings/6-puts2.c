#include "main.h"

/**
 * puts2 - Print every other character of a string
 *
 * @str: a pointer to a string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		if (str[i + 1] == '\0')
			break;
		i += 2;
	}
	_putchar('\n');
}
