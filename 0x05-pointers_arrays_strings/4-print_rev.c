#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 *
 * @s: a pointer to a string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;
	int c;

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

	for (c = len - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
