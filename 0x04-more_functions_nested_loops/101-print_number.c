#include "main.h"

/**
 * print_number - Print the given number
 *
 * @n - a given number
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= (-1);
	}

	if (num > 999)
		_putchar((n / 1000) + '0');
	if (num > 99)
		_putchar(((n / 100) % 10) + '0');
	if (num > 9)
		_putchar(((n / 10) % 10) + '0');
	_putchar((n % 10) + '0');
	_putchar('\n');
}
