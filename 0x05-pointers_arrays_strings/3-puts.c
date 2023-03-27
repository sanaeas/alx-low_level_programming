#include "main.h"

/**
 * _puts - a function that prints a string
 *
 * @str: a pointer to a string
 *
 * Return: void
 */
void _puts(char *str)
{
	int c = 0;

	while (c >= 0)
	{
		if (str[c] == '\0')
		{
			break;
		}
		else
		{
			_putchar(str[c]);
			c++;
		}
	}
	_putchar('\n');
}
