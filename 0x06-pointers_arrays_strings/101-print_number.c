#include "main.h"

/**
 * print_number - a function that prints an integer
 *
 * @n: a given number
 *
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int i, count;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	i = 1;
	count = n;
	while (count > 9)
	{
		i *= 10;
		count /= 10;
	}
	while (i > 0)
	{
		count = n;
		count /= i;
		count %= 10;
		_putchar(count + '0');
		i /= 10;
	}
}
