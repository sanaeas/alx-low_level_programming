#include "main.h"

/**
 * puts_half - a function that prints half of a strin
 *
 * @str: a pointer to a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
		len++;

	if ((len + 1) % 2 != 0)
		i = (len - 1) / 2;
	else
		i = len / 2;

	i++;
	for (len = i; str[len] != '\0'; len++)
		_putchar(str[len]);
	_putchar('\n');
}
